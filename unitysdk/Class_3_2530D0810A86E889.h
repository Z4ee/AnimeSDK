#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_17282789426EAD93.h"

namespace RPG::Client { class PlanetFesFloatingController; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define CLASS_3_2530D0810A86E889_METHOD_3_FCCA1B407C864185_OFFSET UNITYSDK_OFFSET(0x1456F0E0)
#define CLASS_3_2530D0810A86E889_ONCLEAR_OFFSET UNITYSDK_OFFSET(0x1456F290)
#define CLASS_3_2530D0810A86E889_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1456F180)
#define CLASS_3_2530D0810A86E889__CTOR_OFFSET UNITYSDK_OFFSET(0x1456F310)
#define CLASS_3_2530D0810A86E889__ONEXECUTE_B__1_0_OFFSET UNITYSDK_OFFSET(0x1456F320)
#define CLASS_3_2530D0810A86E889___IFIXBASEPROXY_ONCLEAR_OFFSET UNITYSDK_OFFSET(0x1456F390)
#define CLASS_3_2530D0810A86E889___IFIXBASEPROXY_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1456F330)

inline static constexpr unsigned int Class_3_2530D0810A86E889_TypeDefinitionIndex = 69547;

class Class_3_2530D0810A86E889 : public ::Class_2_17282789426EAD93
{
public:
	::UnityEngine::Transform* Field_3_0; // 0x28
	::System::String* Field_3_1; // 0x30
	::System::String* Field_3_2; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2530D0810A86E889__CTOR_OFFSET))(this);
	}

	static ::Class_3_2530D0810A86E889* Method_3_FCCA1B407C864185(::RPG::Client::PlanetFesFloatingController* a1, ::UnityEngine::Transform* a2, ::System::String* a3, ::System::String* a4)
	{
		return ((::Class_3_2530D0810A86E889*(*)(::RPG::Client::PlanetFesFloatingController*, ::UnityEngine::Transform*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_2530D0810A86E889_METHOD_3_FCCA1B407C864185_OFFSET))(a1, a2, a3, a4);
	}

	::System::Void OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2530D0810A86E889_ONEXECUTE_OFFSET))(this);
	}

	::System::Void OnClear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2530D0810A86E889_ONCLEAR_OFFSET))(this);
	}

	::System::Void _OnExecute_b__1_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2530D0810A86E889__ONEXECUTE_B__1_0_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2530D0810A86E889___IFIXBASEPROXY_ONEXECUTE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnClear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2530D0810A86E889___IFIXBASEPROXY_ONCLEAR_OFFSET))(this);
	}
};
