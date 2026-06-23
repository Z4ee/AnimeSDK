#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

class Class_1_E4DCFD174698F990;
class Class_3_B537A0AA78803363;
class Class_3_DCB7F8B839F0C44B_4;
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_4_B51FB35349ACD175;
template <typename T> class Class_4_F91115D9A1F02F5F;

#define CLASS_3_4D9D6A591C0DD46D_METHOD_3_28EB11670A8E5A86_OFFSET UNITYSDK_OFFSET(0x11DA2330)
#define CLASS_3_4D9D6A591C0DD46D_METHOD_3_9C36AFA140789703_OFFSET UNITYSDK_OFFSET(0x11DA21E0)
#define CLASS_3_4D9D6A591C0DD46D_METHOD_3_C43DD7AFEEA2B827_OFFSET UNITYSDK_OFFSET(0x11DA2650)
#define CLASS_3_4D9D6A591C0DD46D_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x11DA2E00)
#define CLASS_3_4D9D6A591C0DD46D_METHOD_3_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x11DA2D70)
#define CLASS_3_4D9D6A591C0DD46D__CTOR_OFFSET UNITYSDK_OFFSET(0x11DA2AF0)

inline static constexpr unsigned int Class_3_4D9D6A591C0DD46D_TypeDefinitionIndex = 58104;

class Class_3_4D9D6A591C0DD46D : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_4_F91115D9A1F02F5F<::System::Int32>* Field_3_2; // 0x18
	::Class_4_F91115D9A1F02F5F<::System::Int32>* Field_3_3; // 0x20
	::Class_3_B537A0AA78803363* Field_3_6; // 0x28
	::Class_4_F91115D9A1F02F5F<::System::Collections::Generic::List_1<::System::Int32>*>* Field_3_4; // 0x30
	::Class_3_B537A0AA78803363* Field_3_7; // 0x38
	::Class_4_B51FB35349ACD175<::MoleMole::EntityHandle>* Field_3_5; // 0x40
	::Class_4_F91115D9A1F02F5F<::System::Int32>* Field_3_1; // 0x48
	::Class_3_DCB7F8B839F0C44B_4* Field_3_0; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4D9D6A591C0DD46D__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_9C36AFA140789703(::Class_1_E4DCFD174698F990* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E4DCFD174698F990*))((::PBYTE)hIl2Cpp + CLASS_3_4D9D6A591C0DD46D_METHOD_3_9C36AFA140789703_OFFSET))(this, a1);
	}

	::System::Void Method_3_28EB11670A8E5A86()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4D9D6A591C0DD46D_METHOD_3_28EB11670A8E5A86_OFFSET))(this);
	}

	::System::Void Method_3_C43DD7AFEEA2B827(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_3_4D9D6A591C0DD46D_METHOD_3_C43DD7AFEEA2B827_OFFSET))(this, a1);
	}

	::System::Void Method_3_E9A575D18A0748D9(::Class_1_E4DCFD174698F990* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E4DCFD174698F990*))((::PBYTE)hIl2Cpp + CLASS_3_4D9D6A591C0DD46D_METHOD_3_E9A575D18A0748D9_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4D9D6A591C0DD46D_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
