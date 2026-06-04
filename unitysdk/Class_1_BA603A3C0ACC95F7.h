#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D40936EF3BF54118_4;
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceSessionStageResultBase; }

#define CLASS_1_BA603A3C0ACC95F7_GET_LINEUP_OFFSET UNITYSDK_OFFSET(0x14198120)
#define CLASS_1_BA603A3C0ACC95F7_GET_RESULT_OFFSET UNITYSDK_OFFSET(0x14198100)
#define CLASS_1_BA603A3C0ACC95F7_SET_LINEUP_OFFSET UNITYSDK_OFFSET(0x14198130)
#define CLASS_1_BA603A3C0ACC95F7_SET_RESULT_OFFSET UNITYSDK_OFFSET(0x14198110)
#define CLASS_1_BA603A3C0ACC95F7__CTOR_OFFSET UNITYSDK_OFFSET(0x14198140)

inline static constexpr unsigned int Class_1_BA603A3C0ACC95F7_TypeDefinitionIndex = 74137;

class Class_1_BA603A3C0ACC95F7 : public ::System::Object
{
public:
	::Class_1_D40936EF3BF54118_4* _Lineup_k__BackingField; // 0x10
	::RPG::Client::Challenge::Tierce::ChallengeTierceSessionStageResultBase* _Result_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BA603A3C0ACC95F7__CTOR_OFFSET))(this);
	}

	::RPG::Client::Challenge::Tierce::ChallengeTierceSessionStageResultBase* get_Result()
	{
		return ((::RPG::Client::Challenge::Tierce::ChallengeTierceSessionStageResultBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BA603A3C0ACC95F7_GET_RESULT_OFFSET))(this);
	}

	::System::Void set_Result(::RPG::Client::Challenge::Tierce::ChallengeTierceSessionStageResultBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::Challenge::Tierce::ChallengeTierceSessionStageResultBase*))((::PBYTE)hIl2Cpp + CLASS_1_BA603A3C0ACC95F7_SET_RESULT_OFFSET))(this, a1);
	}

	::Class_1_D40936EF3BF54118_4* get_Lineup()
	{
		return ((::Class_1_D40936EF3BF54118_4*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BA603A3C0ACC95F7_GET_LINEUP_OFFSET))(this);
	}

	::System::Void set_Lineup(::Class_1_D40936EF3BF54118_4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D40936EF3BF54118_4*))((::PBYTE)hIl2Cpp + CLASS_1_BA603A3C0ACC95F7_SET_LINEUP_OFFSET))(this, a1);
	}
};
