#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_017EA97FA3F1B7BC;
class Class_1_7A22A3DBEEDD1F80;

#define CLASS_1_0D27A768478CF998_METHOD_1_70FC9BA3400F387E_OFFSET UNITYSDK_OFFSET(0x1CE0D130)
#define CLASS_1_0D27A768478CF998__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE0D660)

inline static constexpr unsigned int Class_1_0D27A768478CF998_TypeDefinitionIndex = 11993;

class Class_1_0D27A768478CF998 : public ::System::Object
{
public:
	::Il2CppArray<::Class_1_017EA97FA3F1B7BC*>* KLNPCBJKDFI; // 0x10
	::System::UInt32 CCNENAKAHJE; // 0x18
	::System::UInt32 CLGNIABAHII; // 0x1C
	::System::UInt32 JNFHECCIGDG; // 0x20
	::System::UInt32 FGJFNACLHPB; // 0x24
	::RPG::Client::TextID KFNKBKPKNCC; // 0x28
	::RPG::Client::TextID OENAMINOLLF; // 0x38
	::System::UInt32 OPGAGANBICN; // 0x48
	::System::UInt32 KMLOGCDOMPG; // 0x4C
	::System::UInt32 NCIOIJHNLHD; // 0x50
	::System::Boolean LCFNABHMODA; // 0x54
	::RPG::Client::TextID IFHCECGLMHH; // 0x58
	::System::UInt32 PHFMCACHFIJ; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0D27A768478CF998__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_70FC9BA3400F387E(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_0D27A768478CF998*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_0D27A768478CF998*&))((::PBYTE)hIl2Cpp + CLASS_1_0D27A768478CF998_METHOD_1_70FC9BA3400F387E_OFFSET))(a1, a2);
	}
};
