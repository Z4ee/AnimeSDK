#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class ShowGuideTextFollow3D; }
namespace RPG::GameCore { class TaskContext; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_885D748132FDC2B1_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16080370)
#define CLASS_2_885D748132FDC2B1_METHOD_2_7352BE9A0DF686CA_OFFSET UNITYSDK_OFFSET(0x160807D0)
#define CLASS_2_885D748132FDC2B1_METHOD_2_A9AE62EC8237EA52_OFFSET UNITYSDK_OFFSET(0x16080690)
#define CLASS_2_885D748132FDC2B1_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x160803B0)
#define CLASS_2_885D748132FDC2B1_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x16080720)
#define CLASS_2_885D748132FDC2B1_TICK_OFFSET UNITYSDK_OFFSET(0x16080770)
#define CLASS_2_885D748132FDC2B1__CTOR_OFFSET UNITYSDK_OFFSET(0x16080360)

inline static constexpr unsigned int Class_2_885D748132FDC2B1_TypeDefinitionIndex = 58808;

class Class_2_885D748132FDC2B1 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::ShowGuideTextFollow3D* OFKGLJOAMLD; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowGuideTextFollow3D* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowGuideTextFollow3D*))((::PBYTE)hIl2Cpp + CLASS_2_885D748132FDC2B1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_885D748132FDC2B1_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_885D748132FDC2B1_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_885D748132FDC2B1_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_885D748132FDC2B1_TICK_OFFSET))(this, a1);
	}

	::UnityEngine::GameObject* Method_2_A9AE62EC8237EA52()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_885D748132FDC2B1_METHOD_2_A9AE62EC8237EA52_OFFSET))(this);
	}

	::UnityEngine::GameObject* Method_2_7352BE9A0DF686CA(::RPG::GameCore::GameEntity* a1)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_885D748132FDC2B1_METHOD_2_7352BE9A0DF686CA_OFFSET))(this, a1);
	}
};
