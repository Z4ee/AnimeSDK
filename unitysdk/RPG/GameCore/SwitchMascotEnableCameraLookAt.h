#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SWITCHMASCOTENABLECAMERALOOKAT_METHOD_3_6594B8AC7A4BAA3E_OFFSET UNITYSDK_OFFSET(0x19CDCF80)
#define RPG_GAMECORE_SWITCHMASCOTENABLECAMERALOOKAT_METHOD_3_BBF4569DEECF28AF_OFFSET UNITYSDK_OFFSET(0x19CDD000)
#define RPG_GAMECORE_SWITCHMASCOTENABLECAMERALOOKAT__CTOR_OFFSET UNITYSDK_OFFSET(0x19CDCFD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwitchMascotEnableCameraLookAt_TypeDefinitionIndex = 20781;

	class SwitchMascotEnableCameraLookAt : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Enable; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHMASCOTENABLECAMERALOOKAT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_6594B8AC7A4BAA3E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwitchMascotEnableCameraLookAt*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwitchMascotEnableCameraLookAt*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHMASCOTENABLECAMERALOOKAT_METHOD_3_6594B8AC7A4BAA3E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_BBF4569DEECF28AF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwitchMascotEnableCameraLookAt* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwitchMascotEnableCameraLookAt*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHMASCOTENABLECAMERALOOKAT_METHOD_3_BBF4569DEECF28AF_OFFSET))(a1, a2);
		}
	};
}
