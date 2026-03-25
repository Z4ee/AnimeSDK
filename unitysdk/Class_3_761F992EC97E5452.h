#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetFloorCustomBool; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_761F992EC97E5452_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x8A84B70)
#define CLASS_3_761F992EC97E5452__CTOR_OFFSET UNITYSDK_OFFSET(0x8A84B40)

inline static constexpr unsigned int Class_3_761F992EC97E5452_TypeDefinitionIndex = 43093;

class Class_3_761F992EC97E5452 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetFloorCustomBool*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetFloorCustomBool* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetFloorCustomBool*))((::PBYTE)hIl2Cpp + CLASS_3_761F992EC97E5452__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_761F992EC97E5452_ONTASKBEGIN_OFFSET))(this);
	}
};
