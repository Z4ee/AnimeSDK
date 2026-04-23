#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_17282789426EAD93.h"
#include "unitysdk/RPG/Client/PlanetFesFloatingController_ItemType.h"

namespace RPG::Client { class PlanetFesFloatingController; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define CLASS_3_907BDEBB9C887BCB_METHOD_3_0D823ABC5D938CCF_OFFSET UNITYSDK_OFFSET(0x93866C0)
#define CLASS_3_907BDEBB9C887BCB_ONCLEAR_OFFSET UNITYSDK_OFFSET(0x9386900)
#define CLASS_3_907BDEBB9C887BCB_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x9386780)
#define CLASS_3_907BDEBB9C887BCB__CTOR_OFFSET UNITYSDK_OFFSET(0x9386980)
#define CLASS_3_907BDEBB9C887BCB__ONEXECUTE_B__1_0_OFFSET UNITYSDK_OFFSET(0x9386990)
#define CLASS_3_907BDEBB9C887BCB___IFIXBASEPROXY_ONCLEAR_OFFSET UNITYSDK_OFFSET(0x9386A00)
#define CLASS_3_907BDEBB9C887BCB___IFIXBASEPROXY_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x93869A0)

inline static constexpr unsigned int Class_3_907BDEBB9C887BCB_TypeDefinitionIndex = 68734;

class Class_3_907BDEBB9C887BCB : public ::Class_2_17282789426EAD93
{
public:
	::System::String* Field_3_2; // 0x28
	::System::String* Field_3_3; // 0x30
	::UnityEngine::Transform* Field_3_0; // 0x38
	::RPG::Client::PlanetFesFloatingController_ItemType Field_3_1; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_907BDEBB9C887BCB__CTOR_OFFSET))(this);
	}

	static ::Class_3_907BDEBB9C887BCB* Method_3_0D823ABC5D938CCF(::RPG::Client::PlanetFesFloatingController* a1, ::UnityEngine::Transform* a2, ::RPG::Client::PlanetFesFloatingController_ItemType a3, ::System::String* a4, ::System::String* a5)
	{
		return ((::Class_3_907BDEBB9C887BCB*(*)(::RPG::Client::PlanetFesFloatingController*, ::UnityEngine::Transform*, ::RPG::Client::PlanetFesFloatingController_ItemType, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_907BDEBB9C887BCB_METHOD_3_0D823ABC5D938CCF_OFFSET))(a1, a2, a3, a4, a5);
	}

	::System::Void OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_907BDEBB9C887BCB_ONEXECUTE_OFFSET))(this);
	}

	::System::Void OnClear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_907BDEBB9C887BCB_ONCLEAR_OFFSET))(this);
	}

	::System::Void _OnExecute_b__1_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_907BDEBB9C887BCB__ONEXECUTE_B__1_0_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_907BDEBB9C887BCB___IFIXBASEPROXY_ONEXECUTE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnClear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_907BDEBB9C887BCB___IFIXBASEPROXY_ONCLEAR_OFFSET))(this);
	}
};
