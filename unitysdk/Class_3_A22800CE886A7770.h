#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_E256D51739E8A45D.h"

namespace RPG::GameCore { class RtBattleVCameraConfigChange; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_A22800CE886A7770_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11E83570)
#define CLASS_3_A22800CE886A7770__CTOR_OFFSET UNITYSDK_OFFSET(0x11E83550)
#define CLASS_3_A22800CE886A7770___IFIXBASEPROXY_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11E83680)

inline static constexpr unsigned int Class_3_A22800CE886A7770_TypeDefinitionIndex = 49940;

class Class_3_A22800CE886A7770 : public ::Class_2_E256D51739E8A45D
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RtBattleVCameraConfigChange* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RtBattleVCameraConfigChange*))((::PBYTE)hIl2Cpp + CLASS_3_A22800CE886A7770__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A22800CE886A7770_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A22800CE886A7770___IFIXBASEPROXY_ONTASKBEGIN_OFFSET))(this);
	}
};
