#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/Class_3_757A5862D4BBEE41_Struct_2_E658502528B7C034_7.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_542;
class Class_2_0206DD479BB5C906;
class Class_2_7A1F9B1E855D33CF;
class Class_2_A7BCFF3A4359DD5D;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Rigidbody; }

#define CLASS_3_757A5862D4BBEE41_GETCLASSID_OFFSET UNITYSDK_OFFSET(0xE8FF9C0)
#define CLASS_3_757A5862D4BBEE41_METHOD_3_141729CB6B2ECC94_OFFSET UNITYSDK_OFFSET(0xE900210)
#define CLASS_3_757A5862D4BBEE41_METHOD_3_3C3329D13784F0E3_OFFSET UNITYSDK_OFFSET(0xE8FFD00)
#define CLASS_3_757A5862D4BBEE41_METHOD_3_40E490E2772D5D75_OFFSET UNITYSDK_OFFSET(0xE8FF290)
#define CLASS_3_757A5862D4BBEE41_METHOD_3_413470465609AB18_OFFSET UNITYSDK_OFFSET(0xE900710)
#define CLASS_3_757A5862D4BBEE41_METHOD_3_5C00C2EE4FCF347E_OFFSET UNITYSDK_OFFSET(0xE8FFAB0)
#define CLASS_3_757A5862D4BBEE41_METHOD_3_9B0C43B0B6D3BA9B_OFFSET UNITYSDK_OFFSET(0xE9005B0)
#define CLASS_3_757A5862D4BBEE41_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0xE900520)
#define CLASS_3_757A5862D4BBEE41_METHOD_3_A7C25C16DAF12EC1_OFFSET UNITYSDK_OFFSET(0xE8FFFE0)
#define CLASS_3_757A5862D4BBEE41_METHOD_3_ABC1B75CF5A56AEB_OFFSET UNITYSDK_OFFSET(0xE900780)
#define CLASS_3_757A5862D4BBEE41_METHOD_3_C0742DA62FF9F714_OFFSET UNITYSDK_OFFSET(0xE8FFAC0)
#define CLASS_3_757A5862D4BBEE41_METHOD_3_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0xE900680)
#define CLASS_3_757A5862D4BBEE41_METHOD_3_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0xE8FFA90)
#define CLASS_3_757A5862D4BBEE41_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0xE900690)
#define CLASS_3_757A5862D4BBEE41_METHOD_3_D37FAD0A6AA04B25_OFFSET UNITYSDK_OFFSET(0xE900760)
#define CLASS_3_757A5862D4BBEE41_METHOD_3_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xE8FFAA0)
#define CLASS_3_757A5862D4BBEE41_METHOD_3_FF11A7936E830212_OFFSET UNITYSDK_OFFSET(0xE900020)
#define CLASS_3_757A5862D4BBEE41_ONCLEAN_OFFSET UNITYSDK_OFFSET(0xE8FEED0)
#define CLASS_3_757A5862D4BBEE41__CCTOR_OFFSET UNITYSDK_OFFSET(0xE8FFA10)
#define CLASS_3_757A5862D4BBEE41__CTOR_OFFSET UNITYSDK_OFFSET(0xE8FF310)

inline static constexpr unsigned int Class_3_757A5862D4BBEE41_TypeDefinitionIndex = 74819;

