#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/PressureSwitchBaseSystem_1.h"
#include "unitysdk/RPG/GCFreeClosure/FuncClosureR_2.h"

class Class_1_B4357A1C72BABC6B;
class Class_2_B9E8C2EEAA5C96EC;
class Class_3_1E4F9B0ED3BF21DE;
namespace System { class String; }
namespace UnityEngine { class Collider; }

#define CLASS_2_0AB9FCFB2F58A273_METHOD_2_07B56056592A0B82_OFFSET UNITYSDK_OFFSET(0xB4C6460)
#define CLASS_2_0AB9FCFB2F58A273_METHOD_2_797AA9C69198F42E_OFFSET UNITYSDK_OFFSET(0xB4C6290)
#define CLASS_2_0AB9FCFB2F58A273__CREATETRIGGER_OFFSET UNITYSDK_OFFSET(0xB4C5D80)
#define CLASS_2_0AB9FCFB2F58A273__CTOR_OFFSET UNITYSDK_OFFSET(0xB4C57F0)
#define CLASS_2_0AB9FCFB2F58A273__GETENTITYBYRUNTIMEID_OFFSET UNITYSDK_OFFSET(0xB4C5D20)
#define CLASS_2_0AB9FCFB2F58A273__LOGERROR_OFFSET UNITYSDK_OFFSET(0xB4C5CC0)
#define CLASS_2_0AB9FCFB2F58A273__ONTRIGGERIN_OFFSET UNITYSDK_OFFSET(0xB4C5A90)
#define CLASS_2_0AB9FCFB2F58A273__ONTRIGGEROUT_OFFSET UNITYSDK_OFFSET(0xB4C5BE0)
#define CLASS_2_0AB9FCFB2F58A273__TEARDOWN_OFFSET UNITYSDK_OFFSET(0xB4C59F0)

inline static constexpr unsigned int Class_2_0AB9FCFB2F58A273_TypeDefinitionIndex = 76675;

class Class_2_0AB9FCFB2F58A273 : public ::RPG::Client::LittleGame::FiveDim::PressureSwitchBaseSystem_1<::Class_2_B9E8C2EEAA5C96EC*>
{
public:
	// static const ::System::String* MEJMLDICBGL; // 0x0
	::Class_1_B4357A1C72BABC6B* FKINCGODJEP; // 0x40
	::Class_3_1E4F9B0ED3BF21DE* PDENFEFCAGN; // 0x48

	::System::Void _ctor(::Class_1_B4357A1C72BABC6B* a1, ::Class_3_1E4F9B0ED3BF21DE* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B4357A1C72BABC6B*, ::Class_3_1E4F9B0ED3BF21DE*))((::PBYTE)hIl2Cpp + CLASS_2_0AB9FCFB2F58A273__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _TearDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0AB9FCFB2F58A273__TEARDOWN_OFFSET))(this);
	}

	::System::Void _OnTriggerIn(::Class_2_B9E8C2EEAA5C96EC* a1, ::UnityEngine::Collider* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_2_0AB9FCFB2F58A273__ONTRIGGERIN_OFFSET))(this, a1, a2);
	}

	::System::Void _OnTriggerOut(::Class_2_B9E8C2EEAA5C96EC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*))((::PBYTE)hIl2Cpp + CLASS_2_0AB9FCFB2F58A273__ONTRIGGEROUT_OFFSET))(this, a1);
	}

	::System::Void _LogError(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_0AB9FCFB2F58A273__LOGERROR_OFFSET))(this, a1);
	}

	::Class_2_B9E8C2EEAA5C96EC* _GetEntityByRuntimeID(::System::Int32 a1)
	{
		return ((::Class_2_B9E8C2EEAA5C96EC*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_0AB9FCFB2F58A273__GETENTITYBYRUNTIMEID_OFFSET))(this, a1);
	}

	::System::Void _CreateTrigger(::Class_2_B9E8C2EEAA5C96EC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*))((::PBYTE)hIl2Cpp + CLASS_2_0AB9FCFB2F58A273__CREATETRIGGER_OFFSET))(this, a1);
	}

	::RPG::GCFreeClosure::FuncClosureR_2<::UnityEngine::Collider*, ::System::Boolean> Method_2_797AA9C69198F42E()
	{
		return ((::RPG::GCFreeClosure::FuncClosureR_2<::UnityEngine::Collider*, ::System::Boolean>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0AB9FCFB2F58A273_METHOD_2_797AA9C69198F42E_OFFSET))(this);
	}

	::System::Boolean Method_2_07B56056592A0B82(::UnityEngine::Collider* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_2_0AB9FCFB2F58A273_METHOD_2_07B56056592A0B82_OFFSET))(this, a1);
	}
};
