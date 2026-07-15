#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_LOGICANIMEVENTENTRY_METHOD_2_DA40BC04FAA6F4D6_OFFSET UNITYSDK_OFFSET(0x1BCD1FE0)
#define RPG_GAMECORE_LOGICANIMEVENTENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x1BCD2160)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LogicAnimEventEntry_TypeDefinitionIndex = 15653;

	class LogicAnimEventEntry : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* EventName; // 0x10
		::System::String* AnimStateName; // 0x18
		::System::Single Time; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOGICANIMEVENTENTRY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_DA40BC04FAA6F4D6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LogicAnimEventEntry*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LogicAnimEventEntry*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOGICANIMEVENTENTRY_METHOD_2_DA40BC04FAA6F4D6_OFFSET))(a1, a2);
		}
	};
}
