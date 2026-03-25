#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AlleyBaseGridItemData.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AlleyConditionExtendParam; }

#define RPG_GAMECORE_ALLEYDOCKGRIDITEMDATA_METHOD_3_2237E9C8303A5A8D_OFFSET UNITYSDK_OFFSET(0x16F6E640)
#define RPG_GAMECORE_ALLEYDOCKGRIDITEMDATA_METHOD_3_8A206B0167926DD8_OFFSET UNITYSDK_OFFSET(0x16F6FCF0)
#define RPG_GAMECORE_ALLEYDOCKGRIDITEMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x16F6E630)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AlleyDockGridItemData_TypeDefinitionIndex = 14370;

	class AlleyDockGridItemData : public ::RPG::GameCore::AlleyBaseGridItemData
	{
	public:
		::Il2CppArray<::RPG::GameCore::AlleyConditionExtendParam*>* UnlockConditions; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYDOCKGRIDITEMDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_8A206B0167926DD8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AlleyDockGridItemData*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AlleyDockGridItemData*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYDOCKGRIDITEMDATA_METHOD_3_8A206B0167926DD8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2237E9C8303A5A8D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AlleyDockGridItemData* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AlleyDockGridItemData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYDOCKGRIDITEMDATA_METHOD_3_2237E9C8303A5A8D_OFFSET))(a1, a2);
		}
	};
}
