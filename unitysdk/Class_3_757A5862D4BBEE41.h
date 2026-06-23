#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/Class_3_757A5862D4BBEE41_Struct_2_E658502528B7C034_2.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_318;
class Class_2_0206DD479BB5C906;
class Class_2_7A1F9B1E855D33CF;
class Class_2_D1970C03380B1430;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Rigidbody; }

#define CLASS_3_757A5862D4BBEE41_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x130DFAE0)
#define CLASS_3_757A5862D4BBEE41_METHOD_3_141729CB6B2ECC94_OFFSET UNITYSDK_OFFSET(0x130C5A20)
#define CLASS_3_757A5862D4BBEE41_METHOD_3_3C3329D13784F0E3_OFFSET UNITYSDK_OFFSET(0x130C5D20)
#define CLASS_3_757A5862D4BBEE41_METHOD_3_40E490E2772D5D75_OFFSET UNITYSDK_OFFSET(0x130DF3C0)
#define CLASS_3_757A5862D4BBEE41_METHOD_3_413470465609AB18_OFFSET UNITYSDK_OFFSET(0x130E03E0)
#define CLASS_3_757A5862D4BBEE41_METHOD_3_5C00C2EE4FCF347E_OFFSET UNITYSDK_OFFSET(0x130DFBF0)
#define CLASS_3_757A5862D4BBEE41_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x130DFCC0)
#define CLASS_3_757A5862D4BBEE41_METHOD_3_A7C25C16DAF12EC1_OFFSET UNITYSDK_OFFSET(0x130DFBB0)
#define CLASS_3_757A5862D4BBEE41_METHOD_3_ABC1B75CF5A56AEB_OFFSET UNITYSDK_OFFSET(0x130DFD70)
#define CLASS_3_757A5862D4BBEE41_METHOD_3_C0742DA62FF9F714_OFFSET UNITYSDK_OFFSET(0x130E01A0)
#define CLASS_3_757A5862D4BBEE41_METHOD_3_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0x130E03D0)
#define CLASS_3_757A5862D4BBEE41_METHOD_3_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x130E0190)
#define CLASS_3_757A5862D4BBEE41_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x130E0100)
#define CLASS_3_757A5862D4BBEE41_METHOD_3_D240830C442C70A4_OFFSET UNITYSDK_OFFSET(0x130DFC00)
#define CLASS_3_757A5862D4BBEE41_METHOD_3_D37FAD0A6AA04B25_OFFSET UNITYSDK_OFFSET(0x130DFD50)
#define CLASS_3_757A5862D4BBEE41_METHOD_3_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x130E0180)
#define CLASS_3_757A5862D4BBEE41_METHOD_3_FF11A7936E830212_OFFSET UNITYSDK_OFFSET(0x130DFF10)
#define CLASS_3_757A5862D4BBEE41_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x130DF000)
#define CLASS_3_757A5862D4BBEE41__CCTOR_OFFSET UNITYSDK_OFFSET(0x130DFB30)
#define CLASS_3_757A5862D4BBEE41__CTOR_OFFSET UNITYSDK_OFFSET(0x130DF440)

inline static constexpr unsigned int Class_3_757A5862D4BBEE41_TypeDefinitionIndex = 43698;

