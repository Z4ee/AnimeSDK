#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PetDiySlotType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_1_804A3C81C5CF27B7_METHOD_1_1FAE1389D4EFD9B1_OFFSET UNITYSDK_OFFSET(0x1DBE6490)
#define CLASS_1_804A3C81C5CF27B7__CTOR_OFFSET UNITYSDK_OFFSET(0x1DBE67B0)

inline static constexpr unsigned int Class_1_804A3C81C5CF27B7_TypeDefinitionIndex = 14411;

class Class_1_804A3C81C5CF27B7 : public ::System::Object
{
public:
	::System::String* HCDCEPGEMKD; // 0x10
	::System::String* HFKHMNJPGMI; // 0x18
	::System::Single EMNHIJAIMBE; // 0x20
	::System::UInt32 AILMCDDKIFO; // 0x24
	::System::UInt32 BEOFPCAACEP; // 0x28
	::System::UInt32 FMLGGKAFMKC; // 0x2C
	::RPG::GameCore::PetDiySlotType MPADIDFJBEF; // 0x30
	::System::UInt32 DGIPOMANFEM; // 0x34
	::System::UInt32 OBOMNIHKHMM; // 0x38
	::System::UInt32 LLDCHLHNADA; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_804A3C81C5CF27B7__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_1FAE1389D4EFD9B1(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_804A3C81C5CF27B7*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_804A3C81C5CF27B7*&))((::PBYTE)hIl2Cpp + CLASS_1_804A3C81C5CF27B7_METHOD_1_1FAE1389D4EFD9B1_OFFSET))(a1, a2);
	}
};
