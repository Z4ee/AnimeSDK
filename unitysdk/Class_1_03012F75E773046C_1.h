#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_03012F75E773046C_1_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x143AA770)
#define CLASS_1_03012F75E773046C_1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x143AA7F0)
#define CLASS_1_03012F75E773046C_1__CTOR_OFFSET UNITYSDK_OFFSET(0x143AA8F0)
#define CLASS_1_03012F75E773046C_1___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x143AA900)

inline static constexpr unsigned int Class_1_03012F75E773046C_1_TypeDefinitionIndex = 55398;

class Class_1_03012F75E773046C_1 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_03012F75E773046C_1__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_03012F75E773046C_1_METHOD_1_1808E1CF7A125519_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_03012F75E773046C_1_TOSTRING_OFFSET))(this);
	}

	::System::String* __iFixBaseProxy_ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_03012F75E773046C_1___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
	}
};
