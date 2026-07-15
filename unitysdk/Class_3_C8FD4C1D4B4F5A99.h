#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_1889DE49D24AA9B9.h"

namespace System { class String; }

#define CLASS_3_C8FD4C1D4B4F5A99__CCTOR_OFFSET UNITYSDK_OFFSET(0x15FDB6C0)
#define CLASS_3_C8FD4C1D4B4F5A99__CTOR_OFFSET UNITYSDK_OFFSET(0x15FDB690)
#define CLASS_3_C8FD4C1D4B4F5A99__ONBIND_OFFSET UNITYSDK_OFFSET(0x15FDB370)

inline static constexpr unsigned int Class_3_C8FD4C1D4B4F5A99_TypeDefinitionIndex = 68274;

class Class_3_C8FD4C1D4B4F5A99 : public ::Class_2_1889DE49D24AA9B9
{
public:
	static ::System::String** StaticGet_Field_3_0()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_3_C8FD4C1D4B4F5A99_TypeDefinitionIndex)->GetStaticField(0x3C9C0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C8FD4C1D4B4F5A99__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_C8FD4C1D4B4F5A99__CCTOR_OFFSET))();
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C8FD4C1D4B4F5A99__ONBIND_OFFSET))(this);
	}
};
