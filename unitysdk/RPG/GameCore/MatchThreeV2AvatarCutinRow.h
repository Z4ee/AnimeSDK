#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MATCHTHREEV2AVATARCUTINROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x173B6B40)
#define RPG_GAMECORE_MATCHTHREEV2AVATARCUTINROW__CTOR_OFFSET UNITYSDK_OFFSET(0x173B6D40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MatchThreeV2AvatarCutinRow_TypeDefinitionIndex = 10994;

	class MatchThreeV2AvatarCutinRow : public ::System::Object
	{
	public:
		::System::String* ImagePath; // 0x10
		::System::UInt32 MaxTriggerNum; // 0x18
		::System::UInt32 CutinID; // 0x1C
		::RPG::Client::TextID TalkText; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEV2AVATARCUTINROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::MatchThreeV2AvatarCutinRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MatchThreeV2AvatarCutinRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEV2AVATARCUTINROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
