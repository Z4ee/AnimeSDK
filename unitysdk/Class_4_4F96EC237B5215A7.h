#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"
#include "unitysdk/Struct_2_FE9BD044832BC9C3.h"

class Class_1_E4DCFD174698F990;
class Class_3_3EC97B498E0B85D2;
class Class_3_B537A0AA78803363;
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_4_2FF7D360A2F3EC48;

#define CLASS_4_4F96EC237B5215A7_METHOD_4_1B8139AE71A3FDE1_OFFSET UNITYSDK_OFFSET(0x13547390)
#define CLASS_4_4F96EC237B5215A7_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x135478B0)
#define CLASS_4_4F96EC237B5215A7_METHOD_4_47125C76AFDB961E_OFFSET UNITYSDK_OFFSET(0x13546F90)
#define CLASS_4_4F96EC237B5215A7_METHOD_4_9C36AFA140789703_OFFSET UNITYSDK_OFFSET(0x13546C20)
#define CLASS_4_4F96EC237B5215A7_METHOD_4_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x135478C0)
#define CLASS_4_4F96EC237B5215A7_METHOD_4_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0x13546D70)
#define CLASS_4_4F96EC237B5215A7__CTOR_OFFSET UNITYSDK_OFFSET(0x13547670)

inline static constexpr unsigned int Class_4_4F96EC237B5215A7_TypeDefinitionIndex = 82464;

class Class_4_4F96EC237B5215A7 : public ::Class_3_F3948D237059FA7A
{
public:
	::System::Collections::Generic::List_1<::Foundation::ViewObject::ViewObjectHandle>* Field_4_5; // 0x28
	::Class_3_B537A0AA78803363* Field_4_3; // 0x30
	::Class_4_2FF7D360A2F3EC48<::System::Collections::Generic::List_1<::Foundation::ViewObject::ViewObjectHandle>*>* Field_4_0; // 0x38
	::Struct_2_FE9BD044832BC9C3 Field_4_10; // 0x40
	::Struct_2_29439DBE2B63DCF3 Field_4_7; // 0x70
	::Class_4_2FF7D360A2F3EC48<::System::Int32>* Field_4_2; // 0x98
	::Class_3_B537A0AA78803363* Field_4_4; // 0xA0
	::Class_4_2FF7D360A2F3EC48<::System::Boolean>* Field_4_1; // 0xA8
	::Struct_2_FE9BD044832BC9C3 Field_4_9; // 0xB0
	::System::Boolean Field_4_8; // 0xE0
	::System::Int32 Field_4_6; // 0xE4

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_4F96EC237B5215A7__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_9C36AFA140789703(::Class_1_E4DCFD174698F990* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E4DCFD174698F990*))((::PBYTE)hIl2Cpp + CLASS_4_4F96EC237B5215A7_METHOD_4_9C36AFA140789703_OFFSET))(this, a1);
	}

	::System::Void Method_4_EDFD49C942C75D6C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_4F96EC237B5215A7_METHOD_4_EDFD49C942C75D6C_OFFSET))(this);
	}

	::System::Void Method_4_47125C76AFDB961E(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_4F96EC237B5215A7_METHOD_4_47125C76AFDB961E_OFFSET))(this, a1);
	}

	::System::Void Method_4_1B8139AE71A3FDE1(::Class_3_3EC97B498E0B85D2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_3EC97B498E0B85D2*))((::PBYTE)hIl2Cpp + CLASS_4_4F96EC237B5215A7_METHOD_4_1B8139AE71A3FDE1_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_4F96EC237B5215A7_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}

	::System::Void Method_4_E9A575D18A0748D9(::Class_1_E4DCFD174698F990* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E4DCFD174698F990*))((::PBYTE)hIl2Cpp + CLASS_4_4F96EC237B5215A7_METHOD_4_E9A575D18A0748D9_OFFSET))(this, a1);
	}
};
