#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG { template <typename T1, typename T2, typename T3, typename T4> class FuncBinder_4; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class ModifyActionDelay; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_34E27957A448330A_METHOD_3_69EDD38EB9885B0C_OFFSET UNITYSDK_OFFSET(0x87A2470)
#define CLASS_3_34E27957A448330A_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x87A1F40)
#define CLASS_3_34E27957A448330A__CTOR_OFFSET UNITYSDK_OFFSET(0x87A1F10)

inline static constexpr unsigned int Class_3_34E27957A448330A_TypeDefinitionIndex = 44173;

class Class_3_34E27957A448330A : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ModifyActionDelay*>
{
public:
	::RPG::FuncBinder_4<::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint>* Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ModifyActionDelay* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ModifyActionDelay*))((::PBYTE)hIl2Cpp + CLASS_3_34E27957A448330A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_34E27957A448330A_ONTASKBEGIN_OFFSET))(this);
	}

	static ::RPG::GameCore::FixPoint Method_3_69EDD38EB9885B0C(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::FixPoint a2, ::RPG::GameCore::FixPoint a3)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_3_34E27957A448330A_METHOD_3_69EDD38EB9885B0C_OFFSET))(a1, a2, a3);
	}
};
