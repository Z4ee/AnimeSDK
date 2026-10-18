#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1ABDF1855FCDB08F;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Immutable { template <typename T> class IImmutableSet_1; }

#define CLASS_1_0EAACD912373AD92_ADD_ONONLYORDERINGCHANGED_OFFSET UNITYSDK_OFFSET(0x1C545780)
#define CLASS_1_0EAACD912373AD92_METHOD_1_39A972DE36048D68_OFFSET UNITYSDK_OFFSET(0x1C545A30)
#define CLASS_1_0EAACD912373AD92_METHOD_1_538706B04C2A4407_OFFSET UNITYSDK_OFFSET(0x1C545920)
#define CLASS_1_0EAACD912373AD92_METHOD_1_AFF657DAE7825F7B_OFFSET UNITYSDK_OFFSET(0x1C546070)
#define CLASS_1_0EAACD912373AD92_METHOD_1_CFC95121222309BD_OFFSET UNITYSDK_OFFSET(0x1C545840)
#define CLASS_1_0EAACD912373AD92_METHOD_1_DA41DCAD7C27DB4D_OFFSET UNITYSDK_OFFSET(0x1C545740)
#define CLASS_1_0EAACD912373AD92_REMOVE_ONONLYORDERINGCHANGED_OFFSET UNITYSDK_OFFSET(0x1C5457E0)
#define CLASS_1_0EAACD912373AD92__CTOR_OFFSET UNITYSDK_OFFSET(0x1C546220)

inline static constexpr unsigned int Class_1_0EAACD912373AD92_TypeDefinitionIndex = 41814;

class Class_1_0EAACD912373AD92 : public ::System::Object
{
public:
	::System::Action* OnOnlyOrderingChanged; // 0x10
	::System::Collections::Generic::List_1<::Class_1_1ABDF1855FCDB08F*>* AOCPCGICFKB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0EAACD912373AD92__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::Class_1_1ABDF1855FCDB08F*>* Method_1_DA41DCAD7C27DB4D()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::Class_1_1ABDF1855FCDB08F*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0EAACD912373AD92_METHOD_1_DA41DCAD7C27DB4D_OFFSET))(this);
	}

	::System::Void add_OnOnlyOrderingChanged(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_0EAACD912373AD92_ADD_ONONLYORDERINGCHANGED_OFFSET))(this, a1);
	}

	::System::Void remove_OnOnlyOrderingChanged(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_0EAACD912373AD92_REMOVE_ONONLYORDERINGCHANGED_OFFSET))(this, a1);
	}

	::System::Void Method_1_CFC95121222309BD(::Class_1_1ABDF1855FCDB08F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1ABDF1855FCDB08F*))((::PBYTE)hIl2Cpp + CLASS_1_0EAACD912373AD92_METHOD_1_CFC95121222309BD_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_538706B04C2A4407(::Class_1_1ABDF1855FCDB08F* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_1ABDF1855FCDB08F*))((::PBYTE)hIl2Cpp + CLASS_1_0EAACD912373AD92_METHOD_1_538706B04C2A4407_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IReadOnlyList_1<::System::Int32>* Method_1_39A972DE36048D68(::System::Collections::Immutable::IImmutableSet_1<::Class_1_1ABDF1855FCDB08F*>* a1)
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::System::Int32>*(*)(::PVOID, ::System::Collections::Immutable::IImmutableSet_1<::Class_1_1ABDF1855FCDB08F*>*))((::PBYTE)hIl2Cpp + CLASS_1_0EAACD912373AD92_METHOD_1_39A972DE36048D68_OFFSET))(this, a1);
	}

	::System::Void Method_1_AFF657DAE7825F7B(::Class_1_1ABDF1855FCDB08F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1ABDF1855FCDB08F*))((::PBYTE)hIl2Cpp + CLASS_1_0EAACD912373AD92_METHOD_1_AFF657DAE7825F7B_OFFSET))(this, a1);
	}
};
