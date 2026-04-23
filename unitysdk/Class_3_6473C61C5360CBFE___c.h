#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_3_6473C61C5360CBFE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xC0BB0C0)
#define CLASS_3_6473C61C5360CBFE___C__CTOR_OFFSET UNITYSDK_OFFSET(0xC0BB100)
#define CLASS_3_6473C61C5360CBFE___C__SHOWRESTARTDOWNLOADERROR_B__0_0_OFFSET UNITYSDK_OFFSET(0xC0BB110)
#define CLASS_3_6473C61C5360CBFE___C__SHOWRETRYDOWNLOADERROR_B__1_0_OFFSET UNITYSDK_OFFSET(0xC0BB140)

inline static constexpr unsigned int Class_3_6473C61C5360CBFE___c_TypeDefinitionIndex = 66992;

class Class_3_6473C61C5360CBFE___c : public ::System::Object
{
public:
	static ::Class_3_6473C61C5360CBFE___c** StaticGet___9()
	{
		return (::Class_3_6473C61C5360CBFE___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_6473C61C5360CBFE___c_TypeDefinitionIndex)->GetStaticField(0x6A730);
	}
	static ::System::Action** StaticGet___9__0_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_3_6473C61C5360CBFE___c_TypeDefinitionIndex)->GetStaticField(0x6A738);
	}
	static ::System::Action** StaticGet___9__1_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_3_6473C61C5360CBFE___c_TypeDefinitionIndex)->GetStaticField(0x6A740);
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
