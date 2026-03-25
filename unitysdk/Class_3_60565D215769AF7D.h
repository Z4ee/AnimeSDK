#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_1889DE49D24AA9B9.h"

namespace System { class String; }

#define CLASS_3_60565D215769AF7D__CCTOR_OFFSET UNITYSDK_OFFSET(0xD196FC0)
#define CLASS_3_60565D215769AF7D__CTOR_OFFSET UNITYSDK_OFFSET(0xD196F90)
#define CLASS_3_60565D215769AF7D__ONBIND_OFFSET UNITYSDK_OFFSET(0xD196BB0)
#define CLASS_3_60565D215769AF7D___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0xD197000)

inline static constexpr unsigned int Class_3_60565D215769AF7D_TypeDefinitionIndex = 58583;

class Class_3_60565D215769AF7D : public ::Class_2_1889DE49D24AA9B9
{
public:
	static ::System::String** StaticGet_Field_3_0()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_3_60565D215769AF7D_TypeDefinitionIndex)->GetStaticField(0x463A0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_60565D215769AF7D__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_60565D215769AF7D__CCTOR_OFFSET))();
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_60565D215769AF7D__ONBIND_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_60565D215769AF7D___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}
};
