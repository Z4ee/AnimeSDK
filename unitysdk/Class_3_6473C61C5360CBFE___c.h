#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_3_6473C61C5360CBFE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x8C88AC0)
#define CLASS_3_6473C61C5360CBFE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x8C88B00)
#define CLASS_3_6473C61C5360CBFE___C__SHOWRESTARTDOWNLOADERROR_B__0_0_OFFSET UNITYSDK_OFFSET(0x8C88B10)
#define CLASS_3_6473C61C5360CBFE___C__SHOWRETRYDOWNLOADERROR_B__1_0_OFFSET UNITYSDK_OFFSET(0x8C88B40)

inline static constexpr unsigned int Class_3_6473C61C5360CBFE___c_TypeDefinitionIndex = 59596;

class Class_3_6473C61C5360CBFE___c : public ::System::Object
{
public:
	static ::Class_3_6473C61C5360CBFE___c** StaticGet___9()
	{
		return (::Class_3_6473C61C5360CBFE___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_6473C61C5360CBFE___c_TypeDefinitionIndex)->GetStaticField(0x59F0);
	}
	static ::System::Action** StaticGet___9__0_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_3_6473C61C5360CBFE___c_TypeDefinitionIndex)->GetStaticField(0x59F8);
	}
	static ::System::Action** StaticGet___9__1_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_3_6473C61C5360CBFE___c_TypeDefinitionIndex)->GetStaticField(0x5A00);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_6473C61C5360CBFE___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6473C61C5360CBFE___C__CTOR_OFFSET))(this);
	}

	::System::Void _ShowRestartDownloadError_b__0_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6473C61C5360CBFE___C__SHOWRESTARTDOWNLOADERROR_B__0_0_OFFSET))(this);
	}

	::System::Void _ShowRetryDownloadError_b__1_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6473C61C5360CBFE___C__SHOWRETRYDOWNLOADERROR_B__1_0_OFFSET))(this);
	}
};
