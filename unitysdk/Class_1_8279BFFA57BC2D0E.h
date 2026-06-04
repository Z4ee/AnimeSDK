#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/VersusBarEffectType.h"
#include "unitysdk/RPG/GameCore/VersusBarReasonTipType.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_8279BFFA57BC2D0E__CTOR_OFFSET UNITYSDK_OFFSET(0x13C29AE0)

inline static constexpr unsigned int Class_1_8279BFFA57BC2D0E_TypeDefinitionIndex = 51922;

class Class_1_8279BFFA57BC2D0E : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::System::String* Field_1_1; // 0x18
	::RPG::Client::TextID Field_1_2; // 0x20
	::System::Nullable_1<::RPG::GameCore::FixPoint> Field_1_3; // 0x30
	::System::Nullable_1<::RPG::GameCore::FixPoint> Field_1_4; // 0x40
	::System::Boolean Field_1_5; // 0x50
	::System::Nullable_1<::System::Boolean> Field_1_6; // 0x51
	::System::Nullable_1<::System::Boolean> Field_1_7; // 0x53
	::RPG::GameCore::VersusBarEffectType Field_1_8; // 0x58
	::RPG::GameCore::VersusBarReasonTipType Field_1_9; // 0x5C
	::System::Nullable_1<::RPG::GameCore::FixPoint> Field_1_10; // 0x60
	::RPG::GameCore::FixPoint Field_1_11; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8279BFFA57BC2D0E__CTOR_OFFSET))(this);
	}
};
