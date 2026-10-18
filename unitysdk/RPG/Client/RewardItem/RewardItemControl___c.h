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

#define RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xDEBE640)
#define RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C__CTOR_OFFSET UNITYSDK_OFFSET(0xDEBE680)
#define RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDBUTTON_B__24_0_OFFSET UNITYSDK_OFFSET(0xDEBE690)
#define RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDBUTTON_B__24_1_OFFSET UNITYSDK_OFFSET(0xDEBE6B0)
#define RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDBUTTON_B__24_2_OFFSET UNITYSDK_OFFSET(0xDEBE700)
#define RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDCOUNT_B__27_0_OFFSET UNITYSDK_OFFSET(0xDEBEB50)
#define RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDCOUNT_B__27_1_OFFSET UNITYSDK_OFFSET(0xDEBEBA0)
#define RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDICON_B__25_0_OFFSET UNITYSDK_OFFSET(0xDEBE750)
#define RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDICON_B__25_1_OFFSET UNITYSDK_OFFSET(0xDEBE7A0)
#define RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDICON_B__25_2_OFFSET UNITYSDK_OFFSET(0xDEBE7F0)
#define RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDICON_B__25_3_OFFSET UNITYSDK_OFFSET(0xDEBE840)
#define RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDICON_B__25_4_OFFSET UNITYSDK_OFFSET(0xDEBE890)
#define RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDICON_B__25_5_OFFSET UNITYSDK_OFFSET(0xDEBEA40)
#define RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDNAMEPANEL_B__31_0_OFFSET UNITYSDK_OFFSET(0xDEBFA30)
#define RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDNAMEPANEL_B__31_1_OFFSET UNITYSDK_OFFSET(0xDEBFA80)
#define RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDRARITY_B__26_0_OFFSET UNITYSDK_OFFSET(0xDEBEA60)
#define RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDRARITY_B__26_1_OFFSET UNITYSDK_OFFSET(0xDEBEAB0)
#define RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDRARITY_B__26_2_OFFSET UNITYSDK_OFFSET(0xDEBEB00)
#define RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDRECYCLELABELS_B__30_0_OFFSET UNITYSDK_OFFSET(0xDEBF5B0)
#define RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDRECYCLELABELS_B__30_1_OFFSET UNITYSDK_OFFSET(0xDEBF730)
#define RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDRECYCLELABELS_B__30_2_OFFSET UNITYSDK_OFFSET(0xDEBF8B0)
#define RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDRECYCLELABELS_B__30_3_OFFSET UNITYSDK_OFFSET(0xDEBF720)
#define RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDRECYCLELABELS_B__30_4_OFFSET UNITYSDK_OFFSET(0xDEBF8A0)
#define RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDRECYCLELABELS_B__30_5_OFFSET UNITYSDK_OFFSET(0xDEBFA20)
#define RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDREDDOT_B__32_0_OFFSET UNITYSDK_OFFSET(0xDEBFAD0)
#define RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDSTATUSMARKS_B__28_0_OFFSET UNITYSDK_OFFSET(0xDEBEBF0)
#define RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDSTATUSMARKS_B__28_10_OFFSET UNITYSDK_OFFSET(0xDEBEEF0)
#define RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDSTATUSMARKS_B__28_11_OFFSET UNITYSDK_OFFSET(0xDEBF070)
#define RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDSTATUSMARKS_B__28_12_OFFSET UNITYSDK_OFFSET(0xDEBF1F0)
#define RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDSTATUSMARKS_B__28_13_OFFSET UNITYSDK_OFFSET(0xDEBF370)
#define RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDSTATUSMARKS_B__28_14_OFFSET UNITYSDK_OFFSET(0xDEBF4F0)
#define RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDSTATUSMARKS_B__28_1_OFFSET UNITYSDK_OFFSET(0xDEBEC00)
#define RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDSTATUSMARKS_B__28_2_OFFSET UNITYSDK_OFFSET(0xDEBED80)
#define RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDSTATUSMARKS_B__28_3_OFFSET UNITYSDK_OFFSET(0xDEBEF00)
#define RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDSTATUSMARKS_B__28_4_OFFSET UNITYSDK_OFFSET(0xDEBF080)
#define RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDSTATUSMARKS_B__28_5_OFFSET UNITYSDK_OFFSET(0xDEBF200)
#define RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDSTATUSMARKS_B__28_6_OFFSET UNITYSDK_OFFSET(0xDEBF380)
#define RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDSTATUSMARKS_B__28_7_OFFSET UNITYSDK_OFFSET(0xDEBF500)
#define RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDSTATUSMARKS_B__28_8_OFFSET UNITYSDK_OFFSET(0xDEBF550)
#define RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___BINDSTATUSMARKS_B__28_9_OFFSET UNITYSDK_OFFSET(0xDEBED70)
#define RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL___C___STATUSPANELVISIBLE_B__29_0_OFFSET UNITYSDK_OFFSET(0xDEBF5A0)

