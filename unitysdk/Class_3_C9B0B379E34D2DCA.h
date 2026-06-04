#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class AddReShaReactProp; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_C9B0B379E34D2DCA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA567B70)
#define CLASS_3_C9B0B379E34D2DCA__CTOR_OFFSET UNITYSDK_OFFSET(0xA567B40)

inline static constexpr unsigned int Class_3_C9B0B379E34D2DCA_TypeDefinitionIndex = 48928;

class Class_3_C9B0B379E34D2DCA : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AddReShaReactProp*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AddReShaReactProp* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AddReShaReactProp*))((::PBYTE)hIl2Cpp + CLASS_3_C9B0B379E34D2DCA__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C9B0B379E34D2DCA_ONTASKBEGIN_OFFSET))(this);
	}
};
