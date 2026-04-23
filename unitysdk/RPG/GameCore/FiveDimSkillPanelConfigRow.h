#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FiveDimPanelSkillType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMSKILLPANELCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1891DC90)
#define RPG_GAMECORE_FIVEDIMSKILLPANELCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1891E220)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimSkillPanelConfigRow_TypeDefinitionIndex = 13373;

	class FiveDimSkillPanelConfigRow : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::System::String* UI3DPath; // 0x18
		::System::String* IconPath2; // 0x20
		::RPG::Client::TextID IpDesc; // 0x28
		::RPG::Client::TextID Name; // 0x38
		::RPG::GameCore::FiveDimPanelSkillType Type; // 0x48
		::RPG::Client::TextID Desc2; // 0x50
		::System::UInt32 UnlockID; // 0x60
		::System::UInt32 ID; // 0x64
		::RPG::Client::TextID IpDesc2; // 0x68
		::RPG::Client::TextID Desc1; // 0x78
		::RPG::Client::TextID SkillName; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSKILLPANELCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::FiveDimSkillPanelConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSkillPanelConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSKILLPANELCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
