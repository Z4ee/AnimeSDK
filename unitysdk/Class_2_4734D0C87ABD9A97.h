#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class AdvEntityFaceToPoint; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_4734D0C87ABD9A97_DISPOSE_OFFSET UNITYSDK_OFFSET(0x183B8480)
#define CLASS_2_4734D0C87ABD9A97_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0x183B8D80)
#define CLASS_2_4734D0C87ABD9A97_METHOD_2_CBADFF8A2D7CF34E_OFFSET UNITYSDK_OFFSET(0x183B87D0)
#define CLASS_2_4734D0C87ABD9A97_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x183B9030)
#define CLASS_2_4734D0C87ABD9A97_ONSKIP_OFFSET UNITYSDK_OFFSET(0x183B8D90)
#define CLASS_2_4734D0C87ABD9A97_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x183B8520)
#define CLASS_2_4734D0C87ABD9A97_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x183B84D0)
#define CLASS_2_4734D0C87ABD9A97_TICK_OFFSET UNITYSDK_OFFSET(0x183B8C50)
#define CLASS_2_4734D0C87ABD9A97__CTOR_OFFSET UNITYSDK_OFFSET(0x183B8470)

inline static constexpr unsigned int Class_2_4734D0C87ABD9A97_TypeDefinitionIndex = 49973;

class Class_2_4734D0C87ABD9A97 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::GameEntity* Field_2_0; // 0x18
	::RPG::GameCore::AdvEntityFaceToPoint* Field_2_1; // 0x20
	::RPG::GameCore::TaskContext* Field_2_2; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvEntityFaceToPoint* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvEntityFaceToPoint*))((::PBYTE)hIl2Cpp + CLASS_2_4734D0C87ABD9A97__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4734D0C87ABD9A97_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4734D0C87ABD9A97_ONTASKRESET_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4734D0C87ABD9A97_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_4734D0C87ABD9A97_TICK_OFFSET))(this, a1);
	}

	::System::Boolean get_ForceSkip()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4734D0C87ABD9A97_GET_FORCESKIP_OFFSET))(this);
	}

	::System::Void OnSkip()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4734D0C87ABD9A97_ONSKIP_OFFSET))(this);
	}

	::System::Void OnFinishImmediatelyInPerformance(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_4734D0C87ABD9A97_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_CBADFF8A2D7CF34E(::UnityEngine::Vector3& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_2_4734D0C87ABD9A97_METHOD_2_CBADFF8A2D7CF34E_OFFSET))(this, a1);
	}
};
