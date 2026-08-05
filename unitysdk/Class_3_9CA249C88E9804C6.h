#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/Class_3_9CA249C88E9804C6_Struct_2_F6127C7E138198D2.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_327;
class Class_2_0206DD479BB5C906;
class Class_2_7A1F9B1E855D33CF;
class Class_2_D1970C03380B1430;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Rigidbody; }

#define CLASS_3_9CA249C88E9804C6_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x1593D350)
#define CLASS_3_9CA249C88E9804C6_METHOD_3_0B74A83AA6F46BC3_OFFSET UNITYSDK_OFFSET(0x1593DFF0)
#define CLASS_3_9CA249C88E9804C6_METHOD_3_141729CB6B2ECC94_OFFSET UNITYSDK_OFFSET(0x1593DA90)
#define CLASS_3_9CA249C88E9804C6_METHOD_3_218AE60FD7CF858E_OFFSET UNITYSDK_OFFSET(0x1593DDB0)
#define CLASS_3_9CA249C88E9804C6_METHOD_3_40E490E2772D5D75_OFFSET UNITYSDK_OFFSET(0x1593CB60)
#define CLASS_3_9CA249C88E9804C6_METHOD_3_413470465609AB18_OFFSET UNITYSDK_OFFSET(0x159157A0)
#define CLASS_3_9CA249C88E9804C6_METHOD_3_5C00C2EE4FCF347E_OFFSET UNITYSDK_OFFSET(0x1593D440)
#define CLASS_3_9CA249C88E9804C6_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x1593D450)
#define CLASS_3_9CA249C88E9804C6_METHOD_3_A7C25C16DAF12EC1_OFFSET UNITYSDK_OFFSET(0x1593E250)
#define CLASS_3_9CA249C88E9804C6_METHOD_3_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0x1593DFE0)
#define CLASS_3_9CA249C88E9804C6_METHOD_3_C1EB8B6811041144_OFFSET UNITYSDK_OFFSET(0x1593D5B0)
#define CLASS_3_9CA249C88E9804C6_METHOD_3_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x1593E240)
#define CLASS_3_9CA249C88E9804C6_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x1593DF60)
#define CLASS_3_9CA249C88E9804C6_METHOD_3_D240830C442C70A4_OFFSET UNITYSDK_OFFSET(0x1593D4E0)
#define CLASS_3_9CA249C88E9804C6_METHOD_3_D37FAD0A6AA04B25_OFFSET UNITYSDK_OFFSET(0x1593D420)
#define CLASS_3_9CA249C88E9804C6_METHOD_3_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1593DDA0)
#define CLASS_3_9CA249C88E9804C6_METHOD_3_FF11A7936E830212_OFFSET UNITYSDK_OFFSET(0x1593D8A0)
#define CLASS_3_9CA249C88E9804C6_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x1593C770)
#define CLASS_3_9CA249C88E9804C6__CCTOR_OFFSET UNITYSDK_OFFSET(0x1593D3A0)
#define CLASS_3_9CA249C88E9804C6__CTOR_OFFSET UNITYSDK_OFFSET(0x1593CBE0)

inline static constexpr unsigned int Class_3_9CA249C88E9804C6_TypeDefinitionIndex = 45431;

