#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_AVATARSERVANTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x186D0930)
#define RPG_GAMECORE_AVATARSERVANTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x186D2580)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarServantRow_TypeDefinitionIndex = 12100;

	class AvatarServantRow : public ::System::Object
	{
	public:
		::System::String* SpeedInherit; // 0x10
		::System::String* ServantSideIconPath; // 0x18
		::System::String* WaitingServantHeadIconPath; // 0x20
		::System::String* HeadIcon; // 0x28
		::System::String* HPInherit; // 0x30
		::System::String* ActionServantHeadIconPath; // 0x38
		::System::String* UnCreateHeadIconPath; // 0x40
		::System::String* ServantMiniIconPath; // 0x48
		::System::String* UIServantModelPath; // 0x50
		::Il2CppArray<::System::UInt32>* SkillIDList; // 0x58
		::System::String* Config; // 0x60
		::System::String* ManikinJsonPath; // 0x68
		::System::String* SpeedBase; // 0x70
		::System::String* Prefab; // 0x78
		::System::String* HPBase; // 0x80
		::RPG::GameCore::FixPoint Aggro; // 0x88
		::System::UInt32 ServantID; // 0x90
		::System::UInt32 HPSkill; // 0x94
		::RPG::Client::TextID ServantName; // 0x98
		::System::UInt32 SpeedSkill; // 0xA8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSERVANTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::AvatarServantRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AvatarServantRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSERVANTROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
