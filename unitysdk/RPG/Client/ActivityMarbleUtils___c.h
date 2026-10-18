#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class DynamicValue; }
namespace RPG::GameCore { class MarblePVPRankConfigRow; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_ACTIVITYMARBLEUTILS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xC553C30)
#define RPG_CLIENT_ACTIVITYMARBLEUTILS___C__CREATEMARBLETEACHMATCH_B__6_0_OFFSET UNITYSDK_OFFSET(0xC553C80)
#define RPG_CLIENT_ACTIVITYMARBLEUTILS___C__CTOR_OFFSET UNITYSDK_OFFSET(0xC553C70)
#define RPG_CLIENT_ACTIVITYMARBLEUTILS___C__GETALLRANKCONFIG_B__20_0_OFFSET UNITYSDK_OFFSET(0xC553D70)
#define RPG_CLIENT_ACTIVITYMARBLEUTILS___C__GETPVPMARBLESEALIDS_B__15_0_OFFSET UNITYSDK_OFFSET(0xC553D50)
#define RPG_CLIENT_ACTIVITYMARBLEUTILS___C__GETPVPMARBLESEALIDS_B__15_1_OFFSET UNITYSDK_OFFSET(0xC553D60)
#define RPG_CLIENT_ACTIVITYMARBLEUTILS___C__GETPVPMARBLESEALIDS_B__15_2_OFFSET UNITYSDK_OFFSET(0xC553D40)
#define RPG_CLIENT_ACTIVITYMARBLEUTILS___C__GETPVPMARBLESEALIDS_B__15_3_OFFSET UNITYSDK_OFFSET(0xC553CE0)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityMarbleUtils___c_TypeDefinitionIndex = 65795;

	class ActivityMarbleUtils___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::GameCore::MarblePVPRankConfigRow*>** StaticGet___9__20_0()
		{
			return (::System::Comparison_1<::RPG::GameCore::MarblePVPRankConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityMarbleUtils___c_TypeDefinitionIndex)->GetStaticField(0x2E0A0);
		}
		static ::System::Func_2<::RPG::GameCore::DynamicValue*, ::System::UInt32>** StaticGet___9__15_3()
		{
			return (::System::Func_2<::RPG::GameCore::DynamicValue*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(ActivityMarbleUtils___c_TypeDefinitionIndex)->GetStaticField(0x2E0A8);
		}
		static ::System::Func_2<::RPG::GameCore::DynamicValue*, ::System::UInt32>** StaticGet___9__6_0()
		{
			return (::System::Func_2<::RPG::GameCore::DynamicValue*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(ActivityMarbleUtils___c_TypeDefinitionIndex)->GetStaticField(0x2E0B0);
		}
		static ::System::Func_2<::System::UInt32, ::System::UInt32>** StaticGet___9__15_2()
		{
			return (::System::Func_2<::System::UInt32, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(ActivityMarbleUtils___c_TypeDefinitionIndex)->GetStaticField(0x2E0B8);
		}
		static ::System::Func_2<::System::UInt32, ::System::UInt32>** StaticGet___9__15_1()
		{
			return (::System::Func_2<::System::UInt32, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(ActivityMarbleUtils___c_TypeDefinitionIndex)->GetStaticField(0x2E0C0);
		}
		static ::System::Func_2<::System::UInt32, ::System::UInt32>** StaticGet___9__15_0()
		{
			return (::System::Func_2<::System::UInt32, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(ActivityMarbleUtils___c_TypeDefinitionIndex)->GetStaticField(0x2E0C8);
		}
		static ::RPG::Client::ActivityMarbleUtils___c** StaticGet___9()
		{
			return (::RPG::Client::ActivityMarbleUtils___c**)Il2CppClass::FromTypeDefinitionIndex(ActivityMarbleUtils___c_TypeDefinitionIndex)->GetStaticField(0x2E0D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLEUTILS___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLEUTILS___C__CTOR_OFFSET))(this);
		}

		::System::UInt32 _CreateMarbleTeachMatch_b__6_0(::RPG::GameCore::DynamicValue* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::DynamicValue*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLEUTILS___C__CREATEMARBLETEACHMATCH_B__6_0_OFFSET))(this, a1);
		}

		::System::UInt32 _GetPVPMarbleSealIDs_b__15_3(::RPG::GameCore::DynamicValue* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::DynamicValue*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLEUTILS___C__GETPVPMARBLESEALIDS_B__15_3_OFFSET))(this, a1);
		}

		::System::UInt32 _GetPVPMarbleSealIDs_b__15_2(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLEUTILS___C__GETPVPMARBLESEALIDS_B__15_2_OFFSET))(this, a1);
		}

		::System::UInt32 _GetPVPMarbleSealIDs_b__15_0(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLEUTILS___C__GETPVPMARBLESEALIDS_B__15_0_OFFSET))(this, a1);
		}

		::System::UInt32 _GetPVPMarbleSealIDs_b__15_1(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLEUTILS___C__GETPVPMARBLESEALIDS_B__15_1_OFFSET))(this, a1);
		}

		::System::Int32 _GetAllRankConfig_b__20_0(::RPG::GameCore::MarblePVPRankConfigRow* a1, ::RPG::GameCore::MarblePVPRankConfigRow* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::MarblePVPRankConfigRow*, ::RPG::GameCore::MarblePVPRankConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLEUTILS___C__GETALLRANKCONFIG_B__20_0_OFFSET))(this, a1, a2);
		}
	};
}
