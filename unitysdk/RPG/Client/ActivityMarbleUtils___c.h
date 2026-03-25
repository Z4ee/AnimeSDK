#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class DynamicValue; }
namespace RPG::GameCore { class MarblePVPRankConfigRow; }
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_ACTIVITYMARBLEUTILS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x8F71140)
#define RPG_CLIENT_ACTIVITYMARBLEUTILS___C__CREATEMARBLETEACHMATCH_B__5_0_OFFSET UNITYSDK_OFFSET(0x8F71190)
#define RPG_CLIENT_ACTIVITYMARBLEUTILS___C__CTOR_OFFSET UNITYSDK_OFFSET(0x8F71180)
#define RPG_CLIENT_ACTIVITYMARBLEUTILS___C__GETALLRANKCONFIG_B__18_0_OFFSET UNITYSDK_OFFSET(0x8F71270)
#define RPG_CLIENT_ACTIVITYMARBLEUTILS___C__GETPVPMARBLESEALIDS_B__13_0_OFFSET UNITYSDK_OFFSET(0x8F71260)
#define RPG_CLIENT_ACTIVITYMARBLEUTILS___C__GETPVPMARBLESEALIDS_B__13_1_OFFSET UNITYSDK_OFFSET(0x8F71250)
#define RPG_CLIENT_ACTIVITYMARBLEUTILS___C__GETPVPMARBLESEALIDS_B__13_2_OFFSET UNITYSDK_OFFSET(0x8F711F0)
#define RPG_CLIENT_ACTIVITYMARBLEUTILS___C__OPENMARBLEMAINPAGE_B__21_1_OFFSET UNITYSDK_OFFSET(0x8F712B0)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityMarbleUtils___c_TypeDefinitionIndex = 53432;

	class ActivityMarbleUtils___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::UInt32, ::System::UInt32>** StaticGet___9__13_0()
		{
			return (::System::Func_2<::System::UInt32, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(ActivityMarbleUtils___c_TypeDefinitionIndex)->GetStaticField(0x2D6C0);
		}
		static ::System::Func_2<::RPG::GameCore::DynamicValue*, ::System::UInt32>** StaticGet___9__5_0()
		{
			return (::System::Func_2<::RPG::GameCore::DynamicValue*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(ActivityMarbleUtils___c_TypeDefinitionIndex)->GetStaticField(0x2D6C8);
		}
		static ::System::Action** StaticGet___9__21_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(ActivityMarbleUtils___c_TypeDefinitionIndex)->GetStaticField(0x2D6D0);
		}
		static ::RPG::Client::ActivityMarbleUtils___c** StaticGet___9()
		{
			return (::RPG::Client::ActivityMarbleUtils___c**)Il2CppClass::FromTypeDefinitionIndex(ActivityMarbleUtils___c_TypeDefinitionIndex)->GetStaticField(0x2D6D8);
		}
		static ::System::Func_2<::System::UInt32, ::System::UInt32>** StaticGet___9__13_1()
		{
			return (::System::Func_2<::System::UInt32, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(ActivityMarbleUtils___c_TypeDefinitionIndex)->GetStaticField(0x2D6E0);
		}
		static ::System::Comparison_1<::RPG::GameCore::MarblePVPRankConfigRow*>** StaticGet___9__18_0()
		{
			return (::System::Comparison_1<::RPG::GameCore::MarblePVPRankConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityMarbleUtils___c_TypeDefinitionIndex)->GetStaticField(0x2D6E8);
		}
		static ::System::Func_2<::RPG::GameCore::DynamicValue*, ::System::UInt32>** StaticGet___9__13_2()
		{
			return (::System::Func_2<::RPG::GameCore::DynamicValue*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(ActivityMarbleUtils___c_TypeDefinitionIndex)->GetStaticField(0x2D6F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLEUTILS___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLEUTILS___C__CTOR_OFFSET))(this);
		}

		::System::UInt32 _CreateMarbleTeachMatch_b__5_0(::RPG::GameCore::DynamicValue* x)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::DynamicValue*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLEUTILS___C__CREATEMARBLETEACHMATCH_B__5_0_OFFSET))(this, x);
		}

		::System::UInt32 _GetPVPMarbleSealIDs_b__13_2(::RPG::GameCore::DynamicValue* e)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::DynamicValue*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLEUTILS___C__GETPVPMARBLESEALIDS_B__13_2_OFFSET))(this, e);
		}

		::System::UInt32 _GetPVPMarbleSealIDs_b__13_1(::System::UInt32 x)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLEUTILS___C__GETPVPMARBLESEALIDS_B__13_1_OFFSET))(this, x);
		}

		::System::UInt32 _GetPVPMarbleSealIDs_b__13_0(::System::UInt32 x)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLEUTILS___C__GETPVPMARBLESEALIDS_B__13_0_OFFSET))(this, x);
		}

		::System::Int32 _GetAllRankConfig_b__18_0(::RPG::GameCore::MarblePVPRankConfigRow* a, ::RPG::GameCore::MarblePVPRankConfigRow* b)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::MarblePVPRankConfigRow*, ::RPG::GameCore::MarblePVPRankConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLEUTILS___C__GETALLRANKCONFIG_B__18_0_OFFSET))(this, a, b);
		}

		::System::Void _OpenMarbleMainPage_b__21_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLEUTILS___C__OPENMARBLEMAINPAGE_B__21_1_OFFSET))(this);
		}
	};
}
