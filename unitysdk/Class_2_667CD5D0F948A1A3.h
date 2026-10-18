#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/BaseEventActionSystem_1.h"
#include "unitysdk/RPG/GCFreeClosure/ActionClosure_1.h"
#include "unitysdk/RPG/GCFreeClosure/FuncClosureR_2.h"
#include "unitysdk/RPG/GameCore/FiveDimTriggerTargetType.h"

class Class_1_3A66EF8194C962E2;
class Class_1_B4357A1C72BABC6B;
class Class_2_B9E8C2EEAA5C96EC;
class Class_3_1E4F9B0ED3BF21DE;
namespace Entitas { class IContext; }
namespace Entitas { class IEntity; }
namespace Entitas { template <typename T> class ICollector_1; }
namespace RPG::GameCore { class FiveDimTriggerEventEmitterConfig; }
namespace UnityEngine { class Collider; }

#define CLASS_2_667CD5D0F948A1A3_DESTROYENTITY_OFFSET UNITYSDK_OFFSET(0x12CC01C0)
#define CLASS_2_667CD5D0F948A1A3_EXECUTE_OFFSET UNITYSDK_OFFSET(0x12CBF1D0)
#define CLASS_2_667CD5D0F948A1A3_GETENTITYBYRUNTIMEID_OFFSET UNITYSDK_OFFSET(0x12CC0160)
#define CLASS_2_667CD5D0F948A1A3_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x12CBF090)
#define CLASS_2_667CD5D0F948A1A3_METHOD_2_04BCA3530BFAFEC8_1_OFFSET UNITYSDK_OFFSET(0x12CC1530)
#define CLASS_2_667CD5D0F948A1A3_METHOD_2_04BCA3530BFAFEC8_OFFSET UNITYSDK_OFFSET(0x12CC0C10)
#define CLASS_2_667CD5D0F948A1A3_METHOD_2_3E340EEC55B2DC38_OFFSET UNITYSDK_OFFSET(0x12CBFE90)
#define CLASS_2_667CD5D0F948A1A3_METHOD_2_674F73509924BD16_OFFSET UNITYSDK_OFFSET(0x12CBEEB0)
#define CLASS_2_667CD5D0F948A1A3_METHOD_2_804997BCC0F4E1CC_OFFSET UNITYSDK_OFFSET(0x12CC0880)
#define CLASS_2_667CD5D0F948A1A3_METHOD_2_9164C14AC18802E1_OFFSET UNITYSDK_OFFSET(0x12CBFF70)
#define CLASS_2_667CD5D0F948A1A3_METHOD_2_B7D91EE9EA9F1730_OFFSET UNITYSDK_OFFSET(0x12CBF420)
#define CLASS_2_667CD5D0F948A1A3_METHOD_2_C7F94DC34BC9A36B_1_OFFSET UNITYSDK_OFFSET(0x12CC0770)
#define CLASS_2_667CD5D0F948A1A3_METHOD_2_C7F94DC34BC9A36B_OFFSET UNITYSDK_OFFSET(0x12CC0660)
#define CLASS_2_667CD5D0F948A1A3_METHOD_2_C90E1F90D339319B_OFFSET UNITYSDK_OFFSET(0x12CC0E00)
#define CLASS_2_667CD5D0F948A1A3_TEARDOWN_OFFSET UNITYSDK_OFFSET(0x12CBFAB0)
#define CLASS_2_667CD5D0F948A1A3__ADDEVENTEMITTER_OFFSET UNITYSDK_OFFSET(0x12CC0220)
#define CLASS_2_667CD5D0F948A1A3__CTOR_OFFSET UNITYSDK_OFFSET(0x12CBE910)
#define CLASS_2_667CD5D0F948A1A3__GETDELTATIME_OFFSET UNITYSDK_OFFSET(0x12CC0B50)
#define CLASS_2_667CD5D0F948A1A3__REMOVEEVENTEMITTER_OFFSET UNITYSDK_OFFSET(0x12CC0A80)
#define CLASS_2_667CD5D0F948A1A3__TEARDOWN_OFFSET UNITYSDK_OFFSET(0x12CBFCD0)

inline static constexpr unsigned int Class_2_667CD5D0F948A1A3_TypeDefinitionIndex = 77090;

class Class_2_667CD5D0F948A1A3 : public ::RPG::Client::LittleGame::FiveDim::BaseEventActionSystem_1<::Class_2_B9E8C2EEAA5C96EC*>
{
public:
	::Class_3_1E4F9B0ED3BF21DE* PDENFEFCAGN; // 0x50
	::Entitas::ICollector_1<::Class_2_B9E8C2EEAA5C96EC*>* CJGEEMIIAEF; // 0x58
	::Class_1_B4357A1C72BABC6B* FKINCGODJEP; // 0x60

