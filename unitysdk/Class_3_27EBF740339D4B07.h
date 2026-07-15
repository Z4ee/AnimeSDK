#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_27EBF740339D4B07_AnimStateListenerMode.h"
#include "unitysdk/RPG/GameCore/AdvWaitingTaskBase_1.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"
#include "unitysdk/UnityEngine/AnimatorTransitionInfo.h"

class Class_2_CB25D7A6FABF07EF;
namespace RPG::GameCore { class CharacterModelComponent; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitAnimStateChangeV3; }

#define CLASS_3_27EBF740339D4B07_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15886800)
#define CLASS_3_27EBF740339D4B07_METHOD_3_12545FC22105C9D5_OFFSET UNITYSDK_OFFSET(0x15887360)
#define CLASS_3_27EBF740339D4B07_METHOD_3_236A6F2EC0275904_OFFSET UNITYSDK_OFFSET(0x158875A0)
#define CLASS_3_27EBF740339D4B07_METHOD_3_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x158868B0)
#define CLASS_3_27EBF740339D4B07_METHOD_3_568AE7A1499723FD_OFFSET UNITYSDK_OFFSET(0x15887670)
#define CLASS_3_27EBF740339D4B07_METHOD_3_8AE434D488D49023_OFFSET UNITYSDK_OFFSET(0x15887700)
#define CLASS_3_27EBF740339D4B07_METHOD_3_AF29D9D849AE3973_OFFSET UNITYSDK_OFFSET(0x15886E00)
#define CLASS_3_27EBF740339D4B07_METHOD_3_F3BA259643FD821A_OFFSET UNITYSDK_OFFSET(0x15887430)
#define CLASS_3_27EBF740339D4B07_METHOD_3_FA58824BA12F6F62_OFFSET UNITYSDK_OFFSET(0x15886AC0)
#define CLASS_3_27EBF740339D4B07_ONAFTERMODELARTLOAD_OFFSET UNITYSDK_OFFSET(0x158870A0)
#define CLASS_3_27EBF740339D4B07_ONBEFOREMODELARTUNLOAD_OFFSET UNITYSDK_OFFSET(0x158872B0)
#define CLASS_3_27EBF740339D4B07_TICK_OFFSET UNITYSDK_OFFSET(0x15886920)
#define CLASS_3_27EBF740339D4B07__CTOR_OFFSET UNITYSDK_OFFSET(0x158865C0)
#define CLASS_3_27EBF740339D4B07__PREPAREDATA_OFFSET UNITYSDK_OFFSET(0x15886C70)
#define CLASS_3_27EBF740339D4B07__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x15886F00)
#define CLASS_3_27EBF740339D4B07__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x15887100)

inline static constexpr unsigned int Class_3_27EBF740339D4B07_TypeDefinitionIndex = 56218;

class Class_3_27EBF740339D4B07 : public ::RPG::GameCore::AdvWaitingTaskBase_1<::RPG::GameCore::WaitAnimStateChangeV3*>
{
public:
	::RPG::GameCore::CharacterModelComponent* Field_3_0; // 0x68
	::Class_2_CB25D7A6FABF07EF* Field_3_1; // 0x70
	::System::Boolean Field_3_2; // 0x78
	::System::Boolean Field_3_3; // 0x79
	::Class_3_27EBF740339D4B07_AnimStateListenerMode Field_3_4; // 0x7C
	::System::Int32 Field_3_5; // 0x80
	::System::Int32 Field_3_6; // 0x84
	::System::Int32 Field_3_7; // 0x88

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitAnimStateChangeV3* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitAnimStateChangeV3*))((::PBYTE)hIl2Cpp + CLASS_3_27EBF740339D4B07__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27EBF740339D4B07_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_27EBF740339D4B07_TICK_OFFSET))(this, a1);
	}

	::System::Boolean _PrepareData()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27EBF740339D4B07__PREPAREDATA_OFFSET))(this);
	}

	::System::Void _RegisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27EBF740339D4B07__REGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void _UnregisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27EBF740339D4B07__UNREGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void OnBeforeModelArtUnload(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_27EBF740339D4B07_ONBEFOREMODELARTUNLOAD_OFFSET))(this, a1);
	}

	::System::Void OnAfterModelArtLoad(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_27EBF740339D4B07_ONAFTERMODELARTLOAD_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_AF29D9D849AE3973(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_27EBF740339D4B07_METHOD_3_AF29D9D849AE3973_OFFSET))(this, a1);
	}

	::System::Void Method_3_12545FC22105C9D5(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_27EBF740339D4B07_METHOD_3_12545FC22105C9D5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_F3BA259643FD821A(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_27EBF740339D4B07_METHOD_3_F3BA259643FD821A_OFFSET))(this, a1);
	}

	::System::Void Method_3_236A6F2EC0275904(::System::Int32 a1, ::UnityEngine::AnimatorStateInfo a2, ::UnityEngine::AnimatorTransitionInfo a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::AnimatorStateInfo, ::UnityEngine::AnimatorTransitionInfo))((::PBYTE)hIl2Cpp + CLASS_3_27EBF740339D4B07_METHOD_3_236A6F2EC0275904_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_3_568AE7A1499723FD()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27EBF740339D4B07_METHOD_3_568AE7A1499723FD_OFFSET))(this);
	}

	::System::Void Method_3_FA58824BA12F6F62()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27EBF740339D4B07_METHOD_3_FA58824BA12F6F62_OFFSET))(this);
	}

	::System::Void Method_3_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27EBF740339D4B07_METHOD_3_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Int32 Method_3_8AE434D488D49023(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_27EBF740339D4B07_METHOD_3_8AE434D488D49023_OFFSET))(this, a1, a2);
	}
};
