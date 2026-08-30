#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_B357CAB772B661F4_GET_COINLOOT_OFFSET UNITYSDK_OFFSET(0x134BFA30)
#define CLASS_1_B357CAB772B661F4_GET_ENEMYHEADICONPATH_OFFSET UNITYSDK_OFFSET(0x134BFA90)
#define CLASS_1_B357CAB772B661F4_GET_ENEMYID_OFFSET UNITYSDK_OFFSET(0x134BFA50)
#define CLASS_1_B357CAB772B661F4_GET_ENEMYNAME_OFFSET UNITYSDK_OFFSET(0x134BFA70)
#define CLASS_1_B357CAB772B661F4_GET_ENEMYTALKCONTENT_OFFSET UNITYSDK_OFFSET(0x134BFAD0)
#define CLASS_1_B357CAB772B661F4_GET_PLAYERTALKCONTENT_OFFSET UNITYSDK_OFFSET(0x134BFAB0)
#define CLASS_1_B357CAB772B661F4_METHOD_1_0C88AB06D46E777A_OFFSET UNITYSDK_OFFSET(0x134BF900)
#define CLASS_1_B357CAB772B661F4_METHOD_1_0D62FC38CC5C1E0E_OFFSET UNITYSDK_OFFSET(0x134BF860)
#define CLASS_1_B357CAB772B661F4_SET_COINLOOT_OFFSET UNITYSDK_OFFSET(0x134BFA40)
#define CLASS_1_B357CAB772B661F4_SET_ENEMYHEADICONPATH_OFFSET UNITYSDK_OFFSET(0x134BFAA0)
#define CLASS_1_B357CAB772B661F4_SET_ENEMYID_OFFSET UNITYSDK_OFFSET(0x134BFA60)
#define CLASS_1_B357CAB772B661F4_SET_ENEMYNAME_OFFSET UNITYSDK_OFFSET(0x134BFA80)
#define CLASS_1_B357CAB772B661F4_SET_ENEMYTALKCONTENT_OFFSET UNITYSDK_OFFSET(0x134BFAE0)
#define CLASS_1_B357CAB772B661F4_SET_PLAYERTALKCONTENT_OFFSET UNITYSDK_OFFSET(0x134BFAC0)
#define CLASS_1_B357CAB772B661F4__CTOR_OFFSET UNITYSDK_OFFSET(0x134BF8F0)

inline static constexpr unsigned int Class_1_B357CAB772B661F4_TypeDefinitionIndex = 78728;

class Class_1_B357CAB772B661F4 : public ::System::Object
{
public:
	::System::String* _EnemyName_k__BackingField; // 0x10
	::System::String* _EnemyHeadIconPath_k__BackingField; // 0x18
	::System::String* _EnemyTalkContent_k__BackingField; // 0x20
	::System::String* _PlayerTalkContent_k__BackingField; // 0x28
	::System::UInt32 _CoinLoot_k__BackingField; // 0x30
	::System::UInt32 _EnemyID_k__BackingField; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B357CAB772B661F4__CTOR_OFFSET))(this);
	}

	static ::Class_1_B357CAB772B661F4* Method_1_0D62FC38CC5C1E0E(::System::UInt32 a1)
	{
		return ((::Class_1_B357CAB772B661F4*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B357CAB772B661F4_METHOD_1_0D62FC38CC5C1E0E_OFFSET))(a1);
	}

	::System::Void Method_1_0C88AB06D46E777A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B357CAB772B661F4_METHOD_1_0C88AB06D46E777A_OFFSET))(this);
	}

	::System::UInt32 get_CoinLoot()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B357CAB772B661F4_GET_COINLOOT_OFFSET))(this);
	}

	::System::Void set_CoinLoot(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B357CAB772B661F4_SET_COINLOOT_OFFSET))(this, a1);
	}

	::System::UInt32 get_EnemyID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B357CAB772B661F4_GET_ENEMYID_OFFSET))(this);
	}

	::System::Void set_EnemyID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B357CAB772B661F4_SET_ENEMYID_OFFSET))(this, a1);
	}

	::System::String* get_EnemyName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B357CAB772B661F4_GET_ENEMYNAME_OFFSET))(this);
	}

	::System::Void set_EnemyName(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B357CAB772B661F4_SET_ENEMYNAME_OFFSET))(this, a1);
	}

	::System::String* get_EnemyHeadIconPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B357CAB772B661F4_GET_ENEMYHEADICONPATH_OFFSET))(this);
	}

	::System::Void set_EnemyHeadIconPath(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B357CAB772B661F4_SET_ENEMYHEADICONPATH_OFFSET))(this, a1);
	}

	::System::String* get_PlayerTalkContent()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B357CAB772B661F4_GET_PLAYERTALKCONTENT_OFFSET))(this);
	}

	::System::Void set_PlayerTalkContent(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B357CAB772B661F4_SET_PLAYERTALKCONTENT_OFFSET))(this, a1);
	}

	::System::String* get_EnemyTalkContent()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B357CAB772B661F4_GET_ENEMYTALKCONTENT_OFFSET))(this);
	}

	::System::Void set_EnemyTalkContent(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B357CAB772B661F4_SET_ENEMYTALKCONTENT_OFFSET))(this, a1);
	}
};
