#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

class Class_1_43BD383C98B4C0C5_49;
class Class_2_A6C27A12AD62162A;
namespace System { class String; }
template <typename T> class Class_4_F91115D9A1F02F5F;

#define CLASS_4_E8FA6BBFC3FCEBFC_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x1803D990)
#define CLASS_4_E8FA6BBFC3FCEBFC_METHOD_4_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x1803C930)
#define CLASS_4_E8FA6BBFC3FCEBFC_METHOD_4_BFD9C6B0B8BAEFA7_OFFSET UNITYSDK_OFFSET(0x1803CA10)
#define CLASS_4_E8FA6BBFC3FCEBFC_METHOD_4_D1D6CDBE3F22A76E_OFFSET UNITYSDK_OFFSET(0x1803D670)
#define CLASS_4_E8FA6BBFC3FCEBFC_METHOD_4_EC02C4ADC7E4B586_OFFSET UNITYSDK_OFFSET(0x1803D520)
#define CLASS_4_E8FA6BBFC3FCEBFC_METHOD_4_F16CFFB24477DD07_OFFSET UNITYSDK_OFFSET(0x1803D050)
#define CLASS_4_E8FA6BBFC3FCEBFC__CTOR_OFFSET UNITYSDK_OFFSET(0x1803D580)

inline static constexpr unsigned int Class_4_E8FA6BBFC3FCEBFC_TypeDefinitionIndex = 54191;

class Class_4_E8FA6BBFC3FCEBFC : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_F91115D9A1F02F5F<::Foundation::ViewObject::ViewObjectHandle>* Field_4_0; // 0x28
	::Class_4_F91115D9A1F02F5F<::System::String*>* Field_4_1; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_E8FA6BBFC3FCEBFC__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_E8FA6BBFC3FCEBFC_METHOD_4_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_4_BFD9C6B0B8BAEFA7(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_E8FA6BBFC3FCEBFC_METHOD_4_BFD9C6B0B8BAEFA7_OFFSET))(this, a1);
	}

	::System::Void Method_4_D1D6CDBE3F22A76E(::Struct_2_29439DBE2B63DCF3& a1, ::Foundation::ViewObject::ViewObjectHandle a2, ::Class_1_43BD383C98B4C0C5_49* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&, ::Foundation::ViewObject::ViewObjectHandle, ::Class_1_43BD383C98B4C0C5_49*))((::PBYTE)hIl2Cpp + CLASS_4_E8FA6BBFC3FCEBFC_METHOD_4_D1D6CDBE3F22A76E_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_E8FA6BBFC3FCEBFC_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}

	::System::Void Method_4_EC02C4ADC7E4B586(::System::UInt32 a1, ::System::UInt32 a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_4_E8FA6BBFC3FCEBFC_METHOD_4_EC02C4ADC7E4B586_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_4_F16CFFB24477DD07(::Struct_2_29439DBE2B63DCF3& a1, ::Foundation::ViewObject::ViewObjectHandle a2, ::System::String* a3, ::Class_2_A6C27A12AD62162A*& a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&, ::Foundation::ViewObject::ViewObjectHandle, ::System::String*, ::Class_2_A6C27A12AD62162A*&))((::PBYTE)hIl2Cpp + CLASS_4_E8FA6BBFC3FCEBFC_METHOD_4_F16CFFB24477DD07_OFFSET))(this, a1, a2, a3, a4);
	}
};
