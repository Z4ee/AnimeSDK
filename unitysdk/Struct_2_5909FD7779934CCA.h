#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ActionDelayChangeReason.h"
#include "unitysdk/Struct_2_3A335394524C9E44.h"
#include "unitysdk/System/ValueType.h"

class Class_0_16E4307DCC419505_356;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class JsonEnum; }
namespace System { class String; }

#define STRUCT_2_5909FD7779934CCA__CCTOR_OFFSET UNITYSDK_OFFSET(0xB9E3DF0)

inline static constexpr unsigned int Struct_2_5909FD7779934CCA_TypeDefinitionIndex = 53950;

struct alignas(8) Struct_2_5909FD7779934CCA
{
	static ::Struct_2_5909FD7779934CCA* StaticGet_Field_2_0()
	{
		return (::Struct_2_5909FD7779934CCA*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_5909FD7779934CCA_TypeDefinitionIndex)->GetStaticField(0x1840);
	}
	::System::Boolean Field_2_1; // 0x10
	::System::Boolean Field_2_2; // 0x11
	::System::Boolean Field_2_3; // 0x12
	::System::Boolean Field_2_4; // 0x13
	::System::Boolean Field_2_5; // 0x14
	::System::Boolean Field_2_6; // 0x15
	::System::Boolean Field_2_7; // 0x16
	::System::Boolean Field_2_8; // 0x17
	::System::Boolean Field_2_9; // 0x18
	::System::Boolean Field_2_10; // 0x19
	::System::Boolean Field_2_11; // 0x1A
	::System::Boolean Field_2_12; // 0x1B
	::System::Boolean Field_2_13; // 0x1C
	::System::Boolean Field_2_14; // 0x1D
	::System::String* Field_2_15; // 0x20
	::RPG::GameCore::ActionDelayChangeReason Field_2_16; // 0x28
	::System::Boolean Field_2_17; // 0x2C
	::System::Boolean Field_2_18; // 0x2D
	::System::String* Field_2_19; // 0x30
	::RPG::GameCore::GameEntity* Field_2_20; // 0x38
	::Class_0_16E4307DCC419505_356* Field_2_21; // 0x40
	::RPG::GameCore::GameEntity* Field_2_22; // 0x48
	::RPG::GameCore::JsonEnum* Field_2_23; // 0x50
	::System::Boolean Field_2_24; // 0x58
	::System::Boolean Field_2_25; // 0x59
	::Struct_2_3A335394524C9E44 Field_2_26; // 0x60

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_5909FD7779934CCA__CCTOR_OFFSET))();
	}
};
