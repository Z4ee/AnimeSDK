#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class DisableSummonUnitGather; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_D23F92E2E4E5FAE2_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8B536F0)
#define CLASS_3_D23F92E2E4E5FAE2_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x8B53730)
#define CLASS_3_D23F92E2E4E5FAE2__CTOR_OFFSET UNITYSDK_OFFSET(0x8B536C0)
#define CLASS_3_D23F92E2E4E5FAE2___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8B53960)

inline static constexpr unsigned int Class_3_D23F92E2E4E5FAE2_TypeDefinitionIndex = 46858;

class Class_3_D23F92E2E4E5FAE2 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::DisableSummonUnitGather*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::DisableSummonUnitGather* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::DisableSummonUnitGather*))((::PBYTE)hIl2Cpp + CLASS_3_D23F92E2E4E5FAE2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D23F92E2E4E5FAE2_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D23F92E2E4E5FAE2_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D23F92E2E4E5FAE2___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
