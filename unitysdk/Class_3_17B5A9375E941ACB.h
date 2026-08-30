#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetNpcWaypath; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_17B5A9375E941ACB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x12E85160)
#define CLASS_3_17B5A9375E941ACB__CTOR_OFFSET UNITYSDK_OFFSET(0x12E85130)

inline static constexpr unsigned int Class_3_17B5A9375E941ACB_TypeDefinitionIndex = 53508;

class Class_3_17B5A9375E941ACB : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetNpcWaypath*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetNpcWaypath* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetNpcWaypath*))((::PBYTE)hIl2Cpp + CLASS_3_17B5A9375E941ACB__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_17B5A9375E941ACB_ONTASKBEGIN_OFFSET))(this);
	}
};
