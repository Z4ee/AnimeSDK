#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class AdvSetColliderLayerState; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_0DFBA76C1E4F8514_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xCBD4E70)
#define CLASS_3_0DFBA76C1E4F8514__CTOR_OFFSET UNITYSDK_OFFSET(0xCBD4E40)

inline static constexpr unsigned int Class_3_0DFBA76C1E4F8514_TypeDefinitionIndex = 49092;

class Class_3_0DFBA76C1E4F8514 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AdvSetColliderLayerState*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvSetColliderLayerState* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvSetColliderLayerState*))((::PBYTE)hIl2Cpp + CLASS_3_0DFBA76C1E4F8514__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0DFBA76C1E4F8514_ONTASKBEGIN_OFFSET))(this);
	}
};
