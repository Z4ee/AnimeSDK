#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_885;
class Class_1_0B6B39B929043B8F;
class Class_2_FFF9083835D38A52;
namespace System { class Type; }
namespace System::Collections { class IList; }

#define CLASS_1_414FF61E6F12A0C7_CLEAR_OFFSET UNITYSDK_OFFSET(0xA538060)
#define CLASS_1_414FF61E6F12A0C7_GETCONTEXT_OFFSET UNITYSDK_OFFSET(0xA538100)
#define CLASS_1_414FF61E6F12A0C7_METHOD_1_102A1038C38883F3_OFFSET UNITYSDK_OFFSET(0xA5382E0)
#define CLASS_1_414FF61E6F12A0C7_METHOD_1_621F8E54F3755EEC_OFFSET UNITYSDK_OFFSET(0xA5381C0)
#define CLASS_1_414FF61E6F12A0C7_METHOD_1_EC5A942F906ED2A6_OFFSET UNITYSDK_OFFSET(0xA538260)
#define CLASS_1_414FF61E6F12A0C7__CTOR_OFFSET UNITYSDK_OFFSET(0xA538330)

inline static constexpr unsigned int Class_1_414FF61E6F12A0C7_TypeDefinitionIndex = 68523;

class Class_1_414FF61E6F12A0C7 : public ::System::Object
{
public:
	::Class_1_0B6B39B929043B8F* Field_1_0; // 0x10
	::Class_2_FFF9083835D38A52* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_414FF61E6F12A0C7__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_414FF61E6F12A0C7_CLEAR_OFFSET))(this);
	}

	::System::Object* GetContext(::System::Type* a1)
	{
		return ((::System::Object*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + CLASS_1_414FF61E6F12A0C7_GETCONTEXT_OFFSET))(this, a1);
	}

	::System::Void Method_1_621F8E54F3755EEC(::System::Collections::IList* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::IList*))((::PBYTE)hIl2Cpp + CLASS_1_414FF61E6F12A0C7_METHOD_1_621F8E54F3755EEC_OFFSET))(this, a1);
	}

	::System::Void Method_1_EC5A942F906ED2A6(::Class_0_16E4307DCC419505_885* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_885*))((::PBYTE)hIl2Cpp + CLASS_1_414FF61E6F12A0C7_METHOD_1_EC5A942F906ED2A6_OFFSET))(this, a1);
	}

	::System::Void Method_1_102A1038C38883F3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_414FF61E6F12A0C7_METHOD_1_102A1038C38883F3_OFFSET))(this);
	}
};
