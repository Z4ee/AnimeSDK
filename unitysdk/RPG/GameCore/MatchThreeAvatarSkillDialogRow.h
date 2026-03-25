#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MATCHTHREEAVATARSKILLDIALOGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x173AE100)
#define RPG_GAMECORE_MATCHTHREEAVATARSKILLDIALOGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x173AE840)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MatchThreeAvatarSkillDialogRow_TypeDefinitionIndex = 10954;

	class MatchThreeAvatarSkillDialogRow : public ::System::Object
	{
	public:
		::System::String* AvatarPic; // 0x10
		::RPG::Client::TextID Desc; // 0x18
		::RPG::Client::TextID Name; // 0x28
		::System::UInt32 ID; // 0x38
		::System::UInt32 EnvironmentID; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEAVATARSKILLDIALOGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::MatchThreeAvatarSkillDialogRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MatchThreeAvatarSkillDialogRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEAVATARSKILLDIALOGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
