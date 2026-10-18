#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace Cinemachine { class CinemachineBrain; }
namespace RPG::Client { class CameraBlendCurve; }
namespace RPG::GameCore { class ActiveVirtualCamera_PerformanceTransition; }
namespace RPG::GameCore { class AnchorInfo; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_478930A9575FB58A_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1572BE60)
#define CLASS_2_478930A9575FB58A_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0x1572BE40)
#define CLASS_2_478930A9575FB58A_METHOD_2_81BBB3D8FB42963C_OFFSET UNITYSDK_OFFSET(0x1572DC90)
#define CLASS_2_478930A9575FB58A_METHOD_2_84C3BE9BB646C7FD_OFFSET UNITYSDK_OFFSET(0x1572CBC0)
#define CLASS_2_478930A9575FB58A_METHOD_2_94B986AB6A27D0D2_OFFSET UNITYSDK_OFFSET(0x1572CA20)
#define CLASS_2_478930A9575FB58A_METHOD_2_CEBFF096B4C9D46B_OFFSET UNITYSDK_OFFSET(0x1572D500)
#define CLASS_2_478930A9575FB58A_METHOD_2_D109CE569415FA03_OFFSET UNITYSDK_OFFSET(0x1572E1F0)
#define CLASS_2_478930A9575FB58A_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x1572E190)
#define CLASS_2_478930A9575FB58A_ONSKIP_OFFSET UNITYSDK_OFFSET(0x1572DE50)
#define CLASS_2_478930A9575FB58A_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1572BEA0)
#define CLASS_2_478930A9575FB58A_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1572DB70)
#define CLASS_2_478930A9575FB58A_TICK_OFFSET UNITYSDK_OFFSET(0x1572DBC0)
#define CLASS_2_478930A9575FB58A__CTOR_OFFSET UNITYSDK_OFFSET(0x1572BE50)

inline static constexpr unsigned int Class_2_478930A9575FB58A_TypeDefinitionIndex = 57854;

class Class_2_478930A9575FB58A : public ::Class_1_5F51D4049EA87B7B
{
public:
	::System::String* ALGOGGCGNEJ; // 0x18
	::System::String* CENMHIGCEDG; // 0x20
	::RPG::GameCore::ActiveVirtualCamera_PerformanceTransition* OFKGLJOAMLD; // 0x28
	::System::String* MLHHKCCAOJK; // 0x30
	::Cinemachine::CinemachineBrain* NDFNHOJDLPK; // 0x38
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x40
	::System::UInt64 BHOBDDBFMEH; // 0x48

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ActiveVirtualCamera_PerformanceTransition* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ActiveVirtualCamera_PerformanceTransition*))((::PBYTE)hIl2Cpp + CLASS_2_478930A9575FB58A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean get_ForceSkip()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_478930A9575FB58A_GET_FORCESKIP_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_478930A9575FB58A_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_478930A9575FB58A_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_478930A9575FB58A_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_478930A9575FB58A_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_CEBFF096B4C9D46B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_478930A9575FB58A_METHOD_2_CEBFF096B4C9D46B_OFFSET))(this);
	}

	::System::Void Method_2_84C3BE9BB646C7FD(::RPG::GameCore::AnchorInfo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AnchorInfo*))((::PBYTE)hIl2Cpp + CLASS_2_478930A9575FB58A_METHOD_2_84C3BE9BB646C7FD_OFFSET))(this, a1);
	}

	::RPG::Client::CameraBlendCurve* Method_2_81BBB3D8FB42963C(::System::String* a1)
	{
		return ((::RPG::Client::CameraBlendCurve*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_478930A9575FB58A_METHOD_2_81BBB3D8FB42963C_OFFSET))(this, a1);
	}

	::System::Void OnSkip()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_478930A9575FB58A_ONSKIP_OFFSET))(this);
	}

	::System::Void OnFinishImmediatelyInPerformance(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_478930A9575FB58A_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET))(this, a1);
	}

	::System::Void Method_2_D109CE569415FA03()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_478930A9575FB58A_METHOD_2_D109CE569415FA03_OFFSET))(this);
	}

	::UnityEngine::GameObject* Method_2_94B986AB6A27D0D2(::UnityEngine::GameObject* a1, ::System::String* a2)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::UnityEngine::GameObject*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_478930A9575FB58A_METHOD_2_94B986AB6A27D0D2_OFFSET))(this, a1, a2);
	}
};
