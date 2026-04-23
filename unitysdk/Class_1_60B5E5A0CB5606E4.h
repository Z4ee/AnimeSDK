#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_290;
class Class_0_16E4307DCC419505_291;
class Class_1_7B4E9156998275BE;
namespace System { class String; }
namespace System { class Type; }

#define CLASS_1_60B5E5A0CB5606E4_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19DB91C0)
#define CLASS_1_60B5E5A0CB5606E4_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19DB9150)
#define CLASS_1_60B5E5A0CB5606E4__CTOR_OFFSET UNITYSDK_OFFSET(0x19DB3130)
#define CLASS_1_60B5E5A0CB5606E4___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19DB94B0)

inline static constexpr unsigned int Class_1_60B5E5A0CB5606E4_TypeDefinitionIndex = 39839;

class Class_1_60B5E5A0CB5606E4 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_290* Field_1_4; // 0x10
	::Class_0_16E4307DCC419505_291* Field_1_3; // 0x18
	::System::Type* Field_1_1; // 0x20
	::Class_1_7B4E9156998275BE* Field_1_2; // 0x28
	::System::Guid Field_1_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_60B5E5A0CB5606E4__CTOR_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_60B5E5A0CB5606E4_TOSTRING_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_60B5E5A0CB5606E4_DISPOSE_OFFSET))(this);
	}

	::System::String* __iFixBaseProxy_ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_60B5E5A0CB5606E4___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
	}
};
