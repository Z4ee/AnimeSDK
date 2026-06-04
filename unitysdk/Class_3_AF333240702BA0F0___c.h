#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_3_AF333240702BA0F0___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xAAB6030)
#define CLASS_3_AF333240702BA0F0___C__CTOR_OFFSET UNITYSDK_OFFSET(0xAAB6070)
#define CLASS_3_AF333240702BA0F0___C__SHOWRESTARTDOWNLOADERROR_B__0_0_OFFSET UNITYSDK_OFFSET(0xAAB6080)
#define CLASS_3_AF333240702BA0F0___C__SHOWRETRYDOWNLOADERROR_B__1_0_OFFSET UNITYSDK_OFFSET(0xAAB60B0)

inline static constexpr unsigned int Class_3_AF333240702BA0F0___c_TypeDefinitionIndex = 67934;

class Class_3_AF333240702BA0F0___c : public ::System::Object
{
public:
	static ::System::Action** StaticGet___9__0_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_3_AF333240702BA0F0___c_TypeDefinitionIndex)->GetStaticField(0x2C20);
	}
	static ::Class_3_AF333240702BA0F0___c** StaticGet___9()
	{
		return (::Class_3_AF333240702BA0F0___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_AF333240702BA0F0___c_TypeDefinitionIndex)->GetStaticField(0x2C28);
	}
	static ::System::Action** StaticGet___9__1_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_3_AF333240702BA0F0___c_TypeDefinitionIndex)->GetStaticField(0x2C30);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_AF333240702BA0F0___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AF333240702BA0F0___C__CTOR_OFFSET))(this);
	}

	::System::Void _ShowRestartDownloadError_b__0_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AF333240702BA0F0___C__SHOWRESTARTDOWNLOADERROR_B__0_0_OFFSET))(this);
	}

	::System::Void _ShowRetryDownloadError_b__1_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AF333240702BA0F0___C__SHOWRETRYDOWNLOADERROR_B__1_0_OFFSET))(this);
	}
};