namespace RPG::Client::RewardItem
{
	inline static constexpr unsigned int RewardItemControl___c_TypeDefinitionIndex = 79134;

	class RewardItemControl___c : public ::System::Object
	{
	public:
		static ::RPG::Client::RewardItem::RewardItemControl___c** StaticGet___9()
		{
			return (::RPG::Client::RewardItem::RewardItemControl___c**)Il2CppClass::FromTypeDefinitionIndex(RewardItemControl___c_TypeDefinitionIndex)->GetStaticField(0x5FA60);
		}
		static ::System::Func_2<::RPG::Client::RewardItem::RewardItemMarkFlags, ::System::Boolean>** StaticGet___9__28_14()
		{
			return (::System::Func_2<::RPG::Client::RewardItem::RewardItemMarkFlags, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(RewardItemControl___c_TypeDefinitionIndex)->GetStaticField(0x5FA68);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_1462*, ::R3::Observable_1<::System::String*>*>** StaticGet___9__26_1()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_1462*, ::R3::Observable_1<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(RewardItemControl___c_TypeDefinitionIndex)->GetStaticField(0x5FA70);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_1462*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__28_0()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_1462*, ::R3::Observable_1<::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(RewardItemControl___c_TypeDefinitionIndex)->GetStaticField(0x5FA78);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_1462*, ::Class_0_16E4307DCC419505_397*>** StaticGet___9__24_0()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_1462*, ::Class_0_16E4307DCC419505_397*>**)Il2CppClass::FromTypeDefinitionIndex(RewardItemControl___c_TypeDefinitionIndex)->GetStaticField(0x5FA80);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_1462*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__30_0()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_1462*, ::R3::Observable_1<::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(RewardItemControl___c_TypeDefinitionIndex)->GetStaticField(0x5FA88);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_1462*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__24_1()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_1462*, ::R3::Observable_1<::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(RewardItemControl___c_TypeDefinitionIndex)->GetStaticField(0x5FA90);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_1462*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__28_2()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_1462*, ::R3::Observable_1<::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(RewardItemControl___c_TypeDefinitionIndex)->GetStaticField(0x5FA98);
		}
		static ::System::Func_2<::RPG::Client::RewardItem::RewardItemMarkFlags, ::System::Boolean>** StaticGet___9__28_9()
		{
			return (::System::Func_2<::RPG::Client::RewardItem::RewardItemMarkFlags, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(RewardItemControl___c_TypeDefinitionIndex)->GetStaticField(0x5FAA0);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_1462*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__25_2()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_1462*, ::R3::Observable_1<::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(RewardItemControl___c_TypeDefinitionIndex)->GetStaticField(0x5FAA8);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_1462*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__26_2()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_1462*, ::R3::Observable_1<::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(RewardItemControl___c_TypeDefinitionIndex)->GetStaticField(0x5FAB0);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_1462*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__27_0()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_1462*, ::R3::Observable_1<::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(RewardItemControl___c_TypeDefinitionIndex)->GetStaticField(0x5FAB8);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_1462*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__25_4()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_1462*, ::R3::Observable_1<::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(RewardItemControl___c_TypeDefinitionIndex)->GetStaticField(0x5FAC0);
		}
		static ::System::Func_2<::RPG::GameCore::ItemRecycleShowType, ::System::Boolean>** StaticGet___9__30_4()
		{
			return (::System::Func_2<::RPG::GameCore::ItemRecycleShowType, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(RewardItemControl___c_TypeDefinitionIndex)->GetStaticField(0x5FAC8);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_1462*, ::R3::Observable_1<::System::String*>*>** StaticGet___9__25_0()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_1462*, ::R3::Observable_1<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(RewardItemControl___c_TypeDefinitionIndex)->GetStaticField(0x5FAD0);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_1462*, ::R3::Observable_1<::System::String*>*>** StaticGet___9__31_1()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_1462*, ::R3::Observable_1<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(RewardItemControl___c_TypeDefinitionIndex)->GetStaticField(0x5FAD8);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_1462*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__28_1()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_1462*, ::R3::Observable_1<::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(RewardItemControl___c_TypeDefinitionIndex)->GetStaticField(0x5FAE0);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_1462*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__28_6()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_1462*, ::R3::Observable_1<::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(RewardItemControl___c_TypeDefinitionIndex)->GetStaticField(0x5FAE8);
		}
		static ::System::Func_2<::RPG::Client::RewardItem::RewardItemMarkFlags, ::System::Boolean>** StaticGet___9__28_11()
		{
			return (::System::Func_2<::RPG::Client::RewardItem::RewardItemMarkFlags, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(RewardItemControl___c_TypeDefinitionIndex)->GetStaticField(0x5FAF0);
		}
		static ::System::Func_2<::RPG::Client::RewardItem::RewardItemMarkFlags, ::System::Boolean>** StaticGet___9__28_10()
		{
			return (::System::Func_2<::RPG::Client::RewardItem::RewardItemMarkFlags, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(RewardItemControl___c_TypeDefinitionIndex)->GetStaticField(0x5FAF8);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_1462*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__24_2()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_1462*, ::R3::Observable_1<::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(RewardItemControl___c_TypeDefinitionIndex)->GetStaticField(0x5FB00);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_1462*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__28_5()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_1462*, ::R3::Observable_1<::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(RewardItemControl___c_TypeDefinitionIndex)->GetStaticField(0x5FB08);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_1462*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__25_1()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_1462*, ::R3::Observable_1<::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(RewardItemControl___c_TypeDefinitionIndex)->GetStaticField(0x5FB10);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_1462*, ::R3::Observable_1<::System::String*>*>** StaticGet___9__28_7()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_1462*, ::R3::Observable_1<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(RewardItemControl___c_TypeDefinitionIndex)->GetStaticField(0x5FB18);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_1462*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__30_1()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_1462*, ::R3::Observable_1<::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(RewardItemControl___c_TypeDefinitionIndex)->GetStaticField(0x5FB20);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_1462*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__28_8()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_1462*, ::R3::Observable_1<::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(RewardItemControl___c_TypeDefinitionIndex)->GetStaticField(0x5FB28);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_1462*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__28_4()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_1462*, ::R3::Observable_1<::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(RewardItemControl___c_TypeDefinitionIndex)->GetStaticField(0x5FB30);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_1462*, ::R3::Observable_1<::System::String*>*>** StaticGet___9__26_0()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_1462*, ::R3::Observable_1<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(RewardItemControl___c_TypeDefinitionIndex)->GetStaticField(0x5FB38);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_1462*, ::R3::Observable_1<::System::String*>*>** StaticGet___9__25_3()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_1462*, ::R3::Observable_1<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(RewardItemControl___c_TypeDefinitionIndex)->GetStaticField(0x5FB40);
		}
		static ::System::Func_2<::Class_1_90889A2023AB884E_7*, ::System::Boolean>** StaticGet___9__25_5()
		{
			return (::System::Func_2<::Class_1_90889A2023AB884E_7*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(RewardItemControl___c_TypeDefinitionIndex)->GetStaticField(0x5FB48);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_1462*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__30_2()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_1462*, ::R3::Observable_1<::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(RewardItemControl___c_TypeDefinitionIndex)->GetStaticField(0x5FB50);
		}
		static ::System::Func_4<::RPG::Client::RewardItem::RewardItemMarkFlags, ::System::Boolean, ::RPG::GameCore::ItemRecycleShowType, ::System::Boolean>** StaticGet___9__29_0()
		{
			return (::System::Func_4<::RPG::Client::RewardItem::RewardItemMarkFlags, ::System::Boolean, ::RPG::GameCore::ItemRecycleShowType, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(RewardItemControl___c_TypeDefinitionIndex)->GetStaticField(0x5FB58);
		}
		static ::System::Func_2<::RPG::Client::RewardItem::RewardItemMarkFlags, ::System::Boolean>** StaticGet___9__28_13()
		{
			return (::System::Func_2<::RPG::Client::RewardItem::RewardItemMarkFlags, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(RewardItemControl___c_TypeDefinitionIndex)->GetStaticField(0x5FB60);
		}
		static ::System::Func_2<::RPG::GameCore::ItemRecycleShowType, ::System::Boolean>** StaticGet___9__30_3()
		{
			return (::System::Func_2<::RPG::GameCore::ItemRecycleShowType, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(RewardItemControl___c_TypeDefinitionIndex)->GetStaticField(0x5FB68);
		}
		static ::System::Func_2<::RPG::GameCore::ItemRecycleShowType, ::System::Boolean>** StaticGet___9__30_5()
		{
			return (::System::Func_2<::RPG::GameCore::ItemRecycleShowType, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(RewardItemControl___c_TypeDefinitionIndex)->GetStaticField(0x5FB70);
		}
		static ::System::Func_2<::RPG::Client::RewardItem::RewardItemMarkFlags, ::System::Boolean>** StaticGet___9__28_12()
		{
			return (::System::Func_2<::RPG::Client::RewardItem::RewardItemMarkFlags, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(RewardItemControl___c_TypeDefinitionIndex)->GetStaticField(0x5FB78);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_1462*, ::R3::Observable_1<::System::String*>*>** StaticGet___9__27_1()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_1462*, ::R3::Observable_1<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(RewardItemControl___c_TypeDefinitionIndex)->GetStaticField(0x5FB80);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_1462*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__28_3()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_1462*, ::R3::Observable_1<::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(RewardItemControl___c_TypeDefinitionIndex)->GetStaticField(0x5FB88);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_1462*, ::R3::Observable_1<::System::String*>*>** StaticGet___9__32_0()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_1462*, ::R3::Observable_1<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(RewardItemControl___c_TypeDefinitionIndex)->GetStaticField(0x5FB90);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_1462*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__31_0()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_1462*, ::R3::Observable_1<::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(RewardItemControl___c_TypeDefinitionIndex)->GetStaticField(0x5FB98);
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
