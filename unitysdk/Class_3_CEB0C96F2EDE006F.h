#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingTaskBase_1.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"
#include "unitysdk/UnityEngine/AnimatorTransitionInfo.h"

namespace RPG::GameCore { class CharacterModelComponent; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitAnimStateChangeV3; }

#define CLASS_3_CEB0C96F2EDE006F_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB4B0590)
#define CLASS_3_CEB0C96F2EDE006F_METHOD_3_16D69031357DF4E3_OFFSET UNITYSDK_OFFSET(0xB4B0BC0)
#define CLASS_3_CEB0C96F2EDE006F_METHOD_3_E73C5CB2668778E1_OFFSET UNITYSDK_OFFSET(0xB4B0A60)
#define CLASS_3_CEB0C96F2EDE006F_ONAFTERMODELARTLOAD_OFFSET UNITYSDK_OFFSET(0xB4B07B0)
#define CLASS_3_CEB0C96F2EDE006F_ONBEFOREMODELARTUNLOAD_OFFSET UNITYSDK_OFFSET(0xB4B09E0)
#define CLASS_3_CEB0C96F2EDE006F__CTOR_OFFSET UNITYSDK_OFFSET(0xB4B0360)
#define CLASS_3_CEB0C96F2EDE006F__PREPAREDATA_OFFSET UNITYSDK_OFFSET(0xB4B05E0)
#define CLASS_3_CEB0C96F2EDE006F__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0xB4B06C0)
#define CLASS_3_CEB0C96F2EDE006F__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0xB4B0960)
#define CLASS_3_CEB0C96F2EDE006F___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB4B0D10)
#define CLASS_3_CEB0C96F2EDE006F___IFIXBASEPROXY__PREPAREDATA_OFFSET UNITYSDK_OFFSET(0xB4B0D60)
#define CLASS_3_CEB0C96F2EDE006F___IFIXBASEPROXY__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0xB4B0D70)
#define CLASS_3_CEB0C96F2EDE006F___IFIXBASEPROXY__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0xB4B0D80)

inline static constexpr unsigned int Class_3_CEB0C96F2EDE006F_TypeDefinitionIndex = 54259;

class Class_3_CEB0C96F2EDE006F : public ::RPG::GameCore::AdvWaitingTaskBase_1<::RPG::GameCore::WaitAnimStateChangeV3*>
{
public:
	::RPG::GameCore::CharacterModelComponent* Field_3_2; // 0x68
	::System::Int32 Field_3_1; // 0x70
	::System::Int32 Field_3_0; // 0x74

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitAnimStateChangeV3* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitAnimStateChangeV3*))((::PBYTE)hIl2Cpp + CLASS_3_CEB0C96F2EDE006F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CEB0C96F2EDE006F_DISPOSE_OFFSET))(this);
	}

	::System::Boolean _PrepareData()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CEB0C96F2EDE006F__PREPAREDATA_OFFSET))(this);
	}

	::System::Void _RegisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CEB0C96F2EDE006F__REGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void _UnregisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CEB0C96F2EDE006F__UNREGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void OnBeforeModelArtUnload(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_CEB0C96F2EDE006F_ONBEFOREMODELARTUNLOAD_OFFSET))(this, a1);
	}

	::System::Void OnAfterModelArtLoad(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_CEB0C96F2EDE006F_ONAFTERMODELARTLOAD_OFFSET))(this, a1);
	}

	::System::Void Method_3_16D69031357DF4E3(::System::Int32 a1, ::UnityEngine::AnimatorStateInfo a2, ::UnityEngine::AnimatorTransitionInfo a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::AnimatorStateInfo, ::UnityEngine::AnimatorTransitionInfo))((::PBYTE)hIl2Cpp + CLASS_3_CEB0C96F2EDE006F_METHOD_3_16D69031357DF4E3_OFFSET))(this, a1, a2, a3);
	}

	::System::Int32 Method_3_E73C5CB2668778E1(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_CEB0C96F2EDE006F_METHOD_3_E73C5CB2668778E1_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CEB0C96F2EDE006F___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Boolean __iFixBaseProxy__PrepareData()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CEB0C96F2EDE006F___IFIXBASEPROXY__PREPAREDATA_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__RegisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CEB0C96F2EDE006F___IFIXBASEPROXY__REGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__UnregisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CEB0C96F2EDE006F___IFIXBASEPROXY__UNREGISTEREVENTCALLBACK_OFFSET))(this);
	}
};
