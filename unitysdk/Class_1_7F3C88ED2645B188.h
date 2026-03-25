#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_649;
class Class_1_AE0CA897D782D638;
namespace RPG::Client { class IAvatarInfoProvider; }

#define CLASS_1_7F3C88ED2645B188_METHOD_1_39E82D6C49AAD1CF_OFFSET UNITYSDK_OFFSET(0x116938A0)
#define CLASS_1_7F3C88ED2645B188_METHOD_1_6536EE468ABFB6F7_OFFSET UNITYSDK_OFFSET(0x11693840)
#define CLASS_1_7F3C88ED2645B188_METHOD_1_7CB4BF39BF8A51BE_OFFSET UNITYSDK_OFFSET(0x11693960)
#define CLASS_1_7F3C88ED2645B188__CTOR_OFFSET UNITYSDK_OFFSET(0x11693AB0)

inline static constexpr unsigned int Class_1_7F3C88ED2645B188_TypeDefinitionIndex = 53251;

class Class_1_7F3C88ED2645B188 : public ::System::Object
{
public:
	::Class_1_AE0CA897D782D638* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7F3C88ED2645B188__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_6536EE468ABFB6F7(::RPG::Client::IAvatarInfoProvider* a1, ::Class_1_AE0CA897D782D638* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::IAvatarInfoProvider*, ::Class_1_AE0CA897D782D638*))((::PBYTE)hIl2Cpp + CLASS_1_7F3C88ED2645B188_METHOD_1_6536EE468ABFB6F7_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_39E82D6C49AAD1CF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7F3C88ED2645B188_METHOD_1_39E82D6C49AAD1CF_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_649* Method_1_7CB4BF39BF8A51BE()
	{
		return ((::Class_0_16E4307DCC419505_649*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7F3C88ED2645B188_METHOD_1_7CB4BF39BF8A51BE_OFFSET))(this);
	}
};
