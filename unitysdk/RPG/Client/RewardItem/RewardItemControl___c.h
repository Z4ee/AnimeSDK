#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RewardItem/RewardItemMarkFlags.h"
#include "unitysdk/RPG/GameCore/ItemRecycleShowType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1320;
class Class_0_16E4307DCC419505_318;
class Class_1_90889A2023AB884E_7;
namespace R3 { template <typename T> class Observable_1; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3, typename T4> class Func_4; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1798D3F0)
#define RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1798D430)
#define RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDBUTTON_B__24_0_OFFSET UNITYSDK_OFFSET(0x1798D440)
#define RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDBUTTON_B__24_1_OFFSET UNITYSDK_OFFSET(0x1798D460)
#define RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDBUTTON_B__24_2_OFFSET UNITYSDK_OFFSET(0x1798D4B0)
#define RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDCOUNT_B__27_0_OFFSET UNITYSDK_OFFSET(0x1798D900)
#define RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDCOUNT_B__27_1_OFFSET UNITYSDK_OFFSET(0x1798D950)
#define RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDICON_B__25_0_OFFSET UNITYSDK_OFFSET(0x1798D500)
#define RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDICON_B__25_1_OFFSET UNITYSDK_OFFSET(0x1798D550)
#define RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDICON_B__25_2_OFFSET UNITYSDK_OFFSET(0x1798D5A0)
#define RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDICON_B__25_3_OFFSET UNITYSDK_OFFSET(0x1798D5F0)
#define RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDICON_B__25_4_OFFSET UNITYSDK_OFFSET(0x1798D640)
#define RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDICON_B__25_5_OFFSET UNITYSDK_OFFSET(0x1798D7F0)
#define RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDNAMEPANEL_B__31_0_OFFSET UNITYSDK_OFFSET(0x1798E7E0)
#define RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDNAMEPANEL_B__31_1_OFFSET UNITYSDK_OFFSET(0x1798E830)
#define RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDRARITY_B__26_0_OFFSET UNITYSDK_OFFSET(0x1798D810)
#define RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDRARITY_B__26_1_OFFSET UNITYSDK_OFFSET(0x1798D860)
#define RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDRARITY_B__26_2_OFFSET UNITYSDK_OFFSET(0x1798D8B0)
#define RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDRECYCLELABELS_B__30_0_OFFSET UNITYSDK_OFFSET(0x1798E360)
#define RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDRECYCLELABELS_B__30_1_OFFSET UNITYSDK_OFFSET(0x1798E4E0)
#define RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDRECYCLELABELS_B__30_2_OFFSET UNITYSDK_OFFSET(0x1798E660)
#define RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDRECYCLELABELS_B__30_3_OFFSET UNITYSDK_OFFSET(0x1798E4D0)
#define RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDRECYCLELABELS_B__30_4_OFFSET UNITYSDK_OFFSET(0x1798E650)
#define RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDRECYCLELABELS_B__30_5_OFFSET UNITYSDK_OFFSET(0x1798E7D0)
#define RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDREDDOT_B__32_0_OFFSET UNITYSDK_OFFSET(0x1798E880)
#define RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDSTATUSMARKS_B__28_0_OFFSET UNITYSDK_OFFSET(0x1798D9A0)
#define RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDSTATUSMARKS_B__28_10_OFFSET UNITYSDK_OFFSET(0x1798DCA0)
#define RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDSTATUSMARKS_B__28_11_OFFSET UNITYSDK_OFFSET(0x1798DE20)
#define RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDSTATUSMARKS_B__28_12_OFFSET UNITYSDK_OFFSET(0x1798DFA0)
#define RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDSTATUSMARKS_B__28_13_OFFSET UNITYSDK_OFFSET(0x1798E120)
#define RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDSTATUSMARKS_B__28_14_OFFSET UNITYSDK_OFFSET(0x1798E2A0)
#define RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDSTATUSMARKS_B__28_1_OFFSET UNITYSDK_OFFSET(0x1798D9B0)
#define RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDSTATUSMARKS_B__28_2_OFFSET UNITYSDK_OFFSET(0x1798DB30)
#define RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDSTATUSMARKS_B__28_3_OFFSET UNITYSDK_OFFSET(0x1798DCB0)
#define RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDSTATUSMARKS_B__28_4_OFFSET UNITYSDK_OFFSET(0x1798DE30)
#define RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDSTATUSMARKS_B__28_5_OFFSET UNITYSDK_OFFSET(0x1798DFB0)
#define RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDSTATUSMARKS_B__28_6_OFFSET UNITYSDK_OFFSET(0x1798E130)
#define RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDSTATUSMARKS_B__28_7_OFFSET UNITYSDK_OFFSET(0x1798E2B0)
#define RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDSTATUSMARKS_B__28_8_OFFSET UNITYSDK_OFFSET(0x1798E300)
#define RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDSTATUSMARKS_B__28_9_OFFSET UNITYSDK_OFFSET(0x1798DB20)
#define RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___STATUSPANELVISIBLE_B__29_0_OFFSET UNITYSDK_OFFSET(0x1798E350)

