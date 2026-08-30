#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_DB45DB0A68AD4347_AnimStateListenerMode.h"
#include "unitysdk/RPG/GameCore/AdvWaitingTaskBase_1.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"
#include "unitysdk/UnityEngine/AnimatorTransitionInfo.h"

class Class_2_CB25D7A6FABF07EF;
namespace RPG::GameCore { class CharacterModelComponent; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitAnimStateChangeV3; }

#define CLASS_3_DB45DB0A68AD4347_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16945240)
#define CLASS_3_DB45DB0A68AD4347_METHOD_3_236A6F2EC0275904_OFFSET UNITYSDK_OFFSET(0x16946030)
#define CLASS_3_DB45DB0A68AD4347_METHOD_3_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x16945300)
#define CLASS_3_DB45DB0A68AD4347_METHOD_3_41CF9B9431532A25_OFFSET UNITYSDK_OFFSET(0x169454F0)
#define CLASS_3_DB45DB0A68AD4347_METHOD_3_568AE7A1499723FD_OFFSET UNITYSDK_OFFSET(0x169460E0)
#define CLASS_3_DB45DB0A68AD4347_METHOD_3_57A47C22D761A848_OFFSET UNITYSDK_OFFSET(0x16946170)
#define CLASS_3_DB45DB0A68AD4347_METHOD_3_AF29D9D849AE3973_OFFSET UNITYSDK_OFFSET(0x16945870)
#define CLASS_3_DB45DB0A68AD4347_METHOD_3_C3435D680BA1E779_OFFSET UNITYSDK_OFFSET(0x16945EF0)
#define CLASS_3_DB45DB0A68AD4347_METHOD_3_DF14A7106F92E27A_OFFSET UNITYSDK_OFFSET(0x16945E40)
#define CLASS_3_DB45DB0A68AD4347_ONAFTERMODELARTLOAD_OFFSET UNITYSDK_OFFSET(0x16945B40)
#define CLASS_3_DB45DB0A68AD4347_ONBEFOREMODELARTUNLOAD_OFFSET UNITYSDK_OFFSET(0x16945D90)
#define CLASS_3_DB45DB0A68AD4347_TICK_OFFSET UNITYSDK_OFFSET(0x16945370)
#define CLASS_3_DB45DB0A68AD4347__CCTOR_OFFSET UNITYSDK_OFFSET(0x169462C0)
#define CLASS_3_DB45DB0A68AD4347__CTOR_OFFSET UNITYSDK_OFFSET(0x16945020)
#define CLASS_3_DB45DB0A68AD4347__PREPAREDATA_OFFSET UNITYSDK_OFFSET(0x169456D0)
#define CLASS_3_DB45DB0A68AD4347__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x16945970)
#define CLASS_3_DB45DB0A68AD4347__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x16945C00)

inline static constexpr unsigned int Class_3_DB45DB0A68AD4347_TypeDefinitionIndex = 59000;

class Class_3_DB45DB0A68AD4347 : public ::RPG::GameCore::AdvWaitingTaskBase_1<::RPG::GameCore::WaitAnimStateChangeV3*>
{
public:
	static ::System::Int32* StaticGet_HEHDLLIIBDM()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_DB45DB0A68AD4347_TypeDefinitionIndex)->GetStaticField(0x140A0);
	}
	::Class_2_CB25D7A6FABF07EF* KJEGMDFNNNC; // 0x68
	::RPG::GameCore::CharacterModelComponent* LPONMEBFKPP; // 0x70
	::System::Int32 PNBLLILCHAG; // 0x78
	::System::Int32 EKNMMBFJHHF; // 0x7C
	::Class_3_DB45DB0A68AD4347_AnimStateListenerMode OBKHAGMAFGP; // 0x80
	::System::Boolean PFGEJMCAPJG; // 0x84
	::System::Boolean FNNEABNCAPH; // 0x85
	::System::Int32 HFHILHOCPNL; // 0x88

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitAnimStateChangeV3* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitAnimStateChangeV3*))((::PBYTE)hIl2Cpp + CLASS_3_DB45DB0A68AD4347__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_DB45DB0A68AD4347__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DB45DB0A68AD4347_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_DB45DB0A68AD4347_TICK_OFFSET))(this, a1);
	}

	::System::Boolean _PrepareData()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DB45DB0A68AD4347__PREPAREDATA_OFFSET))(this);
	}

	::System::Void _RegisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DB45DB0A68AD4347__REGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void _UnregisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DB45DB0A68AD4347__UNREGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void OnBeforeModelArtUnload(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_DB45DB0A68AD4347_ONBEFOREMODELARTUNLOAD_OFFSET))(this, a1);
	}

	::System::Void OnAfterModelArtLoad(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_DB45DB0A68AD4347_ONAFTERMODELARTLOAD_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_AF29D9D849AE3973(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_DB45DB0A68AD4347_METHOD_3_AF29D9D849AE3973_OFFSET))(this, a1);
	}

	::System::Void Method_3_DF14A7106F92E27A(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_DB45DB0A68AD4347_METHOD_3_DF14A7106F92E27A_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_C3435D680BA1E779(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_DB45DB0A68AD4347_METHOD_3_C3435D680BA1E779_OFFSET))(this, a1);
	}

	::System::Void Method_3_236A6F2EC0275904(::System::Int32 a1, ::UnityEngine::AnimatorStateInfo a2, ::UnityEngine::AnimatorTransitionInfo a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::AnimatorStateInfo, ::UnityEngine::AnimatorTransitionInfo))((::PBYTE)hIl2Cpp + CLASS_3_DB45DB0A68AD4347_METHOD_3_236A6F2EC0275904_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_3_568AE7A1499723FD()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DB45DB0A68AD4347_METHOD_3_568AE7A1499723FD_OFFSET))(this);
	}

	::System::Void Method_3_41CF9B9431532A25()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DB45DB0A68AD4347_METHOD_3_41CF9B9431532A25_OFFSET))(this);
	}

	::System::Void Method_3_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DB45DB0A68AD4347_METHOD_3_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Int32 Method_3_57A47C22D761A848(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_DB45DB0A68AD4347_METHOD_3_57A47C22D761A848_OFFSET))(this, a1, a2);
	}
};
