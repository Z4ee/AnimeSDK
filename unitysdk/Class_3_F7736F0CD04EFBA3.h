#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SkipBillboardModelVisibleCheck; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_F7736F0CD04EFBA3_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x9121600)
#define CLASS_3_F7736F0CD04EFBA3__CTOR_OFFSET UNITYSDK_OFFSET(0x91215D0)

inline static constexpr unsigned int Class_3_F7736F0CD04EFBA3_TypeDefinitionIndex = 54128;

class Class_3_F7736F0CD04EFBA3 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SkipBillboardModelVisibleCheck*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SkipBillboardModelVisibleCheck* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SkipBillboardModelVisibleCheck*))((::PBYTE)hIl2Cpp + CLASS_3_F7736F0CD04EFBA3__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F7736F0CD04EFBA3_ONTASKBEGIN_OFFSET))(this);
	}
};
