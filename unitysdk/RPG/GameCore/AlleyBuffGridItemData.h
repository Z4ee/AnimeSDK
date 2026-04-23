#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AlleyBaseGridItemData.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AlleyConditionExtendParam; }

#define RPG_GAMECORE_ALLEYBUFFGRIDITEMDATA_METHOD_3_529D0562E7B68B12_OFFSET UNITYSDK_OFFSET(0x18690E40)
#define RPG_GAMECORE_ALLEYBUFFGRIDITEMDATA_METHOD_3_FA715395B3D3B1B8_OFFSET UNITYSDK_OFFSET(0x18691620)
#define RPG_GAMECORE_ALLEYBUFFGRIDITEMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x18690E30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AlleyBuffGridItemData_TypeDefinitionIndex = 14841;

	class AlleyBuffGridItemData : public ::RPG::GameCore::AlleyBaseGridItemData
	{
	public:
		::Il2CppArray<::RPG::GameCore::AlleyConditionExtendParam*>* UnlockConditions; // 0x20
		::Il2CppArray<::RPG::GameCore::AlleyConditionExtendParam*>* RemoveConditions; // 0x28
		::System::UInt32 RegionID; // 0x30
		::System::Boolean IsHideNew; // 0x34
		::System::UInt32 RelatedEventID; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYBUFFGRIDITEMDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_FA715395B3D3B1B8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AlleyBuffGridItemData*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AlleyBuffGridItemData*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYBUFFGRIDITEMDATA_METHOD_3_FA715395B3D3B1B8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_529D0562E7B68B12(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AlleyBuffGridItemData* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AlleyBuffGridItemData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYBUFFGRIDITEMDATA_METHOD_3_529D0562E7B68B12_OFFSET))(a1, a2);
		}
	};
}
