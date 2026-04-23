#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_1889DE49D24AA9B9.h"

namespace System { class String; }

#define CLASS_3_C8FD4C1D4B4F5A99_1__CCTOR_OFFSET UNITYSDK_OFFSET(0x11E1F7D0)
#define CLASS_3_C8FD4C1D4B4F5A99_1__CTOR_OFFSET UNITYSDK_OFFSET(0x11E1F7A0)
#define CLASS_3_C8FD4C1D4B4F5A99_1__ONBIND_OFFSET UNITYSDK_OFFSET(0x11E1F480)
#define CLASS_3_C8FD4C1D4B4F5A99_1___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x11E1F7F0)

inline static constexpr unsigned int Class_3_C8FD4C1D4B4F5A99_1_TypeDefinitionIndex = 65901;

class Class_3_C8FD4C1D4B4F5A99_1 : public ::Class_2_1889DE49D24AA9B9
{
public:
	static ::System::String** StaticGet_Field_3_0()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_3_C8FD4C1D4B4F5A99_1_TypeDefinitionIndex)->GetStaticField(0x50540);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C8FD4C1D4B4F5A99_1__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_C8FD4C1D4B4F5A99_1__CCTOR_OFFSET))();
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C8FD4C1D4B4F5A99_1__ONBIND_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C8FD4C1D4B4F5A99_1___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}
};
