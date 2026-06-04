#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_A0580152EB393340;
class Class_2_FFBC8C99F6B84D8F;
class Class_4_4C03010B7D6B2C83;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_E40EE260B9E2F291_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1434B8A0)
#define CLASS_3_E40EE260B9E2F291_METHOD_3_3A1BC9FEAE4C080B_OFFSET UNITYSDK_OFFSET(0x1434C1C0)
#define CLASS_3_E40EE260B9E2F291_METHOD_3_707759F427BD408D_OFFSET UNITYSDK_OFFSET(0x1434BF40)
#define CLASS_3_E40EE260B9E2F291_METHOD_3_80FD513B902B9848_OFFSET UNITYSDK_OFFSET(0x1434BA50)
#define CLASS_3_E40EE260B9E2F291_METHOD_3_85C53A16326B4DEE_OFFSET UNITYSDK_OFFSET(0x1434B940)
#define CLASS_3_E40EE260B9E2F291_METHOD_3_8C11FD828AB01FDC_OFFSET UNITYSDK_OFFSET(0x1434BE50)
#define CLASS_3_E40EE260B9E2F291_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1434B650)
#define CLASS_3_E40EE260B9E2F291_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1434B8F0)
#define CLASS_3_E40EE260B9E2F291_TICK_OFFSET UNITYSDK_OFFSET(0x1434B720)
#define CLASS_3_E40EE260B9E2F291__CTOR_OFFSET UNITYSDK_OFFSET(0x1434B5D0)
#define CLASS_3_E40EE260B9E2F291___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1434C2D0)
#define CLASS_3_E40EE260B9E2F291___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x1434C320)

inline static constexpr unsigned int Class_3_E40EE260B9E2F291_TypeDefinitionIndex = 48838;

class Class_3_E40EE260B9E2F291 : public ::RPG::GameCore::ST_Task_1<::Class_4_4C03010B7D6B2C83*>
{
public:
	::Class_2_A0580152EB393340* Field_3_0; // 0x28
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* Field_3_1; // 0x30
	::System::Boolean Field_3_2; // 0x38
	::System::Single Field_3_3; // 0x3C

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_4C03010B7D6B2C83* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_4C03010B7D6B2C83*))((::PBYTE)hIl2Cpp + CLASS_3_E40EE260B9E2F291__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E40EE260B9E2F291_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E40EE260B9E2F291_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E40EE260B9E2F291_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_E40EE260B9E2F291_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_3_85C53A16326B4DEE(::Class_2_FFBC8C99F6B84D8F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_FFBC8C99F6B84D8F*))((::PBYTE)hIl2Cpp + CLASS_3_E40EE260B9E2F291_METHOD_3_85C53A16326B4DEE_OFFSET))(this, a1);
	}

	::System::Void Method_3_80FD513B902B9848(::RPG::GameCore::GameEntity* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_E40EE260B9E2F291_METHOD_3_80FD513B902B9848_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_8C11FD828AB01FDC(::RPG::GameCore::GameEntity* a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_E40EE260B9E2F291_METHOD_3_8C11FD828AB01FDC_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_3A1BC9FEAE4C080B(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_E40EE260B9E2F291_METHOD_3_3A1BC9FEAE4C080B_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_707759F427BD408D(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_3_E40EE260B9E2F291_METHOD_3_707759F427BD408D_OFFSET))(this, a1, a2);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E40EE260B9E2F291___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_E40EE260B9E2F291___IFIXBASEPROXY_TICK_OFFSET))(this, a1);
	}
};