class Class_3_9CA249C88E9804C6 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	static ::System::Collections::Generic::List_1<::System::Boolean>** StaticGet_Field_3_23()
	{
		return (::System::Collections::Generic::List_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_9CA249C88E9804C6_TypeDefinitionIndex)->GetStaticField(0x43F90);
	}
	// static const ::System::Int32 Field_3_24 = 0x38; // 0x0
	::Class_2_D1970C03380B1430* Field_3_9; // 0x48
	::System::Collections::Generic::List_1<::Class_2_0206DD479BB5C906*>* Field_3_17; // 0x50
	::System::Collections::Generic::List_1<::Class_2_0206DD479BB5C906*>* Field_3_16; // 0x58
	::Class_3_9CA249C88E9804C6_Struct_2_F6127C7E138198D2 Field_3_26; // 0x60
	::Class_2_7A1F9B1E855D33CF* Field_3_7; // 0x98
	::UnityEngine::Rigidbody* Field_3_15; // 0xA0
	::Class_0_16E4307DCC419505_327* Field_3_8; // 0xA8
	::System::Action* Field_3_13; // 0xB0
	::System::Action* Field_3_12; // 0xB8
	::UnityEngine::Vector3 Field_3_5; // 0xC0
	::UnityEngine::Vector3 Field_3_4; // 0xCC
	::System::Boolean Field_3_0; // 0xD8
	::System::Boolean Field_3_18; // 0xD9
	::System::Boolean Field_3_19; // 0xDA
	::System::Boolean Field_3_6; // 0xDB
	::System::Int32 Field_3_20; // 0xDC
	::System::Single Field_3_11; // 0xE0
	::UnityEngine::Vector3 Field_3_25; // 0xE4
	::UnityEngine::Vector3 Field_3_21; // 0xF0
	::System::Int32 Field_3_27; // 0xFC
	::System::Boolean Field_3_22; // 0x100
	::System::Boolean Field_3_14; // 0x101
	::System::Single Field_3_10; // 0x104

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9CA249C88E9804C6__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_9CA249C88E9804C6__CCTOR_OFFSET))();
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9CA249C88E9804C6_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9CA249C88E9804C6_GETCLASSID_OFFSET))(this);
	}

	::System::Void Method_3_413470465609AB18(::UnityEngine::Rigidbody* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rigidbody*))((::PBYTE)hIl2Cpp + CLASS_3_9CA249C88E9804C6_METHOD_3_413470465609AB18_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_3_D37FAD0A6AA04B25()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9CA249C88E9804C6_METHOD_3_D37FAD0A6AA04B25_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_327* Method_3_5C00C2EE4FCF347E()
	{
		return ((::Class_0_16E4307DCC419505_327*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9CA249C88E9804C6_METHOD_3_5C00C2EE4FCF347E_OFFSET))(this);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9CA249C88E9804C6_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Boolean Method_3_D240830C442C70A4()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9CA249C88E9804C6_METHOD_3_D240830C442C70A4_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_3_C1EB8B6811041144()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9CA249C88E9804C6_METHOD_3_C1EB8B6811041144_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_3_FF11A7936E830212()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9CA249C88E9804C6_METHOD_3_FF11A7936E830212_OFFSET))(this);
	}

	::UnityEngine::Rigidbody* Method_3_141729CB6B2ECC94()
	{
		return ((::UnityEngine::Rigidbody*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9CA249C88E9804C6_METHOD_3_141729CB6B2ECC94_OFFSET))(this);
	}

	::System::Boolean Method_3_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9CA249C88E9804C6_METHOD_3_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_3_218AE60FD7CF858E(::Class_0_16E4307DCC419505_327* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_327*))((::PBYTE)hIl2Cpp + CLASS_3_9CA249C88E9804C6_METHOD_3_218AE60FD7CF858E_OFFSET))(this, a1);
	}

	static ::Class_3_9CA249C88E9804C6* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_9CA249C88E9804C6*(*)())((::PBYTE)hIl2Cpp + CLASS_3_9CA249C88E9804C6_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}

	::System::Void Method_3_C114A1F8E08B6F92(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_9CA249C88E9804C6_METHOD_3_C114A1F8E08B6F92_OFFSET))(this, a1);
	}

	::System::Nullable_1<::UnityEngine::Quaternion> Method_3_0B74A83AA6F46BC3()
	{
		return ((::System::Nullable_1<::UnityEngine::Quaternion>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9CA249C88E9804C6_METHOD_3_0B74A83AA6F46BC3_OFFSET))(this);
	}

	::System::Int32 Method_3_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9CA249C88E9804C6_METHOD_3_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Void Method_3_40E490E2772D5D75(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_9CA249C88E9804C6_METHOD_3_40E490E2772D5D75_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_3_A7C25C16DAF12EC1()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9CA249C88E9804C6_METHOD_3_A7C25C16DAF12EC1_OFFSET))(this);
	}
};
