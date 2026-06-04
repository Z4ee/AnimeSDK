#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_85032F25903E2944_AnimStateListenerMode.h"
#include "unitysdk/RPG/GameCore/AdvWaitingTaskBase_1.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"
#include "unitysdk/UnityEngine/AnimatorTransitionInfo.h"

class Class_2_CB25D7A6FABF07EF;
namespace RPG::GameCore { class CharacterModelComponent; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitAnimStateChangeV3; }

#define CLASS_3_85032F25903E2944_DISPOSE_OFFSET UNITYSDK_OFFSET(0x143D65A0)
#define CLASS_3_85032F25903E2944_METHOD_3_16D69031357DF4E3_OFFSET UNITYSDK_OFFSET(0x143D73E0)
#define CLASS_3_85032F25903E2944_METHOD_3_3EF33FD8BF224359_OFFSET UNITYSDK_OFFSET(0x143D7180)
#define CLASS_3_85032F25903E2944_METHOD_3_AB90410B1823FAFD_OFFSET UNITYSDK_OFFSET(0x143D7030)
#define CLASS_3_85032F25903E2944_METHOD_3_AF29D9D849AE3973_OFFSET UNITYSDK_OFFSET(0x143D68A0)
#define CLASS_3_85032F25903E2944_METHOD_3_E73C5CB2668778E1_OFFSET UNITYSDK_OFFSET(0x143D6ED0)
#define CLASS_3_85032F25903E2944_ONAFTERMODELARTLOAD_OFFSET UNITYSDK_OFFSET(0x143D6B10)
#define CLASS_3_85032F25903E2944_ONBEFOREMODELARTUNLOAD_OFFSET UNITYSDK_OFFSET(0x143D6E50)
#define CLASS_3_85032F25903E2944_TICK_OFFSET UNITYSDK_OFFSET(0x143D65F0)
#define CLASS_3_85032F25903E2944__CTOR_OFFSET UNITYSDK_OFFSET(0x143D6360)
#define CLASS_3_85032F25903E2944__PREPAREDATA_OFFSET UNITYSDK_OFFSET(0x143D67E0)
#define CLASS_3_85032F25903E2944__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x143D69A0)
#define CLASS_3_85032F25903E2944__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x143D6CE0)
#define CLASS_3_85032F25903E2944___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x143D7530)
#define CLASS_3_85032F25903E2944___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x143D7580)
#define CLASS_3_85032F25903E2944___IFIXBASEPROXY__PREPAREDATA_OFFSET UNITYSDK_OFFSET(0x143D7590)
#define CLASS_3_85032F25903E2944___IFIXBASEPROXY__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x143D75A0)
#define CLASS_3_85032F25903E2944___IFIXBASEPROXY__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x143D75B0)

inline static constexpr unsigned int Class_3_85032F25903E2944_TypeDefinitionIndex = 54985;

class Class_3_85032F25903E2944 : public ::RPG::GameCore::AdvWaitingTaskBase_1<::RPG::GameCore::WaitAnimStateChangeV3*>
{
public:
	::RPG::GameCore::CharacterModelComponent* Field_3_0; // 0x68
	::Class_2_CB25D7A6FABF07EF* Field_3_1; // 0x70
	::System::Int32 Field_3_2; // 0x78
	::System::Int32 Field_3_3; // 0x7C
	::Class_3_85032F25903E2944_AnimStateListenerMode Field_3_4; // 0x80
	::System::Int32 Field_3_5; // 0x84

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitAnimStateChangeV3* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitAnimStateChangeV3*))((::PBYTE)hIl2Cpp + CLASS_3_85032F25903E2944__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_85032F25903E2944_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_85032F25903E2944_TICK_OFFSET))(this, a1);
	}

	::System::Boolean _PrepareData()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_85032F25903E2944__PREPAREDATA_OFFSET))(this);
	}

	::System::Void _RegisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_85032F25903E2944__REGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void _UnregisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_85032F25903E2944__UNREGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void OnBeforeModelArtUnload(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_85032F25903E2944_ONBEFOREMODELARTUNLOAD_OFFSET))(this, a1);
	}

	::System::Void OnAfterModelArtLoad(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_85032F25903E2944_ONAFTERMODELARTLOAD_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_AF29D9D849AE3973(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_85032F25903E2944_METHOD_3_AF29D9D849AE3973_OFFSET))(this, a1);
	}

	::System::Void Method_3_AB90410B1823FAFD(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_85032F25903E2944_METHOD_3_AB90410B1823FAFD_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_3EF33FD8BF224359(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_85032F25903E2944_METHOD_3_3EF33FD8BF224359_OFFSET))(this, a1);
	}

	::System::Void Method_3_16D69031357DF4E3(::System::Int32 a1, ::UnityEngine::AnimatorStateInfo a2, ::UnityEngine::AnimatorTransitionInfo a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::AnimatorStateInfo, ::UnityEngine::AnimatorTransitionInfo))((::PBYTE)hIl2Cpp + CLASS_3_85032F25903E2944_METHOD_3_16D69031357DF4E3_OFFSET))(this, a1, a2, a3);
	}

	::System::Int32 Method_3_E73C5CB2668778E1(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_85032F25903E2944_METHOD_3_E73C5CB2668778E1_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_85032F25903E2944___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_85032F25903E2944___IFIXBASEPROXY_TICK_OFFSET))(this, a1);
	}

	::System::Boolean __iFixBaseProxy__PrepareData()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_85032F25903E2944___IFIXBASEPROXY__PREPAREDATA_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__RegisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_85032F25903E2944___IFIXBASEPROXY__REGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__UnregisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_85032F25903E2944___IFIXBASEPROXY__UNREGISTEREVENTCALLBACK_OFFSET))(this);
	}
};
