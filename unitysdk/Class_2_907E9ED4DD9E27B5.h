#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/PriorityLinkableNodeList_1.h"
#include "unitysdk/Struct_2_4BFB662CA8913AC0.h"

class Class_0_16E4307DCC419505_408;
namespace RPG::GameCore { class GameEntity; }

#define CLASS_2_907E9ED4DD9E27B5_GET_NEXT_OFFSET UNITYSDK_OFFSET(0xC0C0240)
#define CLASS_2_907E9ED4DD9E27B5_GET_OWNER_OFFSET UNITYSDK_OFFSET(0xC0C0270)
#define CLASS_2_907E9ED4DD9E27B5_GET_PREV_OFFSET UNITYSDK_OFFSET(0xC0C0220)
#define CLASS_2_907E9ED4DD9E27B5_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0xC0C0260)
#define CLASS_2_907E9ED4DD9E27B5_METHOD_2_62593EE2FE331D20_OFFSET UNITYSDK_OFFSET(0xC0C0290)
#define CLASS_2_907E9ED4DD9E27B5_METHOD_2_AF1BFAC85B7620AB_OFFSET UNITYSDK_OFFSET(0xC0C0490)
#define CLASS_2_907E9ED4DD9E27B5_METHOD_2_BDE80AA7605FF8CE_OFFSET UNITYSDK_OFFSET(0xC0C0310)
#define CLASS_2_907E9ED4DD9E27B5_SET_NEXT_OFFSET UNITYSDK_OFFSET(0xC0C0250)
#define CLASS_2_907E9ED4DD9E27B5_SET_OWNER_OFFSET UNITYSDK_OFFSET(0xC0C0280)
#define CLASS_2_907E9ED4DD9E27B5_SET_PREV_OFFSET UNITYSDK_OFFSET(0xC0C0230)
#define CLASS_2_907E9ED4DD9E27B5__CTOR_OFFSET UNITYSDK_OFFSET(0xC0C06F0)

inline static constexpr unsigned int Class_2_907E9ED4DD9E27B5_TypeDefinitionIndex = 49569;

class Class_2_907E9ED4DD9E27B5 : public ::RPG::PriorityLinkableNodeList_1<::Class_0_16E4307DCC419505_408*>
{
public:
	::Class_0_16E4307DCC419505_408* _Next_k__BackingField; // 0x28
	::Class_0_16E4307DCC419505_408* _Prev_k__BackingField; // 0x30
	::RPG::GameCore::GameEntity* _Owner_k__BackingField; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_907E9ED4DD9E27B5__CTOR_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_408* get_Prev()
	{
		return ((::Class_0_16E4307DCC419505_408*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_907E9ED4DD9E27B5_GET_PREV_OFFSET))(this);
	}

	::System::Void set_Prev(::Class_0_16E4307DCC419505_408* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_408*))((::PBYTE)hIl2Cpp + CLASS_2_907E9ED4DD9E27B5_SET_PREV_OFFSET))(this, value);
	}

	::Class_0_16E4307DCC419505_408* get_Next()
	{
		return ((::Class_0_16E4307DCC419505_408*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_907E9ED4DD9E27B5_GET_NEXT_OFFSET))(this);
	}

	::System::Void set_Next(::Class_0_16E4307DCC419505_408* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_408*))((::PBYTE)hIl2Cpp + CLASS_2_907E9ED4DD9E27B5_SET_NEXT_OFFSET))(this, value);
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

	::System::Void Method_2_62593EE2FE331D20()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_907E9ED4DD9E27B5_METHOD_2_62593EE2FE331D20_OFFSET))(this);
	}

	::System::Boolean Method_2_BDE80AA7605FF8CE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_907E9ED4DD9E27B5_METHOD_2_BDE80AA7605FF8CE_OFFSET))(this);
	}

	::System::Void Method_2_AF1BFAC85B7620AB(::Struct_2_4BFB662CA8913AC0& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_4BFB662CA8913AC0&))((::PBYTE)hIl2Cpp + CLASS_2_907E9ED4DD9E27B5_METHOD_2_AF1BFAC85B7620AB_OFFSET))(this, a1);
	}
};
