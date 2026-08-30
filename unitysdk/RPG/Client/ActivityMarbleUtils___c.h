#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class DynamicValue; }
namespace RPG::GameCore { class MarblePVPRankConfigRow; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_ACTIVITYMARBLEUTILS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xC63D7F0)
#define RPG_CLIENT_ACTIVITYMARBLEUTILS___C__CREATEMARBLETEACHMATCH_B__5_0_OFFSET UNITYSDK_OFFSET(0xC63D840)
#define RPG_CLIENT_ACTIVITYMARBLEUTILS___C__CTOR_OFFSET UNITYSDK_OFFSET(0xC63D830)
#define RPG_CLIENT_ACTIVITYMARBLEUTILS___C__GETALLRANKCONFIG_B__18_0_OFFSET UNITYSDK_OFFSET(0xC63D920)
#define RPG_CLIENT_ACTIVITYMARBLEUTILS___C__GETPVPMARBLESEALIDS_B__13_0_OFFSET UNITYSDK_OFFSET(0xC63D910)
#define RPG_CLIENT_ACTIVITYMARBLEUTILS___C__GETPVPMARBLESEALIDS_B__13_1_OFFSET UNITYSDK_OFFSET(0xC63D900)
#define RPG_CLIENT_ACTIVITYMARBLEUTILS___C__GETPVPMARBLESEALIDS_B__13_2_OFFSET UNITYSDK_OFFSET(0xC63D8A0)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityMarbleUtils___c_TypeDefinitionIndex = 65857;

	class ActivityMarbleUtils___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::GameCore::DynamicValue*, ::System::UInt32>** StaticGet___9__5_0()
		{
			return (::System::Func_2<::RPG::GameCore::DynamicValue*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(ActivityMarbleUtils___c_TypeDefinitionIndex)->GetStaticField(0x62370);
		}
		static ::RPG::Client::ActivityMarbleUtils___c** StaticGet___9()
		{
			return (::RPG::Client::ActivityMarbleUtils___c**)Il2CppClass::FromTypeDefinitionIndex(ActivityMarbleUtils___c_TypeDefinitionIndex)->GetStaticField(0x62378);
		}
		static ::System::Comparison_1<::RPG::GameCore::MarblePVPRankConfigRow*>** StaticGet___9__18_0()
		{
			return (::System::Comparison_1<::RPG::GameCore::MarblePVPRankConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityMarbleUtils___c_TypeDefinitionIndex)->GetStaticField(0x62380);
		}
		static ::System::Func_2<::RPG::GameCore::DynamicValue*, ::System::UInt32>** StaticGet___9__13_2()
		{
			return (::System::Func_2<::RPG::GameCore::DynamicValue*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(ActivityMarbleUtils___c_TypeDefinitionIndex)->GetStaticField(0x62388);
		}
		static ::System::Func_2<::System::UInt32, ::System::UInt32>** StaticGet___9__13_0()
		{
			return (::System::Func_2<::System::UInt32, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(ActivityMarbleUtils___c_TypeDefinitionIndex)->GetStaticField(0x62390);
		}
		static ::System::Func_2<::System::UInt32, ::System::UInt32>** StaticGet___9__13_1()
		{
			return (::System::Func_2<::System::UInt32, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(ActivityMarbleUtils___c_TypeDefinitionIndex)->GetStaticField(0x62398);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLEUTILS___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLEUTILS___C__CTOR_OFFSET))(this);
		}

		::System::UInt32 _CreateMarbleTeachMatch_b__5_0(::RPG::GameCore::DynamicValue* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::DynamicValue*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLEUTILS___C__CREATEMARBLETEACHMATCH_B__5_0_OFFSET))(this, a1);
		}

		::System::UInt32 _GetPVPMarbleSealIDs_b__13_2(::RPG::GameCore::DynamicValue* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::DynamicValue*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLEUTILS___C__GETPVPMARBLESEALIDS_B__13_2_OFFSET))(this, a1);
		}

		::System::UInt32 _GetPVPMarbleSealIDs_b__13_1(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLEUTILS___C__GETPVPMARBLESEALIDS_B__13_1_OFFSET))(this, a1);
		}

		::System::UInt32 _GetPVPMarbleSealIDs_b__13_0(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLEUTILS___C__GETPVPMARBLESEALIDS_B__13_0_OFFSET))(this, a1);
		}

		::System::Int32 _GetAllRankConfig_b__18_0(::RPG::GameCore::MarblePVPRankConfigRow* a1, ::RPG::GameCore::MarblePVPRankConfigRow* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::MarblePVPRankConfigRow*, ::RPG::GameCore::MarblePVPRankConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLEUTILS___C__GETALLRANKCONFIG_B__18_0_OFFSET))(this, a1, a2);
		}
	};
}
