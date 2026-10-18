#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftChipTraitType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_128;
class Class_1_1F2EF71AD4C135CE;
class Class_1_372FFC98CCCE471B_Class_1_102CC63E34870967;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyCollection_1; }

#define CLASS_1_372FFC98CCCE471B_CLASS_1_102CC63E34870967___C__DISPLAYCLASS9_0__CTOR_OFFSET UNITYSDK_OFFSET(0xE84EEB0)
#define CLASS_1_372FFC98CCCE471B_CLASS_1_102CC63E34870967___C__DISPLAYCLASS9_0___CREATETRAITITEMS_B__0_OFFSET UNITYSDK_OFFSET(0xE84F250)

inline static constexpr unsigned int Class_1_372FFC98CCCE471B_Class_1_102CC63E34870967___c__DisplayClass9_0_TypeDefinitionIndex = 79527;

class Class_1_372FFC98CCCE471B_Class_1_102CC63E34870967___c__DisplayClass9_0 : public ::System::Object
{
public:
	::System::Collections::Generic::IReadOnlyCollection_1<::RPG::Client::MechCraft::MechCraftChipTraitType>* selectedTraitTypes; // 0x10
	::Class_1_372FFC98CCCE471B_Class_1_102CC63E34870967* __4__this; // 0x18
	::System::Collections::Generic::HashSet_1<::RPG::Client::MechCraft::MechCraftChipTraitType>* availableTypes; // 0x20
	::Class_0_16E4307DCC419505_128* requirementConfig; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_372FFC98CCCE471B_CLASS_1_102CC63E34870967___C__DISPLAYCLASS9_0__CTOR_OFFSET))(this);
	}

	::Class_1_1F2EF71AD4C135CE* __CreateTraitItems_b__0(::RPG::Client::MechCraft::MechCraftChipTraitType a1)
	{
		return ((::Class_1_1F2EF71AD4C135CE*(*)(::PVOID, ::RPG::Client::MechCraft::MechCraftChipTraitType))((::PBYTE)hIl2Cpp + CLASS_1_372FFC98CCCE471B_CLASS_1_102CC63E34870967___C__DISPLAYCLASS9_0___CREATETRAITITEMS_B__0_OFFSET))(this, a1);
	}
};
