#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class LockPlayerControl; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_2E334D5015D58EA3_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1522CAE0)
#define CLASS_3_2E334D5015D58EA3_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0x1522CAD0)
#define CLASS_3_2E334D5015D58EA3_METHOD_3_C7BF9C1E6A78DCAB_OFFSET UNITYSDK_OFFSET(0x1522CB70)
#define CLASS_3_2E334D5015D58EA3_ONSKIP_OFFSET UNITYSDK_OFFSET(0x1522CB20)
#define CLASS_3_2E334D5015D58EA3_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1522CDD0)
#define CLASS_3_2E334D5015D58EA3__CTOR_OFFSET UNITYSDK_OFFSET(0x1522CAA0)

inline static constexpr unsigned int Class_3_2E334D5015D58EA3_TypeDefinitionIndex = 50584;

class Class_3_2E334D5015D58EA3 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::LockPlayerControl*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::LockPlayerControl* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::LockPlayerControl*))((::PBYTE)hIl2Cpp + CLASS_3_2E334D5015D58EA3__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean get_ForceSkip()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2E334D5015D58EA3_GET_FORCESKIP_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2E334D5015D58EA3_DISPOSE_OFFSET))(this);
	}

	::System::Void OnSkip()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2E334D5015D58EA3_ONSKIP_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2E334D5015D58EA3_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_C7BF9C1E6A78DCAB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2E334D5015D58EA3_METHOD_3_C7BF9C1E6A78DCAB_OFFSET))(this);
	}
};
