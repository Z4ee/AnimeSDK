#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ELFSELECTEVENTTALK_METHOD_2_3F94B5673198D43B_OFFSET UNITYSDK_OFFSET(0x1889E7F0)
#define RPG_GAMECORE_ELFSELECTEVENTTALK__CTOR_OFFSET UNITYSDK_OFFSET(0x1889E950)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ElfSelectEventTalk_TypeDefinitionIndex = 17562;

	class ElfSelectEventTalk : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 TalkID; // 0x10
		::System::Boolean IsPlayerReply; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFSELECTEVENTTALK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_3F94B5673198D43B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ElfSelectEventTalk*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ElfSelectEventTalk*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFSELECTEVENTTALK_METHOD_2_3F94B5673198D43B_OFFSET))(a1, a2);
		}
	};
}
