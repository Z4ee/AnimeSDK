#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TeamLimitType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TEAMLIMITTYPEEVENTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19DDCBE0)
#define RPG_GAMECORE_TEAMLIMITTYPEEVENTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x19DDCE00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TeamLimitTypeEventRow_TypeDefinitionIndex = 14513;

	class TeamLimitTypeEventRow : public ::System::Object
	{
	public:
		::RPG::GameCore::TeamLimitType LimitType; // 0x10
		::RPG::Client::TextID LimitDesc; // 0x18
		::RPG::Client::TextID ToastDesc; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMLIMITTYPEEVENTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TeamLimitTypeEventRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TeamLimitTypeEventRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMLIMITTYPEEVENTROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
