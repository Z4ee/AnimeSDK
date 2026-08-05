#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
template <typename T> class Class_4_2FF7D360A2F3EC48;

#define CLASS_4_D4DA4DB8E1AD9A06_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x165721F0)
#define CLASS_4_D4DA4DB8E1AD9A06_METHOD_4_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x165715E0)
#define CLASS_4_D4DA4DB8E1AD9A06_METHOD_4_47125C76AFDB961E_OFFSET UNITYSDK_OFFSET(0x16571790)
#define CLASS_4_D4DA4DB8E1AD9A06__CTOR_OFFSET UNITYSDK_OFFSET(0x16572090)

inline static constexpr unsigned int Class_4_D4DA4DB8E1AD9A06_TypeDefinitionIndex = 79640;

class Class_4_D4DA4DB8E1AD9A06 : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_2FF7D360A2F3EC48<::UnityEngine::Vector3>* Field_4_1; // 0x28
	::Class_4_2FF7D360A2F3EC48<::UnityEngine::Vector3>* Field_4_0; // 0x30
	::Class_4_2FF7D360A2F3EC48<::System::String*>* Field_4_3; // 0x38
	::Class_4_2FF7D360A2F3EC48<::System::String*>* Field_4_2; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_D4DA4DB8E1AD9A06__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_D4DA4DB8E1AD9A06_METHOD_4_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_4_47125C76AFDB961E(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_D4DA4DB8E1AD9A06_METHOD_4_47125C76AFDB961E_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_D4DA4DB8E1AD9A06_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
