#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_1889DE49D24AA9B9.h"

namespace System { class String; }

#define CLASS_3_AB2FEFAE944B8D6F__CCTOR_OFFSET UNITYSDK_OFFSET(0x11D706B0)
#define CLASS_3_AB2FEFAE944B8D6F__CTOR_OFFSET UNITYSDK_OFFSET(0x11D70680)
#define CLASS_3_AB2FEFAE944B8D6F__ONBIND_OFFSET UNITYSDK_OFFSET(0x11D70330)
#define CLASS_3_AB2FEFAE944B8D6F___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x11D706F0)

inline static constexpr unsigned int Class_3_AB2FEFAE944B8D6F_TypeDefinitionIndex = 65899;

class Class_3_AB2FEFAE944B8D6F : public ::Class_2_1889DE49D24AA9B9
{
public:
	static ::System::String** StaticGet_Field_3_0()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_3_AB2FEFAE944B8D6F_TypeDefinitionIndex)->GetStaticField(0x56500);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AB2FEFAE944B8D6F__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_AB2FEFAE944B8D6F__CCTOR_OFFSET))();
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AB2FEFAE944B8D6F__ONBIND_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AB2FEFAE944B8D6F___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}
};
