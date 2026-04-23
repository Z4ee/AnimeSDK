#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/PressureSwitchBaseSystem_1.h"
#include "unitysdk/RPG/GCFreeClosure/FuncClosureR_2.h"

class Class_1_24C2E7EF22229C6A;
class Class_2_9DD8A46984F1AFFD;
class Class_3_1A92845FAFA5EC77;
namespace System { class String; }
namespace UnityEngine { class Collider; }

#define CLASS_2_0AB9FCFB2F58A273_METHOD_2_58BEA1F06C0CB5B9_OFFSET UNITYSDK_OFFSET(0xD387050)
#define CLASS_2_0AB9FCFB2F58A273_METHOD_2_667EE29C97072F9D_OFFSET UNITYSDK_OFFSET(0xD3871F0)
#define CLASS_2_0AB9FCFB2F58A273__CREATETRIGGER_OFFSET UNITYSDK_OFFSET(0xD386A90)
#define CLASS_2_0AB9FCFB2F58A273__CTOR_OFFSET UNITYSDK_OFFSET(0xD3863D0)
#define CLASS_2_0AB9FCFB2F58A273__GETENTITYBYRUNTIMEID_OFFSET UNITYSDK_OFFSET(0xD386A30)
#define CLASS_2_0AB9FCFB2F58A273__LOGERROR_OFFSET UNITYSDK_OFFSET(0xD3869D0)
#define CLASS_2_0AB9FCFB2F58A273__ONTRIGGERIN_OFFSET UNITYSDK_OFFSET(0xD3867D0)
#define CLASS_2_0AB9FCFB2F58A273__ONTRIGGEROUT_OFFSET UNITYSDK_OFFSET(0xD3868F0)
#define CLASS_2_0AB9FCFB2F58A273__TEARDOWN_OFFSET UNITYSDK_OFFSET(0xD3866A0)
#define CLASS_2_0AB9FCFB2F58A273___IFIXBASEPROXY__LOGERROR_OFFSET UNITYSDK_OFFSET(0xD3874F0)
#define CLASS_2_0AB9FCFB2F58A273___IFIXBASEPROXY__TEARDOWN_OFFSET UNITYSDK_OFFSET(0xD3874E0)

inline static constexpr unsigned int Class_2_0AB9FCFB2F58A273_TypeDefinitionIndex = 70853;

class Class_2_0AB9FCFB2F58A273 : public ::RPG::Client::LittleGame::FiveDim::PressureSwitchBaseSystem_1<::Class_2_9DD8A46984F1AFFD*>
{
public:
	// static const ::System::String* Field_2_2; // 0x0
	::Class_3_1A92845FAFA5EC77* Field_2_1; // 0x40
	::Class_1_24C2E7EF22229C6A* Field_2_0; // 0x48

	::System::Void _ctor(::Class_1_24C2E7EF22229C6A* a1, ::Class_3_1A92845FAFA5EC77* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_24C2E7EF22229C6A*, ::Class_3_1A92845FAFA5EC77*))((::PBYTE)hIl2Cpp + CLASS_2_0AB9FCFB2F58A273__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _TearDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0AB9FCFB2F58A273__TEARDOWN_OFFSET))(this);
	}

	::System::Void _OnTriggerIn(::Class_2_9DD8A46984F1AFFD* a1, ::UnityEngine::Collider* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_2_0AB9FCFB2F58A273__ONTRIGGERIN_OFFSET))(this, a1, a2);
	}

	::System::Void _OnTriggerOut(::Class_2_9DD8A46984F1AFFD* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*))((::PBYTE)hIl2Cpp + CLASS_2_0AB9FCFB2F58A273__ONTRIGGEROUT_OFFSET))(this, a1);
	}

	::System::Void _LogError(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_0AB9FCFB2F58A273__LOGERROR_OFFSET))(this, a1);
	}

	::Class_2_9DD8A46984F1AFFD* _GetEntityByRuntimeID(::System::Int32 a1)
	{
		return ((::Class_2_9DD8A46984F1AFFD*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_0AB9FCFB2F58A273__GETENTITYBYRUNTIMEID_OFFSET))(this, a1);
	}

	::System::Void _CreateTrigger(::Class_2_9DD8A46984F1AFFD* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*))((::PBYTE)hIl2Cpp + CLASS_2_0AB9FCFB2F58A273__CREATETRIGGER_OFFSET))(this, a1);
	}

	::RPG::GCFreeClosure::FuncClosureR_2<::UnityEngine::Collider*, ::System::Boolean> Method_2_58BEA1F06C0CB5B9()
	{
		return ((::RPG::GCFreeClosure::FuncClosureR_2<::UnityEngine::Collider*, ::System::Boolean>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0AB9FCFB2F58A273_METHOD_2_58BEA1F06C0CB5B9_OFFSET))(this);
	}

	::System::Boolean Method_2_667EE29C97072F9D(::UnityEngine::Collider* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_2_0AB9FCFB2F58A273_METHOD_2_667EE29C97072F9D_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy__TearDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0AB9FCFB2F58A273___IFIXBASEPROXY__TEARDOWN_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__LogError(::System::String* P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_0AB9FCFB2F58A273___IFIXBASEPROXY__LOGERROR_OFFSET))(this, P0);
	}
};
