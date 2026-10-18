#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RewardItem/RewardItemMarkFlags.h"
#include "unitysdk/RPG/GameCore/ItemRecycleShowType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1462;
class Class_0_16E4307DCC419505_397;
class Class_1_90889A2023AB884E_7;
namespace R3 { template <typename T> class Observable_1; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3, typename T4> class Func_4; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xDEC8E60)
#define RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C__CTOR_OFFSET UNITYSDK_OFFSET(0xDEC8EA0)
#define RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDBUTTON_B__24_0_OFFSET UNITYSDK_OFFSET(0xDEC8EB0)
#define RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDBUTTON_B__24_1_OFFSET UNITYSDK_OFFSET(0xDEC8ED0)
#define RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDBUTTON_B__24_2_OFFSET UNITYSDK_OFFSET(0xDEC8F20)
#define RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDCOUNT_B__27_0_OFFSET UNITYSDK_OFFSET(0xDEC9370)
#define RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDCOUNT_B__27_1_OFFSET UNITYSDK_OFFSET(0xDEC93C0)
#define RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDICON_B__25_0_OFFSET UNITYSDK_OFFSET(0xDEC8F70)
#define RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDICON_B__25_1_OFFSET UNITYSDK_OFFSET(0xDEC8FC0)
#define RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDICON_B__25_2_OFFSET UNITYSDK_OFFSET(0xDEC9010)
#define RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDICON_B__25_3_OFFSET UNITYSDK_OFFSET(0xDEC9060)
#define RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDICON_B__25_4_OFFSET UNITYSDK_OFFSET(0xDEC90B0)
#define RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDICON_B__25_5_OFFSET UNITYSDK_OFFSET(0xDEC9260)
#define RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDNAMEPANEL_B__31_0_OFFSET UNITYSDK_OFFSET(0xDECA250)
#define RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDNAMEPANEL_B__31_1_OFFSET UNITYSDK_OFFSET(0xDECA2A0)
#define RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDRARITY_B__26_0_OFFSET UNITYSDK_OFFSET(0xDEC9280)
#define RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDRARITY_B__26_1_OFFSET UNITYSDK_OFFSET(0xDEC92D0)
#define RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDRARITY_B__26_2_OFFSET UNITYSDK_OFFSET(0xDEC9320)
#define RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDRECYCLELABELS_B__30_0_OFFSET UNITYSDK_OFFSET(0xDEC9DD0)
#define RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDRECYCLELABELS_B__30_1_OFFSET UNITYSDK_OFFSET(0xDEC9F50)
#define RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDRECYCLELABELS_B__30_2_OFFSET UNITYSDK_OFFSET(0xDECA0D0)
#define RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDRECYCLELABELS_B__30_3_OFFSET UNITYSDK_OFFSET(0xDEC9F40)
#define RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDRECYCLELABELS_B__30_4_OFFSET UNITYSDK_OFFSET(0xDECA0C0)
#define RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDRECYCLELABELS_B__30_5_OFFSET UNITYSDK_OFFSET(0xDECA240)
#define RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDREDDOT_B__32_0_OFFSET UNITYSDK_OFFSET(0xDECA2F0)
#define RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDSTATUSMARKS_B__28_0_OFFSET UNITYSDK_OFFSET(0xDEC9410)
#define RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDSTATUSMARKS_B__28_10_OFFSET UNITYSDK_OFFSET(0xDEC9710)
#define RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDSTATUSMARKS_B__28_11_OFFSET UNITYSDK_OFFSET(0xDEC9890)
#define RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDSTATUSMARKS_B__28_12_OFFSET UNITYSDK_OFFSET(0xDEC9A10)
#define RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDSTATUSMARKS_B__28_13_OFFSET UNITYSDK_OFFSET(0xDEC9B90)
#define RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDSTATUSMARKS_B__28_14_OFFSET UNITYSDK_OFFSET(0xDEC9D10)
#define RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDSTATUSMARKS_B__28_1_OFFSET UNITYSDK_OFFSET(0xDEC9420)
#define RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDSTATUSMARKS_B__28_2_OFFSET UNITYSDK_OFFSET(0xDEC95A0)
#define RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDSTATUSMARKS_B__28_3_OFFSET UNITYSDK_OFFSET(0xDEC9720)
#define RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDSTATUSMARKS_B__28_4_OFFSET UNITYSDK_OFFSET(0xDEC98A0)
#define RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDSTATUSMARKS_B__28_5_OFFSET UNITYSDK_OFFSET(0xDEC9A20)
#define RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDSTATUSMARKS_B__28_6_OFFSET UNITYSDK_OFFSET(0xDEC9BA0)
#define RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDSTATUSMARKS_B__28_7_OFFSET UNITYSDK_OFFSET(0xDEC9D20)
#define RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDSTATUSMARKS_B__28_8_OFFSET UNITYSDK_OFFSET(0xDEC9D70)
#define RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDSTATUSMARKS_B__28_9_OFFSET UNITYSDK_OFFSET(0xDEC9590)
#define RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___STATUSPANELVISIBLE_B__29_0_OFFSET UNITYSDK_OFFSET(0xDEC9DC0)

