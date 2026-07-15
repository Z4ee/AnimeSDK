#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PropTagComponent.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PROPTAGBINDTIMEREWINDCONTROLLERCOMPONENT_METHOD_3_64C288A126C19AE5_OFFSET UNITYSDK_OFFSET(0x1B9A5070)
#define RPG_GAMECORE_PROPTAGBINDTIMEREWINDCONTROLLERCOMPONENT_METHOD_3_ACE0EA93BFCB4550_OFFSET UNITYSDK_OFFSET(0x1B9A50C0)
#define RPG_GAMECORE_PROPTAGBINDTIMEREWINDCONTROLLERCOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9A50B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropTagBindTimeRewindControllerComponent_TypeDefinitionIndex = 16852;

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

		static ::System::Void Method_3_64C288A126C19AE5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropTagBindTimeRewindControllerComponent*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropTagBindTimeRewindControllerComponent*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPTAGBINDTIMEREWINDCONTROLLERCOMPONENT_METHOD_3_64C288A126C19AE5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_ACE0EA93BFCB4550(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropTagBindTimeRewindControllerComponent* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropTagBindTimeRewindControllerComponent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPTAGBINDTIMEREWINDCONTROLLERCOMPONENT_METHOD_3_ACE0EA93BFCB4550_OFFSET))(a1, a2);
		}
	};
}
