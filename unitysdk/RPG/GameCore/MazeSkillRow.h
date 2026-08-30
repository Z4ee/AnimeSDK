#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MAZESKILLROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D283F80)
#define RPG_GAMECORE_MAZESKILLROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2847B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MazeSkillRow_TypeDefinitionIndex = 12499;

	class MazeSkillRow : public ::System::Object
	{
	public:
		::System::String* SkillTriggerKey; // 0x10
		::System::UInt32 MazeSkilltype; // 0x18
		::RPG::Client::TextID MazeSkillName; // 0x20
		::System::UInt32 Priority; // 0x30
		::System::UInt32 MPCost; // 0x34
		::RPG::Client::TextID MazeSkillDesc; // 0x38
		::System::UInt32 MazeSkillId; // 0x48
		::System::UInt32 RelatedAvatarSkill; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZESKILLROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MazeSkillRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MazeSkillRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZESKILLROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
