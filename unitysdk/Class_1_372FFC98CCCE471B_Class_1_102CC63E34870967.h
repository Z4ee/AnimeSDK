#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftAttributeType.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftChipTraitType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_116;
class Class_0_16E4307DCC419505_122;
class Class_0_16E4307DCC419505_124;
class Class_0_16E4307DCC419505_128;
class Class_0_16E4307DCC419505_165;
class Class_0_16E4307DCC419505_167;
class Class_0_16E4307DCC419505_168;
class Class_1_08D77EF97AF2D399;
class Class_1_1F2EF71AD4C135CE;
class Class_1_372FFC98CCCE471B;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyCollection_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_372FFC98CCCE471B_CLASS_1_102CC63E34870967_METHOD_1_38E2E9978C571841_OFFSET UNITYSDK_OFFSET(0xE843610)
#define CLASS_1_372FFC98CCCE471B_CLASS_1_102CC63E34870967_METHOD_1_834F4CE43CD93173_OFFSET UNITYSDK_OFFSET(0xE843B40)
#define CLASS_1_372FFC98CCCE471B_CLASS_1_102CC63E34870967_METHOD_1_F04AC2DECD898A4A_OFFSET UNITYSDK_OFFSET(0xE842BA0)
#define CLASS_1_372FFC98CCCE471B_CLASS_1_102CC63E34870967__CTOR_OFFSET UNITYSDK_OFFSET(0xE842B80)

inline static constexpr unsigned int Class_1_372FFC98CCCE471B_Class_1_102CC63E34870967_TypeDefinitionIndex = 79523;

class Class_1_372FFC98CCCE471B_Class_1_102CC63E34870967 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_122* CKFIMAJPOOA; // 0x10
	::Class_0_16E4307DCC419505_167* KHLEHDEPMGJ; // 0x18
	::Class_0_16E4307DCC419505_165* EIFAMFJPMCE; // 0x20
	::Class_0_16E4307DCC419505_168* MPHBMLDHCHI; // 0x28
	::Class_0_16E4307DCC419505_116* AFKPGPDBMKH; // 0x30
	::Class_0_16E4307DCC419505_124* PONKAEHCHGF; // 0x38

	::System::Void _ctor(::Class_0_16E4307DCC419505_167* a1, ::Class_0_16E4307DCC419505_116* a2, ::Class_0_16E4307DCC419505_168* a3, ::Class_0_16E4307DCC419505_124* a4, ::Class_0_16E4307DCC419505_165* a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_167*, ::Class_0_16E4307DCC419505_116*, ::Class_0_16E4307DCC419505_168*, ::Class_0_16E4307DCC419505_124*, ::Class_0_16E4307DCC419505_165*))((::PBYTE)hIl2Cpp + CLASS_1_372FFC98CCCE471B_CLASS_1_102CC63E34870967__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::Class_1_372FFC98CCCE471B* Method_1_F04AC2DECD898A4A(::Class_1_08D77EF97AF2D399* a1)
	{
		return ((::Class_1_372FFC98CCCE471B*(*)(::PVOID, ::Class_1_08D77EF97AF2D399*))((::PBYTE)hIl2Cpp + CLASS_1_372FFC98CCCE471B_CLASS_1_102CC63E34870967_METHOD_1_F04AC2DECD898A4A_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_1_1F2EF71AD4C135CE*>* Method_1_38E2E9978C571841(::Class_0_16E4307DCC419505_128* a1, ::System::Collections::Generic::IReadOnlyCollection_1<::RPG::Client::MechCraft::MechCraftAttributeType>* a2, ::System::Collections::Generic::HashSet_1<::RPG::Client::MechCraft::MechCraftAttributeType>* a3)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_1F2EF71AD4C135CE*>*(*)(::PVOID, ::Class_0_16E4307DCC419505_128*, ::System::Collections::Generic::IReadOnlyCollection_1<::RPG::Client::MechCraft::MechCraftAttributeType>*, ::System::Collections::Generic::HashSet_1<::RPG::Client::MechCraft::MechCraftAttributeType>*))((::PBYTE)hIl2Cpp + CLASS_1_372FFC98CCCE471B_CLASS_1_102CC63E34870967_METHOD_1_38E2E9978C571841_OFFSET))(this, a1, a2, a3);
	}

	::System::Collections::Generic::List_1<::Class_1_1F2EF71AD4C135CE*>* Method_1_834F4CE43CD93173(::Class_0_16E4307DCC419505_128* a1, ::System::Collections::Generic::IReadOnlyCollection_1<::RPG::Client::MechCraft::MechCraftChipTraitType>* a2, ::System::Collections::Generic::HashSet_1<::RPG::Client::MechCraft::MechCraftChipTraitType>* a3)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_1F2EF71AD4C135CE*>*(*)(::PVOID, ::Class_0_16E4307DCC419505_128*, ::System::Collections::Generic::IReadOnlyCollection_1<::RPG::Client::MechCraft::MechCraftChipTraitType>*, ::System::Collections::Generic::HashSet_1<::RPG::Client::MechCraft::MechCraftChipTraitType>*))((::PBYTE)hIl2Cpp + CLASS_1_372FFC98CCCE471B_CLASS_1_102CC63E34870967_METHOD_1_834F4CE43CD93173_OFFSET))(this, a1, a2, a3);
	}
};
