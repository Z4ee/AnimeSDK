#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftAttributeType.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftChipTraitType.h"
#include "unitysdk/RPG/Client/MechCraft/ViewModel/MechCraftChipMoldFilterTabType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1489;
class Class_0_16E4307DCC419505_397;
class Class_1_1F2EF71AD4C135CE;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_372FFC98CCCE471B_ADD_HANDLEHINTUNAVAILABLE_OFFSET UNITYSDK_OFFSET(0xE841970)
#define CLASS_1_372FFC98CCCE471B_ADD_ONCLOSEREQUESTED_OFFSET UNITYSDK_OFFSET(0xE8418B0)
#define CLASS_1_372FFC98CCCE471B_ADD_ONITEMSCHANGED_OFFSET UNITYSDK_OFFSET(0xE841730)
#define CLASS_1_372FFC98CCCE471B_ADD_ONTABCHANGED_OFFSET UNITYSDK_OFFSET(0xE8417F0)
#define CLASS_1_372FFC98CCCE471B_METHOD_1_13546BC2E4B5F25D_OFFSET UNITYSDK_OFFSET(0xE842080)
#define CLASS_1_372FFC98CCCE471B_METHOD_1_30D1209326FA87FC_1_OFFSET UNITYSDK_OFFSET(0xE842100)
#define CLASS_1_372FFC98CCCE471B_METHOD_1_30D1209326FA87FC_2_OFFSET UNITYSDK_OFFSET(0xE842880)
#define CLASS_1_372FFC98CCCE471B_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0xE841FD0)
#define CLASS_1_372FFC98CCCE471B_METHOD_1_391A84BCD9F51317_1_OFFSET UNITYSDK_OFFSET(0xE841560)
#define CLASS_1_372FFC98CCCE471B_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xE841510)
#define CLASS_1_372FFC98CCCE471B_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xE842820)
#define CLASS_1_372FFC98CCCE471B_METHOD_1_4E0CCFC7E8FEF732_OFFSET UNITYSDK_OFFSET(0xE8414C0)
#define CLASS_1_372FFC98CCCE471B_METHOD_1_8F7825DAFFB9B517_OFFSET UNITYSDK_OFFSET(0xE8421B0)
#define CLASS_1_372FFC98CCCE471B_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xE8427A0)
#define CLASS_1_372FFC98CCCE471B_METHOD_1_B213056103887067_1_OFFSET UNITYSDK_OFFSET(0xE841670)
#define CLASS_1_372FFC98CCCE471B_METHOD_1_B213056103887067_OFFSET UNITYSDK_OFFSET(0xE8415B0)
#define CLASS_1_372FFC98CCCE471B_METHOD_1_B50BC205C61B0618_OFFSET UNITYSDK_OFFSET(0xE842970)
#define CLASS_1_372FFC98CCCE471B_METHOD_1_DAEB67F34AF80609_OFFSET UNITYSDK_OFFSET(0xE841A50)
#define CLASS_1_372FFC98CCCE471B_REMOVE_HANDLEHINTUNAVAILABLE_OFFSET UNITYSDK_OFFSET(0xE8419D0)
#define CLASS_1_372FFC98CCCE471B_REMOVE_ONCLOSEREQUESTED_OFFSET UNITYSDK_OFFSET(0xE841910)
#define CLASS_1_372FFC98CCCE471B_REMOVE_ONITEMSCHANGED_OFFSET UNITYSDK_OFFSET(0xE841790)
#define CLASS_1_372FFC98CCCE471B_REMOVE_ONTABCHANGED_OFFSET UNITYSDK_OFFSET(0xE841850)
#define CLASS_1_372FFC98CCCE471B__CTOR_OFFSET UNITYSDK_OFFSET(0xE841A30)

inline static constexpr unsigned int Class_1_372FFC98CCCE471B_TypeDefinitionIndex = 79522;

