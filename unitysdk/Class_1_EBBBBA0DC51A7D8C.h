#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_45BB92167AED63A0_96;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_EBBBBA0DC51A7D8C_GET_CAKEID_OFFSET UNITYSDK_OFFSET(0x12ABDD80)
#define CLASS_1_EBBBBA0DC51A7D8C_GET_FRIENDUIDLIST_OFFSET UNITYSDK_OFFSET(0x12ABDDA0)
#define CLASS_1_EBBBBA0DC51A7D8C_METHOD_1_51521C74BCE1597B_OFFSET UNITYSDK_OFFSET(0x12ABDE10)
#define CLASS_1_EBBBBA0DC51A7D8C_METHOD_1_AA2D3E889C8A52CA_OFFSET UNITYSDK_OFFSET(0x12ABDDC0)
#define CLASS_1_EBBBBA0DC51A7D8C_SET_CAKEID_OFFSET UNITYSDK_OFFSET(0x12ABDD90)
#define CLASS_1_EBBBBA0DC51A7D8C_SET_FRIENDUIDLIST_OFFSET UNITYSDK_OFFSET(0x12ABDDB0)
#define CLASS_1_EBBBBA0DC51A7D8C__CTOR_OFFSET UNITYSDK_OFFSET(0x12ABE0E0)

inline static constexpr unsigned int Class_1_EBBBBA0DC51A7D8C_TypeDefinitionIndex = 58018;

class Class_1_EBBBBA0DC51A7D8C : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::UInt32>* _FriendUIDList_k__BackingField; // 0x10
	::System::UInt32 _CakeID_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBBBBA0DC51A7D8C__CTOR_OFFSET))(this);
	}

	::System::UInt32 get_CakeID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBBBBA0DC51A7D8C_GET_CAKEID_OFFSET))(this);
	}

	::System::Void set_CakeID(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_EBBBBA0DC51A7D8C_SET_CAKEID_OFFSET))(this, value);
	}

	::System::Collections::Generic::HashSet_1<::System::UInt32>* get_FriendUIDList()
	{
		return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBBBBA0DC51A7D8C_GET_FRIENDUIDLIST_OFFSET))(this);
	}

	::System::Void set_FriendUIDList(::System::Collections::Generic::HashSet_1<::System::UInt32>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_EBBBBA0DC51A7D8C_SET_FRIENDUIDLIST_OFFSET))(this, value);
	}

	::System::UInt32 Method_1_AA2D3E889C8A52CA()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBBBBA0DC51A7D8C_METHOD_1_AA2D3E889C8A52CA_OFFSET))(this);
	}

	::System::Void Method_1_51521C74BCE1597B(::Class_1_45BB92167AED63A0_96* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_45BB92167AED63A0_96*))((::PBYTE)hIl2Cpp + CLASS_1_EBBBBA0DC51A7D8C_METHOD_1_51521C74BCE1597B_OFFSET))(this, a1);
	}
};
