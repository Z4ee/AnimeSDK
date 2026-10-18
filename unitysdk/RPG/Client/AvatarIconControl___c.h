#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AvatarMarkFlags.h"
#include "unitysdk/RPG/Client/AvatarMaterialIndex.h"
#include "unitysdk/RPG/Client/AvatarSpecialMarkType.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_0_16E4307DCC419505_397;
class Class_0_16E4307DCC419505_769;
class Class_0_16E4307DCC419505_770;
class Class_0_16E4307DCC419505_771;
class Class_1_90889A2023AB884E_3;
namespace R3 { template <typename T> class Observable_1; }
namespace RPG::Client { class MonoMaterialSwitch; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3, typename T4> class Func_4; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine { class GameObject; }
template <typename T> class Class_0_16E4307DCC419505_399;

#define RPG_CLIENT_AVATARICONCONTROL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xC6F4A40)
#define RPG_CLIENT_AVATARICONCONTROL___C__CTOR_OFFSET UNITYSDK_OFFSET(0xC6F4A80)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDBUTTON_B__41_0_OFFSET UNITYSDK_OFFSET(0xC6F4A90)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDBUTTON_B__41_1_OFFSET UNITYSDK_OFFSET(0xC6F4BB0)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDBUTTON_B__41_2_OFFSET UNITYSDK_OFFSET(0xC6F4CD0)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDBUTTON_B__41_3_OFFSET UNITYSDK_OFFSET(0xC6F4DF0)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDCHILDCONTROLS_B__53_0_OFFSET UNITYSDK_OFFSET(0xC6F8D10)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDCHILDCONTROLS_B__53_1_OFFSET UNITYSDK_OFFSET(0xC6F8E90)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDCHILDCONTROLS_B__53_2_OFFSET UNITYSDK_OFFSET(0xC6F8FB0)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDCHILDCONTROLS_B__53_3_OFFSET UNITYSDK_OFFSET(0xC6F9130)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDHINTAREAS_B__49_0_OFFSET UNITYSDK_OFFSET(0xC6F7F50)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDHINTAREAS_B__49_1_OFFSET UNITYSDK_OFFSET(0xC6F8070)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDHINTAREAS_B__49_2_OFFSET UNITYSDK_OFFSET(0xC6F8190)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDHINTAREAS_B__49_3_OFFSET UNITYSDK_OFFSET(0xC6F82B0)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDHINTAREAS_B__49_4_OFFSET UNITYSDK_OFFSET(0xC6F83D0)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDHINTAREAS_B__49_5_OFFSET UNITYSDK_OFFSET(0xC6F84F0)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDHINTAREAS_B__49_6_OFFSET UNITYSDK_OFFSET(0xC6F8610)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDHINTAREAS_B__49_7_OFFSET UNITYSDK_OFFSET(0xC6F8730)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDIMAGES_B__42_0_OFFSET UNITYSDK_OFFSET(0xC6F4F10)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDIMAGES_B__42_1_OFFSET UNITYSDK_OFFSET(0xC6F5030)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDIMAGES_B__42_2_OFFSET UNITYSDK_OFFSET(0xC6F5150)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDIMAGES_B__42_3_OFFSET UNITYSDK_OFFSET(0xC6F5370)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDIMAGES_B__42_4_OFFSET UNITYSDK_OFFSET(0xC6F5490)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDIMAGES_B__42_5_OFFSET UNITYSDK_OFFSET(0xC6F5350)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDLEVELPANEL_B__43_0_OFFSET UNITYSDK_OFFSET(0xC6F55B0)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDLEVELPANEL_B__43_1_OFFSET UNITYSDK_OFFSET(0xC6F57D0)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDLEVELPANEL_B__43_2_OFFSET UNITYSDK_OFFSET(0xC6F58F0)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDLEVELPANEL_B__43_3_OFFSET UNITYSDK_OFFSET(0xC6F5B30)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDLEVELPANEL_B__43_4_OFFSET UNITYSDK_OFFSET(0xC6F57B0)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDLEVELPANEL_B__43_5_OFFSET UNITYSDK_OFFSET(0xC6F5AF0)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDLEVELPANEL_B__43_6_OFFSET UNITYSDK_OFFSET(0xC6F5D30)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDMARKS_B__45_0_OFFSET UNITYSDK_OFFSET(0xC6F60B0)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDMARKS_B__45_10_OFFSET UNITYSDK_OFFSET(0xC6F68E0)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDMARKS_B__45_11_OFFSET UNITYSDK_OFFSET(0xC6F6AF0)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDMARKS_B__45_12_OFFSET UNITYSDK_OFFSET(0xC6F6D00)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDMARKS_B__45_13_OFFSET UNITYSDK_OFFSET(0xC6F6F10)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDMARKS_B__45_1_OFFSET UNITYSDK_OFFSET(0xC6F62C0)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDMARKS_B__45_2_OFFSET UNITYSDK_OFFSET(0xC6F64D0)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDMARKS_B__45_3_OFFSET UNITYSDK_OFFSET(0xC6F66E0)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDMARKS_B__45_4_OFFSET UNITYSDK_OFFSET(0xC6F68F0)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDMARKS_B__45_5_OFFSET UNITYSDK_OFFSET(0xC6F6B00)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDMARKS_B__45_6_OFFSET UNITYSDK_OFFSET(0xC6F6D10)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDMARKS_B__45_7_OFFSET UNITYSDK_OFFSET(0xC6F62B0)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDMARKS_B__45_8_OFFSET UNITYSDK_OFFSET(0xC6F64C0)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDMARKS_B__45_9_OFFSET UNITYSDK_OFFSET(0xC6F66D0)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDMATERIAL_B__52_0_OFFSET UNITYSDK_OFFSET(0xC6F8BB0)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDMATERIAL_B__52_1_OFFSET UNITYSDK_OFFSET(0xC6F8CD0)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDNAMEPANEL_B__44_0_OFFSET UNITYSDK_OFFSET(0xC6F5D70)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDNAMEPANEL_B__44_1_OFFSET UNITYSDK_OFFSET(0xC6F5F90)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDNAMEPANEL_B__44_2_OFFSET UNITYSDK_OFFSET(0xC6F5F70)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDORDERANDCHECKMARK_B__48_0_OFFSET UNITYSDK_OFFSET(0xC6F73F0)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDORDERANDCHECKMARK_B__48_1_OFFSET UNITYSDK_OFFSET(0xC6F7880)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDORDERANDCHECKMARK_B__48_2_OFFSET UNITYSDK_OFFSET(0xC6F79A0)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDORDERANDCHECKMARK_B__48_3_OFFSET UNITYSDK_OFFSET(0xC6F7AC0)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDORDERANDCHECKMARK_B__48_4_OFFSET UNITYSDK_OFFSET(0xC6F7850)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDORDERANDCHECKMARK_B__48_5_OFFSET UNITYSDK_OFFSET(0xC6F7F20)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDREDDOT_B__51_0_OFFSET UNITYSDK_OFFSET(0xC6F8A90)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDROGUEHEX_B__50_0_OFFSET UNITYSDK_OFFSET(0xC6F8850)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDROGUEHEX_B__50_1_OFFSET UNITYSDK_OFFSET(0xC6F8970)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDSPECIALMARK_B__46_0_OFFSET UNITYSDK_OFFSET(0xC6F6F20)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDSPECIALMARK_B__46_1_OFFSET UNITYSDK_OFFSET(0xC6F7130)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDSPECIALMARK_B__46_2_OFFSET UNITYSDK_OFFSET(0xC6F72D0)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDSPECIALMARK_B__46_3_OFFSET UNITYSDK_OFFSET(0xC6F7120)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDTUTORIAL_B__54_0_OFFSET UNITYSDK_OFFSET(0xC6F9250)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarIconControl___c_TypeDefinitionIndex = 60099;

