#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_61AB926B0DCFDD4A_4;
class Class_1_E336D98DD86E4ECB_3;
class Class_1_E9FAC3539FD8861A_17;
namespace RPG::Client { class RogueAeonBuffInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_59B86BCB4AA13938_DISPOSE_OFFSET UNITYSDK_OFFSET(0x113E6510)
#define CLASS_1_59B86BCB4AA13938_GET_SELECTABLEAEONIDLIST_OFFSET UNITYSDK_OFFSET(0x113E63D0)
#define CLASS_1_59B86BCB4AA13938_GET_SELECTEDAEONID_OFFSET UNITYSDK_OFFSET(0x113E63F0)
#define CLASS_1_59B86BCB4AA13938_GET_UNLOCKAEONENHANCENUM_OFFSET UNITYSDK_OFFSET(0x113E6410)
#define CLASS_1_59B86BCB4AA13938_METHOD_1_097468641FDED14E_OFFSET UNITYSDK_OFFSET(0x113E6890)
#define CLASS_1_59B86BCB4AA13938_METHOD_1_4BD9E95D1AEEBF9B_1_OFFSET UNITYSDK_OFFSET(0x113E6750)
#define CLASS_1_59B86BCB4AA13938_METHOD_1_4BD9E95D1AEEBF9B_OFFSET UNITYSDK_OFFSET(0x113E6600)
#define CLASS_1_59B86BCB4AA13938_METHOD_1_8873CF7F1F93BA4F_OFFSET UNITYSDK_OFFSET(0x113E6430)
#define CLASS_1_59B86BCB4AA13938_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x113E68F0)
#define CLASS_1_59B86BCB4AA13938_SET_SELECTABLEAEONIDLIST_OFFSET UNITYSDK_OFFSET(0x113E63E0)
#define CLASS_1_59B86BCB4AA13938_SET_SELECTEDAEONID_OFFSET UNITYSDK_OFFSET(0x113E6400)
#define CLASS_1_59B86BCB4AA13938_SET_UNLOCKAEONENHANCENUM_OFFSET UNITYSDK_OFFSET(0x113E6420)
#define CLASS_1_59B86BCB4AA13938__CTOR_OFFSET UNITYSDK_OFFSET(0x113E6940)

inline static constexpr unsigned int Class_1_59B86BCB4AA13938_TypeDefinitionIndex = 54969;

class Class_1_59B86BCB4AA13938 : public ::System::Object
{
public:
	::RPG::Client::RogueAeonBuffInfo* Field_1_3; // 0x10
	::System::Collections::Generic::List_1<::System::UInt32>* _SelectableAeonIDList_k__BackingField; // 0x18
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

	::System::Void set_SelectableAeonIDList(::System::Collections::Generic::List_1<::System::UInt32>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_59B86BCB4AA13938_SET_SELECTABLEAEONIDLIST_OFFSET))(this, value);
	}

	::System::UInt32 get_SelectedAeonID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_59B86BCB4AA13938_GET_SELECTEDAEONID_OFFSET))(this);
	}

	::System::Void set_SelectedAeonID(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_59B86BCB4AA13938_SET_SELECTEDAEONID_OFFSET))(this, value);
	}

	::System::UInt32 get_UnlockAeonEnhanceNum()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_59B86BCB4AA13938_GET_UNLOCKAEONENHANCENUM_OFFSET))(this);
	}

	::System::Void set_UnlockAeonEnhanceNum(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_59B86BCB4AA13938_SET_UNLOCKAEONENHANCENUM_OFFSET))(this, value);
	}

	::RPG::Client::RogueAeonBuffInfo* Method_1_8873CF7F1F93BA4F()
	{
		return ((::RPG::Client::RogueAeonBuffInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_59B86BCB4AA13938_METHOD_1_8873CF7F1F93BA4F_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_59B86BCB4AA13938_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_4BD9E95D1AEEBF9B(::Class_1_E336D98DD86E4ECB_3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E336D98DD86E4ECB_3*))((::PBYTE)hIl2Cpp + CLASS_1_59B86BCB4AA13938_METHOD_1_4BD9E95D1AEEBF9B_OFFSET))(this, a1);
	}

	::System::Void Method_1_4BD9E95D1AEEBF9B_1(::Class_1_61AB926B0DCFDD4A_4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_61AB926B0DCFDD4A_4*))((::PBYTE)hIl2Cpp + CLASS_1_59B86BCB4AA13938_METHOD_1_4BD9E95D1AEEBF9B_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_097468641FDED14E(::Class_1_E9FAC3539FD8861A_17* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E9FAC3539FD8861A_17*))((::PBYTE)hIl2Cpp + CLASS_1_59B86BCB4AA13938_METHOD_1_097468641FDED14E_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_59B86BCB4AA13938_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}
};
