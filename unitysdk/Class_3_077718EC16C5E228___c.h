#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_3_077718EC16C5E228___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x176F2AD0)
#define CLASS_3_077718EC16C5E228___C__CTOR_OFFSET UNITYSDK_OFFSET(0x176F2B10)
#define CLASS_3_077718EC16C5E228___C__SHOWRESTARTDOWNLOADERROR_B__0_0_OFFSET UNITYSDK_OFFSET(0x176F2B20)
#define CLASS_3_077718EC16C5E228___C__SHOWRETRYDOWNLOADERROR_B__1_0_OFFSET UNITYSDK_OFFSET(0x176F2B50)

inline static constexpr unsigned int Class_3_077718EC16C5E228___c_TypeDefinitionIndex = 72646;

class Class_3_077718EC16C5E228___c : public ::System::Object
{
public:
	static ::System::Action** StaticGet___9__1_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_3_077718EC16C5E228___c_TypeDefinitionIndex)->GetStaticField(0x65530);
	}
	static ::Class_3_077718EC16C5E228___c** StaticGet___9()
	{
		return (::Class_3_077718EC16C5E228___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_077718EC16C5E228___c_TypeDefinitionIndex)->GetStaticField(0x65538);
	}
	static ::System::Action** StaticGet___9__0_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_3_077718EC16C5E228___c_TypeDefinitionIndex)->GetStaticField(0x65540);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_077718EC16C5E228___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_077718EC16C5E228___C__CTOR_OFFSET))(this);
	}

	::System::Void _ShowRestartDownloadError_b__0_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_077718EC16C5E228___C__SHOWRESTARTDOWNLOADERROR_B__0_0_OFFSET))(this);
	}

	::System::Void _ShowRetryDownloadError_b__1_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_077718EC16C5E228___C__SHOWRETRYDOWNLOADERROR_B__1_0_OFFSET))(this);
	}
};