	::System::Void _ctor(::Class_1_B4357A1C72BABC6B* a1, ::Class_3_1E4F9B0ED3BF21DE* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B4357A1C72BABC6B*, ::Class_3_1E4F9B0ED3BF21DE*))((::PBYTE)hIl2Cpp + CLASS_2_667CD5D0F948A1A3__CTOR_OFFSET))(this, a1, a2);
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

	::System::Void Method_2_674F73509924BD16()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_667CD5D0F948A1A3_METHOD_2_674F73509924BD16_OFFSET))(this);
	}

	::System::Void Method_2_3E340EEC55B2DC38(::Entitas::IContext* a1, ::Entitas::IEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IContext*, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + CLASS_2_667CD5D0F948A1A3_METHOD_2_3E340EEC55B2DC38_OFFSET))(this, a1, a2);
	}

	::Class_2_B9E8C2EEAA5C96EC* GetEntityByRuntimeID(::System::Int32 a1)
	{
		return ((::Class_2_B9E8C2EEAA5C96EC*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_667CD5D0F948A1A3_GETENTITYBYRUNTIMEID_OFFSET))(this, a1);
	}

	::System::Void DestroyEntity(::Class_2_B9E8C2EEAA5C96EC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*))((::PBYTE)hIl2Cpp + CLASS_2_667CD5D0F948A1A3_DESTROYENTITY_OFFSET))(this, a1);
	}

	::System::Void _AddEventEmitter(::Class_2_B9E8C2EEAA5C96EC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*))((::PBYTE)hIl2Cpp + CLASS_2_667CD5D0F948A1A3__ADDEVENTEMITTER_OFFSET))(this, a1);
	}

	::System::Void _RemoveEventEmitter(::Class_2_B9E8C2EEAA5C96EC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*))((::PBYTE)hIl2Cpp + CLASS_2_667CD5D0F948A1A3__REMOVEEVENTEMITTER_OFFSET))(this, a1);
	}

	::System::Single _GetDeltaTime(::Class_2_B9E8C2EEAA5C96EC* a1, ::Class_1_3A66EF8194C962E2* a2)
	{
		return ((::System::Single(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::Class_1_3A66EF8194C962E2*))((::PBYTE)hIl2Cpp + CLASS_2_667CD5D0F948A1A3__GETDELTATIME_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_B7D91EE9EA9F1730(::Class_2_B9E8C2EEAA5C96EC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*))((::PBYTE)hIl2Cpp + CLASS_2_667CD5D0F948A1A3_METHOD_2_B7D91EE9EA9F1730_OFFSET))(this, a1);
	}

	::System::Void Method_2_9164C14AC18802E1(::Class_2_B9E8C2EEAA5C96EC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*))((::PBYTE)hIl2Cpp + CLASS_2_667CD5D0F948A1A3_METHOD_2_9164C14AC18802E1_OFFSET))(this, a1);
	}

	::RPG::GCFreeClosure::ActionClosure_1<::UnityEngine::Collider*> Method_2_C7F94DC34BC9A36B(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimTriggerEventEmitterConfig* a2)
	{
		return ((::RPG::GCFreeClosure::ActionClosure_1<::UnityEngine::Collider*>(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimTriggerEventEmitterConfig*))((::PBYTE)hIl2Cpp + CLASS_2_667CD5D0F948A1A3_METHOD_2_C7F94DC34BC9A36B_OFFSET))(this, a1, a2);
	}

	::RPG::GCFreeClosure::ActionClosure_1<::UnityEngine::Collider*> Method_2_C7F94DC34BC9A36B_1(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimTriggerEventEmitterConfig* a2)
	{
		return ((::RPG::GCFreeClosure::ActionClosure_1<::UnityEngine::Collider*>(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimTriggerEventEmitterConfig*))((::PBYTE)hIl2Cpp + CLASS_2_667CD5D0F948A1A3_METHOD_2_C7F94DC34BC9A36B_1_OFFSET))(this, a1, a2);
	}

	::RPG::GCFreeClosure::FuncClosureR_2<::UnityEngine::Collider*, ::System::Boolean> Method_2_804997BCC0F4E1CC(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimTriggerTargetType a2)
	{
		return ((::RPG::GCFreeClosure::FuncClosureR_2<::UnityEngine::Collider*, ::System::Boolean>(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimTriggerTargetType))((::PBYTE)hIl2Cpp + CLASS_2_667CD5D0F948A1A3_METHOD_2_804997BCC0F4E1CC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_04BCA3530BFAFEC8(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimTriggerEventEmitterConfig* a2, ::UnityEngine::Collider* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimTriggerEventEmitterConfig*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_2_667CD5D0F948A1A3_METHOD_2_04BCA3530BFAFEC8_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_04BCA3530BFAFEC8_1(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimTriggerEventEmitterConfig* a2, ::UnityEngine::Collider* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimTriggerEventEmitterConfig*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_2_667CD5D0F948A1A3_METHOD_2_04BCA3530BFAFEC8_1_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_C90E1F90D339319B(::Class_2_B9E8C2EEAA5C96EC* a1, ::UnityEngine::Collider* a2, ::RPG::GameCore::FiveDimTriggerTargetType a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::UnityEngine::Collider*, ::RPG::GameCore::FiveDimTriggerTargetType))((::PBYTE)hIl2Cpp + CLASS_2_667CD5D0F948A1A3_METHOD_2_C90E1F90D339319B_OFFSET))(this, a1, a2, a3);
	}
};
