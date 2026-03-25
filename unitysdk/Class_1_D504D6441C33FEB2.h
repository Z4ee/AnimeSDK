#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"

class Class_1_0CE5318321486AA4_1;
namespace RPG::Client { class RPGProfilerMarker; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_D504D6441C33FEB2_METHOD_1_0CC95CDFA5FC971B_OFFSET UNITYSDK_OFFSET(0x8A07080)
#define CLASS_1_D504D6441C33FEB2_METHOD_1_9E6E4BC04F8DA2C5_OFFSET UNITYSDK_OFFSET(0x8A06D60)
#define CLASS_1_D504D6441C33FEB2_METHOD_1_A4F0A3D4D78B2ED9_OFFSET UNITYSDK_OFFSET(0x8A06F90)
#define CLASS_1_D504D6441C33FEB2_METHOD_1_EF1714AFAB25865F_OFFSET UNITYSDK_OFFSET(0x8A06B10)
#define CLASS_1_D504D6441C33FEB2_METHOD_1_FF3C6D7263F5B9E0_OFFSET UNITYSDK_OFFSET(0x8A06E80)
#define CLASS_1_D504D6441C33FEB2__CCTOR_OFFSET UNITYSDK_OFFSET(0x8A07190)
#define CLASS_1_D504D6441C33FEB2__CTOR_OFFSET UNITYSDK_OFFSET(0x8A07180)

inline static constexpr unsigned int Class_1_D504D6441C33FEB2_TypeDefinitionIndex = 38201;

class Class_1_D504D6441C33FEB2 : public ::System::Object
{
public:
	static ::RPG::Client::RPGProfilerMarker** StaticGet_Field_1_2()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D504D6441C33FEB2_TypeDefinitionIndex)->GetStaticField(0x45170);
	}
	static ::System::Collections::Generic::List_1<::Class_1_0CE5318321486AA4_1*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::List_1<::Class_1_0CE5318321486AA4_1*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D504D6441C33FEB2_TypeDefinitionIndex)->GetStaticField(0x45178);
	}
	static ::System::Int32* StaticGet_Field_1_1()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D504D6441C33FEB2_TypeDefinitionIndex)->GetStaticField(0x11DA0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D504D6441C33FEB2__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D504D6441C33FEB2__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_EF1714AFAB25865F(::System::Collections::Generic::List_1<::Class_1_0CE5318321486AA4_1*>* a1)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::Class_1_0CE5318321486AA4_1*>*))((::PBYTE)hIl2Cpp + CLASS_1_D504D6441C33FEB2_METHOD_1_EF1714AFAB25865F_OFFSET))(a1);
	}

	static ::System::Void Method_1_9E6E4BC04F8DA2C5(::System::Int32& a1, ::System::Int32& a2)
	{
		return ((::System::Void(*)(::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_D504D6441C33FEB2_METHOD_1_9E6E4BC04F8DA2C5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_FF3C6D7263F5B9E0(::System::Int32& a1, ::System::Int32& a2)
	{
		return ((::System::Void(*)(::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_D504D6441C33FEB2_METHOD_1_FF3C6D7263F5B9E0_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A4F0A3D4D78B2ED9(::Unity::Collections::NativeArray_1<::System::Byte>& a1, ::System::Int32& a2, ::System::Int32& a3)
	{
		return ((::System::Void(*)(::Unity::Collections::NativeArray_1<::System::Byte>&, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_D504D6441C33FEB2_METHOD_1_A4F0A3D4D78B2ED9_OFFSET))(a1, a2, a3);
	}

	static ::System::Collections::Generic::List_1<::Class_1_0CE5318321486AA4_1*>* Method_1_0CC95CDFA5FC971B(::System::Int32 a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_0CE5318321486AA4_1*>*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D504D6441C33FEB2_METHOD_1_0CC95CDFA5FC971B_OFFSET))(a1);
	}
};
