#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FreeStyleAnimEventEntry; }
namespace RPG::GameCore { class TaskConfig; }
namespace System { class String; }

#define RPG_GAMECORE_FREESTYLEANIMGROUPEVENTCONFIG_METHOD_2_AE60E12A19BC3D0B_OFFSET UNITYSDK_OFFSET(0x1DCBACC0)
#define RPG_GAMECORE_FREESTYLEANIMGROUPEVENTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1DCBAF00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FreeStyleAnimGroupEventConfig_TypeDefinitionIndex = 16128;

	class FreeStyleAnimGroupEventConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::FreeStyleAnimEventEntry*>* Clips; // 0x10
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnEnter; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnExit; // 0x20
		::System::String* AllowTriggerLayer; // 0x28
		::System::Boolean AllowTriggeringOnTransitionOut; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLEANIMGROUPEVENTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_AE60E12A19BC3D0B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FreeStyleAnimGroupEventConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FreeStyleAnimGroupEventConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLEANIMGROUPEVENTCONFIG_METHOD_2_AE60E12A19BC3D0B_OFFSET))(a1, a2);
		}
	};
}
