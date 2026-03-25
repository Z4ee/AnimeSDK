#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PropTagComponent.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PROPTAGBINDTIMEREWINDCONTROLLERCOMPONENT_METHOD_3_17842D26D5142366_OFFSET UNITYSDK_OFFSET(0x175706D0)
#define RPG_GAMECORE_PROPTAGBINDTIMEREWINDCONTROLLERCOMPONENT_METHOD_3_6FA78EA814811477_OFFSET UNITYSDK_OFFSET(0x17570720)
#define RPG_GAMECORE_PROPTAGBINDTIMEREWINDCONTROLLERCOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0x17570710)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropTagBindTimeRewindControllerComponent_TypeDefinitionIndex = 16130;

	class PropTagBindTimeRewindControllerComponent : public ::RPG::GameCore::PropTagComponent
	{
	public:
		::Il2CppArray<::System::UInt32>* ControlPropIDs; // 0x18
		::System::UInt32 OpenDistrictID; // 0x20
		::System::UInt32 EffectDistrictID; // 0x24
		::System::Single ScanEffRange; // 0x28
		::System::Boolean StateChangeCutInSpreadEff; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPTAGBINDTIMEREWINDCONTROLLERCOMPONENT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_17842D26D5142366(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropTagBindTimeRewindControllerComponent*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropTagBindTimeRewindControllerComponent*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPTAGBINDTIMEREWINDCONTROLLERCOMPONENT_METHOD_3_17842D26D5142366_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6FA78EA814811477(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropTagBindTimeRewindControllerComponent* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropTagBindTimeRewindControllerComponent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPTAGBINDTIMEREWINDCONTROLLERCOMPONENT_METHOD_3_6FA78EA814811477_OFFSET))(a1, a2);
		}
	};
}
