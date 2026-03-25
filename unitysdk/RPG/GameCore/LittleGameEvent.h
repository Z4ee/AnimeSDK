#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/LittleGameEventSourceType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_LITTLEGAMEEVENT_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1735D6A0)
#define RPG_GAMECORE_LITTLEGAMEEVENT_EQUALS_OFFSET UNITYSDK_OFFSET(0x1735D650)
#define RPG_GAMECORE_LITTLEGAMEEVENT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1735D760)
#define RPG_GAMECORE_LITTLEGAMEEVENT_METHOD_2_11FBAD25CE3FF00E_OFFSET UNITYSDK_OFFSET(0x1735D4F0)
#define RPG_GAMECORE_LITTLEGAMEEVENT_METHOD_2_DA9AFBAF121A7C2C_1_OFFSET UNITYSDK_OFFSET(0x1735D7E0)
#define RPG_GAMECORE_LITTLEGAMEEVENT_METHOD_2_DA9AFBAF121A7C2C_OFFSET UNITYSDK_OFFSET(0x1735D7A0)
#define RPG_GAMECORE_LITTLEGAMEEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1735D640)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameEvent_TypeDefinitionIndex = 17321;

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

		static ::System::Boolean Method_2_DA9AFBAF121A7C2C(::RPG::GameCore::LittleGameEvent* a1, ::RPG::GameCore::LittleGameEvent* a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::LittleGameEvent*, ::RPG::GameCore::LittleGameEvent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEEVENT_METHOD_2_DA9AFBAF121A7C2C_OFFSET))(a1, a2);
		}

		static ::System::Boolean Method_2_DA9AFBAF121A7C2C_1(::RPG::GameCore::LittleGameEvent* a1, ::RPG::GameCore::LittleGameEvent* a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::LittleGameEvent*, ::RPG::GameCore::LittleGameEvent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEEVENT_METHOD_2_DA9AFBAF121A7C2C_1_OFFSET))(a1, a2);
		}
	};
}
