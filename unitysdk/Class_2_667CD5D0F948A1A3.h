#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/BaseEventActionSystem_1.h"
#include "unitysdk/RPG/GCFreeClosure/ActionClosure_1.h"
#include "unitysdk/RPG/GCFreeClosure/FuncClosureR_2.h"
#include "unitysdk/RPG/GameCore/FiveDimTriggerTargetType.h"

class Class_1_24C2E7EF22229C6A;
class Class_2_9DD8A46984F1AFFD;
class Class_3_1A92845FAFA5EC77;
namespace Entitas { class IContext; }
namespace Entitas { class IEntity; }
namespace Entitas { template <typename T> class ICollector_1; }
namespace RPG::GameCore { class FiveDimTriggerEventEmitterConfig; }
namespace UnityEngine { class Collider; }

#define CLASS_2_667CD5D0F948A1A3_DESTROYENTITY_OFFSET UNITYSDK_OFFSET(0x99725B0)
#define CLASS_2_667CD5D0F948A1A3_EXECUTE_OFFSET UNITYSDK_OFFSET(0x9971490)
#define CLASS_2_667CD5D0F948A1A3_GETENTITYBYRUNTIMEID_OFFSET UNITYSDK_OFFSET(0x9972550)
#define CLASS_2_667CD5D0F948A1A3_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x9971310)
#define CLASS_2_667CD5D0F948A1A3_METHOD_2_04BCA3530BFAFEC8_1_OFFSET UNITYSDK_OFFSET(0x9973E00)
#define CLASS_2_667CD5D0F948A1A3_METHOD_2_04BCA3530BFAFEC8_OFFSET UNITYSDK_OFFSET(0x9973100)
#define CLASS_2_667CD5D0F948A1A3_METHOD_2_804997BCC0F4E1CC_OFFSET UNITYSDK_OFFSET(0x9972D80)
#define CLASS_2_667CD5D0F948A1A3_METHOD_2_A7FF6AA8FA2F7FEB_OFFSET UNITYSDK_OFFSET(0x9971110)
#define CLASS_2_667CD5D0F948A1A3_METHOD_2_B68BB63C6CEE57D3_OFFSET UNITYSDK_OFFSET(0x9972230)
#define CLASS_2_667CD5D0F948A1A3_METHOD_2_C7DC8D1E27773822_1_OFFSET UNITYSDK_OFFSET(0x9972C60)
#define CLASS_2_667CD5D0F948A1A3_METHOD_2_C7DC8D1E27773822_OFFSET UNITYSDK_OFFSET(0x9972B40)
#define CLASS_2_667CD5D0F948A1A3_METHOD_2_C90E1F90D339319B_OFFSET UNITYSDK_OFFSET(0x9973300)
#define CLASS_2_667CD5D0F948A1A3_METHOD_2_CA2591FD8BD71D0D_OFFSET UNITYSDK_OFFSET(0x9972150)
#define CLASS_2_667CD5D0F948A1A3_METHOD_2_DB1C15B0D797DD59_OFFSET UNITYSDK_OFFSET(0x99716C0)
#define CLASS_2_667CD5D0F948A1A3_TEARDOWN_OFFSET UNITYSDK_OFFSET(0x9971DE0)
#define CLASS_2_667CD5D0F948A1A3__ADDEVENTEMITTER_OFFSET UNITYSDK_OFFSET(0x9972610)
#define CLASS_2_667CD5D0F948A1A3__CTOR_OFFSET UNITYSDK_OFFSET(0x9970AC0)
#define CLASS_2_667CD5D0F948A1A3__REMOVEEVENTEMITTER_OFFSET UNITYSDK_OFFSET(0x9972F90)
#define CLASS_2_667CD5D0F948A1A3__TEARDOWN_OFFSET UNITYSDK_OFFSET(0x9971FA0)
#define CLASS_2_667CD5D0F948A1A3___IFIXBASEPROXY_EXECUTE_OFFSET UNITYSDK_OFFSET(0x9974010)
#define CLASS_2_667CD5D0F948A1A3___IFIXBASEPROXY_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x9974000)
#define CLASS_2_667CD5D0F948A1A3___IFIXBASEPROXY_TEARDOWN_OFFSET UNITYSDK_OFFSET(0x9974020)
#define CLASS_2_667CD5D0F948A1A3___IFIXBASEPROXY__TEARDOWN_OFFSET UNITYSDK_OFFSET(0x9974030)

inline static constexpr unsigned int Class_2_667CD5D0F948A1A3_TypeDefinitionIndex = 70797;

class Class_2_667CD5D0F948A1A3 : public ::RPG::Client::LittleGame::FiveDim::BaseEventActionSystem_1<::Class_2_9DD8A46984F1AFFD*>
{
public:
	::Class_1_24C2E7EF22229C6A* Field_2_0; // 0x50
	::Entitas::ICollector_1<::Class_2_9DD8A46984F1AFFD*>* Field_2_2; // 0x58
	::Class_3_1A92845FAFA5EC77* Field_2_1; // 0x60

