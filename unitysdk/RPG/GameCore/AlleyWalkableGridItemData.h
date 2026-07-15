#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AlleyBaseGridItemData.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ALLEYWALKABLEGRIDITEMDATA_METHOD_3_5006AB4F982808CF_OFFSET UNITYSDK_OFFSET(0x1A051860)
#define RPG_GAMECORE_ALLEYWALKABLEGRIDITEMDATA_METHOD_3_FE619C0DB0EFDB7E_OFFSET UNITYSDK_OFFSET(0x1A0518A0)
#define RPG_GAMECORE_ALLEYWALKABLEGRIDITEMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1A051890)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AlleyWalkableGridItemData_TypeDefinitionIndex = 15065;

	class AlleyWalkableGridItemData : public ::RPG::GameCore::AlleyBaseGridItemData
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYWALKABLEGRIDITEMDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_5006AB4F982808CF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AlleyWalkableGridItemData*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AlleyWalkableGridItemData*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYWALKABLEGRIDITEMDATA_METHOD_3_5006AB4F982808CF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_FE619C0DB0EFDB7E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AlleyWalkableGridItemData* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AlleyWalkableGridItemData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYWALKABLEGRIDITEMDATA_METHOD_3_FE619C0DB0EFDB7E_OFFSET))(a1, a2);
		}
	};
}