class Class_1_372FFC98CCCE471B : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_1489* MDBCOONFKIL; // 0x10
	::System::Collections::Generic::HashSet_1<::RPG::Client::MechCraft::MechCraftAttributeType>* KMPGGJLPBHL; // 0x18
	::System::Action* OnCloseRequested; // 0x20
	::System::Collections::Generic::List_1<::Class_1_1F2EF71AD4C135CE*>* BNJOHILBFPI; // 0x28
	::Class_0_16E4307DCC419505_397* NLLHOBMNCDJ; // 0x30
	::System::Action* OnTabChanged; // 0x38
	::System::Action* HandleHintUnavailable; // 0x40
	::System::Collections::Generic::HashSet_1<::RPG::Client::MechCraft::MechCraftChipTraitType>* NDEAFLKFPIG; // 0x48
	::System::Action* OnItemsChanged; // 0x50
	::Class_0_16E4307DCC419505_397* CODBDIOPHNJ; // 0x58
	::System::Collections::Generic::List_1<::Class_1_1F2EF71AD4C135CE*>* OJOOJMGKMKH; // 0x60
	::RPG::Client::MechCraft::ViewModel::MechCraftChipMoldFilterTabType NJCKMKAGFLE; // 0x68

	::System::Void _ctor(::Class_0_16E4307DCC419505_1489* a1, ::System::Collections::Generic::List_1<::Class_1_1F2EF71AD4C135CE*>* a2, ::System::Collections::Generic::List_1<::Class_1_1F2EF71AD4C135CE*>* a3, ::System::Collections::Generic::HashSet_1<::RPG::Client::MechCraft::MechCraftAttributeType>* a4, ::System::Collections::Generic::HashSet_1<::RPG::Client::MechCraft::MechCraftChipTraitType>* a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1489*, ::System::Collections::Generic::List_1<::Class_1_1F2EF71AD4C135CE*>*, ::System::Collections::Generic::List_1<::Class_1_1F2EF71AD4C135CE*>*, ::System::Collections::Generic::HashSet_1<::RPG::Client::MechCraft::MechCraftAttributeType>*, ::System::Collections::Generic::HashSet_1<::RPG::Client::MechCraft::MechCraftChipTraitType>*))((::PBYTE)hIl2Cpp + CLASS_1_372FFC98CCCE471B__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Collections::Generic::IReadOnlyList_1<::Class_1_1F2EF71AD4C135CE*>* Method_1_4E0CCFC7E8FEF732()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::Class_1_1F2EF71AD4C135CE*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_372FFC98CCCE471B_METHOD_1_4E0CCFC7E8FEF732_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_372FFC98CCCE471B_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_372FFC98CCCE471B_METHOD_1_391A84BCD9F51317_1_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_397* Method_1_B213056103887067()
	{
		return ((::Class_0_16E4307DCC419505_397*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_372FFC98CCCE471B_METHOD_1_B213056103887067_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_397* Method_1_B213056103887067_1()
	{
		return ((::Class_0_16E4307DCC419505_397*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_372FFC98CCCE471B_METHOD_1_B213056103887067_1_OFFSET))(this);
	}

	::System::Void add_OnItemsChanged(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_372FFC98CCCE471B_ADD_ONITEMSCHANGED_OFFSET))(this, a1);
	}

	::System::Void remove_OnItemsChanged(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_372FFC98CCCE471B_REMOVE_ONITEMSCHANGED_OFFSET))(this, a1);
	}

	::System::Void add_OnTabChanged(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_372FFC98CCCE471B_ADD_ONTABCHANGED_OFFSET))(this, a1);
	}

	::System::Void remove_OnTabChanged(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_372FFC98CCCE471B_REMOVE_ONTABCHANGED_OFFSET))(this, a1);
	}

	::System::Void add_OnCloseRequested(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_372FFC98CCCE471B_ADD_ONCLOSEREQUESTED_OFFSET))(this, a1);
	}

	::System::Void remove_OnCloseRequested(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_372FFC98CCCE471B_REMOVE_ONCLOSEREQUESTED_OFFSET))(this, a1);
	}

	::System::Void add_HandleHintUnavailable(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_372FFC98CCCE471B_ADD_HANDLEHINTUNAVAILABLE_OFFSET))(this, a1);
	}

	::System::Void remove_HandleHintUnavailable(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_372FFC98CCCE471B_REMOVE_HANDLEHINTUNAVAILABLE_OFFSET))(this, a1);
	}

	::System::Void Method_1_DAEB67F34AF80609()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_372FFC98CCCE471B_METHOD_1_DAEB67F34AF80609_OFFSET))(this);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_372FFC98CCCE471B_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_1_30D1209326FA87FC_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_372FFC98CCCE471B_METHOD_1_30D1209326FA87FC_1_OFFSET))(this);
	}

	::System::Void Method_1_8F7825DAFFB9B517()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_372FFC98CCCE471B_METHOD_1_8F7825DAFFB9B517_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_372FFC98CCCE471B_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_372FFC98CCCE471B_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_30D1209326FA87FC_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_372FFC98CCCE471B_METHOD_1_30D1209326FA87FC_2_OFFSET))(this);
	}

	::System::Void Method_1_13546BC2E4B5F25D(::RPG::Client::MechCraft::ViewModel::MechCraftChipMoldFilterTabType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftChipMoldFilterTabType))((::PBYTE)hIl2Cpp + CLASS_1_372FFC98CCCE471B_METHOD_1_13546BC2E4B5F25D_OFFSET))(this, a1);
	}

	::System::Void Method_1_B50BC205C61B0618(::Class_1_1F2EF71AD4C135CE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1F2EF71AD4C135CE*))((::PBYTE)hIl2Cpp + CLASS_1_372FFC98CCCE471B_METHOD_1_B50BC205C61B0618_OFFSET))(this, a1);
	}
};
