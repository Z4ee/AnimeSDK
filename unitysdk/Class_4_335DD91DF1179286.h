#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
template <typename T> class Class_4_2FF7D360A2F3EC48;

#define CLASS_4_335DD91DF1179286_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x194A5E00)
#define CLASS_4_335DD91DF1179286_METHOD_4_375E748B598C3248_OFFSET UNITYSDK_OFFSET(0x194A57C0)
#define CLASS_4_335DD91DF1179286_METHOD_4_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x194A5610)
#define CLASS_4_335DD91DF1179286__CTOR_OFFSET UNITYSDK_OFFSET(0x194A5CA0)

inline static constexpr unsigned int Class_4_335DD91DF1179286_TypeDefinitionIndex = 70005;

class Class_4_335DD91DF1179286 : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_2FF7D360A2F3EC48<::System::String*>* Field_4_2; // 0x28
	::Class_4_2FF7D360A2F3EC48<::UnityEngine::Vector3>* Field_4_7; // 0x30
	::Class_4_2FF7D360A2F3EC48<::UnityEngine::Vector3>* Field_4_0; // 0x38
	::Class_4_2FF7D360A2F3EC48<::System::String*>* Field_4_1; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_335DD91DF1179286__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_335DD91DF1179286_METHOD_4_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_4_375E748B598C3248(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_335DD91DF1179286_METHOD_4_375E748B598C3248_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_335DD91DF1179286_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
