#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }

#define RPG_GAMECORE_TRIGGERENTITYEVENT_METHOD_3_71FDD92D94D8B471_OFFSET UNITYSDK_OFFSET(0x1B055AB0)
#define RPG_GAMECORE_TRIGGERENTITYEVENT_METHOD_3_8D6410A492148874_OFFSET UNITYSDK_OFFSET(0x1B055A70)
#define RPG_GAMECORE_TRIGGERENTITYEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B055AA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerEntityEvent_TypeDefinitionIndex = 19936;

	class TriggerEntityEvent : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* EventName; // 0x18
		::RPG::GameCore::DynamicFloat* InstanceID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERENTITYEVENT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_8D6410A492148874(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerEntityEvent*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerEntityEvent*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERENTITYEVENT_METHOD_3_8D6410A492148874_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_71FDD92D94D8B471(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerEntityEvent* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerEntityEvent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERENTITYEVENT_METHOD_3_71FDD92D94D8B471_OFFSET))(a1, a2);
		}
	};
}
