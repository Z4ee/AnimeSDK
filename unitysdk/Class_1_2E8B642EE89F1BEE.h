#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IAssetOperation; }
namespace System { class String; }

#define CLASS_1_2E8B642EE89F1BEE_METHOD_1_70589F89E4D22649_1_OFFSET UNITYSDK_OFFSET(0xAF91450)
#define CLASS_1_2E8B642EE89F1BEE_METHOD_1_70589F89E4D22649_OFFSET UNITYSDK_OFFSET(0xAF91360)
#define CLASS_1_2E8B642EE89F1BEE_TOSTRING_OFFSET UNITYSDK_OFFSET(0xAF91540)
#define CLASS_1_2E8B642EE89F1BEE__CTOR_OFFSET UNITYSDK_OFFSET(0xAF91350)
#define CLASS_1_2E8B642EE89F1BEE___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0xAF91680)

inline static constexpr unsigned int Class_1_2E8B642EE89F1BEE_TypeDefinitionIndex = 55391;

class Class_1_2E8B642EE89F1BEE : public ::System::Object
{
public:
	::RPG::Client::IAssetOperation* Field_1_0; // 0x10

	::System::Void _ctor(::RPG::Client::IAssetOperation* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::IAssetOperation*))((::PBYTE)hIl2Cpp + CLASS_1_2E8B642EE89F1BEE__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_70589F89E4D22649()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2E8B642EE89F1BEE_METHOD_1_70589F89E4D22649_OFFSET))(this);
	}

	::System::Boolean Method_1_70589F89E4D22649_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2E8B642EE89F1BEE_METHOD_1_70589F89E4D22649_1_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2E8B642EE89F1BEE_TOSTRING_OFFSET))(this);
	}

	::System::String* __iFixBaseProxy_ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2E8B642EE89F1BEE___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
	}
};
