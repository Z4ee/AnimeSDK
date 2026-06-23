#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

class Class_3_B537A0AA78803363;
class Class_3_DCB7F8B839F0C44B_4;
namespace System { class String; }
template <typename T> class Class_4_F91115D9A1F02F5F;

#define CLASS_3_125762ACB4C7C6B2_METHOD_3_0FD0EC313FAAB75A_OFFSET UNITYSDK_OFFSET(0x14C950C0)
#define CLASS_3_125762ACB4C7C6B2_METHOD_3_3F0F9592A0E917D4_OFFSET UNITYSDK_OFFSET(0x14C95320)
#define CLASS_3_125762ACB4C7C6B2_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x14C95830)
#define CLASS_3_125762ACB4C7C6B2_METHOD_3_E5BCB69F266CDEF4_OFFSET UNITYSDK_OFFSET(0x14C95390)
#define CLASS_3_125762ACB4C7C6B2__CTOR_OFFSET UNITYSDK_OFFSET(0x14C95670)

inline static constexpr unsigned int Class_3_125762ACB4C7C6B2_TypeDefinitionIndex = 57019;

class Class_3_125762ACB4C7C6B2 : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_4_F91115D9A1F02F5F<::System::String*>* Field_3_3; // 0x18
	::Class_3_B537A0AA78803363* Field_3_5; // 0x20
	::Class_4_F91115D9A1F02F5F<::Foundation::ViewObject::ViewObjectHandle>* Field_3_2; // 0x28
	::Class_4_F91115D9A1F02F5F<::MoleMole::EntityHandle>* Field_3_1; // 0x30
	::Class_4_F91115D9A1F02F5F<::System::Boolean>* Field_3_4; // 0x38
	::Class_3_DCB7F8B839F0C44B_4* Field_3_0; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_125762ACB4C7C6B2__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_0FD0EC313FAAB75A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_125762ACB4C7C6B2_METHOD_3_0FD0EC313FAAB75A_OFFSET))(this);
	}

	::System::Void Method_3_3F0F9592A0E917D4(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_3_125762ACB4C7C6B2_METHOD_3_3F0F9592A0E917D4_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_E5BCB69F266CDEF4(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_3_125762ACB4C7C6B2_METHOD_3_E5BCB69F266CDEF4_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_125762ACB4C7C6B2_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
