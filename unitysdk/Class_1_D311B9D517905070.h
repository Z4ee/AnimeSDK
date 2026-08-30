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

#define CLASS_1_D311B9D517905070_METHOD_1_1F29F81CADD13A09_OFFSET UNITYSDK_OFFSET(0xCA2E940)
#define CLASS_1_D311B9D517905070__CTOR_OFFSET UNITYSDK_OFFSET(0xCA2EDE0)

inline static constexpr unsigned int Class_1_D311B9D517905070_TypeDefinitionIndex = 11222;

class Class_1_D311B9D517905070 : public ::System::Object
{
public:
	::System::String* BDBHCLOLJBI; // 0x10
	::Il2CppArray<::System::UInt32>* PICNGJMJELF; // 0x18
	::Il2CppArray<::RPG::GameCore::DiceCombatDiceFunctionTag>* JPJGIPHPFCA; // 0x20
	::Il2CppArray<::System::UInt32>* FNHCABDPBGJ; // 0x28
	::RPG::Client::TextID OENAMINOLLF; // 0x30
	::RPG::GameCore::DiceCombatDiceValidTurnType PHLHIKNOAFC; // 0x40
	::System::UInt32 DKFDAEFMFHJ; // 0x44
	::System::Boolean ONEFJICFIJI; // 0x48
	::RPG::GameCore::DiceCombatDiceRare ACAALPMLBFL; // 0x4C
	::RPG::GameCore::DiceCombatDiceType GMPGDEINODK; // 0x50
	::RPG::Client::TextID HDCPODKFCAI; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D311B9D517905070__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_1F29F81CADD13A09(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_D311B9D517905070*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_D311B9D517905070*&))((::PBYTE)hIl2Cpp + CLASS_1_D311B9D517905070_METHOD_1_1F29F81CADD13A09_OFFSET))(a1, a2);
	}
};
