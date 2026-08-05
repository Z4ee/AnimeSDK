#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_5.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class ParticleSystem; }

#define CLASS_1_2DAF815691F591CB_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x18209A00)
#define CLASS_1_2DAF815691F591CB_METHOD_1_2B38B2CFAFF1BCC5_OFFSET UNITYSDK_OFFSET(0x18208FB0)
#define CLASS_1_2DAF815691F591CB_METHOD_1_4B51CBAB2BDA3CB0_1_OFFSET UNITYSDK_OFFSET(0x18209630)
#define CLASS_1_2DAF815691F591CB_METHOD_1_4B51CBAB2BDA3CB0_OFFSET UNITYSDK_OFFSET(0x18207E20)
#define CLASS_1_2DAF815691F591CB_METHOD_1_5218F55178695EA2_OFFSET UNITYSDK_OFFSET(0x182081F0)
#define CLASS_1_2DAF815691F591CB_METHOD_1_824EFB017FA0E64F_OFFSET UNITYSDK_OFFSET(0x18208B20)
#define CLASS_1_2DAF815691F591CB_METHOD_1_A773B75ECD286B93_OFFSET UNITYSDK_OFFSET(0x18208F00)
#define CLASS_1_2DAF815691F591CB_METHOD_1_ADF4AD3331B4D7AD_OFFSET UNITYSDK_OFFSET(0x18207DD0)
#define CLASS_1_2DAF815691F591CB_METHOD_1_C5BE6161698D1F72_OFFSET UNITYSDK_OFFSET(0x18208400)
#define CLASS_1_2DAF815691F591CB_METHOD_1_C7BF9C1E6A78DCAB_OFFSET UNITYSDK_OFFSET(0x18209080)
#define CLASS_1_2DAF815691F591CB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x18207CA0)
#define CLASS_1_2DAF815691F591CB__CCTOR_OFFSET UNITYSDK_OFFSET(0x18207D80)
#define CLASS_1_2DAF815691F591CB__CTOR_OFFSET UNITYSDK_OFFSET(0x18207D20)

inline static constexpr unsigned int Class_1_2DAF815691F591CB_TypeDefinitionIndex = 50629;

class Class_1_2DAF815691F591CB : public ::System::Object
{
public:
	static ::Il2CppArray<::System::UInt64>** StaticGet_Field_1_18()
	{
		return (::Il2CppArray<::System::UInt64>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2DAF815691F591CB_TypeDefinitionIndex)->GetStaticField(0x2E7A0);
	}
	static ::System::Single* StaticGet_Field_1_22()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2DAF815691F591CB_TypeDefinitionIndex)->GetStaticField(0xA030);
	}
	static ::System::Single* StaticGet_Field_1_17()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2DAF815691F591CB_TypeDefinitionIndex)->GetStaticField(0xA034);
	}
	static ::System::Single* StaticGet_Field_1_16()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2DAF815691F591CB_TypeDefinitionIndex)->GetStaticField(0xA038);
	}
	static ::System::Single* StaticGet_Field_1_23()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2DAF815691F591CB_TypeDefinitionIndex)->GetStaticField(0xA03C);
	}
	::System::String* Field_1_12; // 0x10
	::System::Collections::Generic::List_1<::Foundation::AssetPath>* Field_1_19; // 0x18
	::System::String* Field_1_8; // 0x20
	::System::Single Field_1_1; // 0x28
	::System::Int32 Field_1_5; // 0x2C
	::System::Single Field_1_7; // 0x30
	::System::Int32 Field_1_9; // 0x34
	::System::Single Field_1_0; // 0x38
	::System::Int32 Field_1_15; // 0x3C
	::System::Int32 Field_1_14; // 0x40
	::System::Int32 Field_1_13; // 0x44
	::System::Int32 Field_1_4; // 0x48
	::System::Int32 Field_1_3; // 0x4C
	::System::Int32 Field_1_10; // 0x50
	::System::Int32 Field_1_11; // 0x54
	::System::Single Field_1_2; // 0x58
	::System::Int64 Field_1_6; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2DAF815691F591CB__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2DAF815691F591CB__CCTOR_OFFSET))();
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2DAF815691F591CB_TOSTRING_OFFSET))(this);
	}

	::System::Void Method_1_ADF4AD3331B4D7AD(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_2DAF815691F591CB_METHOD_1_ADF4AD3331B4D7AD_OFFSET))(this, a1);
	}

	static ::System::String* Method_1_4B51CBAB2BDA3CB0()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CLASS_1_2DAF815691F591CB_METHOD_1_4B51CBAB2BDA3CB0_OFFSET))();
	}

	static ::Class_1_2DAF815691F591CB* Method_1_5218F55178695EA2()
	{
		return ((::Class_1_2DAF815691F591CB*(*)())((::PBYTE)hIl2Cpp + CLASS_1_2DAF815691F591CB_METHOD_1_5218F55178695EA2_OFFSET))();
	}

	static ::System::Int32 Method_1_2B38B2CFAFF1BCC5(::Il2CppArray<::UnityEngine::ParticleSystem*>* a1)
	{
		return ((::System::Int32(*)(::Il2CppArray<::UnityEngine::ParticleSystem*>*))((::PBYTE)hIl2Cpp + CLASS_1_2DAF815691F591CB_METHOD_1_2B38B2CFAFF1BCC5_OFFSET))(a1);
	}

	static ::System::Single Method_1_824EFB017FA0E64F()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + CLASS_1_2DAF815691F591CB_METHOD_1_824EFB017FA0E64F_OFFSET))();
	}

	static ::System::ValueTuple_5<::System::String*, ::System::String*, ::System::Int32, ::System::Int32, ::System::Int32> Method_1_C5BE6161698D1F72()
	{
		return ((::System::ValueTuple_5<::System::String*, ::System::String*, ::System::Int32, ::System::Int32, ::System::Int32>(*)())((::PBYTE)hIl2Cpp + CLASS_1_2DAF815691F591CB_METHOD_1_C5BE6161698D1F72_OFFSET))();
	}

	::System::Void Method_1_C7BF9C1E6A78DCAB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2DAF815691F591CB_METHOD_1_C7BF9C1E6A78DCAB_OFFSET))(this);
	}

	static ::System::Int32 Method_1_A773B75ECD286B93(::Il2CppArray<::UnityEngine::ParticleSystem*>* a1)
	{
		return ((::System::Int32(*)(::Il2CppArray<::UnityEngine::ParticleSystem*>*))((::PBYTE)hIl2Cpp + CLASS_1_2DAF815691F591CB_METHOD_1_A773B75ECD286B93_OFFSET))(a1);
	}

	static ::System::String* Method_1_4B51CBAB2BDA3CB0_1()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CLASS_1_2DAF815691F591CB_METHOD_1_4B51CBAB2BDA3CB0_1_OFFSET))();
	}

	::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2DAF815691F591CB_METHOD_1_128774387667156B_OFFSET))(this);
	}
};
