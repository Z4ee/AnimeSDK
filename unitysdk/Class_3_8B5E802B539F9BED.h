#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG { template <typename T1, typename T2, typename T3, typename T4> class FuncBinder_4; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class ModifyActionDelay; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_8B5E802B539F9BED_METHOD_3_13DA53339159C697_OFFSET UNITYSDK_OFFSET(0xC1CE220)
#define CLASS_3_8B5E802B539F9BED_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC1CDCF0)
#define CLASS_3_8B5E802B539F9BED__CTOR_OFFSET UNITYSDK_OFFSET(0xC1CDCC0)

inline static constexpr unsigned int Class_3_8B5E802B539F9BED_TypeDefinitionIndex = 51548;

class Class_3_8B5E802B539F9BED : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ModifyActionDelay*>
{
public:
	::RPG::FuncBinder_4<::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint>* Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ModifyActionDelay* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ModifyActionDelay*))((::PBYTE)hIl2Cpp + CLASS_3_8B5E802B539F9BED__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8B5E802B539F9BED_ONTASKBEGIN_OFFSET))(this);
	}

	static ::RPG::GameCore::FixPoint Method_3_13DA53339159C697(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::FixPoint a2, ::RPG::GameCore::FixPoint a3)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_3_8B5E802B539F9BED_METHOD_3_13DA53339159C697_OFFSET))(a1, a2, a3);
	}
};
