#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

class Class_3_B537A0AA78803363;
class Class_3_DCB7F8B839F0C44B_4;
namespace System { class String; }
template <typename T> class Class_4_2FF7D360A2F3EC48;

#define CLASS_3_CC300FB6A995E78B_METHOD_3_28EB11670A8E5A86_OFFSET UNITYSDK_OFFSET(0x1590C3F0)
#define CLASS_3_CC300FB6A995E78B_METHOD_3_3F0F9592A0E917D4_OFFSET UNITYSDK_OFFSET(0x1590C710)
#define CLASS_3_CC300FB6A995E78B_METHOD_3_907E0865E388C516_OFFSET UNITYSDK_OFFSET(0x1590C780)
#define CLASS_3_CC300FB6A995E78B_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1590CF70)
#define CLASS_3_CC300FB6A995E78B__CTOR_OFFSET UNITYSDK_OFFSET(0x1590CD40)

inline static constexpr unsigned int Class_3_CC300FB6A995E78B_TypeDefinitionIndex = 41242;

class Class_3_CC300FB6A995E78B : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_3_B537A0AA78803363* Field_3_7; // 0x18
	::Class_3_DCB7F8B839F0C44B_4* Field_3_0; // 0x20
	::Class_4_2FF7D360A2F3EC48<::System::Int32>* Field_3_3; // 0x28
	::Class_4_2FF7D360A2F3EC48<::System::Single>* Field_3_6; // 0x30
	::Class_4_2FF7D360A2F3EC48<::MoleMole::EntityHandle>* Field_3_1; // 0x38
	::Class_4_2FF7D360A2F3EC48<::System::String*>* Field_3_2; // 0x40
	::Class_4_2FF7D360A2F3EC48<::System::Int32>* Field_3_5; // 0x48
	::Class_4_2FF7D360A2F3EC48<::System::Boolean>* Field_3_4; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CC300FB6A995E78B__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_28EB11670A8E5A86()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CC300FB6A995E78B_METHOD_3_28EB11670A8E5A86_OFFSET))(this);
	}

	::System::Void Method_3_3F0F9592A0E917D4(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_3_CC300FB6A995E78B_METHOD_3_3F0F9592A0E917D4_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_907E0865E388C516(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_3_CC300FB6A995E78B_METHOD_3_907E0865E388C516_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CC300FB6A995E78B_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
