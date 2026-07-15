#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SWITCHMASCOTENABLECAMERALOOKAT_METHOD_3_9B4619A78BBD9594_OFFSET UNITYSDK_OFFSET(0x1B438250)
#define RPG_GAMECORE_SWITCHMASCOTENABLECAMERALOOKAT_METHOD_3_BBF4569DEECF28AF_OFFSET UNITYSDK_OFFSET(0x1B438290)
#define RPG_GAMECORE_SWITCHMASCOTENABLECAMERALOOKAT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B438280)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwitchMascotEnableCameraLookAt_TypeDefinitionIndex = 21196;

	class SwitchMascotEnableCameraLookAt : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Enable; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHMASCOTENABLECAMERALOOKAT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_9B4619A78BBD9594(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwitchMascotEnableCameraLookAt*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwitchMascotEnableCameraLookAt*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHMASCOTENABLECAMERALOOKAT_METHOD_3_9B4619A78BBD9594_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_BBF4569DEECF28AF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwitchMascotEnableCameraLookAt* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwitchMascotEnableCameraLookAt*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHMASCOTENABLECAMERALOOKAT_METHOD_3_BBF4569DEECF28AF_OFFSET))(a1, a2);
		}
	};
}
