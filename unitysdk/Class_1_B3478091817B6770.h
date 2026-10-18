#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/GridFightTraitEffectChangeHintType.h"
#include "unitysdk/RPG/GameCore/GridFightTraitEffectChargeType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_B3478091817B6770__CTOR_OFFSET UNITYSDK_OFFSET(0xB5AD890)

inline static constexpr unsigned int Class_1_B3478091817B6770_TypeDefinitionIndex = 58147;

class Class_1_B3478091817B6770 : public ::System::Object
{
public:
	::System::String* LHOJDELAMJL; // 0x10
	::RPG::GameCore::FixPoint APMCPIPIJOI; // 0x18
	::RPG::Client::TextID MPIEEPEGFGA; // 0x20
	::RPG::GameCore::GridFightTraitEffectChangeHintType HMOAIJEANAP; // 0x30
	::RPG::GameCore::GridFightTraitEffectChargeType MJPHFBALDBM; // 0x34
	::RPG::GameCore::FixPoint JIAOEIMMPBB; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B3478091817B6770__CTOR_OFFSET))(this);
	}
};
