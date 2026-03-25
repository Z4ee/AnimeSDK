#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_1889DE49D24AA9B9.h"

namespace System { class String; }

#define CLASS_3_43332CC0EB811A2B__CCTOR_OFFSET UNITYSDK_OFFSET(0x89C21E0)
#define CLASS_3_43332CC0EB811A2B__CTOR_OFFSET UNITYSDK_OFFSET(0x89C21B0)
#define CLASS_3_43332CC0EB811A2B__ONBIND_OFFSET UNITYSDK_OFFSET(0x89C1DA0)
#define CLASS_3_43332CC0EB811A2B___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x89C2220)

inline static constexpr unsigned int Class_3_43332CC0EB811A2B_TypeDefinitionIndex = 58582;

class Class_3_43332CC0EB811A2B : public ::Class_2_1889DE49D24AA9B9
{
public:
	static ::System::String** StaticGet_Field_3_0()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_3_43332CC0EB811A2B_TypeDefinitionIndex)->GetStaticField(0x443E0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_43332CC0EB811A2B__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_43332CC0EB811A2B__CCTOR_OFFSET))();
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_43332CC0EB811A2B__ONBIND_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_43332CC0EB811A2B___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}
};
