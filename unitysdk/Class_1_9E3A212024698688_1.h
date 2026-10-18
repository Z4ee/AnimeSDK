#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_9E3A212024698688_1_GET_UNLOCKCHIP_OFFSET UNITYSDK_OFFSET(0x1640C960)
#define CLASS_1_9E3A212024698688_1_METHOD_1_E9BA5A6E713505FE_OFFSET UNITYSDK_OFFSET(0x1640C980)
#define CLASS_1_9E3A212024698688_1_SET_UNLOCKCHIP_OFFSET UNITYSDK_OFFSET(0x1640C970)
#define CLASS_1_9E3A212024698688_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1640C9F0)

inline static constexpr unsigned int Class_1_9E3A212024698688_1_TypeDefinitionIndex = 80185;

class Class_1_9E3A212024698688_1 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* _UnlockChip_k__BackingField; // 0x10

	::System::Void _ctor(::System::Collections::Generic::List_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_9E3A212024698688_1__CTOR_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::UInt32>* get_UnlockChip()
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9E3A212024698688_1_GET_UNLOCKCHIP_OFFSET))(this);
	}

	::System::Void set_UnlockChip(::System::Collections::Generic::List_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_9E3A212024698688_1_SET_UNLOCKCHIP_OFFSET))(this, a1);
	}

	static ::Class_1_9E3A212024698688_1* Method_1_E9BA5A6E713505FE(::System::Collections::Generic::List_1<::System::UInt32>* a1)
	{
		return ((::Class_1_9E3A212024698688_1*(*)(::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_9E3A212024698688_1_METHOD_1_E9BA5A6E713505FE_OFFSET))(a1);
	}
};
