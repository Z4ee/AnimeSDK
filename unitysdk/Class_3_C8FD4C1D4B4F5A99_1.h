#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_99AE43441189916F.h"

namespace System { class String; }

#define CLASS_3_C8FD4C1D4B4F5A99_1__CCTOR_OFFSET UNITYSDK_OFFSET(0x157353F0)
#define CLASS_3_C8FD4C1D4B4F5A99_1__CTOR_OFFSET UNITYSDK_OFFSET(0x157353C0)
#define CLASS_3_C8FD4C1D4B4F5A99_1__ONBIND_OFFSET UNITYSDK_OFFSET(0x157350A0)

inline static constexpr unsigned int Class_3_C8FD4C1D4B4F5A99_1_TypeDefinitionIndex = 71457;

class Class_3_C8FD4C1D4B4F5A99_1 : public ::Class_2_99AE43441189916F
{
public:
	static ::System::String** StaticGet_JFCMCPFPDFP()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_3_C8FD4C1D4B4F5A99_1_TypeDefinitionIndex)->GetStaticField(0x33980);
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
};
