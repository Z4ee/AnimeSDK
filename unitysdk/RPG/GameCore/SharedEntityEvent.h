#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_SHAREDENTITYEVENT_METHOD_2_02556C8237EF2802_OFFSET UNITYSDK_OFFSET(0x1E09BD60)
#define RPG_GAMECORE_SHAREDENTITYEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1E09BF40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SharedEntityEvent_TypeDefinitionIndex = 18096;

	class SharedEntityEvent : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Name; // 0x10
		::System::Boolean IsPrivate; // 0x18
		::System::Boolean IsClient; // 0x19
		::System::String* Description; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHAREDENTITYEVENT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_02556C8237EF2802(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SharedEntityEvent*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SharedEntityEvent*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHAREDENTITYEVENT_METHOD_2_02556C8237EF2802_OFFSET))(a1, a2);
		}
	};
}
