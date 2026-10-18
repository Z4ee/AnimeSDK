#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftAttributeType.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftPartType.h"
#include "unitysdk/Struct_2_B36D9D977E9A07DD.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_116;
class Class_0_16E4307DCC419505_121;
class Class_0_16E4307DCC419505_135;
class Class_0_16E4307DCC419505_136;
class Class_0_16E4307DCC419505_1516;
class Class_0_16E4307DCC419505_170;
class Class_1_508BB2775E8F8A7D;
class Class_1_7BC77CEFB451E276;
class Class_1_D501FC103C8A2714;
namespace RPG::Client::MechCraft::ViewModel { class MechCraftProductUI3DViewModel; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_171FFFC4EF982898_METHOD_1_17B8DA5D00340B7E_OFFSET UNITYSDK_OFFSET(0xBB4C460)
#define CLASS_1_171FFFC4EF982898_METHOD_1_AA7B134FB6C17634_OFFSET UNITYSDK_OFFSET(0xBB4C5B0)
#define CLASS_1_171FFFC4EF982898_METHOD_1_B376B68E3E831F31_OFFSET UNITYSDK_OFFSET(0xBB4DB20)
#define CLASS_1_171FFFC4EF982898__CTOR_OFFSET UNITYSDK_OFFSET(0xBB4BDD0)

inline static constexpr unsigned int Class_1_171FFFC4EF982898_TypeDefinitionIndex = 79756;

class Class_1_171FFFC4EF982898 : public ::System::Object
{
public:
	// static const ::System::UInt32 FJAMFAGLBNL = 0x2; // 0x0
	// static const ::System::UInt32 DDMIIEDCDNJ = 0x3; // 0x0
	::Class_0_16E4307DCC419505_170* HPKAMOIPAKN; // 0x10
	::Class_0_16E4307DCC419505_135* IDJNMDGBKKI; // 0x18
	::Class_0_16E4307DCC419505_1516* MHMMAHBDOHD; // 0x20
	::System::Collections::Generic::Dictionary_2<::RPG::Client::MechCraft::MechCraftAttributeType, ::System::Collections::Generic::List_1<::RPG::Client::MechCraft::MechCraftPartType>*>* BCFJCDDJJLE; // 0x28
	::Class_0_16E4307DCC419505_136* JIFFPCDGGID; // 0x30
	::Class_0_16E4307DCC419505_116* AFKPGPDBMKH; // 0x38
	::Class_1_D501FC103C8A2714* GJALMBBNNOF; // 0x40

	::System::Void _ctor(::Class_0_16E4307DCC419505_170* a1, ::Class_0_16E4307DCC419505_116* a2, ::Class_0_16E4307DCC419505_1516* a3, ::Class_1_D501FC103C8A2714* a4, ::Class_0_16E4307DCC419505_135* a5, ::Class_0_16E4307DCC419505_136* a6)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_170*, ::Class_0_16E4307DCC419505_116*, ::Class_0_16E4307DCC419505_1516*, ::Class_1_D501FC103C8A2714*, ::Class_0_16E4307DCC419505_135*, ::Class_0_16E4307DCC419505_136*))((::PBYTE)hIl2Cpp + CLASS_1_171FFFC4EF982898__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::RPG::Client::MechCraft::ViewModel::MechCraftProductUI3DViewModel* Method_1_17B8DA5D00340B7E(::Class_1_7BC77CEFB451E276* a1)
	{
		return ((::RPG::Client::MechCraft::ViewModel::MechCraftProductUI3DViewModel*(*)(::PVOID, ::Class_1_7BC77CEFB451E276*))((::PBYTE)hIl2Cpp + CLASS_1_171FFFC4EF982898_METHOD_1_17B8DA5D00340B7E_OFFSET))(this, a1);
	}

	::RPG::Client::MechCraft::ViewModel::MechCraftProductUI3DViewModel* Method_1_B376B68E3E831F31(::Class_1_508BB2775E8F8A7D* a1)
	{
		return ((::RPG::Client::MechCraft::ViewModel::MechCraftProductUI3DViewModel*(*)(::PVOID, ::Class_1_508BB2775E8F8A7D*))((::PBYTE)hIl2Cpp + CLASS_1_171FFFC4EF982898_METHOD_1_B376B68E3E831F31_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Struct_2_B36D9D977E9A07DD>* Method_1_AA7B134FB6C17634(::Class_0_16E4307DCC419505_121* a1, ::Class_0_16E4307DCC419505_121* a2)
	{
		return ((::System::Collections::Generic::List_1<::Struct_2_B36D9D977E9A07DD>*(*)(::PVOID, ::Class_0_16E4307DCC419505_121*, ::Class_0_16E4307DCC419505_121*))((::PBYTE)hIl2Cpp + CLASS_1_171FFFC4EF982898_METHOD_1_AA7B134FB6C17634_OFFSET))(this, a1, a2);
	}
};