class Class_3_757A5862D4BBEE41 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	static ::System::Collections::Generic::List_1<::System::Boolean>** StaticGet_Field_3_13()
	{
		return (::System::Collections::Generic::List_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_757A5862D4BBEE41_TypeDefinitionIndex)->GetStaticField(0x45FF0);
	}
	// static const ::System::Int32 Field_3_20 = 0x38; // 0x0
	::Class_0_16E4307DCC419505_318* Field_3_6; // 0x48
	::System::Collections::Generic::List_1<::Class_2_0206DD479BB5C906*>* Field_3_12; // 0x50
	::System::Collections::Generic::List_1<::Class_2_0206DD479BB5C906*>* Field_3_11; // 0x58
	::Class_2_D1970C03380B1430* Field_3_5; // 0x60
	::UnityEngine::Rigidbody* Field_3_7; // 0x68
	::Class_2_7A1F9B1E855D33CF* Field_3_0; // 0x70
	::System::Boolean Field_3_14; // 0x78
	::System::Boolean Field_3_9; // 0x79
	::System::Boolean Field_3_8; // 0x7A
	::UnityEngine::Vector3 Field_3_2; // 0x7C
	::System::Int32 Field_3_17; // 0x88
	::UnityEngine::Vector3 Field_3_19; // 0x8C
	::System::Int32 Field_3_16; // 0x98
	::System::Boolean Field_3_1; // 0x9C
	::System::Boolean Field_3_10; // 0x9D
	::UnityEngine::Vector3 Field_3_15; // 0xA0
	::Class_3_757A5862D4BBEE41_Struct_2_E658502528B7C034_2 Field_3_18; // 0xAC
	::UnityEngine::Vector3 Field_3_3; // 0xD4
	::System::Single Field_3_4; // 0xE0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_757A5862D4BBEE41__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_757A5862D4BBEE41__CCTOR_OFFSET))();
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_757A5862D4BBEE41_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_757A5862D4BBEE41_GETCLASSID_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_3_A7C25C16DAF12EC1()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_757A5862D4BBEE41_METHOD_3_A7C25C16DAF12EC1_OFFSET))(this);
	}

	::UnityEngine::Rigidbody* Method_3_141729CB6B2ECC94()
	{
		return ((::UnityEngine::Rigidbody*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_757A5862D4BBEE41_METHOD_3_141729CB6B2ECC94_OFFSET))(this);
	}

	::System::Void Method_3_40E490E2772D5D75(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_757A5862D4BBEE41_METHOD_3_40E490E2772D5D75_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_318* Method_3_5C00C2EE4FCF347E()
	{
		return ((::Class_0_16E4307DCC419505_318*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_757A5862D4BBEE41_METHOD_3_5C00C2EE4FCF347E_OFFSET))(this);
	}

	::System::Boolean Method_3_D240830C442C70A4()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_757A5862D4BBEE41_METHOD_3_D240830C442C70A4_OFFSET))(this);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_757A5862D4BBEE41_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_3_D37FAD0A6AA04B25()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_757A5862D4BBEE41_METHOD_3_D37FAD0A6AA04B25_OFFSET))(this);
	}

	::System::Void Method_3_ABC1B75CF5A56AEB(::Class_0_16E4307DCC419505_318* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_318*))((::PBYTE)hIl2Cpp + CLASS_3_757A5862D4BBEE41_METHOD_3_ABC1B75CF5A56AEB_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_3_FF11A7936E830212()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_757A5862D4BBEE41_METHOD_3_FF11A7936E830212_OFFSET))(this);
	}

	static ::Class_3_757A5862D4BBEE41* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_757A5862D4BBEE41*(*)())((::PBYTE)hIl2Cpp + CLASS_3_757A5862D4BBEE41_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}

	::System::Boolean Method_3_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_757A5862D4BBEE41_METHOD_3_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Int32 Method_3_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_757A5862D4BBEE41_METHOD_3_C74CF020AA42ED85_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_3_3C3329D13784F0E3()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_757A5862D4BBEE41_METHOD_3_3C3329D13784F0E3_OFFSET))(this);
	}

	::System::Nullable_1<::UnityEngine::Quaternion> Method_3_C0742DA62FF9F714()
	{
		return ((::System::Nullable_1<::UnityEngine::Quaternion>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_757A5862D4BBEE41_METHOD_3_C0742DA62FF9F714_OFFSET))(this);
	}

	::System::Void Method_3_C114A1F8E08B6F92(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_757A5862D4BBEE41_METHOD_3_C114A1F8E08B6F92_OFFSET))(this, a1);
	}

	::System::Void Method_3_413470465609AB18(::UnityEngine::Rigidbody* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rigidbody*))((::PBYTE)hIl2Cpp + CLASS_3_757A5862D4BBEE41_METHOD_3_413470465609AB18_OFFSET))(this, a1);
	}
};
