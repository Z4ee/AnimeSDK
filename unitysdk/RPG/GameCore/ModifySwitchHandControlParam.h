#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MODIFYSWITCHHANDCONTROLPARAM_METHOD_3_B07CD41B72737B2D_OFFSET UNITYSDK_OFFSET(0x19959D50)
#define RPG_GAMECORE_MODIFYSWITCHHANDCONTROLPARAM_METHOD_3_FC314BB4F30400B8_OFFSET UNITYSDK_OFFSET(0x19959DD0)
#define RPG_GAMECORE_MODIFYSWITCHHANDCONTROLPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x19959DA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ModifySwitchHandControlParam_TypeDefinitionIndex = 19813;

	class ModifySwitchHandControlParam : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Single Force; // 0x18
		::System::Single Drag; // 0x1C
		::System::Single RigidbodyMoveSpeed; // 0x20
		::System::Single RigidbodyRotateSpeed; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYSWITCHHANDCONTROLPARAM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B07CD41B72737B2D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ModifySwitchHandControlParam*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ModifySwitchHandControlParam*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYSWITCHHANDCONTROLPARAM_METHOD_3_B07CD41B72737B2D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_FC314BB4F30400B8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ModifySwitchHandControlParam* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ModifySwitchHandControlParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYSWITCHHANDCONTROLPARAM_METHOD_3_FC314BB4F30400B8_OFFSET))(a1, a2);
		}
	};
}
