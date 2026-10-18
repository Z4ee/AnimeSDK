#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AbilityPropertyChangeReason.h"
#include "unitysdk/RPG/GameCore/ActionDelayChangeReason.h"
#include "unitysdk/Struct_2_3A335394524C9E44.h"
#include "unitysdk/System/ValueType.h"

class Class_0_16E4307DCC419505_501;
class Class_1_843DD6330B22E422;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class JsonEnum; }
namespace System { class String; }

#define STRUCT_2_5909FD7779934CCA__CCTOR_OFFSET UNITYSDK_OFFSET(0xCF58460)

inline static constexpr unsigned int Struct_2_5909FD7779934CCA_TypeDefinitionIndex = 57728;

struct alignas(8) Struct_2_5909FD7779934CCA
{
	static ::Struct_2_5909FD7779934CCA* StaticGet_HGLIFJGHADE()
	{
		return (::Struct_2_5909FD7779934CCA*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_5909FD7779934CCA_TypeDefinitionIndex)->GetStaticField(0x4BA40);
	}
	::System::Boolean OLEAPFHOLBJ; // 0x10
	::System::Boolean LEHGCAGLIJB; // 0x11
	::System::Boolean BOEMBEDMEGD; // 0x12
	::System::Boolean HBHBFHIKLCN; // 0x13
	::System::Boolean DGAKPGALALN; // 0x14
	::System::Boolean EMADLAPAFCA; // 0x15
	::System::Boolean KADGBNLKIAB; // 0x16
	::System::Boolean AIBCCJFBLMH; // 0x17
	::System::Boolean CAKKEGHDIIP; // 0x18
	::System::Boolean IAHHHMJOGGD; // 0x19
	::System::Boolean MBJGAMBENFD; // 0x1A
	::System::Boolean AIALIJCLPPF; // 0x1B
	::System::Boolean JBGHDCBIMMK; // 0x1C
	::System::Boolean KEHAJCEDCMO; // 0x1D
	::System::String* CCOLBNIOBLG; // 0x20
	::RPG::GameCore::ActionDelayChangeReason KDBCDFCDILE; // 0x28
	::System::Boolean FKILJLOJDNH; // 0x2C
	::System::Boolean IJNCCJFDING; // 0x2D
	::RPG::GameCore::AbilityPropertyChangeReason GMKICMIMAAB; // 0x30
	::RPG::GameCore::GameEntity* AAEBCMJLHMA; // 0x38
	::Class_0_16E4307DCC419505_501* NGBAPOEDIOJ; // 0x40
	::RPG::GameCore::GameEntity* EJCOCNJPBEF; // 0x48
	::Class_1_843DD6330B22E422* GNHAPABLMDF; // 0x50
	::RPG::GameCore::JsonEnum* NHALJPDONCP; // 0x58
	::System::Boolean CFBPHCJAFPG; // 0x60
	::System::Boolean HNGEDNBEDKB; // 0x61
	::Struct_2_3A335394524C9E44 BDAFAHKLKAC; // 0x68

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_5909FD7779934CCA__CCTOR_OFFSET))();
	}
};
