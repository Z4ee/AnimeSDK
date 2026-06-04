#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A200C09FD729958A.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

#define CLASS_3_F8620F3465111C2A_METHOD_3_0E142E3463F30350_OFFSET UNITYSDK_OFFSET(0x14153CB0)
#define CLASS_3_F8620F3465111C2A_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0x14153C50)
#define CLASS_3_F8620F3465111C2A__CTOR_OFFSET UNITYSDK_OFFSET(0x14153E70)
#define CLASS_3_F8620F3465111C2A___IFIXBASEPROXY_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0x14153E80)

inline static constexpr unsigned int Class_3_F8620F3465111C2A_TypeDefinitionIndex = 45687;

class Class_3_F8620F3465111C2A : public ::Class_2_A200C09FD729958A
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F8620F3465111C2A__CTOR_OFFSET))(this);
	}

	::System::Void OnGraphStop(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_3_F8620F3465111C2A_ONGRAPHSTOP_OFFSET))(this, a1);
	}

	::System::Void Method_3_0E142E3463F30350()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F8620F3465111C2A_METHOD_3_0E142E3463F30350_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnGraphStop(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_3_F8620F3465111C2A___IFIXBASEPROXY_ONGRAPHSTOP_OFFSET))(this, a1);
	}
};
