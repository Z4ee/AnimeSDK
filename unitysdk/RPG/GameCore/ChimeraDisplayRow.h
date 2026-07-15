#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHIMERADISPLAYROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C390310)
#define RPG_GAMECORE_CHIMERADISPLAYROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1C3907F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDisplayRow_TypeDefinitionIndex = 12522;

	class ChimeraDisplayRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID Story1; // 0x10
		::RPG::Client::TextID Story1Title; // 0x20
		::System::UInt32 DisplayID; // 0x30
		::RPG::Client::TextID Story3; // 0x38
		::RPG::Client::TextID Story3Title; // 0x48
		::RPG::Client::TextID ChimeraName; // 0x58
		::RPG::Client::TextID Story2Title; // 0x68
		::RPG::Client::TextID Story2; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADISPLAYROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDisplayRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDisplayRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADISPLAYROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