class Class_3_757A5862D4BBEE41 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	static ::System::Collections::Generic::List_1<::System::Boolean>** StaticGet_Field_3_13()
	{
		return (::System::Collections::Generic::List_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_757A5862D4BBEE41_TypeDefinitionIndex)->GetStaticField(0x31840);
	}
	// static const ::System::Int32 Field_3_20 = 0x35; // 0x0
	::System::Collections::Generic::List_1<::Class_2_0206DD479BB5C906*>* Field_3_12; // 0x48
	::System::Collections::Generic::List_1<::Class_2_0206DD479BB5C906*>* Field_3_11; // 0x50
	::Class_0_16E4307DCC419505_542* Field_3_6; // 0x58
	::Class_2_7A1F9B1E855D33CF* Field_3_0; // 0x60
	::UnityEngine::Rigidbody* Field_3_7; // 0x68
	::Class_2_A7BCFF3A4359DD5D* Field_3_5; // 0x70
	::Class_3_757A5862D4BBEE41_Struct_2_E658502528B7C034_7 Field_3_18; // 0x78
	::UnityEngine::Vector3 Field_3_15; // 0xA0
	::UnityEngine::Vector3 Field_3_3; // 0xAC
	::UnityEngine::Vector3 Field_3_2; // 0xB8
	::System::Int32 Field_3_16; // 0xC4
	::UnityEngine::Vector3 Field_3_19; // 0xC8
	::System::Boolean Field_3_10; // 0xD4
	::System::Boolean Field_3_9; // 0xD5
	::System::Boolean Field_3_1; // 0xD6
	::System::Boolean Field_3_8; // 0xD7
	::System::Boolean Field_3_14; // 0xD8
	::System::Single Field_3_4; // 0xDC
	::System::Int32 Field_3_17; // 0xE0

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

	::System::Int32 Method_3_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_757A5862D4BBEE41_METHOD_3_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Boolean Method_3_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_757A5862D4BBEE41_METHOD_3_F0088C88851A7DFB_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_542* Method_3_5C00C2EE4FCF347E()
	{
		return ((::Class_0_16E4307DCC419505_542*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_757A5862D4BBEE41_METHOD_3_5C00C2EE4FCF347E_OFFSET))(this);
	}

	::System::Nullable_1<::UnityEngine::Quaternion> Method_3_C0742DA62FF9F714()
	{
		return ((::System::Nullable_1<::UnityEngine::Quaternion>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_757A5862D4BBEE41_METHOD_3_C0742DA62FF9F714_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_3_3C3329D13784F0E3()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_757A5862D4BBEE41_METHOD_3_3C3329D13784F0E3_OFFSET))(this);
	}

	::System::Void Method_3_40E490E2772D5D75(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_757A5862D4BBEE41_METHOD_3_40E490E2772D5D75_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_3_A7C25C16DAF12EC1()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_757A5862D4BBEE41_METHOD_3_A7C25C16DAF12EC1_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_3_FF11A7936E830212()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_757A5862D4BBEE41_METHOD_3_FF11A7936E830212_OFFSET))(this);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_757A5862D4BBEE41_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Boolean Method_3_9B0C43B0B6D3BA9B()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_757A5862D4BBEE41_METHOD_3_9B0C43B0B6D3BA9B_OFFSET))(this);
	}

	::System::Void Method_3_C114A1F8E08B6F92(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_757A5862D4BBEE41_METHOD_3_C114A1F8E08B6F92_OFFSET))(this, a1);
	}

	static ::Class_3_757A5862D4BBEE41* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_757A5862D4BBEE41*(*)())((::PBYTE)hIl2Cpp + CLASS_3_757A5862D4BBEE41_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}

	::UnityEngine::Rigidbody* Method_3_141729CB6B2ECC94()
	{
		return ((::UnityEngine::Rigidbody*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_757A5862D4BBEE41_METHOD_3_141729CB6B2ECC94_OFFSET))(this);
	}

	::System::Void Method_3_413470465609AB18(::UnityEngine::Rigidbody* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rigidbody*))((::PBYTE)hIl2Cpp + CLASS_3_757A5862D4BBEE41_METHOD_3_413470465609AB18_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_3_D37FAD0A6AA04B25()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_757A5862D4BBEE41_METHOD_3_D37FAD0A6AA04B25_OFFSET))(this);
	}

	::System::Void Method_3_ABC1B75CF5A56AEB(::Class_0_16E4307DCC419505_542* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_542*))((::PBYTE)hIl2Cpp + CLASS_3_757A5862D4BBEE41_METHOD_3_ABC1B75CF5A56AEB_OFFSET))(this, a1);
	}
};
