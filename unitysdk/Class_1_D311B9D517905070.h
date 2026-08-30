#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/DiceCombatDiceFunctionTag.h"
#include "unitysdk/RPG/GameCore/DiceCombatDiceRare.h"
#include "unitysdk/RPG/GameCore/DiceCombatDiceType.h"
#include "unitysdk/RPG/GameCore/DiceCombatDiceValidTurnType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_1_D311B9D517905070_METHOD_1_1F29F81CADD13A09_OFFSET UNITYSDK_OFFSET(0x1C9544F0)
#define CLASS_1_D311B9D517905070__CTOR_OFFSET UNITYSDK_OFFSET(0x1C954990)

inline static constexpr unsigned int Class_1_D311B9D517905070_TypeDefinitionIndex = 11222;

class Class_1_D311B9D517905070 : public ::System::Object
{
public:
	::Il2CppArray<::RPG::GameCore::DiceCombatDiceFunctionTag>* JPJGIPHPFCA; // 0x10
	::Il2CppArray<::System::UInt32>* PICNGJMJELF; // 0x18
	::System::String* BDBHCLOLJBI; // 0x20
	::Il2CppArray<::System::UInt32>* FNHCABDPBGJ; // 0x28
	::RPG::GameCore::DiceCombatDiceValidTurnType PHLHIKNOAFC; // 0x30
	::System::UInt32 DKFDAEFMFHJ; // 0x34
	::RPG::GameCore::DiceCombatDiceType GMPGDEINODK; // 0x38
	::System::Boolean ONEFJICFIJI; // 0x3C
	::RPG::Client::TextID HDCPODKFCAI; // 0x40
	::RPG::GameCore::DiceCombatDiceRare ACAALPMLBFL; // 0x50
	::RPG::Client::TextID OENAMINOLLF; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D311B9D517905070__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_1F29F81CADD13A09(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_D311B9D517905070*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_D311B9D517905070*&))((::PBYTE)hIl2Cpp + CLASS_1_D311B9D517905070_METHOD_1_1F29F81CADD13A09_OFFSET))(a1, a2);
	}
};
