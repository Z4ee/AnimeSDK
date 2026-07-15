#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_AVATARSKILLLINKROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1A08DF80)
#define RPG_GAMECORE_AVATARSKILLLINKROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1A08E120)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarSkillLinkRow_TypeDefinitionIndex = 12292;

	class AvatarSkillLinkRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* LinkToAvatarIDSimplifiedList; // 0x10
		::Il2CppArray<::System::UInt32>* LinkToAvatarIDList; // 0x18
		::System::UInt32 SkillID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKILLLINKROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AvatarSkillLinkRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AvatarSkillLinkRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKILLLINKROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
