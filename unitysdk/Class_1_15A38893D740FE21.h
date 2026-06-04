#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_15A38893D740FE21_Class_3_C3B154948629ABCC;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_15A38893D740FE21_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA63B8A0)
#define CLASS_1_15A38893D740FE21_METHOD_1_030A02F181C9AC55_1_OFFSET UNITYSDK_OFFSET(0xA63D390)
#define CLASS_1_15A38893D740FE21_METHOD_1_030A02F181C9AC55_OFFSET UNITYSDK_OFFSET(0xA63CF30)
#define CLASS_1_15A38893D740FE21_METHOD_1_1283EC0876EAAACF_OFFSET UNITYSDK_OFFSET(0xA63B9A0)
#define CLASS_1_15A38893D740FE21_METHOD_1_17B570D89E92D975_1_OFFSET UNITYSDK_OFFSET(0xA63CBA0)
#define CLASS_1_15A38893D740FE21_METHOD_1_17B570D89E92D975_OFFSET UNITYSDK_OFFSET(0xA63C9C0)
#define CLASS_1_15A38893D740FE21_METHOD_1_1950A2B2A2928007_OFFSET UNITYSDK_OFFSET(0xA63CA70)
#define CLASS_1_15A38893D740FE21_METHOD_1_449A7DD0254C81A3_OFFSET UNITYSDK_OFFSET(0xA63C820)
#define CLASS_1_15A38893D740FE21_METHOD_1_5C521B882A838F07_1_OFFSET UNITYSDK_OFFSET(0xA63D0B0)
#define CLASS_1_15A38893D740FE21_METHOD_1_5C521B882A838F07_OFFSET UNITYSDK_OFFSET(0xA63CC50)
#define CLASS_1_15A38893D740FE21_METHOD_1_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0xA63C970)
#define CLASS_1_15A38893D740FE21_METHOD_1_B2B81ACA1C91BBD3_OFFSET UNITYSDK_OFFSET(0xA63C880)
#define CLASS_1_15A38893D740FE21_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xA63D510)
#define CLASS_1_15A38893D740FE21__CTOR_OFFSET UNITYSDK_OFFSET(0xA63D550)

inline static constexpr unsigned int Class_1_15A38893D740FE21_TypeDefinitionIndex = 73305;

class Class_1_15A38893D740FE21 : public ::System::Object
{
public:
	static ::UnityEngine::Vector3* StaticGet_Field_1_0()
	{
		return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(Class_1_15A38893D740FE21_TypeDefinitionIndex)->GetStaticField(0x10B30);
	}
	static ::UnityEngine::Vector3* StaticGet_Field_1_1()
	{
		return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(Class_1_15A38893D740FE21_TypeDefinitionIndex)->GetStaticField(0x10B3C);
	}
	static ::System::Boolean* StaticGet_Field_1_2()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_15A38893D740FE21_TypeDefinitionIndex)->GetStaticField(0x10B48);
	}
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Action*>*>* Field_1_3; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Action*>* Field_1_4; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_15A38893D740FE21_Class_3_C3B154948629ABCC*>* Field_1_5; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Action*>*>* Field_1_6; // 0x28
	::System::Int32 Field_1_7; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_15A38893D740FE21__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_15A38893D740FE21_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_1283EC0876EAAACF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_15A38893D740FE21_METHOD_1_1283EC0876EAAACF_OFFSET))(this);
	}

	::System::Boolean Method_1_449A7DD0254C81A3()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_15A38893D740FE21_METHOD_1_449A7DD0254C81A3_OFFSET))(this);
	}

	::System::Int32 Method_1_B2B81ACA1C91BBD3(::System::Action* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_15A38893D740FE21_METHOD_1_B2B81ACA1C91BBD3_OFFSET))(this, a1);
	}

	::System::Void Method_1_17B570D89E92D975(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_15A38893D740FE21_METHOD_1_17B570D89E92D975_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_1950A2B2A2928007(::Class_1_15A38893D740FE21_Class_3_C3B154948629ABCC* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_15A38893D740FE21_Class_3_C3B154948629ABCC*))((::PBYTE)hIl2Cpp + CLASS_1_15A38893D740FE21_METHOD_1_1950A2B2A2928007_OFFSET))(this, a1);
	}

	::System::Void Method_1_17B570D89E92D975_1(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_15A38893D740FE21_METHOD_1_17B570D89E92D975_1_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_5C521B882A838F07(::System::String* a1, ::System::Action* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_15A38893D740FE21_METHOD_1_5C521B882A838F07_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_030A02F181C9AC55(::System::String* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_15A38893D740FE21_METHOD_1_030A02F181C9AC55_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_5C521B882A838F07_1(::System::String* a1, ::System::Action* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_15A38893D740FE21_METHOD_1_5C521B882A838F07_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_030A02F181C9AC55_1(::System::String* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_15A38893D740FE21_METHOD_1_030A02F181C9AC55_1_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_15A38893D740FE21_METHOD_1_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_15A38893D740FE21_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}
};
