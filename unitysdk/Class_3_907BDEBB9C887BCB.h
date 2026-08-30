#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_5F69A1738A3628CB.h"
#include "unitysdk/RPG/Client/PlanetFesFloatingController_ItemType.h"

namespace RPG::Client { class PlanetFesFloatingController; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define CLASS_3_907BDEBB9C887BCB_METHOD_3_0D823ABC5D938CCF_OFFSET UNITYSDK_OFFSET(0xB614F50)
#define CLASS_3_907BDEBB9C887BCB_ONCLEAR_OFFSET UNITYSDK_OFFSET(0xB6151B0)
#define CLASS_3_907BDEBB9C887BCB_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0xB615010)
#define CLASS_3_907BDEBB9C887BCB__CTOR_OFFSET UNITYSDK_OFFSET(0xB615230)
#define CLASS_3_907BDEBB9C887BCB__ONEXECUTE_B__1_0_OFFSET UNITYSDK_OFFSET(0xB615240)

inline static constexpr unsigned int Class_3_907BDEBB9C887BCB_TypeDefinitionIndex = 74369;

class Class_3_907BDEBB9C887BCB : public ::Class_2_5F69A1738A3628CB
{
public:
	::System::String* GJEAIKIINML; // 0x28
	::UnityEngine::Transform* NPAFMEBNFOB; // 0x30
	::System::String* MJPKBIGCFOM; // 0x38
	::RPG::Client::PlanetFesFloatingController_ItemType LINLNNHIBAK; // 0x40

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
};
