#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_734;
class Class_1_E127FD41712458EE;
class Class_2_FFF9083835D38A52;
namespace System { class Type; }
namespace System::Collections { class IList; }

#define CLASS_1_414FF61E6F12A0C7_CLEAR_OFFSET UNITYSDK_OFFSET(0x8AD68C0)
#define CLASS_1_414FF61E6F12A0C7_GETCONTEXT_OFFSET UNITYSDK_OFFSET(0x8AD6960)
#define CLASS_1_414FF61E6F12A0C7_METHOD_1_621F8E54F3755EEC_OFFSET UNITYSDK_OFFSET(0x8AD6A20)
#define CLASS_1_414FF61E6F12A0C7_METHOD_1_EC5A942F906ED2A6_OFFSET UNITYSDK_OFFSET(0x8AD6AC0)
#define CLASS_1_414FF61E6F12A0C7_METHOD_1_F5447CD65612575D_OFFSET UNITYSDK_OFFSET(0x8AD6B40)
#define CLASS_1_414FF61E6F12A0C7__CTOR_OFFSET UNITYSDK_OFFSET(0x8AD6B90)

inline static constexpr unsigned int Class_1_414FF61E6F12A0C7_TypeDefinitionIndex = 60136;

class Class_1_414FF61E6F12A0C7 : public ::System::Object
{
public:
	::Class_1_E127FD41712458EE* Field_1_1; // 0x10
	::Class_2_FFF9083835D38A52* Field_1_0; // 0x18

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

	::System::Void Method_1_EC5A942F906ED2A6(::Class_0_16E4307DCC419505_734* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_734*))((::PBYTE)hIl2Cpp + CLASS_1_414FF61E6F12A0C7_METHOD_1_EC5A942F906ED2A6_OFFSET))(this, a1);
	}

	::System::Void Method_1_F5447CD65612575D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_414FF61E6F12A0C7_METHOD_1_F5447CD65612575D_OFFSET))(this);
	}
};
