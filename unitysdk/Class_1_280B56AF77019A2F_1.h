#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityFinalityBattle::Level { class FinalityBattleBattleTargetItem; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CLASS_1_280B56AF77019A2F_1_GET_ONGOINGLEVELID_OFFSET UNITYSDK_OFFSET(0xDA58CB0)
#define CLASS_1_280B56AF77019A2F_1_METHOD_1_6E57D3559C10FFA9_OFFSET UNITYSDK_OFFSET(0xDA583B0)
#define CLASS_1_280B56AF77019A2F_1_METHOD_1_F76211AB8D332422_OFFSET UNITYSDK_OFFSET(0xDA58400)
#define CLASS_1_280B56AF77019A2F_1_SET_ONGOINGLEVELID_OFFSET UNITYSDK_OFFSET(0xDA58CC0)
#define CLASS_1_280B56AF77019A2F_1__CTOR_OFFSET UNITYSDK_OFFSET(0xDA583A0)

inline static constexpr unsigned int Class_1_280B56AF77019A2F_1_TypeDefinitionIndex = 82099;

class Class_1_280B56AF77019A2F_1 : public ::System::Object
{
public:
	::System::UInt32 _OngoingLevelID_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_280B56AF77019A2F_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_6E57D3559C10FFA9(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_280B56AF77019A2F_1_METHOD_1_6E57D3559C10FFA9_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::ActivityFinalityBattle::Level::FinalityBattleBattleTargetItem*>* Method_1_F76211AB8D332422()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::ActivityFinalityBattle::Level::FinalityBattleBattleTargetItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_280B56AF77019A2F_1_METHOD_1_F76211AB8D332422_OFFSET))(this);
	}

	::System::UInt32 get_OngoingLevelID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_280B56AF77019A2F_1_GET_ONGOINGLEVELID_OFFSET))(this);
	}

	::System::Void set_OngoingLevelID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_280B56AF77019A2F_1_SET_ONGOINGLEVELID_OFFSET))(this, a1);
	}
};
