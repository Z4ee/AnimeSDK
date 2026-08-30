#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MONOPOLYPLAYERTALKCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D2C2DC0)
#define RPG_GAMECORE_MONOPOLYPLAYERTALKCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2C3440)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonopolyPlayerTalkConfigRow_TypeDefinitionIndex = 12002;

	class MonopolyPlayerTalkConfigRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID ContentTextID; // 0x10
		::System::UInt32 ID; // 0x20
		::System::UInt32 Priority; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYPLAYERTALKCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MonopolyPlayerTalkConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MonopolyPlayerTalkConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYPLAYERTALKCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
