#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_019A582638BC3D1A_3;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_112_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1581F770)
#define CLASS_3_27518451A20BB161_112__CTOR_OFFSET UNITYSDK_OFFSET(0x1581F740)

inline static constexpr unsigned int Class_3_27518451A20BB161_112_TypeDefinitionIndex = 53607;

class Class_3_27518451A20BB161_112 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_019A582638BC3D1A_3*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_019A582638BC3D1A_3* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_019A582638BC3D1A_3*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_112__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_112_ONTASKBEGIN_OFFSET))(this);
	}
};
