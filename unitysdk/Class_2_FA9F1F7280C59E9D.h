#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C411A3DD6A930CFA.h"
#include "unitysdk/RPG/GameCore/RtAbilityProperty.h"
#include "unitysdk/RPG/GameCore/RtModifierBehaviorLifeBinding.h"

class Class_1_51EEF82BC62082E0;
class Class_1_A58651510BF6ACD7;
namespace RPG::GameCore { class RtAbilityPropertyRangeGroup; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T1, typename T2> class SortedDictionary_2; }

#define CLASS_2_FA9F1F7280C59E9D_METHOD_2_06CBBB3CC85FFF5B_OFFSET UNITYSDK_OFFSET(0x1181F180)
#define CLASS_2_FA9F1F7280C59E9D_METHOD_2_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0x1181FD90)
#define CLASS_2_FA9F1F7280C59E9D_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x1181FD30)
#define CLASS_2_FA9F1F7280C59E9D_METHOD_2_62FAA5DBAECE4376_OFFSET UNITYSDK_OFFSET(0x1181F6F0)
#define CLASS_2_FA9F1F7280C59E9D_METHOD_2_CBDC22058B67F0FE_OFFSET UNITYSDK_OFFSET(0x1181F190)
#define CLASS_2_FA9F1F7280C59E9D_METHOD_2_CF45FD09C8339E41_OFFSET UNITYSDK_OFFSET(0x1181FAE0)
#define CLASS_2_FA9F1F7280C59E9D_METHOD_2_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x1181F300)
#define CLASS_2_FA9F1F7280C59E9D_METHOD_2_DF3C54A5ADEABAF1_OFFSET UNITYSDK_OFFSET(0x1181F3C0)
#define CLASS_2_FA9F1F7280C59E9D__CTOR_OFFSET UNITYSDK_OFFSET(0x1181FCA0)

inline static constexpr unsigned int Class_2_FA9F1F7280C59E9D_TypeDefinitionIndex = 49541;

class Class_2_FA9F1F7280C59E9D : public ::Class_1_C411A3DD6A930CFA
{
public:
	::System::Collections::Generic::SortedDictionary_2<::RPG::GameCore::RtAbilityProperty, ::Class_1_51EEF82BC62082E0*>* Field_2_1; // 0x18
	::RPG::GameCore::TaskContext* Field_2_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FA9F1F7280C59E9D__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::RtModifierBehaviorLifeBinding Method_2_06CBBB3CC85FFF5B()
	{
		return ((::RPG::GameCore::RtModifierBehaviorLifeBinding(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FA9F1F7280C59E9D_METHOD_2_06CBBB3CC85FFF5B_OFFSET))(this);
	}

	::System::Void Method_2_CBDC22058B67F0FE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FA9F1F7280C59E9D_METHOD_2_CBDC22058B67F0FE_OFFSET))(this);
	}

	::System::Void Method_2_D0BD1377F2594D33()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FA9F1F7280C59E9D_METHOD_2_D0BD1377F2594D33_OFFSET))(this);
	}

	::System::Void Method_2_62FAA5DBAECE4376(::Il2CppArray<::RPG::GameCore::RtAbilityPropertyRangeGroup*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::RtAbilityPropertyRangeGroup*>*))((::PBYTE)hIl2Cpp + CLASS_2_FA9F1F7280C59E9D_METHOD_2_62FAA5DBAECE4376_OFFSET))(this, a1);
	}

	::System::Void Method_2_DF3C54A5ADEABAF1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FA9F1F7280C59E9D_METHOD_2_DF3C54A5ADEABAF1_OFFSET))(this);
	}

	::System::Void Method_2_CF45FD09C8339E41(::Class_1_A58651510BF6ACD7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A58651510BF6ACD7*))((::PBYTE)hIl2Cpp + CLASS_2_FA9F1F7280C59E9D_METHOD_2_CF45FD09C8339E41_OFFSET))(this, a1);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FA9F1F7280C59E9D_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FA9F1F7280C59E9D_METHOD_2_5790A55946AA509D_1_OFFSET))(this);
	}
};