	class AvatarIconControl___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::Class_0_16E4307DCC419505_770*, ::R3::Observable_1<::RPG::Client::AvatarMaterialIndex>*>** StaticGet___9__52_0()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_770*, ::R3::Observable_1<::RPG::Client::AvatarMaterialIndex>*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x50D50);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_770*, ::R3::Observable_1<::System::UInt32>*>** StaticGet___9__54_0()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_770*, ::R3::Observable_1<::System::UInt32>*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x50D58);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_770*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__45_4()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_770*, ::R3::Observable_1<::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x50D60);
		}
		static ::System::Func_2<::RPG::Client::AvatarMarkFlags, ::System::Boolean>** StaticGet___9__45_8()
		{
			return (::System::Func_2<::RPG::Client::AvatarMarkFlags, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x50D68);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_770*, ::R3::Observable_1<::System::String*>*>** StaticGet___9__49_3()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_770*, ::R3::Observable_1<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x50D70);
		}
		static ::System::Func_2<::RPG::Client::AvatarMarkFlags, ::System::String*>** StaticGet___9__43_5()
		{
			return (::System::Func_2<::RPG::Client::AvatarMarkFlags, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x50D78);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_770*, ::R3::Observable_1<::RPG::Client::TextID>*>** StaticGet___9__49_2()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_770*, ::R3::Observable_1<::RPG::Client::TextID>*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x50D80);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_770*, ::R3::Observable_1<::System::String*>*>** StaticGet___9__42_0()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_770*, ::R3::Observable_1<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x50D88);
		}
		static ::System::Func_2<::RPG::Client::AvatarSpecialMarkType, ::System::Boolean>** StaticGet___9__46_3()
		{
			return (::System::Func_2<::RPG::Client::AvatarSpecialMarkType, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x50D90);
		}
		static ::System::Func_2<::RPG::Client::AvatarMarkFlags, ::System::Boolean>** StaticGet___9__45_9()
		{
			return (::System::Func_2<::RPG::Client::AvatarMarkFlags, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x50D98);
		}
		static ::System::Action_2<::RPG::Client::MonoMaterialSwitch*, ::RPG::Client::AvatarMaterialIndex>** StaticGet___9__52_1()
		{
			return (::System::Action_2<::RPG::Client::MonoMaterialSwitch*, ::RPG::Client::AvatarMaterialIndex>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x50DA0);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_770*, ::R3::Observable_1<::System::String*>*>** StaticGet___9__42_1()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_770*, ::R3::Observable_1<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x50DA8);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_770*, ::Class_0_16E4307DCC419505_771*>** StaticGet___9__53_3()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_770*, ::Class_0_16E4307DCC419505_771*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x50DB0);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_770*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__41_2()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_770*, ::R3::Observable_1<::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x50DB8);
		}
		static ::System::Func_4<::Class_1_90889A2023AB884E_3*, ::System::Boolean, ::System::Int32, ::System::Boolean>** StaticGet___9__48_5()
		{
			return (::System::Func_4<::Class_1_90889A2023AB884E_3*, ::System::Boolean, ::System::Int32, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x50DC0);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_770*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__43_0()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_770*, ::R3::Observable_1<::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x50DC8);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_770*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__45_5()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_770*, ::R3::Observable_1<::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x50DD0);
		}
		static ::System::Func_2<::RPG::Client::AvatarMarkFlags, ::System::Boolean>** StaticGet___9__45_10()
		{
			return (::System::Func_2<::RPG::Client::AvatarMarkFlags, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x50DD8);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_770*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__49_0()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_770*, ::R3::Observable_1<::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x50DE0);
		}
		static ::System::Func_2<::Class_1_90889A2023AB884E_3*, ::System::Boolean>** StaticGet___9__43_4()
		{
			return (::System::Func_2<::Class_1_90889A2023AB884E_3*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x50DE8);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_770*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__50_0()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_770*, ::R3::Observable_1<::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x50DF0);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_770*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__53_0()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_770*, ::R3::Observable_1<::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x50DF8);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_770*, ::R3::Observable_1<::System::String*>*>** StaticGet___9__43_3()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_770*, ::R3::Observable_1<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x50E00);
		}
		static ::System::Func_2<::RPG::Client::AvatarMarkFlags, ::System::Boolean>** StaticGet___9__45_13()
		{
			return (::System::Func_2<::RPG::Client::AvatarMarkFlags, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x50E08);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_770*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__45_3()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_770*, ::R3::Observable_1<::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x50E10);
		}
		static ::System::Func_2<::RPG::Client::AvatarMarkFlags, ::System::Boolean>** StaticGet___9__45_7()
		{
			return (::System::Func_2<::RPG::Client::AvatarMarkFlags, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x50E18);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_770*, ::R3::Observable_1<::RPG::Client::TextID>*>** StaticGet___9__49_5()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_770*, ::R3::Observable_1<::RPG::Client::TextID>*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x50E20);
		}
		static ::System::Func_2<::Class_1_90889A2023AB884E_3*, ::System::Boolean>** StaticGet___9__44_2()
		{
			return (::System::Func_2<::Class_1_90889A2023AB884E_3*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x50E28);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_770*, ::R3::Observable_1<::System::String*>*>** StaticGet___9__46_1()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_770*, ::R3::Observable_1<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x50E30);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_770*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__48_0()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_770*, ::R3::Observable_1<::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x50E38);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_770*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__49_6()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_770*, ::R3::Observable_1<::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x50E40);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_770*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__44_0()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_770*, ::R3::Observable_1<::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x50E48);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_770*, ::R3::Observable_1<::RPG::Client::TextID>*>** StaticGet___9__46_2()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_770*, ::R3::Observable_1<::RPG::Client::TextID>*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x50E50);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_770*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__48_1()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_770*, ::R3::Observable_1<::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x50E58);
		}
		static ::System::Func_2<::Class_1_90889A2023AB884E_3*, ::System::Boolean>** StaticGet___9__42_5()
		{
			return (::System::Func_2<::Class_1_90889A2023AB884E_3*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x50E60);
		}
		static ::System::Func_4<::Class_1_90889A2023AB884E_3*, ::System::Boolean, ::System::Int32, ::System::Boolean>** StaticGet___9__48_4()
		{
			return (::System::Func_4<::Class_1_90889A2023AB884E_3*, ::System::Boolean, ::System::Int32, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x50E68);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_770*, ::R3::Observable_1<::System::String*>*>** StaticGet___9__43_2()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_770*, ::R3::Observable_1<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x50E70);
		}
		static ::RPG::Client::AvatarIconControl___c** StaticGet___9()
		{
			return (::RPG::Client::AvatarIconControl___c**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x50E78);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_770*, ::R3::Observable_1<::System::Int32>*>** StaticGet___9__43_1()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_770*, ::R3::Observable_1<::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x50E80);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_770*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__42_2()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_770*, ::R3::Observable_1<::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x50E88);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_770*, ::R3::Observable_1<::System::ValueTuple_2<::System::String*, ::System::UInt32>>*>** StaticGet___9__51_0()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_770*, ::R3::Observable_1<::System::ValueTuple_2<::System::String*, ::System::UInt32>>*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x50E90);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_770*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__48_3()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_770*, ::R3::Observable_1<::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x50E98);
		}
		static ::System::Func_2<::RPG::Client::AvatarMarkFlags, ::System::String*>** StaticGet___9__43_6()
		{
			return (::System::Func_2<::RPG::Client::AvatarMarkFlags, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x50EA0);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_770*, ::R3::Observable_1<::System::Int32>*>** StaticGet___9__50_1()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_770*, ::R3::Observable_1<::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x50EA8);
		}
		static ::System::Func_2<::RPG::Client::AvatarMarkFlags, ::System::Boolean>** StaticGet___9__45_12()
		{
			return (::System::Func_2<::RPG::Client::AvatarMarkFlags, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x50EB0);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_770*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__53_2()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_770*, ::R3::Observable_1<::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x50EB8);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_770*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__45_0()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_770*, ::R3::Observable_1<::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x50EC0);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_770*, ::R3::Observable_1<::RPG::Client::TextID>*>** StaticGet___9__44_1()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_770*, ::R3::Observable_1<::RPG::Client::TextID>*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x50EC8);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_770*, ::R3::Observable_1<::System::Int32>*>** StaticGet___9__48_2()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_770*, ::R3::Observable_1<::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x50ED0);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_770*, ::Class_0_16E4307DCC419505_399<::UnityEngine::GameObject*>*>** StaticGet___9__41_3()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_770*, ::Class_0_16E4307DCC419505_399<::UnityEngine::GameObject*>*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x50ED8);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_770*, ::Class_0_16E4307DCC419505_769*>** StaticGet___9__53_1()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_770*, ::Class_0_16E4307DCC419505_769*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x50EE0);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_770*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__49_4()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_770*, ::R3::Observable_1<::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x50EE8);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_770*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__45_6()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_770*, ::R3::Observable_1<::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x50EF0);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_770*, ::Class_0_16E4307DCC419505_397*>** StaticGet___9__41_0()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_770*, ::Class_0_16E4307DCC419505_397*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x50EF8);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_770*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__49_1()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_770*, ::R3::Observable_1<::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x50F00);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_770*, ::R3::Observable_1<::RPG::Client::TextID>*>** StaticGet___9__49_7()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_770*, ::R3::Observable_1<::RPG::Client::TextID>*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x50F08);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_770*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__41_1()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_770*, ::R3::Observable_1<::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x50F10);
		}
		static ::System::Func_2<::RPG::Client::AvatarMarkFlags, ::System::Boolean>** StaticGet___9__45_11()
		{
			return (::System::Func_2<::RPG::Client::AvatarMarkFlags, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x50F18);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_770*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__42_4()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_770*, ::R3::Observable_1<::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x50F20);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_770*, ::R3::Observable_1<::System::String*>*>** StaticGet___9__42_3()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_770*, ::R3::Observable_1<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x50F28);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_770*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__45_1()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_770*, ::R3::Observable_1<::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x50F30);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_770*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__45_2()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_770*, ::R3::Observable_1<::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x50F38);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_770*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__46_0()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_770*, ::R3::Observable_1<::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x50F40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C__CTOR_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_397* __BindButton_b__41_0(::Class_0_16E4307DCC419505_770* a1)
		{
			return ((::Class_0_16E4307DCC419505_397*(*)(::PVOID, ::Class_0_16E4307DCC419505_770*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDBUTTON_B__41_0_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::Boolean>* __BindButton_b__41_1(::Class_0_16E4307DCC419505_770* a1)
		{
			return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID, ::Class_0_16E4307DCC419505_770*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDBUTTON_B__41_1_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::Boolean>* __BindButton_b__41_2(::Class_0_16E4307DCC419505_770* a1)
		{
			return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID, ::Class_0_16E4307DCC419505_770*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDBUTTON_B__41_2_OFFSET))(this, a1);
		}

		::Class_0_16E4307DCC419505_399<::UnityEngine::GameObject*>* __BindButton_b__41_3(::Class_0_16E4307DCC419505_770* a1)
		{
			return ((::Class_0_16E4307DCC419505_399<::UnityEngine::GameObject*>*(*)(::PVOID, ::Class_0_16E4307DCC419505_770*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDBUTTON_B__41_3_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::String*>* __BindImages_b__42_0(::Class_0_16E4307DCC419505_770* a1)
		{
			return ((::R3::Observable_1<::System::String*>*(*)(::PVOID, ::Class_0_16E4307DCC419505_770*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDIMAGES_B__42_0_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::String*>* __BindImages_b__42_1(::Class_0_16E4307DCC419505_770* a1)
		{
			return ((::R3::Observable_1<::System::String*>*(*)(::PVOID, ::Class_0_16E4307DCC419505_770*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDIMAGES_B__42_1_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::Boolean>* __BindImages_b__42_2(::Class_0_16E4307DCC419505_770* a1)
		{
			return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID, ::Class_0_16E4307DCC419505_770*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDIMAGES_B__42_2_OFFSET))(this, a1);
		}

		::System::Boolean __BindImages_b__42_5(::Class_1_90889A2023AB884E_3* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_90889A2023AB884E_3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDIMAGES_B__42_5_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::String*>* __BindImages_b__42_3(::Class_0_16E4307DCC419505_770* a1)
		{
			return ((::R3::Observable_1<::System::String*>*(*)(::PVOID, ::Class_0_16E4307DCC419505_770*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDIMAGES_B__42_3_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::Boolean>* __BindImages_b__42_4(::Class_0_16E4307DCC419505_770* a1)
		{
			return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID, ::Class_0_16E4307DCC419505_770*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDIMAGES_B__42_4_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::Boolean>* __BindLevelPanel_b__43_0(::Class_0_16E4307DCC419505_770* a1)
		{
			return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID, ::Class_0_16E4307DCC419505_770*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDLEVELPANEL_B__43_0_OFFSET))(this, a1);
		}

		::System::Boolean __BindLevelPanel_b__43_4(::Class_1_90889A2023AB884E_3* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_90889A2023AB884E_3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDLEVELPANEL_B__43_4_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::Int32>* __BindLevelPanel_b__43_1(::Class_0_16E4307DCC419505_770* a1)
		{
			return ((::R3::Observable_1<::System::Int32>*(*)(::PVOID, ::Class_0_16E4307DCC419505_770*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDLEVELPANEL_B__43_1_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::String*>* __BindLevelPanel_b__43_2(::Class_0_16E4307DCC419505_770* a1)
		{
			return ((::R3::Observable_1<::System::String*>*(*)(::PVOID, ::Class_0_16E4307DCC419505_770*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDLEVELPANEL_B__43_2_OFFSET))(this, a1);
		}

		::System::String* __BindLevelPanel_b__43_5(::RPG::Client::AvatarMarkFlags a1)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::Client::AvatarMarkFlags))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDLEVELPANEL_B__43_5_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::String*>* __BindLevelPanel_b__43_3(::Class_0_16E4307DCC419505_770* a1)
		{
			return ((::R3::Observable_1<::System::String*>*(*)(::PVOID, ::Class_0_16E4307DCC419505_770*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDLEVELPANEL_B__43_3_OFFSET))(this, a1);
		}

		::System::String* __BindLevelPanel_b__43_6(::RPG::Client::AvatarMarkFlags a1)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::Client::AvatarMarkFlags))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDLEVELPANEL_B__43_6_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::Boolean>* __BindNamePanel_b__44_0(::Class_0_16E4307DCC419505_770* a1)
		{
			return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID, ::Class_0_16E4307DCC419505_770*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDNAMEPANEL_B__44_0_OFFSET))(this, a1);
		}

		::System::Boolean __BindNamePanel_b__44_2(::Class_1_90889A2023AB884E_3* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_90889A2023AB884E_3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDNAMEPANEL_B__44_2_OFFSET))(this, a1);
		}

		::R3::Observable_1<::RPG::Client::TextID>* __BindNamePanel_b__44_1(::Class_0_16E4307DCC419505_770* a1)
		{
			return ((::R3::Observable_1<::RPG::Client::TextID>*(*)(::PVOID, ::Class_0_16E4307DCC419505_770*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDNAMEPANEL_B__44_1_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::Boolean>* __BindMarks_b__45_0(::Class_0_16E4307DCC419505_770* a1)
		{
			return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID, ::Class_0_16E4307DCC419505_770*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDMARKS_B__45_0_OFFSET))(this, a1);
		}

		::System::Boolean __BindMarks_b__45_7(::RPG::Client::AvatarMarkFlags a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::AvatarMarkFlags))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDMARKS_B__45_7_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::Boolean>* __BindMarks_b__45_1(::Class_0_16E4307DCC419505_770* a1)
		{
			return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID, ::Class_0_16E4307DCC419505_770*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDMARKS_B__45_1_OFFSET))(this, a1);
		}

		::System::Boolean __BindMarks_b__45_8(::RPG::Client::AvatarMarkFlags a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::AvatarMarkFlags))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDMARKS_B__45_8_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::Boolean>* __BindMarks_b__45_2(::Class_0_16E4307DCC419505_770* a1)
		{
			return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID, ::Class_0_16E4307DCC419505_770*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDMARKS_B__45_2_OFFSET))(this, a1);
		}

		::System::Boolean __BindMarks_b__45_9(::RPG::Client::AvatarMarkFlags a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::AvatarMarkFlags))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDMARKS_B__45_9_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::Boolean>* __BindMarks_b__45_3(::Class_0_16E4307DCC419505_770* a1)
		{
			return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID, ::Class_0_16E4307DCC419505_770*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDMARKS_B__45_3_OFFSET))(this, a1);
		}

		::System::Boolean __BindMarks_b__45_10(::RPG::Client::AvatarMarkFlags a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::AvatarMarkFlags))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDMARKS_B__45_10_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::Boolean>* __BindMarks_b__45_4(::Class_0_16E4307DCC419505_770* a1)
		{
			return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID, ::Class_0_16E4307DCC419505_770*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDMARKS_B__45_4_OFFSET))(this, a1);
		}

		::System::Boolean __BindMarks_b__45_11(::RPG::Client::AvatarMarkFlags a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::AvatarMarkFlags))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDMARKS_B__45_11_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::Boolean>* __BindMarks_b__45_5(::Class_0_16E4307DCC419505_770* a1)
		{
			return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID, ::Class_0_16E4307DCC419505_770*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDMARKS_B__45_5_OFFSET))(this, a1);
		}

		::System::Boolean __BindMarks_b__45_12(::RPG::Client::AvatarMarkFlags a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::AvatarMarkFlags))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDMARKS_B__45_12_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::Boolean>* __BindMarks_b__45_6(::Class_0_16E4307DCC419505_770* a1)
		{
			return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID, ::Class_0_16E4307DCC419505_770*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDMARKS_B__45_6_OFFSET))(this, a1);
		}

		::System::Boolean __BindMarks_b__45_13(::RPG::Client::AvatarMarkFlags a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::AvatarMarkFlags))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDMARKS_B__45_13_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::Boolean>* __BindSpecialMark_b__46_0(::Class_0_16E4307DCC419505_770* a1)
		{
			return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID, ::Class_0_16E4307DCC419505_770*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDSPECIALMARK_B__46_0_OFFSET))(this, a1);
		}

		::System::Boolean __BindSpecialMark_b__46_3(::RPG::Client::AvatarSpecialMarkType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::AvatarSpecialMarkType))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDSPECIALMARK_B__46_3_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::String*>* __BindSpecialMark_b__46_1(::Class_0_16E4307DCC419505_770* a1)
		{
			return ((::R3::Observable_1<::System::String*>*(*)(::PVOID, ::Class_0_16E4307DCC419505_770*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDSPECIALMARK_B__46_1_OFFSET))(this, a1);
		}

		::R3::Observable_1<::RPG::Client::TextID>* __BindSpecialMark_b__46_2(::Class_0_16E4307DCC419505_770* a1)
		{
			return ((::R3::Observable_1<::RPG::Client::TextID>*(*)(::PVOID, ::Class_0_16E4307DCC419505_770*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDSPECIALMARK_B__46_2_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::Boolean>* __BindOrderAndCheckMark_b__48_0(::Class_0_16E4307DCC419505_770* a1)
		{
			return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID, ::Class_0_16E4307DCC419505_770*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDORDERANDCHECKMARK_B__48_0_OFFSET))(this, a1);
		}

		::System::Boolean __BindOrderAndCheckMark_b__48_4(::Class_1_90889A2023AB884E_3* a1, ::System::Boolean a2, ::System::Int32 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_90889A2023AB884E_3*, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDORDERANDCHECKMARK_B__48_4_OFFSET))(this, a1, a2, a3);
		}

		::R3::Observable_1<::System::Boolean>* __BindOrderAndCheckMark_b__48_1(::Class_0_16E4307DCC419505_770* a1)
		{
			return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID, ::Class_0_16E4307DCC419505_770*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDORDERANDCHECKMARK_B__48_1_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::Int32>* __BindOrderAndCheckMark_b__48_2(::Class_0_16E4307DCC419505_770* a1)
		{
			return ((::R3::Observable_1<::System::Int32>*(*)(::PVOID, ::Class_0_16E4307DCC419505_770*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDORDERANDCHECKMARK_B__48_2_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::Boolean>* __BindOrderAndCheckMark_b__48_3(::Class_0_16E4307DCC419505_770* a1)
		{
			return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID, ::Class_0_16E4307DCC419505_770*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDORDERANDCHECKMARK_B__48_3_OFFSET))(this, a1);
		}

		::System::Boolean __BindOrderAndCheckMark_b__48_5(::Class_1_90889A2023AB884E_3* a1, ::System::Boolean a2, ::System::Int32 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_90889A2023AB884E_3*, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDORDERANDCHECKMARK_B__48_5_OFFSET))(this, a1, a2, a3);
		}

		::R3::Observable_1<::System::Boolean>* __BindHintAreas_b__49_0(::Class_0_16E4307DCC419505_770* a1)
		{
			return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID, ::Class_0_16E4307DCC419505_770*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDHINTAREAS_B__49_0_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::Boolean>* __BindHintAreas_b__49_1(::Class_0_16E4307DCC419505_770* a1)
		{
			return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID, ::Class_0_16E4307DCC419505_770*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDHINTAREAS_B__49_1_OFFSET))(this, a1);
		}

		::R3::Observable_1<::RPG::Client::TextID>* __BindHintAreas_b__49_2(::Class_0_16E4307DCC419505_770* a1)
		{
			return ((::R3::Observable_1<::RPG::Client::TextID>*(*)(::PVOID, ::Class_0_16E4307DCC419505_770*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDHINTAREAS_B__49_2_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::String*>* __BindHintAreas_b__49_3(::Class_0_16E4307DCC419505_770* a1)
		{
			return ((::R3::Observable_1<::System::String*>*(*)(::PVOID, ::Class_0_16E4307DCC419505_770*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDHINTAREAS_B__49_3_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::Boolean>* __BindHintAreas_b__49_4(::Class_0_16E4307DCC419505_770* a1)
		{
			return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID, ::Class_0_16E4307DCC419505_770*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDHINTAREAS_B__49_4_OFFSET))(this, a1);
		}

		::R3::Observable_1<::RPG::Client::TextID>* __BindHintAreas_b__49_5(::Class_0_16E4307DCC419505_770* a1)
		{
			return ((::R3::Observable_1<::RPG::Client::TextID>*(*)(::PVOID, ::Class_0_16E4307DCC419505_770*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDHINTAREAS_B__49_5_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::Boolean>* __BindHintAreas_b__49_6(::Class_0_16E4307DCC419505_770* a1)
		{
			return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID, ::Class_0_16E4307DCC419505_770*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDHINTAREAS_B__49_6_OFFSET))(this, a1);
		}

		::R3::Observable_1<::RPG::Client::TextID>* __BindHintAreas_b__49_7(::Class_0_16E4307DCC419505_770* a1)
		{
			return ((::R3::Observable_1<::RPG::Client::TextID>*(*)(::PVOID, ::Class_0_16E4307DCC419505_770*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDHINTAREAS_B__49_7_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::Boolean>* __BindRogueHex_b__50_0(::Class_0_16E4307DCC419505_770* a1)
		{
			return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID, ::Class_0_16E4307DCC419505_770*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDROGUEHEX_B__50_0_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::Int32>* __BindRogueHex_b__50_1(::Class_0_16E4307DCC419505_770* a1)
		{
			return ((::R3::Observable_1<::System::Int32>*(*)(::PVOID, ::Class_0_16E4307DCC419505_770*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDROGUEHEX_B__50_1_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::ValueTuple_2<::System::String*, ::System::UInt32>>* __BindRedDot_b__51_0(::Class_0_16E4307DCC419505_770* a1)
		{
			return ((::R3::Observable_1<::System::ValueTuple_2<::System::String*, ::System::UInt32>>*(*)(::PVOID, ::Class_0_16E4307DCC419505_770*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDREDDOT_B__51_0_OFFSET))(this, a1);
		}

		::R3::Observable_1<::RPG::Client::AvatarMaterialIndex>* __BindMaterial_b__52_0(::Class_0_16E4307DCC419505_770* a1)
		{
			return ((::R3::Observable_1<::RPG::Client::AvatarMaterialIndex>*(*)(::PVOID, ::Class_0_16E4307DCC419505_770*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDMATERIAL_B__52_0_OFFSET))(this, a1);
		}

		::System::Void __BindMaterial_b__52_1(::RPG::Client::MonoMaterialSwitch* a1, ::RPG::Client::AvatarMaterialIndex a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoMaterialSwitch*, ::RPG::Client::AvatarMaterialIndex))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDMATERIAL_B__52_1_OFFSET))(this, a1, a2);
		}

		::R3::Observable_1<::System::Boolean>* __BindChildControls_b__53_0(::Class_0_16E4307DCC419505_770* a1)
		{
			return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID, ::Class_0_16E4307DCC419505_770*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDCHILDCONTROLS_B__53_0_OFFSET))(this, a1);
		}

		::Class_0_16E4307DCC419505_769* __BindChildControls_b__53_1(::Class_0_16E4307DCC419505_770* a1)
		{
			return ((::Class_0_16E4307DCC419505_769*(*)(::PVOID, ::Class_0_16E4307DCC419505_770*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDCHILDCONTROLS_B__53_1_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::Boolean>* __BindChildControls_b__53_2(::Class_0_16E4307DCC419505_770* a1)
		{
			return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID, ::Class_0_16E4307DCC419505_770*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDCHILDCONTROLS_B__53_2_OFFSET))(this, a1);
		}

		::Class_0_16E4307DCC419505_771* __BindChildControls_b__53_3(::Class_0_16E4307DCC419505_770* a1)
		{
			return ((::Class_0_16E4307DCC419505_771*(*)(::PVOID, ::Class_0_16E4307DCC419505_770*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDCHILDCONTROLS_B__53_3_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::UInt32>* __BindTutorial_b__54_0(::Class_0_16E4307DCC419505_770* a1)
		{
			return ((::R3::Observable_1<::System::UInt32>*(*)(::PVOID, ::Class_0_16E4307DCC419505_770*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDTUTORIAL_B__54_0_OFFSET))(this, a1);
		}
	};
}
