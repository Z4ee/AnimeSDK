#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/PriorityLinkableNodeList_1.h"
#include "unitysdk/Struct_2_BA11F281BD100FCC.h"

class Class_0_16E4307DCC419505_403;
namespace RPG::GameCore { class GameEntity; }

#define CLASS_2_907E9ED4DD9E27B5_EXECUTE_OFFSET UNITYSDK_OFFSET(0x113C0920)
#define CLASS_2_907E9ED4DD9E27B5_GET_NEXT_OFFSET UNITYSDK_OFFSET(0x113C0720)
#define CLASS_2_907E9ED4DD9E27B5_GET_OWNER_OFFSET UNITYSDK_OFFSET(0x113C0750)
#define CLASS_2_907E9ED4DD9E27B5_GET_PREV_OFFSET UNITYSDK_OFFSET(0x113C0700)
#define CLASS_2_907E9ED4DD9E27B5_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x113C0740)
#define CLASS_2_907E9ED4DD9E27B5_METHOD_2_8B848E52913DFCE9_OFFSET UNITYSDK_OFFSET(0x113C0770)
#define CLASS_2_907E9ED4DD9E27B5_METHOD_2_BDE80AA7605FF8CE_OFFSET UNITYSDK_OFFSET(0x113C07D0)
#define CLASS_2_907E9ED4DD9E27B5_SET_NEXT_OFFSET UNITYSDK_OFFSET(0x113C0730)
#define CLASS_2_907E9ED4DD9E27B5_SET_OWNER_OFFSET UNITYSDK_OFFSET(0x113C0760)
#define CLASS_2_907E9ED4DD9E27B5_SET_PREV_OFFSET UNITYSDK_OFFSET(0x113C0710)
#define CLASS_2_907E9ED4DD9E27B5__CTOR_OFFSET UNITYSDK_OFFSET(0x113C0B50)

inline static constexpr unsigned int Class_2_907E9ED4DD9E27B5_TypeDefinitionIndex = 45061;

class Class_2_907E9ED4DD9E27B5 : public ::RPG::PriorityLinkableNodeList_1<::Class_0_16E4307DCC419505_403*>
{
public:
	::RPG::GameCore::GameEntity* _Owner_k__BackingField; // 0x28
	::Class_0_16E4307DCC419505_403* _Prev_k__BackingField; // 0x30
	::Class_0_16E4307DCC419505_403* _Next_k__BackingField; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_907E9ED4DD9E27B5__CTOR_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_403* get_Prev()
	{
		return ((::Class_0_16E4307DCC419505_403*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_907E9ED4DD9E27B5_GET_PREV_OFFSET))(this);
	}

	::System::Void set_Prev(::Class_0_16E4307DCC419505_403* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_403*))((::PBYTE)hIl2Cpp + CLASS_2_907E9ED4DD9E27B5_SET_PREV_OFFSET))(this, value);
	}

	::Class_0_16E4307DCC419505_403* get_Next()
	{
		return ((::Class_0_16E4307DCC419505_403*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_907E9ED4DD9E27B5_GET_NEXT_OFFSET))(this);
	}

	::System::Void set_Next(::Class_0_16E4307DCC419505_403* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_403*))((::PBYTE)hIl2Cpp + CLASS_2_907E9ED4DD9E27B5_SET_NEXT_OFFSET))(this, value);
	}

	::System::Int32 get_Priority()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_907E9ED4DD9E27B5_GET_PRIORITY_OFFSET))(this);
	}

	::RPG::GameCore::GameEntity* get_Owner()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_907E9ED4DD9E27B5_GET_OWNER_OFFSET))(this);
	}

	::System::Void set_Owner(::RPG::GameCore::GameEntity* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_907E9ED4DD9E27B5_SET_OWNER_OFFSET))(this, value);
	}

	::System::Void Method_2_8B848E52913DFCE9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_907E9ED4DD9E27B5_METHOD_2_8B848E52913DFCE9_OFFSET))(this);
	}

	::System::Boolean Method_2_BDE80AA7605FF8CE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_907E9ED4DD9E27B5_METHOD_2_BDE80AA7605FF8CE_OFFSET))(this);
	}

	::System::Void Execute(::Struct_2_BA11F281BD100FCC& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_BA11F281BD100FCC&))((::PBYTE)hIl2Cpp + CLASS_2_907E9ED4DD9E27B5_EXECUTE_OFFSET))(this, a1);
	}
};
