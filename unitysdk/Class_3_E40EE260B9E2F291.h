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

#define CLASS_3_E40EE260B9E2F291_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18809BD0)
#define CLASS_3_E40EE260B9E2F291_METHOD_3_6EBC2B0527431AB5_OFFSET UNITYSDK_OFFSET(0x18809C70)
#define CLASS_3_E40EE260B9E2F291_METHOD_3_707759F427BD408D_OFFSET UNITYSDK_OFFSET(0x1880A2E0)
#define CLASS_3_E40EE260B9E2F291_METHOD_3_80FD513B902B9848_OFFSET UNITYSDK_OFFSET(0x18809DF0)
#define CLASS_3_E40EE260B9E2F291_METHOD_3_8C11FD828AB01FDC_OFFSET UNITYSDK_OFFSET(0x1880A1F0)
#define CLASS_3_E40EE260B9E2F291_METHOD_3_A93DAA0A6F90FD0D_OFFSET UNITYSDK_OFFSET(0x1880A560)
#define CLASS_3_E40EE260B9E2F291_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x188098F0)
#define CLASS_3_E40EE260B9E2F291_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x18809C20)
#define CLASS_3_E40EE260B9E2F291_TICK_OFFSET UNITYSDK_OFFSET(0x18809A50)
#define CLASS_3_E40EE260B9E2F291__CTOR_OFFSET UNITYSDK_OFFSET(0x18809870)

inline static constexpr unsigned int Class_3_E40EE260B9E2F291_TypeDefinitionIndex = 52512;

class Class_3_E40EE260B9E2F291 : public ::RPG::GameCore::ST_Task_1<::Class_4_4C03010B7D6B2C83*>
{
public:
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* IFPFGGKCIKD; // 0x28
	::Class_2_A0580152EB393340* AGJDABDMMEH; // 0x30
	::System::Single OMICMGNDHCF; // 0x38
	::System::Boolean DKBEJGMDLLJ; // 0x3C

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

	::System::Void Method_3_6EBC2B0527431AB5(::Class_2_FFBC8C99F6B84D8F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_FFBC8C99F6B84D8F*))((::PBYTE)hIl2Cpp + CLASS_3_E40EE260B9E2F291_METHOD_3_6EBC2B0527431AB5_OFFSET))(this, a1);
	}

	::System::Void Method_3_80FD513B902B9848(::RPG::GameCore::GameEntity* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_E40EE260B9E2F291_METHOD_3_80FD513B902B9848_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_8C11FD828AB01FDC(::RPG::GameCore::GameEntity* a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_E40EE260B9E2F291_METHOD_3_8C11FD828AB01FDC_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_A93DAA0A6F90FD0D(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_E40EE260B9E2F291_METHOD_3_A93DAA0A6F90FD0D_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_707759F427BD408D(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_3_E40EE260B9E2F291_METHOD_3_707759F427BD408D_OFFSET))(this, a1, a2);
	}
};
