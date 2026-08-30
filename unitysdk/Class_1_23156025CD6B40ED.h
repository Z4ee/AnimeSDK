#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatDiceType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_1_23156025CD6B40ED_METHOD_1_95FA3048B3F79507_OFFSET UNITYSDK_OFFSET(0x1CBA1280)
#define CLASS_1_23156025CD6B40ED__CTOR_OFFSET UNITYSDK_OFFSET(0x1CBA1680)

inline static constexpr unsigned int Class_1_23156025CD6B40ED_TypeDefinitionIndex = 11225;

class Class_1_23156025CD6B40ED : public ::System::Object
{
public:
	::System::String* LNPCPJCEMHL; // 0x10
	::System::String* NAODLBMKJKN; // 0x18
	::System::String* OLOIFNNLKJP; // 0x20
	::System::String* BFJGHPDNIOI; // 0x28
	::System::String* BDACPPLKLGL; // 0x30
	::System::String* JBNNNICBNFE; // 0x38
	::System::String* CILPGJAFCOK; // 0x40
	::Il2CppArray<::System::Single>* MBNNCBAAHFC; // 0x48
	::System::String* JACANFAMGBO; // 0x50
	::System::String* HLMCIPNJIHM; // 0x58
	::System::String* PNIDDEEJPCI; // 0x60
	::RPG::GameCore::DiceCombatDiceType PBFMMOGEBAK; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_23156025CD6B40ED__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_95FA3048B3F79507(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_23156025CD6B40ED*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_23156025CD6B40ED*&))((::PBYTE)hIl2Cpp + CLASS_1_23156025CD6B40ED_METHOD_1_95FA3048B3F79507_OFFSET))(a1, a2);
	}
};