namespace RPG::Client::RewardItem
{
	inline static constexpr unsigned int RewardItemControl___c_TypeDefinitionIndex = 79135;

	class RewardItemControl___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::Class_0_16E4307DCC419505_1462*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__31_0()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_1462*, ::R3::Observable_1<::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(RewardItemControl___c_TypeDefinitionIndex)->GetStaticField(0x5C220);
		}
		static ::System::Func_2<::RPG::GameCore::ItemRecycleShowType, ::System::Boolean>** StaticGet___9__30_5()
		{
			return (::System::Func_2<::RPG::GameCore::ItemRecycleShowType, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(RewardItemControl___c_TypeDefinitionIndex)->GetStaticField(0x5C228);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_1462*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__28_5()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_1462*, ::R3::Observable_1<::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(RewardItemControl___c_TypeDefinitionIndex)->GetStaticField(0x5C230);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_1462*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__24_2()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_1462*, ::R3::Observable_1<::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(RewardItemControl___c_TypeDefinitionIndex)->GetStaticField(0x5C238);
		}
		static ::RPG::Client::RewardItem::RewardItemControl___c** StaticGet___9()
		{
			return (::RPG::Client::RewardItem::RewardItemControl___c**)Il2CppClass::FromTypeDefinitionIndex(RewardItemControl___c_TypeDefinitionIndex)->GetStaticField(0x5C240);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_1462*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__30_0()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_1462*, ::R3::Observable_1<::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(RewardItemControl___c_TypeDefinitionIndex)->GetStaticField(0x5C248);
		}
		static ::System::Func_2<::RPG::GameCore::ItemRecycleShowType, ::System::Boolean>** StaticGet___9__30_3()
		{
			return (::System::Func_2<::RPG::GameCore::ItemRecycleShowType, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(RewardItemControl___c_TypeDefinitionIndex)->GetStaticField(0x5C250);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_1462*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__28_3()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_1462*, ::R3::Observable_1<::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(RewardItemControl___c_TypeDefinitionIndex)->GetStaticField(0x5C258);
		}
		static ::System::Func_2<::RPG::Client::RewardItem::RewardItemMarkFlags, ::System::Boolean>** StaticGet___9__28_14()
		{
			return (::System::Func_2<::RPG::Client::RewardItem::RewardItemMarkFlags, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(RewardItemControl___c_TypeDefinitionIndex)->GetStaticField(0x5C260);
		}
		static ::System::Func_2<::RPG::Client::RewardItem::RewardItemMarkFlags, ::System::Boolean>** StaticGet___9__28_10()
		{
			return (::System::Func_2<::RPG::Client::RewardItem::RewardItemMarkFlags, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(RewardItemControl___c_TypeDefinitionIndex)->GetStaticField(0x5C268);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_1462*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__28_1()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_1462*, ::R3::Observable_1<::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(RewardItemControl___c_TypeDefinitionIndex)->GetStaticField(0x5C270);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_1462*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__30_1()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_1462*, ::R3::Observable_1<::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(RewardItemControl___c_TypeDefinitionIndex)->GetStaticField(0x5C278);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_1462*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__25_1()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_1462*, ::R3::Observable_1<::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(RewardItemControl___c_TypeDefinitionIndex)->GetStaticField(0x5C280);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_1462*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__27_0()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_1462*, ::R3::Observable_1<::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(RewardItemControl___c_TypeDefinitionIndex)->GetStaticField(0x5C288);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_1462*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__26_2()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_1462*, ::R3::Observable_1<::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(RewardItemControl___c_TypeDefinitionIndex)->GetStaticField(0x5C290);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_1462*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__25_4()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_1462*, ::R3::Observable_1<::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(RewardItemControl___c_TypeDefinitionIndex)->GetStaticField(0x5C298);
		}
		static ::System::Func_2<::RPG::Client::RewardItem::RewardItemMarkFlags, ::System::Boolean>** StaticGet___9__28_12()
		{
			return (::System::Func_2<::RPG::Client::RewardItem::RewardItemMarkFlags, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(RewardItemControl___c_TypeDefinitionIndex)->GetStaticField(0x5C2A0);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_1462*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__28_0()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_1462*, ::R3::Observable_1<::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(RewardItemControl___c_TypeDefinitionIndex)->GetStaticField(0x5C2A8);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_1462*, ::R3::Observable_1<::System::String*>*>** StaticGet___9__25_0()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_1462*, ::R3::Observable_1<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(RewardItemControl___c_TypeDefinitionIndex)->GetStaticField(0x5C2B0);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_1462*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__30_2()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_1462*, ::R3::Observable_1<::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(RewardItemControl___c_TypeDefinitionIndex)->GetStaticField(0x5C2B8);
		}
		static ::System::Func_2<::Class_1_90889A2023AB884E_7*, ::System::Boolean>** StaticGet___9__25_5()
		{
			return (::System::Func_2<::Class_1_90889A2023AB884E_7*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(RewardItemControl___c_TypeDefinitionIndex)->GetStaticField(0x5C2C0);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_1462*, ::R3::Observable_1<::System::String*>*>** StaticGet___9__27_1()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_1462*, ::R3::Observable_1<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(RewardItemControl___c_TypeDefinitionIndex)->GetStaticField(0x5C2C8);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_1462*, ::Class_0_16E4307DCC419505_397*>** StaticGet___9__24_0()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_1462*, ::Class_0_16E4307DCC419505_397*>**)Il2CppClass::FromTypeDefinitionIndex(RewardItemControl___c_TypeDefinitionIndex)->GetStaticField(0x5C2D0);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_1462*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__28_6()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_1462*, ::R3::Observable_1<::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(RewardItemControl___c_TypeDefinitionIndex)->GetStaticField(0x5C2D8);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_1462*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__25_2()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_1462*, ::R3::Observable_1<::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(RewardItemControl___c_TypeDefinitionIndex)->GetStaticField(0x5C2E0);
		}
		static ::System::Func_4<::RPG::Client::RewardItem::RewardItemMarkFlags, ::System::Boolean, ::RPG::GameCore::ItemRecycleShowType, ::System::Boolean>** StaticGet___9__29_0()
		{
			return (::System::Func_4<::RPG::Client::RewardItem::RewardItemMarkFlags, ::System::Boolean, ::RPG::GameCore::ItemRecycleShowType, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(RewardItemControl___c_TypeDefinitionIndex)->GetStaticField(0x5C2E8);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_1462*, ::R3::Observable_1<::System::String*>*>** StaticGet___9__31_1()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_1462*, ::R3::Observable_1<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(RewardItemControl___c_TypeDefinitionIndex)->GetStaticField(0x5C2F0);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_1462*, ::R3::Observable_1<::System::String*>*>** StaticGet___9__26_1()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_1462*, ::R3::Observable_1<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(RewardItemControl___c_TypeDefinitionIndex)->GetStaticField(0x5C2F8);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_1462*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__24_1()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_1462*, ::R3::Observable_1<::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(RewardItemControl___c_TypeDefinitionIndex)->GetStaticField(0x5C300);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_1462*, ::R3::Observable_1<::System::String*>*>** StaticGet___9__26_0()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_1462*, ::R3::Observable_1<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(RewardItemControl___c_TypeDefinitionIndex)->GetStaticField(0x5C308);
		}
		static ::System::Func_2<::RPG::Client::RewardItem::RewardItemMarkFlags, ::System::Boolean>** StaticGet___9__28_11()
		{
			return (::System::Func_2<::RPG::Client::RewardItem::RewardItemMarkFlags, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(RewardItemControl___c_TypeDefinitionIndex)->GetStaticField(0x5C310);
		}
		static ::System::Func_2<::RPG::GameCore::ItemRecycleShowType, ::System::Boolean>** StaticGet___9__30_4()
		{
			return (::System::Func_2<::RPG::GameCore::ItemRecycleShowType, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(RewardItemControl___c_TypeDefinitionIndex)->GetStaticField(0x5C318);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_1462*, ::R3::Observable_1<::System::String*>*>** StaticGet___9__25_3()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_1462*, ::R3::Observable_1<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(RewardItemControl___c_TypeDefinitionIndex)->GetStaticField(0x5C320);
		}
		static ::System::Func_2<::RPG::Client::RewardItem::RewardItemMarkFlags, ::System::Boolean>** StaticGet___9__28_9()
		{
			return (::System::Func_2<::RPG::Client::RewardItem::RewardItemMarkFlags, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(RewardItemControl___c_TypeDefinitionIndex)->GetStaticField(0x5C328);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_1462*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__28_4()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_1462*, ::R3::Observable_1<::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(RewardItemControl___c_TypeDefinitionIndex)->GetStaticField(0x5C330);
		}
		static ::System::Func_2<::RPG::Client::RewardItem::RewardItemMarkFlags, ::System::Boolean>** StaticGet___9__28_13()
		{
			return (::System::Func_2<::RPG::Client::RewardItem::RewardItemMarkFlags, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(RewardItemControl___c_TypeDefinitionIndex)->GetStaticField(0x5C338);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_1462*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__28_8()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_1462*, ::R3::Observable_1<::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(RewardItemControl___c_TypeDefinitionIndex)->GetStaticField(0x5C340);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_1462*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__28_2()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_1462*, ::R3::Observable_1<::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(RewardItemControl___c_TypeDefinitionIndex)->GetStaticField(0x5C348);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_1462*, ::R3::Observable_1<::System::String*>*>** StaticGet___9__32_0()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_1462*, ::R3::Observable_1<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(RewardItemControl___c_TypeDefinitionIndex)->GetStaticField(0x5C350);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_1462*, ::R3::Observable_1<::System::String*>*>** StaticGet___9__28_7()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_1462*, ::R3::Observable_1<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(RewardItemControl___c_TypeDefinitionIndex)->GetStaticField(0x5C358);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C__CTOR_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_397* __BindButton_b__24_0(::Class_0_16E4307DCC419505_1462* a1)
		{
			return ((::Class_0_16E4307DCC419505_397*(*)(::PVOID, ::Class_0_16E4307DCC419505_1462*))((::PBYTE)hIl2Cpp + RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDBUTTON_B__24_0_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::Boolean>* __BindButton_b__24_1(::Class_0_16E4307DCC419505_1462* a1)
		{
			return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID, ::Class_0_16E4307DCC419505_1462*))((::PBYTE)hIl2Cpp + RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDBUTTON_B__24_1_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::Boolean>* __BindButton_b__24_2(::Class_0_16E4307DCC419505_1462* a1)
		{
			return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID, ::Class_0_16E4307DCC419505_1462*))((::PBYTE)hIl2Cpp + RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDBUTTON_B__24_2_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::String*>* __BindIcon_b__25_0(::Class_0_16E4307DCC419505_1462* a1)
		{
			return ((::R3::Observable_1<::System::String*>*(*)(::PVOID, ::Class_0_16E4307DCC419505_1462*))((::PBYTE)hIl2Cpp + RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDICON_B__25_0_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::Boolean>* __BindIcon_b__25_1(::Class_0_16E4307DCC419505_1462* a1)
		{
			return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID, ::Class_0_16E4307DCC419505_1462*))((::PBYTE)hIl2Cpp + RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDICON_B__25_1_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::Boolean>* __BindIcon_b__25_2(::Class_0_16E4307DCC419505_1462* a1)
		{
			return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID, ::Class_0_16E4307DCC419505_1462*))((::PBYTE)hIl2Cpp + RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDICON_B__25_2_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::String*>* __BindIcon_b__25_3(::Class_0_16E4307DCC419505_1462* a1)
		{
			return ((::R3::Observable_1<::System::String*>*(*)(::PVOID, ::Class_0_16E4307DCC419505_1462*))((::PBYTE)hIl2Cpp + RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDICON_B__25_3_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::Boolean>* __BindIcon_b__25_4(::Class_0_16E4307DCC419505_1462* a1)
		{
			return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID, ::Class_0_16E4307DCC419505_1462*))((::PBYTE)hIl2Cpp + RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDICON_B__25_4_OFFSET))(this, a1);
		}

		::System::Boolean __BindIcon_b__25_5(::Class_1_90889A2023AB884E_7* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_90889A2023AB884E_7*))((::PBYTE)hIl2Cpp + RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDICON_B__25_5_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::String*>* __BindRarity_b__26_0(::Class_0_16E4307DCC419505_1462* a1)
		{
			return ((::R3::Observable_1<::System::String*>*(*)(::PVOID, ::Class_0_16E4307DCC419505_1462*))((::PBYTE)hIl2Cpp + RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDRARITY_B__26_0_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::String*>* __BindRarity_b__26_1(::Class_0_16E4307DCC419505_1462* a1)
		{
			return ((::R3::Observable_1<::System::String*>*(*)(::PVOID, ::Class_0_16E4307DCC419505_1462*))((::PBYTE)hIl2Cpp + RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDRARITY_B__26_1_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::Boolean>* __BindRarity_b__26_2(::Class_0_16E4307DCC419505_1462* a1)
		{
			return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID, ::Class_0_16E4307DCC419505_1462*))((::PBYTE)hIl2Cpp + RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDRARITY_B__26_2_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::Boolean>* __BindCount_b__27_0(::Class_0_16E4307DCC419505_1462* a1)
		{
			return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID, ::Class_0_16E4307DCC419505_1462*))((::PBYTE)hIl2Cpp + RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDCOUNT_B__27_0_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::String*>* __BindCount_b__27_1(::Class_0_16E4307DCC419505_1462* a1)
		{
			return ((::R3::Observable_1<::System::String*>*(*)(::PVOID, ::Class_0_16E4307DCC419505_1462*))((::PBYTE)hIl2Cpp + RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDCOUNT_B__27_1_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::Boolean>* __BindStatusMarks_b__28_0(::Class_0_16E4307DCC419505_1462* a1)
		{
			return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID, ::Class_0_16E4307DCC419505_1462*))((::PBYTE)hIl2Cpp + RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDSTATUSMARKS_B__28_0_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::Boolean>* __BindStatusMarks_b__28_1(::Class_0_16E4307DCC419505_1462* a1)
		{
			return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID, ::Class_0_16E4307DCC419505_1462*))((::PBYTE)hIl2Cpp + RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDSTATUSMARKS_B__28_1_OFFSET))(this, a1);
		}

		::System::Boolean __BindStatusMarks_b__28_9(::RPG::Client::RewardItem::RewardItemMarkFlags a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RewardItem::RewardItemMarkFlags))((::PBYTE)hIl2Cpp + RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDSTATUSMARKS_B__28_9_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::Boolean>* __BindStatusMarks_b__28_2(::Class_0_16E4307DCC419505_1462* a1)
		{
			return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID, ::Class_0_16E4307DCC419505_1462*))((::PBYTE)hIl2Cpp + RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDSTATUSMARKS_B__28_2_OFFSET))(this, a1);
		}

		::System::Boolean __BindStatusMarks_b__28_10(::RPG::Client::RewardItem::RewardItemMarkFlags a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RewardItem::RewardItemMarkFlags))((::PBYTE)hIl2Cpp + RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDSTATUSMARKS_B__28_10_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::Boolean>* __BindStatusMarks_b__28_3(::Class_0_16E4307DCC419505_1462* a1)
		{
			return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID, ::Class_0_16E4307DCC419505_1462*))((::PBYTE)hIl2Cpp + RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDSTATUSMARKS_B__28_3_OFFSET))(this, a1);
		}

		::System::Boolean __BindStatusMarks_b__28_11(::RPG::Client::RewardItem::RewardItemMarkFlags a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RewardItem::RewardItemMarkFlags))((::PBYTE)hIl2Cpp + RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDSTATUSMARKS_B__28_11_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::Boolean>* __BindStatusMarks_b__28_4(::Class_0_16E4307DCC419505_1462* a1)
		{
			return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID, ::Class_0_16E4307DCC419505_1462*))((::PBYTE)hIl2Cpp + RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDSTATUSMARKS_B__28_4_OFFSET))(this, a1);
		}

		::System::Boolean __BindStatusMarks_b__28_12(::RPG::Client::RewardItem::RewardItemMarkFlags a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RewardItem::RewardItemMarkFlags))((::PBYTE)hIl2Cpp + RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDSTATUSMARKS_B__28_12_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::Boolean>* __BindStatusMarks_b__28_5(::Class_0_16E4307DCC419505_1462* a1)
		{
			return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID, ::Class_0_16E4307DCC419505_1462*))((::PBYTE)hIl2Cpp + RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDSTATUSMARKS_B__28_5_OFFSET))(this, a1);
		}

		::System::Boolean __BindStatusMarks_b__28_13(::RPG::Client::RewardItem::RewardItemMarkFlags a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RewardItem::RewardItemMarkFlags))((::PBYTE)hIl2Cpp + RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDSTATUSMARKS_B__28_13_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::Boolean>* __BindStatusMarks_b__28_6(::Class_0_16E4307DCC419505_1462* a1)
		{
			return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID, ::Class_0_16E4307DCC419505_1462*))((::PBYTE)hIl2Cpp + RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDSTATUSMARKS_B__28_6_OFFSET))(this, a1);
		}

		::System::Boolean __BindStatusMarks_b__28_14(::RPG::Client::RewardItem::RewardItemMarkFlags a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RewardItem::RewardItemMarkFlags))((::PBYTE)hIl2Cpp + RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDSTATUSMARKS_B__28_14_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::String*>* __BindStatusMarks_b__28_7(::Class_0_16E4307DCC419505_1462* a1)
		{
			return ((::R3::Observable_1<::System::String*>*(*)(::PVOID, ::Class_0_16E4307DCC419505_1462*))((::PBYTE)hIl2Cpp + RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDSTATUSMARKS_B__28_7_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::Boolean>* __BindStatusMarks_b__28_8(::Class_0_16E4307DCC419505_1462* a1)
		{
			return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID, ::Class_0_16E4307DCC419505_1462*))((::PBYTE)hIl2Cpp + RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDSTATUSMARKS_B__28_8_OFFSET))(this, a1);
		}

		::System::Boolean __StatusPanelVisible_b__29_0(::RPG::Client::RewardItem::RewardItemMarkFlags a1, ::System::Boolean a2, ::RPG::GameCore::ItemRecycleShowType a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RewardItem::RewardItemMarkFlags, ::System::Boolean, ::RPG::GameCore::ItemRecycleShowType))((::PBYTE)hIl2Cpp + RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___STATUSPANELVISIBLE_B__29_0_OFFSET))(this, a1, a2, a3);
		}

		::R3::Observable_1<::System::Boolean>* __BindRecycleLabels_b__30_0(::Class_0_16E4307DCC419505_1462* a1)
		{
			return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID, ::Class_0_16E4307DCC419505_1462*))((::PBYTE)hIl2Cpp + RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDRECYCLELABELS_B__30_0_OFFSET))(this, a1);
		}

		::System::Boolean __BindRecycleLabels_b__30_3(::RPG::GameCore::ItemRecycleShowType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ItemRecycleShowType))((::PBYTE)hIl2Cpp + RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDRECYCLELABELS_B__30_3_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::Boolean>* __BindRecycleLabels_b__30_1(::Class_0_16E4307DCC419505_1462* a1)
		{
			return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID, ::Class_0_16E4307DCC419505_1462*))((::PBYTE)hIl2Cpp + RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDRECYCLELABELS_B__30_1_OFFSET))(this, a1);
		}

		::System::Boolean __BindRecycleLabels_b__30_4(::RPG::GameCore::ItemRecycleShowType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ItemRecycleShowType))((::PBYTE)hIl2Cpp + RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDRECYCLELABELS_B__30_4_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::Boolean>* __BindRecycleLabels_b__30_2(::Class_0_16E4307DCC419505_1462* a1)
		{
			return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID, ::Class_0_16E4307DCC419505_1462*))((::PBYTE)hIl2Cpp + RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDRECYCLELABELS_B__30_2_OFFSET))(this, a1);
		}

		::System::Boolean __BindRecycleLabels_b__30_5(::RPG::GameCore::ItemRecycleShowType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ItemRecycleShowType))((::PBYTE)hIl2Cpp + RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDRECYCLELABELS_B__30_5_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::Boolean>* __BindNamePanel_b__31_0(::Class_0_16E4307DCC419505_1462* a1)
		{
			return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID, ::Class_0_16E4307DCC419505_1462*))((::PBYTE)hIl2Cpp + RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDNAMEPANEL_B__31_0_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::String*>* __BindNamePanel_b__31_1(::Class_0_16E4307DCC419505_1462* a1)
		{
			return ((::R3::Observable_1<::System::String*>*(*)(::PVOID, ::Class_0_16E4307DCC419505_1462*))((::PBYTE)hIl2Cpp + RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDNAMEPANEL_B__31_1_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::String*>* __BindRedDot_b__32_0(::Class_0_16E4307DCC419505_1462* a1)
		{
			return ((::R3::Observable_1<::System::String*>*(*)(::PVOID, ::Class_0_16E4307DCC419505_1462*))((::PBYTE)hIl2Cpp + RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDREDDOT_B__32_0_OFFSET))(this, a1);
		}
	};
}
