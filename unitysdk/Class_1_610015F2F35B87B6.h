#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_610015F2F35B87B6_Class_3_C3B154948629ABCC;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_610015F2F35B87B6_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8946AE0)
#define CLASS_1_610015F2F35B87B6_METHOD_1_1950A2B2A2928007_OFFSET UNITYSDK_OFFSET(0x89480D0)
#define CLASS_1_610015F2F35B87B6_METHOD_1_449A7DD0254C81A3_OFFSET UNITYSDK_OFFSET(0x8947E80)
#define CLASS_1_610015F2F35B87B6_METHOD_1_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x8947FD0)
#define CLASS_1_610015F2F35B87B6_METHOD_1_B2B81ACA1C91BBD3_OFFSET UNITYSDK_OFFSET(0x8947EE0)
#define CLASS_1_610015F2F35B87B6_METHOD_1_C3AE40F42779DA1B_1_OFFSET UNITYSDK_OFFSET(0x8948670)
#define CLASS_1_610015F2F35B87B6_METHOD_1_C3AE40F42779DA1B_OFFSET UNITYSDK_OFFSET(0x89482D0)
#define CLASS_1_610015F2F35B87B6_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x8948A10)
#define CLASS_1_610015F2F35B87B6_METHOD_1_CFCA4A3FD056C4FA_1_OFFSET UNITYSDK_OFFSET(0x89488F0)
#define CLASS_1_610015F2F35B87B6_METHOD_1_CFCA4A3FD056C4FA_OFFSET UNITYSDK_OFFSET(0x8948550)
#define CLASS_1_610015F2F35B87B6_METHOD_1_DC13DCFA502E580F_1_OFFSET UNITYSDK_OFFSET(0x8948200)
#define CLASS_1_610015F2F35B87B6_METHOD_1_DC13DCFA502E580F_OFFSET UNITYSDK_OFFSET(0x8948020)
#define CLASS_1_610015F2F35B87B6_METHOD_1_F5B4708E7805566C_OFFSET UNITYSDK_OFFSET(0x8946C00)
#define CLASS_1_610015F2F35B87B6__CTOR_OFFSET UNITYSDK_OFFSET(0x8948A50)

inline static constexpr unsigned int Class_1_610015F2F35B87B6_TypeDefinitionIndex = 64236;

class Class_1_610015F2F35B87B6 : public ::System::Object
{
public:
	static ::UnityEngine::Vector3* StaticGet_Field_1_1()
	{
		return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(Class_1_610015F2F35B87B6_TypeDefinitionIndex)->GetStaticField(0x130B0);
	}
	static ::System::Boolean* StaticGet_Field_1_7()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_610015F2F35B87B6_TypeDefinitionIndex)->GetStaticField(0x130BC);
	}
	static ::UnityEngine::Vector3* StaticGet_Field_1_0()
	{
		return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(Class_1_610015F2F35B87B6_TypeDefinitionIndex)->GetStaticField(0x130C0);
	}
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Action*>*>* Field_1_5; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_610015F2F35B87B6_Class_3_C3B154948629ABCC*>* Field_1_2; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Action*>* Field_1_3; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Action*>*>* Field_1_4; // 0x28
	::System::Int32 Field_1_6; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_610015F2F35B87B6__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_610015F2F35B87B6_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_F5B4708E7805566C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_610015F2F35B87B6_METHOD_1_F5B4708E7805566C_OFFSET))(this);
	}

	::System::Boolean Method_1_449A7DD0254C81A3()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_610015F2F35B87B6_METHOD_1_449A7DD0254C81A3_OFFSET))(this);
	}

	::System::Int32 Method_1_B2B81ACA1C91BBD3(::System::Action* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_610015F2F35B87B6_METHOD_1_B2B81ACA1C91BBD3_OFFSET))(this, a1);
	}

	::System::Void Method_1_DC13DCFA502E580F(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_610015F2F35B87B6_METHOD_1_DC13DCFA502E580F_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_1950A2B2A2928007(::Class_1_610015F2F35B87B6_Class_3_C3B154948629ABCC* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_610015F2F35B87B6_Class_3_C3B154948629ABCC*))((::PBYTE)hIl2Cpp + CLASS_1_610015F2F35B87B6_METHOD_1_1950A2B2A2928007_OFFSET))(this, a1);
	}

	::System::Void Method_1_DC13DCFA502E580F_1(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_610015F2F35B87B6_METHOD_1_DC13DCFA502E580F_1_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_C3AE40F42779DA1B(::System::String* a1, ::System::Action* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_610015F2F35B87B6_METHOD_1_C3AE40F42779DA1B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_CFCA4A3FD056C4FA(::System::String* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_610015F2F35B87B6_METHOD_1_CFCA4A3FD056C4FA_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_C3AE40F42779DA1B_1(::System::String* a1, ::System::Action* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_610015F2F35B87B6_METHOD_1_C3AE40F42779DA1B_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_CFCA4A3FD056C4FA_1(::System::String* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_610015F2F35B87B6_METHOD_1_CFCA4A3FD056C4FA_1_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_610015F2F35B87B6_METHOD_1_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_610015F2F35B87B6_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}
};
