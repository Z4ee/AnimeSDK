#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/VersusBarEffectType.h"
#include "unitysdk/RPG/GameCore/VersusBarReasonTipType.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_8279BFFA57BC2D0E__CTOR_OFFSET UNITYSDK_OFFSET(0x15E854D0)

inline static constexpr unsigned int Class_1_8279BFFA57BC2D0E_TypeDefinitionIndex = 55590;

class Class_1_8279BFFA57BC2D0E : public ::System::Object
{
public:
	::System::String* PDPFAPMCMMI; // 0x10
	::System::String* AJHFKOGFFOP; // 0x18
	::System::Boolean BECLGNONOID; // 0x20
	::System::Nullable_1<::System::Boolean> FEDOIDAMKEI; // 0x21
	::System::Nullable_1<::System::Boolean> LEFMBOJIBDM; // 0x23
	::RPG::GameCore::VersusBarReasonTipType PLAOODOLLAI; // 0x28
	::System::Nullable_1<::RPG::GameCore::FixPoint> BCCHCNNIEDB; // 0x30
	::RPG::GameCore::FixPoint JCCPFJKEALD; // 0x40
	::System::Nullable_1<::RPG::GameCore::FixPoint> EFJAHDEMACL; // 0x48
	::RPG::GameCore::VersusBarEffectType GLKADJGGONI; // 0x58
	::System::Nullable_1<::RPG::GameCore::FixPoint> HOELGLIGJMC; // 0x60
	::RPG::Client::TextID FFFAFHAPNII; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8279BFFA57BC2D0E__CTOR_OFFSET))(this);
	}
};
