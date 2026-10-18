#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/B51Racing/B51RacingDIYDecoItemType.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/B51RacingPartType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_3EEDB4263A2F6FE3__CTOR_OFFSET UNITYSDK_OFFSET(0xDFB2B00)

inline static constexpr unsigned int Class_1_3EEDB4263A2F6FE3_TypeDefinitionIndex = 81991;

class Class_1_3EEDB4263A2F6FE3 : public ::System::Object
{
public:
	::System::Action_1<::System::UInt32>* ONPCPLEECCG; // 0x10
	::System::String* OLOIFNNLKJP; // 0x18
	::System::UInt32 CMNOEFFFNPE; // 0x20
	::RPG::Client::B51Racing::B51RacingDIYDecoItemType LINLNNHIBAK; // 0x24
	::RPG::Client::TextID OENAMINOLLF; // 0x28
	::System::Boolean AALCCPJCBME; // 0x38
	::System::Boolean HELJNHNDCJP; // 0x39
	::RPG::GameCore::B51RacingPartType OAPONHEHCOJ; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3EEDB4263A2F6FE3__CTOR_OFFSET))(this);
	}
};
