#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine::Networking { class UnityWebRequest; }

#define CLASS_1_057A30FABB7B1D2F_METHOD_1_391A84BCD9F51317_1_OFFSET UNITYSDK_OFFSET(0x1790E9D0)
#define CLASS_1_057A30FABB7B1D2F_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x1790E990)
#define CLASS_1_057A30FABB7B1D2F_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1790EA10)
#define CLASS_1_057A30FABB7B1D2F__CTOR_OFFSET UNITYSDK_OFFSET(0x1790E950)

inline static constexpr unsigned int Class_1_057A30FABB7B1D2F_TypeDefinitionIndex = 59421;

class Class_1_057A30FABB7B1D2F : public ::System::Object
{
public:
	::UnityEngine::Networking::UnityWebRequest* HAPIOLPHKAG; // 0x10

	::System::Void _ctor(::System::String* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_057A30FABB7B1D2F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_057A30FABB7B1D2F_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_057A30FABB7B1D2F_METHOD_1_391A84BCD9F51317_1_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_057A30FABB7B1D2F_TOSTRING_OFFSET))(this);
	}
};
