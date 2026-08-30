#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_45BB92167AED63A0_108;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_9A983717EA5F601B_GET_CAKEID_OFFSET UNITYSDK_OFFSET(0x1593FBF0)
#define CLASS_1_9A983717EA5F601B_GET_FRIENDUIDLIST_OFFSET UNITYSDK_OFFSET(0x1593FC10)
#define CLASS_1_9A983717EA5F601B_METHOD_1_AA2D3E889C8A52CA_OFFSET UNITYSDK_OFFSET(0x1593FC30)
#define CLASS_1_9A983717EA5F601B_METHOD_1_FEECB9D118FB766E_OFFSET UNITYSDK_OFFSET(0x1593FC80)
#define CLASS_1_9A983717EA5F601B_SET_CAKEID_OFFSET UNITYSDK_OFFSET(0x1593FC00)
#define CLASS_1_9A983717EA5F601B_SET_FRIENDUIDLIST_OFFSET UNITYSDK_OFFSET(0x1593FC20)
#define CLASS_1_9A983717EA5F601B__CTOR_OFFSET UNITYSDK_OFFSET(0x15940090)

inline static constexpr unsigned int Class_1_9A983717EA5F601B_TypeDefinitionIndex = 63053;

class Class_1_9A983717EA5F601B : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::UInt32>* _FriendUIDList_k__BackingField; // 0x10
	::System::UInt32 _CakeID_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9A983717EA5F601B__CTOR_OFFSET))(this);
	}

	::System::UInt32 get_CakeID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9A983717EA5F601B_GET_CAKEID_OFFSET))(this);
	}

	::System::Void set_CakeID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_9A983717EA5F601B_SET_CAKEID_OFFSET))(this, a1);
	}

	::System::Collections::Generic::HashSet_1<::System::UInt32>* get_FriendUIDList()
	{
		return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9A983717EA5F601B_GET_FRIENDUIDLIST_OFFSET))(this);
	}

	::System::Void set_FriendUIDList(::System::Collections::Generic::HashSet_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_9A983717EA5F601B_SET_FRIENDUIDLIST_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_AA2D3E889C8A52CA()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9A983717EA5F601B_METHOD_1_AA2D3E889C8A52CA_OFFSET))(this);
	}

	::System::Void Method_1_FEECB9D118FB766E(::Class_1_45BB92167AED63A0_108* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_45BB92167AED63A0_108*))((::PBYTE)hIl2Cpp + CLASS_1_9A983717EA5F601B_METHOD_1_FEECB9D118FB766E_OFFSET))(this, a1);
	}
};
