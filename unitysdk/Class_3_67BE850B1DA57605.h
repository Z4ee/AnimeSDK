#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetEntityUnselectable; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_67BE850B1DA57605_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11A544B0)
#define CLASS_3_67BE850B1DA57605__CTOR_OFFSET UNITYSDK_OFFSET(0x11A54480)

inline static constexpr unsigned int Class_3_67BE850B1DA57605_TypeDefinitionIndex = 51174;

class Class_3_67BE850B1DA57605 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetEntityUnselectable*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetEntityUnselectable* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetEntityUnselectable*))((::PBYTE)hIl2Cpp + CLASS_3_67BE850B1DA57605__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_67BE850B1DA57605_ONTASKBEGIN_OFFSET))(this);
	}
};
