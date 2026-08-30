#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/B51RacingPartType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_EF079561C804F2A6__CTOR_OFFSET UNITYSDK_OFFSET(0xC38F480)

inline static constexpr unsigned int Class_1_EF079561C804F2A6_TypeDefinitionIndex = 80673;

class Class_1_EF079561C804F2A6 : public ::System::Object
{
public:
	::System::String* CNPMPHNKALI; // 0x10
	::System::Action_1<::System::UInt32>* ONPCPLEECCG; // 0x18
	::RPG::Client::TextID OHLBMAGECPM; // 0x20
	::System::UInt32 BAGPBCADCJN; // 0x30
	::RPG::GameCore::B51RacingPartType BGFKAMOLKPN; // 0x34
	::RPG::Client::TextID CAEPCCBODOM; // 0x38
	::System::Boolean HELJNHNDCJP; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF079561C804F2A6__CTOR_OFFSET))(this);
	}
};
