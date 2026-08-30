#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_B357CAB772B661F4;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_68EB032547196D7A_GET_BATTLEID_OFFSET UNITYSDK_OFFSET(0x1B4565F0)
#define CLASS_1_68EB032547196D7A_GET_ENEMYINFO_OFFSET UNITYSDK_OFFSET(0x1B456610)
#define CLASS_1_68EB032547196D7A_METHOD_1_0D62FC38CC5C1E0E_OFFSET UNITYSDK_OFFSET(0x1B456460)
#define CLASS_1_68EB032547196D7A_METHOD_1_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0x1B456500)
#define CLASS_1_68EB032547196D7A_SET_BATTLEID_OFFSET UNITYSDK_OFFSET(0x1B456600)
#define CLASS_1_68EB032547196D7A_SET_ENEMYINFO_OFFSET UNITYSDK_OFFSET(0x1B456620)
#define CLASS_1_68EB032547196D7A__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4564F0)

inline static constexpr unsigned int Class_1_68EB032547196D7A_TypeDefinitionIndex = 78728;

class Class_1_68EB032547196D7A : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* PLDMJFJLABD; // 0x10
	::Class_1_B357CAB772B661F4* _EnemyInfo_k__BackingField; // 0x18
	::System::UInt32 _BattleID_k__BackingField; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_68EB032547196D7A__CTOR_OFFSET))(this);
	}

	static ::Class_1_68EB032547196D7A* Method_1_0D62FC38CC5C1E0E(::System::UInt32 a1)
	{
		return ((::Class_1_68EB032547196D7A*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_68EB032547196D7A_METHOD_1_0D62FC38CC5C1E0E_OFFSET))(a1);
	}

	::System::Void Method_1_B09E78EE7EE4F8FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_68EB032547196D7A_METHOD_1_B09E78EE7EE4F8FA_OFFSET))(this);
	}

	::System::UInt32 get_BattleID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_68EB032547196D7A_GET_BATTLEID_OFFSET))(this);
	}

	::System::Void set_BattleID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_68EB032547196D7A_SET_BATTLEID_OFFSET))(this, a1);
	}

	::Class_1_B357CAB772B661F4* get_EnemyInfo()
	{
		return ((::Class_1_B357CAB772B661F4*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_68EB032547196D7A_GET_ENEMYINFO_OFFSET))(this);
	}

	::System::Void set_EnemyInfo(::Class_1_B357CAB772B661F4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B357CAB772B661F4*))((::PBYTE)hIl2Cpp + CLASS_1_68EB032547196D7A_SET_ENEMYINFO_OFFSET))(this, a1);
	}
};
