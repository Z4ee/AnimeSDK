#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_459992294D008A3E;
class Class_1_5DC1C6CD93AE2511;
class Class_1_E750E5E5D854E770;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_1_03012F75E773046C_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17BCB7E0)
#define CLASS_1_03012F75E773046C__CTOR_OFFSET UNITYSDK_OFFSET(0x17BCB870)
#define CLASS_1_03012F75E773046C___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17BCB880)

inline static constexpr unsigned int Class_1_03012F75E773046C_TypeDefinitionIndex = 37911;

class Class_1_03012F75E773046C : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_03012F75E773046C__CTOR_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_03012F75E773046C_TOSTRING_OFFSET))(this);
	}

	::System::String* __iFixBaseProxy_ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_03012F75E773046C___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
	}
};
