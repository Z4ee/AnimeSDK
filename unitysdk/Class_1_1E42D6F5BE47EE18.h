#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IAvatarInfoProvider; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_1E42D6F5BE47EE18_METHOD_1_3E4E9510B9875F1E_OFFSET UNITYSDK_OFFSET(0x8B8F450)
#define CLASS_1_1E42D6F5BE47EE18_METHOD_1_44106E931F40271A_OFFSET UNITYSDK_OFFSET(0x8B8F4A0)
#define CLASS_1_1E42D6F5BE47EE18__CTOR_OFFSET UNITYSDK_OFFSET(0x8B8F490)

inline static constexpr unsigned int Class_1_1E42D6F5BE47EE18_TypeDefinitionIndex = 50846;

class Class_1_1E42D6F5BE47EE18 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1E42D6F5BE47EE18__CTOR_OFFSET))(this);
	}

	static ::Class_1_1E42D6F5BE47EE18* Method_1_3E4E9510B9875F1E()
	{
		return ((::Class_1_1E42D6F5BE47EE18*(*)())((::PBYTE)hIl2Cpp + CLASS_1_1E42D6F5BE47EE18_METHOD_1_3E4E9510B9875F1E_OFFSET))();
	}

	::System::Void Method_1_44106E931F40271A(::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>*))((::PBYTE)hIl2Cpp + CLASS_1_1E42D6F5BE47EE18_METHOD_1_44106E931F40271A_OFFSET))(this, a1);
	}
};
