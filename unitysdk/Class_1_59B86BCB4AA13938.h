#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_45BB92167AED63A0_76;
class Class_1_D17272E82AE804C2_924;
class Class_1_F487A56015EDF324_10;
namespace RPG::Client { class RogueAeonBuffInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_59B86BCB4AA13938_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18E198F0)
#define CLASS_1_59B86BCB4AA13938_GET_SELECTABLEAEONIDLIST_OFFSET UNITYSDK_OFFSET(0x18E197B0)
#define CLASS_1_59B86BCB4AA13938_GET_SELECTEDAEONID_OFFSET UNITYSDK_OFFSET(0x18E197D0)
#define CLASS_1_59B86BCB4AA13938_GET_UNLOCKAEONENHANCENUM_OFFSET UNITYSDK_OFFSET(0x18E197F0)
#define CLASS_1_59B86BCB4AA13938_METHOD_1_097468641FDED14E_OFFSET UNITYSDK_OFFSET(0x18E19BD0)
#define CLASS_1_59B86BCB4AA13938_METHOD_1_12CD8F956BFCC78B_1_OFFSET UNITYSDK_OFFSET(0x18E19AD0)
#define CLASS_1_59B86BCB4AA13938_METHOD_1_12CD8F956BFCC78B_OFFSET UNITYSDK_OFFSET(0x18E199C0)
#define CLASS_1_59B86BCB4AA13938_METHOD_1_8873CF7F1F93BA4F_OFFSET UNITYSDK_OFFSET(0x18E19810)
#define CLASS_1_59B86BCB4AA13938_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x18E19C30)
#define CLASS_1_59B86BCB4AA13938_SET_SELECTABLEAEONIDLIST_OFFSET UNITYSDK_OFFSET(0x18E197C0)
#define CLASS_1_59B86BCB4AA13938_SET_SELECTEDAEONID_OFFSET UNITYSDK_OFFSET(0x18E197E0)
#define CLASS_1_59B86BCB4AA13938_SET_UNLOCKAEONENHANCENUM_OFFSET UNITYSDK_OFFSET(0x18E19800)
#define CLASS_1_59B86BCB4AA13938__CTOR_OFFSET UNITYSDK_OFFSET(0x18E19C80)

inline static constexpr unsigned int Class_1_59B86BCB4AA13938_TypeDefinitionIndex = 67453;

class Class_1_59B86BCB4AA13938 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* _SelectableAeonIDList_k__BackingField; // 0x10
	::RPG::Client::RogueAeonBuffInfo* CICOKEEDKBB; // 0x18
	::System::UInt32 _SelectedAeonID_k__BackingField; // 0x20
	::System::UInt32 _UnlockAeonEnhanceNum_k__BackingField; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_59B86BCB4AA13938__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::UInt32>* get_SelectableAeonIDList()
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_59B86BCB4AA13938_GET_SELECTABLEAEONIDLIST_OFFSET))(this);
	}

	::System::Void set_SelectableAeonIDList(::System::Collections::Generic::List_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_59B86BCB4AA13938_SET_SELECTABLEAEONIDLIST_OFFSET))(this, a1);
	}

	::System::UInt32 get_SelectedAeonID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_59B86BCB4AA13938_GET_SELECTEDAEONID_OFFSET))(this);
	}

	::System::Void set_SelectedAeonID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_59B86BCB4AA13938_SET_SELECTEDAEONID_OFFSET))(this, a1);
	}

	::System::UInt32 get_UnlockAeonEnhanceNum()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_59B86BCB4AA13938_GET_UNLOCKAEONENHANCENUM_OFFSET))(this);
	}

	::System::Void set_UnlockAeonEnhanceNum(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_59B86BCB4AA13938_SET_UNLOCKAEONENHANCENUM_OFFSET))(this, a1);
	}

	::RPG::Client::RogueAeonBuffInfo* Method_1_8873CF7F1F93BA4F()
	{
		return ((::RPG::Client::RogueAeonBuffInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_59B86BCB4AA13938_METHOD_1_8873CF7F1F93BA4F_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_59B86BCB4AA13938_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_12CD8F956BFCC78B(::Class_1_F487A56015EDF324_10* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F487A56015EDF324_10*))((::PBYTE)hIl2Cpp + CLASS_1_59B86BCB4AA13938_METHOD_1_12CD8F956BFCC78B_OFFSET))(this, a1);
	}

	::System::Void Method_1_12CD8F956BFCC78B_1(::Class_1_45BB92167AED63A0_76* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_45BB92167AED63A0_76*))((::PBYTE)hIl2Cpp + CLASS_1_59B86BCB4AA13938_METHOD_1_12CD8F956BFCC78B_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_097468641FDED14E(::Class_1_D17272E82AE804C2_924* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_924*))((::PBYTE)hIl2Cpp + CLASS_1_59B86BCB4AA13938_METHOD_1_097468641FDED14E_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_59B86BCB4AA13938_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}
};
