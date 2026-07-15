#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GamePhaseType.h"
#include "unitysdk/System/Object.h"

class Class_1_118030333D39EAFB;
namespace RPG::Client { class Map; }
namespace RPG::GameCore { class BattleAreaReferenceInfo; }
namespace System { class String; }

#define CLASS_1_A95A6B41A5C8A63D__CTOR_OFFSET UNITYSDK_OFFSET(0x16CE9610)

inline static constexpr unsigned int Class_1_A95A6B41A5C8A63D_TypeDefinitionIndex = 58469;

class Class_1_A95A6B41A5C8A63D : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::RPG::Client::Map* Field_1_1; // 0x18
	::System::String* Field_1_2; // 0x20
	::RPG::GameCore::BattleAreaReferenceInfo* Field_1_3; // 0x28
	::Class_1_118030333D39EAFB* Field_1_4; // 0x30
	::RPG::Client::GamePhaseType Field_1_5; // 0x38
	::System::Boolean Field_1_6; // 0x3C
	::System::Boolean Field_1_7; // 0x3D
	::System::Boolean Field_1_8; // 0x3E

	::System::Void _ctor(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A95A6B41A5C8A63D__CTOR_OFFSET))(this, a1);
	}
};
