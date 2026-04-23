#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_38CB396D65CE8ADD.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_2E995171EB47730D_1_METHOD_3_334241B7253414E6_OFFSET UNITYSDK_OFFSET(0x119D2470)
#define CLASS_3_2E995171EB47730D_1_METHOD_3_7DD84EAFF333A1E4_OFFSET UNITYSDK_OFFSET(0x119D2530)
#define CLASS_3_2E995171EB47730D_1_ONGRAPHSTART_OFFSET UNITYSDK_OFFSET(0x119D22F0)
#define CLASS_3_2E995171EB47730D_1_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0x119D23A0)
#define CLASS_3_2E995171EB47730D_1__CTOR_OFFSET UNITYSDK_OFFSET(0x119D2580)
#define CLASS_3_2E995171EB47730D_1___IFIXBASEPROXY_ONGRAPHSTART_OFFSET UNITYSDK_OFFSET(0x119D2590)
#define CLASS_3_2E995171EB47730D_1___IFIXBASEPROXY_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0x119D25A0)

inline static constexpr unsigned int Class_3_2E995171EB47730D_1_TypeDefinitionIndex = 44719;

class Class_3_2E995171EB47730D_1 : public ::Class_2_38CB396D65CE8ADD
{
public:
	::System::Collections::Generic::List_1<::System::String*>* Field_3_0; // 0x20
	::System::Boolean Field_3_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2E995171EB47730D_1__CTOR_OFFSET))(this);
	}

	::System::Void OnGraphStart(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_3_2E995171EB47730D_1_ONGRAPHSTART_OFFSET))(this, a1);
	}

	::System::Void OnGraphStop(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_3_2E995171EB47730D_1_ONGRAPHSTOP_OFFSET))(this, a1);
	}

	::System::Void Method_3_334241B7253414E6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2E995171EB47730D_1_METHOD_3_334241B7253414E6_OFFSET))(this);
	}

	::System::Void Method_3_7DD84EAFF333A1E4(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_2E995171EB47730D_1_METHOD_3_7DD84EAFF333A1E4_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_OnGraphStart(::UnityEngine::Playables::Playable P0)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_3_2E995171EB47730D_1___IFIXBASEPROXY_ONGRAPHSTART_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_OnGraphStop(::UnityEngine::Playables::Playable P0)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_3_2E995171EB47730D_1___IFIXBASEPROXY_ONGRAPHSTOP_OFFSET))(this, P0);
	}
};
