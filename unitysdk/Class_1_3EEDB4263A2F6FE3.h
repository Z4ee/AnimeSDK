#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/B51Racing/B51RacingDIYDecoItemType.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/B51RacingPartType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_3EEDB4263A2F6FE3__CTOR_OFFSET UNITYSDK_OFFSET(0x184B6850)

inline static constexpr unsigned int Class_1_3EEDB4263A2F6FE3_TypeDefinitionIndex = 80663;

class Class_1_3EEDB4263A2F6FE3 : public ::System::Object
{
public:
	::System::String* OLOIFNNLKJP; // 0x10
	::System::Action_1<::System::UInt32>* ONPCPLEECCG; // 0x18
	::System::Boolean HELJNHNDCJP; // 0x20
	::System::Boolean AALCCPJCBME; // 0x21
	::System::UInt32 CMNOEFFFNPE; // 0x24
	::RPG::Client::B51Racing::B51RacingDIYDecoItemType LINLNNHIBAK; // 0x28
	::RPG::GameCore::B51RacingPartType OAPONHEHCOJ; // 0x2C
	::RPG::Client::TextID OENAMINOLLF; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3EEDB4263A2F6FE3__CTOR_OFFSET))(this);
	}
};
