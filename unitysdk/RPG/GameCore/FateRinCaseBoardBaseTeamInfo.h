#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FateRinCaseBoardTeamType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_FATERINCASEBOARDBASETEAMINFO_METHOD_2_62CC3CE91BD57AD4_OFFSET UNITYSDK_OFFSET(0x1E0CF8F0)
#define RPG_GAMECORE_FATERINCASEBOARDBASETEAMINFO_METHOD_2_DDEB5C97B1B73B76_OFFSET UNITYSDK_OFFSET(0x1E0CFB20)
#define RPG_GAMECORE_FATERINCASEBOARDBASETEAMINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1E0CFB10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateRinCaseBoardBaseTeamInfo_TypeDefinitionIndex = 16055;

	class FateRinCaseBoardBaseTeamInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::FateRinCaseBoardTeamType TeamType; // 0x10
		::System::String* TeamName; // 0x18
		::RPG::Client::TextID OverrideServantTab; // 0x20
		::System::String* OverrideServantClass; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATERINCASEBOARDBASETEAMINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_62CC3CE91BD57AD4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateRinCaseBoardBaseTeamInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateRinCaseBoardBaseTeamInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATERINCASEBOARDBASETEAMINFO_METHOD_2_62CC3CE91BD57AD4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_DDEB5C97B1B73B76(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateRinCaseBoardBaseTeamInfo* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateRinCaseBoardBaseTeamInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATERINCASEBOARDBASETEAMINFO_METHOD_2_DDEB5C97B1B73B76_OFFSET))(a1, a2);
		}
	};
}
