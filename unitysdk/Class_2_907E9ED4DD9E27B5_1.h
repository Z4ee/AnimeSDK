#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/PriorityLinkableNodeList_1.h"
#include "unitysdk/Struct_2_BA11F281BD100FCC.h"

class Class_0_16E4307DCC419505_487;
namespace RPG::GameCore { class GameEntity; }

#define CLASS_2_907E9ED4DD9E27B5_1_EXECUTE_OFFSET UNITYSDK_OFFSET(0x960A6C0)
#define CLASS_2_907E9ED4DD9E27B5_1_GET_NEXT_OFFSET UNITYSDK_OFFSET(0x960A4C0)
#define CLASS_2_907E9ED4DD9E27B5_1_GET_OWNER_OFFSET UNITYSDK_OFFSET(0x960A4F0)
#define CLASS_2_907E9ED4DD9E27B5_1_GET_PREV_OFFSET UNITYSDK_OFFSET(0x960A4A0)
#define CLASS_2_907E9ED4DD9E27B5_1_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x960A4E0)
#define CLASS_2_907E9ED4DD9E27B5_1_METHOD_2_8B848E52913DFCE9_OFFSET UNITYSDK_OFFSET(0x960A510)
#define CLASS_2_907E9ED4DD9E27B5_1_METHOD_2_BDE80AA7605FF8CE_OFFSET UNITYSDK_OFFSET(0x960A570)
#define CLASS_2_907E9ED4DD9E27B5_1_SET_NEXT_OFFSET UNITYSDK_OFFSET(0x960A4D0)
#define CLASS_2_907E9ED4DD9E27B5_1_SET_OWNER_OFFSET UNITYSDK_OFFSET(0x960A500)
#define CLASS_2_907E9ED4DD9E27B5_1_SET_PREV_OFFSET UNITYSDK_OFFSET(0x960A4B0)
#define CLASS_2_907E9ED4DD9E27B5_1__CTOR_OFFSET UNITYSDK_OFFSET(0x960A8F0)

inline static constexpr unsigned int Class_2_907E9ED4DD9E27B5_1_TypeDefinitionIndex = 51810;

class Class_2_907E9ED4DD9E27B5_1 : public ::RPG::PriorityLinkableNodeList_1<::Class_0_16E4307DCC419505_487*>
{
public:
	::RPG::GameCore::GameEntity* _Owner_k__BackingField; // 0x28
	::Class_0_16E4307DCC419505_487* _Prev_k__BackingField; // 0x30
	::Class_0_16E4307DCC419505_487* _Next_k__BackingField; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_907E9ED4DD9E27B5_1__CTOR_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_487* get_Prev()
	{
		return ((::Class_0_16E4307DCC419505_487*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_907E9ED4DD9E27B5_1_GET_PREV_OFFSET))(this);
	}

	::System::Void set_Prev(::Class_0_16E4307DCC419505_487* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_487*))((::PBYTE)hIl2Cpp + CLASS_2_907E9ED4DD9E27B5_1_SET_PREV_OFFSET))(this, value);
	}

	::Class_0_16E4307DCC419505_487* get_Next()
	{
		return ((::Class_0_16E4307DCC419505_487*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_907E9ED4DD9E27B5_1_GET_NEXT_OFFSET))(this);
	}

	::System::Void set_Next(::Class_0_16E4307DCC419505_487* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_487*))((::PBYTE)hIl2Cpp + CLASS_2_907E9ED4DD9E27B5_1_SET_NEXT_OFFSET))(this, value);
	}

	::System::Int32 get_Priority()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_907E9ED4DD9E27B5_1_GET_PRIORITY_OFFSET))(this);
	}

	::RPG::GameCore::GameEntity* get_Owner()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_907E9ED4DD9E27B5_1_GET_OWNER_OFFSET))(this);
	}

	::System::Void set_Owner(::RPG::GameCore::GameEntity* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_907E9ED4DD9E27B5_1_SET_OWNER_OFFSET))(this, value);
	}

	::System::Void Method_2_8B848E52913DFCE9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_907E9ED4DD9E27B5_1_METHOD_2_8B848E52913DFCE9_OFFSET))(this);
	}

	::System::Boolean Method_2_BDE80AA7605FF8CE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_907E9ED4DD9E27B5_1_METHOD_2_BDE80AA7605FF8CE_OFFSET))(this);
	}

	::System::Void Execute(::Struct_2_BA11F281BD100FCC& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_BA11F281BD100FCC&))((::PBYTE)hIl2Cpp + CLASS_2_907E9ED4DD9E27B5_1_EXECUTE_OFFSET))(this, a1);
	}
};
