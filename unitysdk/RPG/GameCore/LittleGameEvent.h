#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/LittleGameEventSourceType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_LITTLEGAMEEVENT_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1BCC1340)
#define RPG_GAMECORE_LITTLEGAMEEVENT_EQUALS_OFFSET UNITYSDK_OFFSET(0x1BCC12F0)
#define RPG_GAMECORE_LITTLEGAMEEVENT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1BCC1400)
#define RPG_GAMECORE_LITTLEGAMEEVENT_METHOD_2_11FBAD25CE3FF00E_OFFSET UNITYSDK_OFFSET(0x1BCC1190)
#define RPG_GAMECORE_LITTLEGAMEEVENT_METHOD_2_27EA000C936DCCD3_OFFSET UNITYSDK_OFFSET(0x1BCC1440)
#define RPG_GAMECORE_LITTLEGAMEEVENT_METHOD_2_70AFE4EF4BF5C212_OFFSET UNITYSDK_OFFSET(0x1BCC1590)
#define RPG_GAMECORE_LITTLEGAMEEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1BCC12E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameEvent_TypeDefinitionIndex = 18140;

	class LittleGameEvent : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::LittleGameEventSourceType SourceType; // 0x10
		::System::UInt32 EntityID; // 0x14
		::System::String* EventName; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEEVENT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_11FBAD25CE3FF00E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameEvent*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameEvent*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEEVENT_METHOD_2_11FBAD25CE3FF00E_OFFSET))(a1, a2);
		}

		::System::Boolean Equals(::RPG::GameCore::LittleGameEvent* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::LittleGameEvent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEEVENT_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEEVENT_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEEVENT_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Boolean Method_2_27EA000C936DCCD3(::RPG::GameCore::LittleGameEvent* a1, ::RPG::GameCore::LittleGameEvent* a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::LittleGameEvent*, ::RPG::GameCore::LittleGameEvent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEEVENT_METHOD_2_27EA000C936DCCD3_OFFSET))(a1, a2);
		}

		static ::System::Boolean Method_2_70AFE4EF4BF5C212(::RPG::GameCore::LittleGameEvent* a1, ::RPG::GameCore::LittleGameEvent* a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::LittleGameEvent*, ::RPG::GameCore::LittleGameEvent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEEVENT_METHOD_2_70AFE4EF4BF5C212_OFFSET))(a1, a2);
		}
	};
}
