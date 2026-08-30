#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MATCHTHREEAVATARSKILLDIALOGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D265B90)
#define RPG_GAMECORE_MATCHTHREEAVATARSKILLDIALOGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2662F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MatchThreeAvatarSkillDialogRow_TypeDefinitionIndex = 11894;

	class MatchThreeAvatarSkillDialogRow : public ::System::Object
	{
	public:
		::System::String* AvatarPic; // 0x10
		::System::UInt32 EnvironmentID; // 0x18
		::System::UInt32 ID; // 0x1C
		::RPG::Client::TextID Desc; // 0x20
		::RPG::Client::TextID Name; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEAVATARSKILLDIALOGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MatchThreeAvatarSkillDialogRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MatchThreeAvatarSkillDialogRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEAVATARSKILLDIALOGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
