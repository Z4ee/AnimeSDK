#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetEffectAnimatorSyncWithTimeLine; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_D86E730BF8B89E48_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16179080)
#define CLASS_3_D86E730BF8B89E48__CTOR_OFFSET UNITYSDK_OFFSET(0x16179050)

inline static constexpr unsigned int Class_3_D86E730BF8B89E48_TypeDefinitionIndex = 55681;

class Class_3_D86E730BF8B89E48 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetEffectAnimatorSyncWithTimeLine*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetEffectAnimatorSyncWithTimeLine* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetEffectAnimatorSyncWithTimeLine*))((::PBYTE)hIl2Cpp + CLASS_3_D86E730BF8B89E48__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D86E730BF8B89E48_ONTASKBEGIN_OFFSET))(this);
	}
};
