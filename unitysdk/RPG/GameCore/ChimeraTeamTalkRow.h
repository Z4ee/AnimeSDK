#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ChimeraTeamTalkEffectType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHIMERATEAMTALKROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1964D2D0)
#define RPG_GAMECORE_CHIMERATEAMTALKROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1964D480)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraTeamTalkRow_TypeDefinitionIndex = 12404;

	class ChimeraTeamTalkRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID TalkContent; // 0x10
		::System::UInt32 TalkID; // 0x20
		::RPG::GameCore::ChimeraTeamTalkEffectType Effect; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERATEAMTALKROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraTeamTalkRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraTeamTalkRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERATEAMTALKROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
