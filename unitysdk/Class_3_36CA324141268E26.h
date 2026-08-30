#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class PropCurveMovePause; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_36CA324141268E26_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC040150)
#define CLASS_3_36CA324141268E26__CTOR_OFFSET UNITYSDK_OFFSET(0xC040120)

inline static constexpr unsigned int Class_3_36CA324141268E26_TypeDefinitionIndex = 58456;

class Class_3_36CA324141268E26 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::PropCurveMovePause*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PropCurveMovePause* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropCurveMovePause*))((::PBYTE)hIl2Cpp + CLASS_3_36CA324141268E26__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_36CA324141268E26_ONTASKBEGIN_OFFSET))(this);
	}
};
