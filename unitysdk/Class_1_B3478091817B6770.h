#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/GridFightTraitEffectChangeHintType.h"
#include "unitysdk/RPG/GameCore/GridFightTraitEffectChargeType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_B3478091817B6770__CTOR_OFFSET UNITYSDK_OFFSET(0xA464B10)

inline static constexpr unsigned int Class_1_B3478091817B6770_TypeDefinitionIndex = 54345;

class Class_1_B3478091817B6770 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::RPG::GameCore::FixPoint Field_1_1; // 0x18
	::RPG::Client::TextID Field_1_2; // 0x20
	::RPG::GameCore::GridFightTraitEffectChargeType Field_1_3; // 0x30
	::RPG::GameCore::GridFightTraitEffectChangeHintType Field_1_4; // 0x34
	::RPG::GameCore::FixPoint Field_1_5; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B3478091817B6770__CTOR_OFFSET))(this);
	}
};
