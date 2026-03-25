#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_38CB396D65CE8ADD.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

#define CLASS_3_B2C30CF19C7EFBFF_METHOD_3_0E142E3463F30350_OFFSET UNITYSDK_OFFSET(0x8D7CA30)
#define CLASS_3_B2C30CF19C7EFBFF_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0x8D7C9D0)
#define CLASS_3_B2C30CF19C7EFBFF__CTOR_OFFSET UNITYSDK_OFFSET(0x8D7CBF0)
#define CLASS_3_B2C30CF19C7EFBFF___IFIXBASEPROXY_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0x8D7CC00)

inline static constexpr unsigned int Class_3_B2C30CF19C7EFBFF_TypeDefinitionIndex = 39230;

class Class_3_B2C30CF19C7EFBFF : public ::Class_2_38CB396D65CE8ADD
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B2C30CF19C7EFBFF__CTOR_OFFSET))(this);
	}

	::System::Void OnGraphStop(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_3_B2C30CF19C7EFBFF_ONGRAPHSTOP_OFFSET))(this, a1);
	}

	::System::Void Method_3_0E142E3463F30350()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B2C30CF19C7EFBFF_METHOD_3_0E142E3463F30350_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnGraphStop(::UnityEngine::Playables::Playable P0)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_3_B2C30CF19C7EFBFF___IFIXBASEPROXY_ONGRAPHSTOP_OFFSET))(this, P0);
	}
};