namespace RPG::Client::RewardItem
{
	inline static constexpr unsigned int RewardItemControl___c_TypeDefinitionIndex = 78663;

	class RewardItemControl___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::GameCore::ItemRecycleShowType, ::System::Boolean>** StaticGet___9__30_3()
		{
			return (::System::Func_2<::RPG::GameCore::ItemRecycleShowType, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(RewardItemControl___c_TypeDefinitionIndex)->GetStaticField(0x66D60);
		}
		static ::System::Func_2<::Class_1_90889A2023AB884E_7*, ::System::Boolean>** StaticGet___9__25_5()
		{
			return (::System::Func_2<::Class_1_90889A2023AB884E_7*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(RewardItemControl___c_TypeDefinitionIndex)->GetStaticField(0x66D68);
		}
		static ::System::Func_2<::RPG::Client::RewardItem::RewardItemMarkFlags, ::System::Boolean>** StaticGet___9__28_13()
		{
			return (::System::Func_2<::RPG::Client::RewardItem::RewardItemMarkFlags, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(RewardItemControl___c_TypeDefinitionIndex)->GetStaticField(0x66D70);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_1320*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__28_1()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_1320*, ::R3::Observable_1<::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(RewardItemControl___c_TypeDefinitionIndex)->GetStaticField(0x66D78);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_1320*, ::R3::Observable_1<::System::String*>*>** StaticGet___9__25_0()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_1320*, ::R3::Observable_1<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(RewardItemControl___c_TypeDefinitionIndex)->GetStaticField(0x66D80);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_1320*, ::R3::Observable_1<::System::String*>*>** StaticGet___9__28_7()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_1320*, ::R3::Observable_1<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(RewardItemControl___c_TypeDefinitionIndex)->GetStaticField(0x66D88);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_1320*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__28_2()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_1320*, ::R3::Observable_1<::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(RewardItemControl___c_TypeDefinitionIndex)->GetStaticField(0x66D90);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_1320*, ::R3::Observable_1<::System::String*>*>** StaticGet___9__26_0()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_1320*, ::R3::Observable_1<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(RewardItemControl___c_TypeDefinitionIndex)->GetStaticField(0x66D98);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_1320*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__31_0()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_1320*, ::R3::Observable_1<::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(RewardItemControl___c_TypeDefinitionIndex)->GetStaticField(0x66DA0);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_1320*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__25_4()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_1320*, ::R3::Observable_1<::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(RewardItemControl___c_TypeDefinitionIndex)->GetStaticField(0x66DA8);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_1320*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__28_8()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_1320*, ::R3::Observable_1<::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(RewardItemControl___c_TypeDefinitionIndex)->GetStaticField(0x66DB0);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_1320*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__26_2()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_1320*, ::R3::Observable_1<::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(RewardItemControl___c_TypeDefinitionIndex)->GetStaticField(0x66DB8);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_1320*, ::R3::Observable_1<::System::String*>*>** StaticGet___9__27_1()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_1320*, ::R3::Observable_1<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(RewardItemControl___c_TypeDefinitionIndex)->GetStaticField(0x66DC0);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_1320*, ::R3::Observable_1<::System::String*>*>** StaticGet___9__31_1()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_1320*, ::R3::Observable_1<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(RewardItemControl___c_TypeDefinitionIndex)->GetStaticField(0x66DC8);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_1320*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__28_4()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_1320*, ::R3::Observable_1<::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(RewardItemControl___c_TypeDefinitionIndex)->GetStaticField(0x66DD0);
		}
		static ::System::Func_2<::RPG::Client::RewardItem::RewardItemMarkFlags, ::System::Boolean>** StaticGet___9__28_9()
		{
			return (::System::Func_2<::RPG::Client::RewardItem::RewardItemMarkFlags, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(RewardItemControl___c_TypeDefinitionIndex)->GetStaticField(0x66DD8);
		}
		static ::RPG::Client::RewardItem::RewardItemControl___c** StaticGet___9()
		{
			return (::RPG::Client::RewardItem::RewardItemControl___c**)Il2CppClass::FromTypeDefinitionIndex(RewardItemControl___c_TypeDefinitionIndex)->GetStaticField(0x66DE0);
		}
		static ::System::Func_2<::RPG::Client::RewardItem::RewardItemMarkFlags, ::System::Boolean>** StaticGet___9__28_11()
		{
			return (::System::Func_2<::RPG::Client::RewardItem::RewardItemMarkFlags, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(RewardItemControl___c_TypeDefinitionIndex)->GetStaticField(0x66DE8);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_1320*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__30_0()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_1320*, ::R3::Observable_1<::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(RewardItemControl___c_TypeDefinitionIndex)->GetStaticField(0x66DF0);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_1320*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__25_1()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_1320*, ::R3::Observable_1<::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(RewardItemControl___c_TypeDefinitionIndex)->GetStaticField(0x66DF8);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_1320*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__27_0()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_1320*, ::R3::Observable_1<::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(RewardItemControl___c_TypeDefinitionIndex)->GetStaticField(0x66E00);
		}
		static ::System::Func_4<::RPG::Client::RewardItem::RewardItemMarkFlags, ::System::Boolean, ::RPG::GameCore::ItemRecycleShowType, ::System::Boolean>** StaticGet___9__29_0()
		{
			return (::System::Func_4<::RPG::Client::RewardItem::RewardItemMarkFlags, ::System::Boolean, ::RPG::GameCore::ItemRecycleShowType, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(RewardItemControl___c_TypeDefinitionIndex)->GetStaticField(0x66E08);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_1320*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__28_6()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_1320*, ::R3::Observable_1<::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(RewardItemControl___c_TypeDefinitionIndex)->GetStaticField(0x66E10);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_1320*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__30_1()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_1320*, ::R3::Observable_1<::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(RewardItemControl___c_TypeDefinitionIndex)->GetStaticField(0x66E18);
		}
		static ::System::Func_2<::RPG::Client::RewardItem::RewardItemMarkFlags, ::System::Boolean>** StaticGet___9__28_10()
		{
			return (::System::Func_2<::RPG::Client::RewardItem::RewardItemMarkFlags, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(RewardItemControl___c_TypeDefinitionIndex)->GetStaticField(0x66E20);
		}
		static ::System::Func_2<::RPG::Client::RewardItem::RewardItemMarkFlags, ::System::Boolean>** StaticGet___9__28_14()
		{
			return (::System::Func_2<::RPG::Client::RewardItem::RewardItemMarkFlags, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(RewardItemControl___c_TypeDefinitionIndex)->GetStaticField(0x66E28);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_1320*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__28_0()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_1320*, ::R3::Observable_1<::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(RewardItemControl___c_TypeDefinitionIndex)->GetStaticField(0x66E30);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_1320*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__24_2()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_1320*, ::R3::Observable_1<::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(RewardItemControl___c_TypeDefinitionIndex)->GetStaticField(0x66E38);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_1320*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__28_5()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_1320*, ::R3::Observable_1<::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(RewardItemControl___c_TypeDefinitionIndex)->GetStaticField(0x66E40);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_1320*, ::Class_0_16E4307DCC419505_318*>** StaticGet___9__24_0()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_1320*, ::Class_0_16E4307DCC419505_318*>**)Il2CppClass::FromTypeDefinitionIndex(RewardItemControl___c_TypeDefinitionIndex)->GetStaticField(0x66E48);
		}
		static ::System::Func_2<::RPG::GameCore::ItemRecycleShowType, ::System::Boolean>** StaticGet___9__30_5()
		{
			return (::System::Func_2<::RPG::GameCore::ItemRecycleShowType, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(RewardItemControl___c_TypeDefinitionIndex)->GetStaticField(0x66E50);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_1320*, ::R3::Observable_1<::System::String*>*>** StaticGet___9__32_0()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_1320*, ::R3::Observable_1<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(RewardItemControl___c_TypeDefinitionIndex)->GetStaticField(0x66E58);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_1320*, ::R3::Observable_1<::System::String*>*>** StaticGet___9__25_3()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_1320*, ::R3::Observable_1<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(RewardItemControl___c_TypeDefinitionIndex)->GetStaticField(0x66E60);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_1320*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__24_1()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_1320*, ::R3::Observable_1<::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(RewardItemControl___c_TypeDefinitionIndex)->GetStaticField(0x66E68);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_1320*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__28_3()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_1320*, ::R3::Observable_1<::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(RewardItemControl___c_TypeDefinitionIndex)->GetStaticField(0x66E70);
		}
		static ::System::Func_2<::RPG::GameCore::ItemRecycleShowType, ::System::Boolean>** StaticGet___9__30_4()
		{
			return (::System::Func_2<::RPG::GameCore::ItemRecycleShowType, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(RewardItemControl___c_TypeDefinitionIndex)->GetStaticField(0x66E78);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_1320*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__25_2()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_1320*, ::R3::Observable_1<::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(RewardItemControl___c_TypeDefinitionIndex)->GetStaticField(0x66E80);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_1320*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__30_2()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_1320*, ::R3::Observable_1<::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(RewardItemControl___c_TypeDefinitionIndex)->GetStaticField(0x66E88);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_1320*, ::R3::Observable_1<::System::String*>*>** StaticGet___9__26_1()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_1320*, ::R3::Observable_1<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(RewardItemControl___c_TypeDefinitionIndex)->GetStaticField(0x66E90);
		}
		static ::System::Func_2<::RPG::Client::RewardItem::RewardItemMarkFlags, ::System::Boolean>** StaticGet___9__28_12()
		{
			return (::System::Func_2<::RPG::Client::RewardItem::RewardItemMarkFlags, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(RewardItemControl___c_TypeDefinitionIndex)->GetStaticField(0x66E98);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C__CTOR_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_318* __BindButton_b__24_0(::Class_0_16E4307DCC419505_1320* a1)
		{
			return ((::Class_0_16E4307DCC419505_318*(*)(::PVOID, ::Class_0_16E4307DCC419505_1320*))((::PBYTE)hIl2Cpp + RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDBUTTON_B__24_0_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::Boolean>* __BindButton_b__24_1(::Class_0_16E4307DCC419505_1320* a1)
		{
			return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID, ::Class_0_16E4307DCC419505_1320*))((::PBYTE)hIl2Cpp + RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDBUTTON_B__24_1_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::Boolean>* __BindButton_b__24_2(::Class_0_16E4307DCC419505_1320* a1)
		{
			return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID, ::Class_0_16E4307DCC419505_1320*))((::PBYTE)hIl2Cpp + RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDBUTTON_B__24_2_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::String*>* __BindIcon_b__25_0(::Class_0_16E4307DCC419505_1320* a1)
		{
			return ((::R3::Observable_1<::System::String*>*(*)(::PVOID, ::Class_0_16E4307DCC419505_1320*))((::PBYTE)hIl2Cpp + RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDICON_B__25_0_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::Boolean>* __BindIcon_b__25_1(::Class_0_16E4307DCC419505_1320* a1)
		{
			return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID, ::Class_0_16E4307DCC419505_1320*))((::PBYTE)hIl2Cpp + RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDICON_B__25_1_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::Boolean>* __BindIcon_b__25_2(::Class_0_16E4307DCC419505_1320* a1)
		{
			return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID, ::Class_0_16E4307DCC419505_1320*))((::PBYTE)hIl2Cpp + RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDICON_B__25_2_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::String*>* __BindIcon_b__25_3(::Class_0_16E4307DCC419505_1320* a1)
		{
			return ((::R3::Observable_1<::System::String*>*(*)(::PVOID, ::Class_0_16E4307DCC419505_1320*))((::PBYTE)hIl2Cpp + RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDICON_B__25_3_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::Boolean>* __BindIcon_b__25_4(::Class_0_16E4307DCC419505_1320* a1)
		{
			return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID, ::Class_0_16E4307DCC419505_1320*))((::PBYTE)hIl2Cpp + RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDICON_B__25_4_OFFSET))(this, a1);
		}

		::System::Boolean __BindIcon_b__25_5(::Class_1_90889A2023AB884E_7* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_90889A2023AB884E_7*))((::PBYTE)hIl2Cpp + RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDICON_B__25_5_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::String*>* __BindRarity_b__26_0(::Class_0_16E4307DCC419505_1320* a1)
		{
			return ((::R3::Observable_1<::System::String*>*(*)(::PVOID, ::Class_0_16E4307DCC419505_1320*))((::PBYTE)hIl2Cpp + RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDRARITY_B__26_0_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::String*>* __BindRarity_b__26_1(::Class_0_16E4307DCC419505_1320* a1)
		{
			return ((::R3::Observable_1<::System::String*>*(*)(::PVOID, ::Class_0_16E4307DCC419505_1320*))((::PBYTE)hIl2Cpp + RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDRARITY_B__26_1_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::Boolean>* __BindRarity_b__26_2(::Class_0_16E4307DCC419505_1320* a1)
		{
			return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID, ::Class_0_16E4307DCC419505_1320*))((::PBYTE)hIl2Cpp + RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDRARITY_B__26_2_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::Boolean>* __BindCount_b__27_0(::Class_0_16E4307DCC419505_1320* a1)
		{
			return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID, ::Class_0_16E4307DCC419505_1320*))((::PBYTE)hIl2Cpp + RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDCOUNT_B__27_0_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::String*>* __BindCount_b__27_1(::Class_0_16E4307DCC419505_1320* a1)
		{
			return ((::R3::Observable_1<::System::String*>*(*)(::PVOID, ::Class_0_16E4307DCC419505_1320*))((::PBYTE)hIl2Cpp + RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDCOUNT_B__27_1_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::Boolean>* __BindStatusMarks_b__28_0(::Class_0_16E4307DCC419505_1320* a1)
		{
			return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID, ::Class_0_16E4307DCC419505_1320*))((::PBYTE)hIl2Cpp + RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDSTATUSMARKS_B__28_0_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::Boolean>* __BindStatusMarks_b__28_1(::Class_0_16E4307DCC419505_1320* a1)
		{
			return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID, ::Class_0_16E4307DCC419505_1320*))((::PBYTE)hIl2Cpp + RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDSTATUSMARKS_B__28_1_OFFSET))(this, a1);
		}

		::System::Boolean __BindStatusMarks_b__28_9(::RPG::Client::RewardItem::RewardItemMarkFlags a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RewardItem::RewardItemMarkFlags))((::PBYTE)hIl2Cpp + RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDSTATUSMARKS_B__28_9_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::Boolean>* __BindStatusMarks_b__28_2(::Class_0_16E4307DCC419505_1320* a1)
		{
			return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID, ::Class_0_16E4307DCC419505_1320*))((::PBYTE)hIl2Cpp + RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDSTATUSMARKS_B__28_2_OFFSET))(this, a1);
		}

		::System::Boolean __BindStatusMarks_b__28_10(::RPG::Client::RewardItem::RewardItemMarkFlags a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RewardItem::RewardItemMarkFlags))((::PBYTE)hIl2Cpp + RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDSTATUSMARKS_B__28_10_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::Boolean>* __BindStatusMarks_b__28_3(::Class_0_16E4307DCC419505_1320* a1)
		{
			return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID, ::Class_0_16E4307DCC419505_1320*))((::PBYTE)hIl2Cpp + RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDSTATUSMARKS_B__28_3_OFFSET))(this, a1);
		}

		::System::Boolean __BindStatusMarks_b__28_11(::RPG::Client::RewardItem::RewardItemMarkFlags a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RewardItem::RewardItemMarkFlags))((::PBYTE)hIl2Cpp + RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDSTATUSMARKS_B__28_11_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::Boolean>* __BindStatusMarks_b__28_4(::Class_0_16E4307DCC419505_1320* a1)
		{
			return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID, ::Class_0_16E4307DCC419505_1320*))((::PBYTE)hIl2Cpp + RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDSTATUSMARKS_B__28_4_OFFSET))(this, a1);
		}

		::System::Boolean __BindStatusMarks_b__28_12(::RPG::Client::RewardItem::RewardItemMarkFlags a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RewardItem::RewardItemMarkFlags))((::PBYTE)hIl2Cpp + RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDSTATUSMARKS_B__28_12_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::Boolean>* __BindStatusMarks_b__28_5(::Class_0_16E4307DCC419505_1320* a1)
		{
			return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID, ::Class_0_16E4307DCC419505_1320*))((::PBYTE)hIl2Cpp + RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDSTATUSMARKS_B__28_5_OFFSET))(this, a1);
		}

		::System::Boolean __BindStatusMarks_b__28_13(::RPG::Client::RewardItem::RewardItemMarkFlags a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RewardItem::RewardItemMarkFlags))((::PBYTE)hIl2Cpp + RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDSTATUSMARKS_B__28_13_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::Boolean>* __BindStatusMarks_b__28_6(::Class_0_16E4307DCC419505_1320* a1)
		{
			return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID, ::Class_0_16E4307DCC419505_1320*))((::PBYTE)hIl2Cpp + RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDSTATUSMARKS_B__28_6_OFFSET))(this, a1);
		}

		::System::Boolean __BindStatusMarks_b__28_14(::RPG::Client::RewardItem::RewardItemMarkFlags a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RewardItem::RewardItemMarkFlags))((::PBYTE)hIl2Cpp + RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDSTATUSMARKS_B__28_14_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::String*>* __BindStatusMarks_b__28_7(::Class_0_16E4307DCC419505_1320* a1)
		{
			return ((::R3::Observable_1<::System::String*>*(*)(::PVOID, ::Class_0_16E4307DCC419505_1320*))((::PBYTE)hIl2Cpp + RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDSTATUSMARKS_B__28_7_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::Boolean>* __BindStatusMarks_b__28_8(::Class_0_16E4307DCC419505_1320* a1)
		{
			return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID, ::Class_0_16E4307DCC419505_1320*))((::PBYTE)hIl2Cpp + RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDSTATUSMARKS_B__28_8_OFFSET))(this, a1);
		}

		::System::Boolean __StatusPanelVisible_b__29_0(::RPG::Client::RewardItem::RewardItemMarkFlags a1, ::System::Boolean a2, ::RPG::GameCore::ItemRecycleShowType a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RewardItem::RewardItemMarkFlags, ::System::Boolean, ::RPG::GameCore::ItemRecycleShowType))((::PBYTE)hIl2Cpp + RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___STATUSPANELVISIBLE_B__29_0_OFFSET))(this, a1, a2, a3);
		}

		::R3::Observable_1<::System::Boolean>* __BindRecycleLabels_b__30_0(::Class_0_16E4307DCC419505_1320* a1)
		{
			return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID, ::Class_0_16E4307DCC419505_1320*))((::PBYTE)hIl2Cpp + RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDRECYCLELABELS_B__30_0_OFFSET))(this, a1);
		}

		::System::Boolean __BindRecycleLabels_b__30_3(::RPG::GameCore::ItemRecycleShowType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ItemRecycleShowType))((::PBYTE)hIl2Cpp + RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDRECYCLELABELS_B__30_3_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::Boolean>* __BindRecycleLabels_b__30_1(::Class_0_16E4307DCC419505_1320* a1)
		{
			return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID, ::Class_0_16E4307DCC419505_1320*))((::PBYTE)hIl2Cpp + RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDRECYCLELABELS_B__30_1_OFFSET))(this, a1);
		}

		::System::Boolean __BindRecycleLabels_b__30_4(::RPG::GameCore::ItemRecycleShowType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ItemRecycleShowType))((::PBYTE)hIl2Cpp + RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDRECYCLELABELS_B__30_4_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::Boolean>* __BindRecycleLabels_b__30_2(::Class_0_16E4307DCC419505_1320* a1)
		{
			return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID, ::Class_0_16E4307DCC419505_1320*))((::PBYTE)hIl2Cpp + RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDRECYCLELABELS_B__30_2_OFFSET))(this, a1);
		}

		::System::Boolean __BindRecycleLabels_b__30_5(::RPG::GameCore::ItemRecycleShowType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ItemRecycleShowType))((::PBYTE)hIl2Cpp + RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDRECYCLELABELS_B__30_5_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::Boolean>* __BindNamePanel_b__31_0(::Class_0_16E4307DCC419505_1320* a1)
		{
			return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID, ::Class_0_16E4307DCC419505_1320*))((::PBYTE)hIl2Cpp + RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDNAMEPANEL_B__31_0_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::String*>* __BindNamePanel_b__31_1(::Class_0_16E4307DCC419505_1320* a1)
		{
			return ((::R3::Observable_1<::System::String*>*(*)(::PVOID, ::Class_0_16E4307DCC419505_1320*))((::PBYTE)hIl2Cpp + RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDNAMEPANEL_B__31_1_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::String*>* __BindRedDot_b__32_0(::Class_0_16E4307DCC419505_1320* a1)
		{
			return ((::R3::Observable_1<::System::String*>*(*)(::PVOID, ::Class_0_16E4307DCC419505_1320*))((::PBYTE)hIl2Cpp + RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDREDDOT_B__32_0_OFFSET))(this, a1);
		}
	};
}
