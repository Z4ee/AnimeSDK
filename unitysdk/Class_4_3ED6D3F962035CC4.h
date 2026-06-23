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
template <typename T> class Class_4_F91115D9A1F02F5F;

#define CLASS_4_3ED6D3F962035CC4_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x1674FBE0)
#define CLASS_4_3ED6D3F962035CC4_METHOD_4_47125C76AFDB961E_OFFSET UNITYSDK_OFFSET(0x1674F190)
#define CLASS_4_3ED6D3F962035CC4_METHOD_4_9C36AFA140789703_OFFSET UNITYSDK_OFFSET(0x1674EE20)
#define CLASS_4_3ED6D3F962035CC4_METHOD_4_BFF96E989AC38879_OFFSET UNITYSDK_OFFSET(0x1674F590)
#define CLASS_4_3ED6D3F962035CC4_METHOD_4_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x1674FBF0)
#define CLASS_4_3ED6D3F962035CC4_METHOD_4_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0x1674EF70)
#define CLASS_4_3ED6D3F962035CC4__CTOR_OFFSET UNITYSDK_OFFSET(0x1674F9A0)

inline static constexpr unsigned int Class_4_3ED6D3F962035CC4_TypeDefinitionIndex = 71180;

class Class_4_3ED6D3F962035CC4 : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_F91115D9A1F02F5F<::System::Int32>* Field_4_2; // 0x28
	::Class_3_B537A0AA78803363* Field_4_3; // 0x30
	::Struct_2_29439DBE2B63DCF3 Field_4_7; // 0x38
	::System::Collections::Generic::List_1<::Foundation::ViewObject::ViewObjectHandle>* Field_4_5; // 0x60
	::Struct_2_FE9BD044832BC9C3 Field_4_10; // 0x68
	::Class_4_F91115D9A1F02F5F<::System::Collections::Generic::List_1<::Foundation::ViewObject::ViewObjectHandle>*>* Field_4_0; // 0x98
	::Struct_2_FE9BD044832BC9C3 Field_4_9; // 0xA0
	::Class_3_B537A0AA78803363* Field_4_4; // 0xD0
	::Class_4_F91115D9A1F02F5F<::System::Boolean>* Field_4_1; // 0xD8
	::System::Int32 Field_4_6; // 0xE0
	::System::Boolean Field_4_8; // 0xE4

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_3ED6D3F962035CC4__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_9C36AFA140789703(::Class_1_E4DCFD174698F990* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E4DCFD174698F990*))((::PBYTE)hIl2Cpp + CLASS_4_3ED6D3F962035CC4_METHOD_4_9C36AFA140789703_OFFSET))(this, a1);
	}

	::System::Void Method_4_EDFD49C942C75D6C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_3ED6D3F962035CC4_METHOD_4_EDFD49C942C75D6C_OFFSET))(this);
	}

	::System::Void Method_4_47125C76AFDB961E(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_3ED6D3F962035CC4_METHOD_4_47125C76AFDB961E_OFFSET))(this, a1);
	}

	::System::Void Method_4_BFF96E989AC38879(::Class_3_3EC97B498E0B85D2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_3EC97B498E0B85D2*))((::PBYTE)hIl2Cpp + CLASS_4_3ED6D3F962035CC4_METHOD_4_BFF96E989AC38879_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_3ED6D3F962035CC4_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}

	::System::Void Method_4_E9A575D18A0748D9(::Class_1_E4DCFD174698F990* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E4DCFD174698F990*))((::PBYTE)hIl2Cpp + CLASS_4_3ED6D3F962035CC4_METHOD_4_E9A575D18A0748D9_OFFSET))(this, a1);
	}
};
