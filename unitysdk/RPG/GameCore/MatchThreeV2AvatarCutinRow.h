#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MATCHTHREEV2AVATARCUTINROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1AF3F120)
#define RPG_GAMECORE_MATCHTHREEV2AVATARCUTINROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF3F320)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MatchThreeV2AvatarCutinRow_TypeDefinitionIndex = 11542;

	class MatchThreeV2AvatarCutinRow : public ::System::Object
	{
	public:
		::System::String* ImagePath; // 0x10
		::RPG::Client::TextID TalkText; // 0x18
		::System::UInt32 MaxTriggerNum; // 0x28
		::System::UInt32 CutinID; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEV2AVATARCUTINROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MatchThreeV2AvatarCutinRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MatchThreeV2AvatarCutinRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEV2AVATARCUTINROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
