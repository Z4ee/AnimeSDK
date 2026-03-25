#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TaskConfig; }
namespace System { class String; }

#define RPG_GAMECORE_FREESTYLEANIMEVENTCONFIG_METHOD_2_20C1AF289355777B_OFFSET UNITYSDK_OFFSET(0x1721EE90)
#define RPG_GAMECORE_FREESTYLEANIMEVENTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1721F110)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FreeStyleAnimEventConfig_TypeDefinitionIndex = 14917;

	class FreeStyleAnimEventConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* FreeStyleClipName; // 0x10
		::System::Single NormalizedTime; // 0x18
		::System::Boolean OnlyTriggerInFirstLoop; // 0x1C
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* EventList; // 0x20
		::System::String* AllowTriggerLayer; // 0x28
		::System::Boolean ForceTrigger; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLEANIMEVENTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_20C1AF289355777B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FreeStyleAnimEventConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FreeStyleAnimEventConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLEANIMEVENTCONFIG_METHOD_2_20C1AF289355777B_OFFSET))(a1, a2);
		}
	};
}
