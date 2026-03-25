#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_AVATARSKILLDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9157EB0)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarSkillData_TypeDefinitionIndex = 50773;

	class AvatarSkillData : public ::System::Object
	{
	public:
		::System::String* SkillTriggerKey; // 0x10
		::System::String* IconPath; // 0x18
		::Il2CppArray<::RPG::GameCore::FixPoint>* DescParams; // 0x20
		::RPG::Client::TextID Name; // 0x28
		::RPG::Client::TextID Desc; // 0x38
		::RPG::Client::TextID TypeDesc; // 0x48
		::System::UInt32 SkillLv; // 0x58
		::RPG::Client::TextID Tag; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARSKILLDATA__CTOR_OFFSET))(this);
		}
	};
}
