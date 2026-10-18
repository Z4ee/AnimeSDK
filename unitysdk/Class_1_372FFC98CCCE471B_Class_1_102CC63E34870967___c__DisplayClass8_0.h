#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftAttributeType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_128;
class Class_1_1F2EF71AD4C135CE;
class Class_1_372FFC98CCCE471B_Class_1_102CC63E34870967;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyCollection_1; }

#define CLASS_1_372FFC98CCCE471B_CLASS_1_102CC63E34870967___C__DISPLAYCLASS8_0__CTOR_OFFSET UNITYSDK_OFFSET(0xE84EEA0)
#define CLASS_1_372FFC98CCCE471B_CLASS_1_102CC63E34870967___C__DISPLAYCLASS8_0___CREATEATTRIBUTEITEMS_B__0_OFFSET UNITYSDK_OFFSET(0xE84EFD0)

inline static constexpr unsigned int Class_1_372FFC98CCCE471B_Class_1_102CC63E34870967___c__DisplayClass8_0_TypeDefinitionIndex = 79526;

class Class_1_372FFC98CCCE471B_Class_1_102CC63E34870967___c__DisplayClass8_0 : public ::System::Object
{
public:
	::Class_1_372FFC98CCCE471B_Class_1_102CC63E34870967* __4__this; // 0x10
	::System::Collections::Generic::IReadOnlyCollection_1<::RPG::Client::MechCraft::MechCraftAttributeType>* selectedAttributeTypes; // 0x18
	::Class_0_16E4307DCC419505_128* requirementConfig; // 0x20
	::System::Collections::Generic::HashSet_1<::RPG::Client::MechCraft::MechCraftAttributeType>* availableTypes; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_372FFC98CCCE471B_CLASS_1_102CC63E34870967___C__DISPLAYCLASS8_0__CTOR_OFFSET))(this);
	}

	::Class_1_1F2EF71AD4C135CE* __CreateAttributeItems_b__0(::RPG::Client::MechCraft::MechCraftAttributeType a1)
	{
		return ((::Class_1_1F2EF71AD4C135CE*(*)(::PVOID, ::RPG::Client::MechCraft::MechCraftAttributeType))((::PBYTE)hIl2Cpp + CLASS_1_372FFC98CCCE471B_CLASS_1_102CC63E34870967___C__DISPLAYCLASS8_0___CREATEATTRIBUTEITEMS_B__0_OFFSET))(this, a1);
	}
};
