#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DebateTestimonyType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DebateSpecialItem; }
namespace System { class String; }

#define RPG_GAMECORE_DEBATETESTIMONYSETTING_METHOD_2_F045629A29354653_OFFSET UNITYSDK_OFFSET(0x19693370)
#define RPG_GAMECORE_DEBATETESTIMONYSETTING__CTOR_OFFSET UNITYSDK_OFFSET(0x196937E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DebateTestimonySetting_TypeDefinitionIndex = 20708;

	class DebateTestimonySetting : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Int32 Index; // 0x10
		::RPG::GameCore::DebateTestimonyType TestimonyType; // 0x14
		::System::String* TimelineClipName; // 0x18
		::System::Boolean CanAsk; // 0x20
		::System::String* AskCustomString; // 0x28
		::System::Boolean CanSubmitItem; // 0x30
		::Il2CppArray<::System::UInt32>* ItemIDList; // 0x38
		::Il2CppArray<::RPG::GameCore::DebateSpecialItem*>* SpecialItemList; // 0x40
		::System::String* ItemDefaultCustomString; // 0x48
		::System::UInt32 LastToBeginTalkSentenceID; // 0x50
		::System::UInt32 LastExitTalkSentenceID; // 0x54
		::System::String* ExitCustomString; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEBATETESTIMONYSETTING__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_F045629A29354653(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DebateTestimonySetting*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DebateTestimonySetting*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEBATETESTIMONYSETTING_METHOD_2_F045629A29354653_OFFSET))(a1, a2);
		}
	};
}
