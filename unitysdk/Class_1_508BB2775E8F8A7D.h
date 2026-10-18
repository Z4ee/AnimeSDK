#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_114;
class Class_1_B7A5399E4956900D;
class Class_1_D2B75A4CD0E284E7;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_508BB2775E8F8A7D_GET_EXAMCONFIG_OFFSET UNITYSDK_OFFSET(0x12D0E5B0)
#define CLASS_1_508BB2775E8F8A7D_GET_EXAMINER_OFFSET UNITYSDK_OFFSET(0x12D0E590)
#define CLASS_1_508BB2775E8F8A7D_GET_ISRETURNTOMAZE_OFFSET UNITYSDK_OFFSET(0x12D0E5D0)
#define CLASS_1_508BB2775E8F8A7D_GET_PRODUCT_OFFSET UNITYSDK_OFFSET(0x12D0E570)
#define CLASS_1_508BB2775E8F8A7D_GET_UNLOCKMECHIDS_OFFSET UNITYSDK_OFFSET(0x12D0E5F0)
#define CLASS_1_508BB2775E8F8A7D_METHOD_1_CE0F142EC5128CEE_OFFSET UNITYSDK_OFFSET(0x12D0E610)
#define CLASS_1_508BB2775E8F8A7D_SET_EXAMCONFIG_OFFSET UNITYSDK_OFFSET(0x12D0E5C0)
#define CLASS_1_508BB2775E8F8A7D_SET_EXAMINER_OFFSET UNITYSDK_OFFSET(0x12D0E5A0)
#define CLASS_1_508BB2775E8F8A7D_SET_ISRETURNTOMAZE_OFFSET UNITYSDK_OFFSET(0x12D0E5E0)
#define CLASS_1_508BB2775E8F8A7D_SET_PRODUCT_OFFSET UNITYSDK_OFFSET(0x12D0E580)
#define CLASS_1_508BB2775E8F8A7D_SET_UNLOCKMECHIDS_OFFSET UNITYSDK_OFFSET(0x12D0E600)
#define CLASS_1_508BB2775E8F8A7D__CTOR_OFFSET UNITYSDK_OFFSET(0x12D0E6B0)

inline static constexpr unsigned int Class_1_508BB2775E8F8A7D_TypeDefinitionIndex = 80250;

class Class_1_508BB2775E8F8A7D : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_114* _ExamConfig_k__BackingField; // 0x10
	::Class_1_B7A5399E4956900D* _Examiner_k__BackingField; // 0x18
	::Class_1_D2B75A4CD0E284E7* _Product_k__BackingField; // 0x20
	::System::Collections::Generic::List_1<::System::UInt32>* _UnlockMechIDs_k__BackingField; // 0x28
	::System::Boolean _IsReturnToMaze_k__BackingField; // 0x30

	::System::Void _ctor(::Class_1_D2B75A4CD0E284E7* a1, ::Class_1_B7A5399E4956900D* a2, ::Class_0_16E4307DCC419505_114* a3, ::System::Collections::Generic::List_1<::System::UInt32>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D2B75A4CD0E284E7*, ::Class_1_B7A5399E4956900D*, ::Class_0_16E4307DCC419505_114*, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_508BB2775E8F8A7D__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::Class_1_D2B75A4CD0E284E7* get_Product()
	{
		return ((::Class_1_D2B75A4CD0E284E7*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_508BB2775E8F8A7D_GET_PRODUCT_OFFSET))(this);
	}

	::System::Void set_Product(::Class_1_D2B75A4CD0E284E7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D2B75A4CD0E284E7*))((::PBYTE)hIl2Cpp + CLASS_1_508BB2775E8F8A7D_SET_PRODUCT_OFFSET))(this, a1);
	}

	::Class_1_B7A5399E4956900D* get_Examiner()
	{
		return ((::Class_1_B7A5399E4956900D*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_508BB2775E8F8A7D_GET_EXAMINER_OFFSET))(this);
	}

	::System::Void set_Examiner(::Class_1_B7A5399E4956900D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B7A5399E4956900D*))((::PBYTE)hIl2Cpp + CLASS_1_508BB2775E8F8A7D_SET_EXAMINER_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_114* get_ExamConfig()
	{
		return ((::Class_0_16E4307DCC419505_114*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_508BB2775E8F8A7D_GET_EXAMCONFIG_OFFSET))(this);
	}

	::System::Void set_ExamConfig(::Class_0_16E4307DCC419505_114* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_114*))((::PBYTE)hIl2Cpp + CLASS_1_508BB2775E8F8A7D_SET_EXAMCONFIG_OFFSET))(this, a1);
	}

	::System::Boolean get_IsReturnToMaze()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_508BB2775E8F8A7D_GET_ISRETURNTOMAZE_OFFSET))(this);
	}

	::System::Void set_IsReturnToMaze(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_508BB2775E8F8A7D_SET_ISRETURNTOMAZE_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::UInt32>* get_UnlockMechIDs()
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_508BB2775E8F8A7D_GET_UNLOCKMECHIDS_OFFSET))(this);
	}

	::System::Void set_UnlockMechIDs(::System::Collections::Generic::List_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_508BB2775E8F8A7D_SET_UNLOCKMECHIDS_OFFSET))(this, a1);
	}

	static ::Class_1_508BB2775E8F8A7D* Method_1_CE0F142EC5128CEE(::Class_1_D2B75A4CD0E284E7* a1, ::Class_1_B7A5399E4956900D* a2, ::Class_0_16E4307DCC419505_114* a3, ::System::Collections::Generic::List_1<::System::UInt32>* a4)
	{
		return ((::Class_1_508BB2775E8F8A7D*(*)(::Class_1_D2B75A4CD0E284E7*, ::Class_1_B7A5399E4956900D*, ::Class_0_16E4307DCC419505_114*, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_508BB2775E8F8A7D_METHOD_1_CE0F142EC5128CEE_OFFSET))(a1, a2, a3, a4);
	}
};