	::System::Void _ctor(::Class_1_24C2E7EF22229C6A* a1, ::Class_3_1A92845FAFA5EC77* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_24C2E7EF22229C6A*, ::Class_3_1A92845FAFA5EC77*))((::PBYTE)hIl2Cpp + CLASS_2_667CD5D0F948A1A3__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Initialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_667CD5D0F948A1A3_INITIALIZE_OFFSET))(this);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_667CD5D0F948A1A3_EXECUTE_OFFSET))(this);
	}

	::System::Void TearDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_667CD5D0F948A1A3_TEARDOWN_OFFSET))(this);
	}

	::System::Void _TearDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_667CD5D0F948A1A3__TEARDOWN_OFFSET))(this);
	}

	::System::Void Method_2_A7FF6AA8FA2F7FEB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_667CD5D0F948A1A3_METHOD_2_A7FF6AA8FA2F7FEB_OFFSET))(this);
	}

	::System::Void Method_2_CA2591FD8BD71D0D(::Entitas::IContext* a1, ::Entitas::IEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IContext*, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + CLASS_2_667CD5D0F948A1A3_METHOD_2_CA2591FD8BD71D0D_OFFSET))(this, a1, a2);
	}

	::Class_2_9DD8A46984F1AFFD* GetEntityByRuntimeID(::System::Int32 a1)
	{
		return ((::Class_2_9DD8A46984F1AFFD*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_667CD5D0F948A1A3_GETENTITYBYRUNTIMEID_OFFSET))(this, a1);
	}

	::System::Void DestroyEntity(::Class_2_9DD8A46984F1AFFD* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*))((::PBYTE)hIl2Cpp + CLASS_2_667CD5D0F948A1A3_DESTROYENTITY_OFFSET))(this, a1);
	}

	::System::Void _AddEventEmitter(::Class_2_9DD8A46984F1AFFD* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*))((::PBYTE)hIl2Cpp + CLASS_2_667CD5D0F948A1A3__ADDEVENTEMITTER_OFFSET))(this, a1);
	}

	::System::Void _RemoveEventEmitter(::Class_2_9DD8A46984F1AFFD* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*))((::PBYTE)hIl2Cpp + CLASS_2_667CD5D0F948A1A3__REMOVEEVENTEMITTER_OFFSET))(this, a1);
	}

	::System::Void Method_2_DB1C15B0D797DD59(::Class_2_9DD8A46984F1AFFD* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*))((::PBYTE)hIl2Cpp + CLASS_2_667CD5D0F948A1A3_METHOD_2_DB1C15B0D797DD59_OFFSET))(this, a1);
	}

	::System::Void Method_2_B68BB63C6CEE57D3(::Class_2_9DD8A46984F1AFFD* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*))((::PBYTE)hIl2Cpp + CLASS_2_667CD5D0F948A1A3_METHOD_2_B68BB63C6CEE57D3_OFFSET))(this, a1);
	}

	::RPG::GCFreeClosure::ActionClosure_1<::UnityEngine::Collider*> Method_2_C7DC8D1E27773822(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimTriggerEventEmitterConfig* a2)
	{
		return ((::RPG::GCFreeClosure::ActionClosure_1<::UnityEngine::Collider*>(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimTriggerEventEmitterConfig*))((::PBYTE)hIl2Cpp + CLASS_2_667CD5D0F948A1A3_METHOD_2_C7DC8D1E27773822_OFFSET))(this, a1, a2);
	}

	::RPG::GCFreeClosure::ActionClosure_1<::UnityEngine::Collider*> Method_2_C7DC8D1E27773822_1(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimTriggerEventEmitterConfig* a2)
	{
		return ((::RPG::GCFreeClosure::ActionClosure_1<::UnityEngine::Collider*>(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimTriggerEventEmitterConfig*))((::PBYTE)hIl2Cpp + CLASS_2_667CD5D0F948A1A3_METHOD_2_C7DC8D1E27773822_1_OFFSET))(this, a1, a2);
	}

	::RPG::GCFreeClosure::FuncClosureR_2<::UnityEngine::Collider*, ::System::Boolean> Method_2_804997BCC0F4E1CC(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimTriggerTargetType a2)
	{
		return ((::RPG::GCFreeClosure::FuncClosureR_2<::UnityEngine::Collider*, ::System::Boolean>(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimTriggerTargetType))((::PBYTE)hIl2Cpp + CLASS_2_667CD5D0F948A1A3_METHOD_2_804997BCC0F4E1CC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_04BCA3530BFAFEC8(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimTriggerEventEmitterConfig* a2, ::UnityEngine::Collider* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimTriggerEventEmitterConfig*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_2_667CD5D0F948A1A3_METHOD_2_04BCA3530BFAFEC8_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_04BCA3530BFAFEC8_1(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimTriggerEventEmitterConfig* a2, ::UnityEngine::Collider* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimTriggerEventEmitterConfig*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_2_667CD5D0F948A1A3_METHOD_2_04BCA3530BFAFEC8_1_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_C90E1F90D339319B(::Class_2_9DD8A46984F1AFFD* a1, ::UnityEngine::Collider* a2, ::RPG::GameCore::FiveDimTriggerTargetType a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::UnityEngine::Collider*, ::RPG::GameCore::FiveDimTriggerTargetType))((::PBYTE)hIl2Cpp + CLASS_2_667CD5D0F948A1A3_METHOD_2_C90E1F90D339319B_OFFSET))(this, a1, a2, a3);
	}

	::System::Void __iFixBaseProxy_Initialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_667CD5D0F948A1A3___IFIXBASEPROXY_INITIALIZE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_667CD5D0F948A1A3___IFIXBASEPROXY_EXECUTE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_TearDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_667CD5D0F948A1A3___IFIXBASEPROXY_TEARDOWN_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__TearDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_667CD5D0F948A1A3___IFIXBASEPROXY__TEARDOWN_OFFSET))(this);
	}
};
