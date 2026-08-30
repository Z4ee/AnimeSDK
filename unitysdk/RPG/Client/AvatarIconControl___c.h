#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AvatarMarkFlags.h"
#include "unitysdk/RPG/Client/AvatarMaterialIndex.h"
#include "unitysdk/RPG/Client/AvatarSpecialMarkType.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_0_16E4307DCC419505_318;
class Class_0_16E4307DCC419505_677;
class Class_0_16E4307DCC419505_678;
class Class_0_16E4307DCC419505_679;
class Class_1_90889A2023AB884E_3;
namespace R3 { template <typename T> class Observable_1; }
namespace RPG::Client { class MonoMaterialSwitch; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3, typename T4> class Func_4; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine { class GameObject; }
template <typename T> class Class_0_16E4307DCC419505_320;

#define RPG_CLIENT_AVATARICONCONTROL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x193E9AE0)
#define RPG_CLIENT_AVATARICONCONTROL___C__CTOR_OFFSET UNITYSDK_OFFSET(0x193E9B20)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDBUTTON_B__41_0_OFFSET UNITYSDK_OFFSET(0x193E9B30)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDBUTTON_B__41_1_OFFSET UNITYSDK_OFFSET(0x193E9C50)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDBUTTON_B__41_2_OFFSET UNITYSDK_OFFSET(0x193E9D70)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDBUTTON_B__41_3_OFFSET UNITYSDK_OFFSET(0x193E9E90)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDCHILDCONTROLS_B__53_0_OFFSET UNITYSDK_OFFSET(0x193EDDD0)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDCHILDCONTROLS_B__53_1_OFFSET UNITYSDK_OFFSET(0x193EDF50)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDCHILDCONTROLS_B__53_2_OFFSET UNITYSDK_OFFSET(0x193EE070)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDCHILDCONTROLS_B__53_3_OFFSET UNITYSDK_OFFSET(0x193EE1F0)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDHINTAREAS_B__49_0_OFFSET UNITYSDK_OFFSET(0x193ED010)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDHINTAREAS_B__49_1_OFFSET UNITYSDK_OFFSET(0x193ED130)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDHINTAREAS_B__49_2_OFFSET UNITYSDK_OFFSET(0x193ED250)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDHINTAREAS_B__49_3_OFFSET UNITYSDK_OFFSET(0x193ED370)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDHINTAREAS_B__49_4_OFFSET UNITYSDK_OFFSET(0x193ED490)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDHINTAREAS_B__49_5_OFFSET UNITYSDK_OFFSET(0x193ED5B0)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDHINTAREAS_B__49_6_OFFSET UNITYSDK_OFFSET(0x193ED6D0)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDHINTAREAS_B__49_7_OFFSET UNITYSDK_OFFSET(0x193ED7F0)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDIMAGES_B__42_0_OFFSET UNITYSDK_OFFSET(0x193E9FB0)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDIMAGES_B__42_1_OFFSET UNITYSDK_OFFSET(0x193EA0D0)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDIMAGES_B__42_2_OFFSET UNITYSDK_OFFSET(0x193EA1F0)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDIMAGES_B__42_3_OFFSET UNITYSDK_OFFSET(0x193EA410)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDIMAGES_B__42_4_OFFSET UNITYSDK_OFFSET(0x193EA530)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDIMAGES_B__42_5_OFFSET UNITYSDK_OFFSET(0x193EA3F0)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDLEVELPANEL_B__43_0_OFFSET UNITYSDK_OFFSET(0x193EA650)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDLEVELPANEL_B__43_1_OFFSET UNITYSDK_OFFSET(0x193EA870)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDLEVELPANEL_B__43_2_OFFSET UNITYSDK_OFFSET(0x193EA990)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDLEVELPANEL_B__43_3_OFFSET UNITYSDK_OFFSET(0x193EABE0)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDLEVELPANEL_B__43_4_OFFSET UNITYSDK_OFFSET(0x193EA850)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDLEVELPANEL_B__43_5_OFFSET UNITYSDK_OFFSET(0x193EAB90)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDLEVELPANEL_B__43_6_OFFSET UNITYSDK_OFFSET(0x193EADE0)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDMARKS_B__45_0_OFFSET UNITYSDK_OFFSET(0x193EB170)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDMARKS_B__45_10_OFFSET UNITYSDK_OFFSET(0x193EB9A0)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDMARKS_B__45_11_OFFSET UNITYSDK_OFFSET(0x193EBBB0)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDMARKS_B__45_12_OFFSET UNITYSDK_OFFSET(0x193EBDC0)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDMARKS_B__45_13_OFFSET UNITYSDK_OFFSET(0x193EBFD0)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDMARKS_B__45_1_OFFSET UNITYSDK_OFFSET(0x193EB380)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDMARKS_B__45_2_OFFSET UNITYSDK_OFFSET(0x193EB590)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDMARKS_B__45_3_OFFSET UNITYSDK_OFFSET(0x193EB7A0)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDMARKS_B__45_4_OFFSET UNITYSDK_OFFSET(0x193EB9B0)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDMARKS_B__45_5_OFFSET UNITYSDK_OFFSET(0x193EBBC0)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDMARKS_B__45_6_OFFSET UNITYSDK_OFFSET(0x193EBDD0)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDMARKS_B__45_7_OFFSET UNITYSDK_OFFSET(0x193EB370)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDMARKS_B__45_8_OFFSET UNITYSDK_OFFSET(0x193EB580)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDMARKS_B__45_9_OFFSET UNITYSDK_OFFSET(0x193EB790)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDMATERIAL_B__52_0_OFFSET UNITYSDK_OFFSET(0x193EDC70)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDMATERIAL_B__52_1_OFFSET UNITYSDK_OFFSET(0x193EDD90)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDNAMEPANEL_B__44_0_OFFSET UNITYSDK_OFFSET(0x193EAE30)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDNAMEPANEL_B__44_1_OFFSET UNITYSDK_OFFSET(0x193EB050)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDNAMEPANEL_B__44_2_OFFSET UNITYSDK_OFFSET(0x193EB030)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDORDERANDCHECKMARK_B__48_0_OFFSET UNITYSDK_OFFSET(0x193EC4B0)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDORDERANDCHECKMARK_B__48_1_OFFSET UNITYSDK_OFFSET(0x193EC940)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDORDERANDCHECKMARK_B__48_2_OFFSET UNITYSDK_OFFSET(0x193ECA60)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDORDERANDCHECKMARK_B__48_3_OFFSET UNITYSDK_OFFSET(0x193ECB80)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDORDERANDCHECKMARK_B__48_4_OFFSET UNITYSDK_OFFSET(0x193EC910)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDORDERANDCHECKMARK_B__48_5_OFFSET UNITYSDK_OFFSET(0x193ECFE0)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDREDDOT_B__51_0_OFFSET UNITYSDK_OFFSET(0x193EDB50)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDROGUEHEX_B__50_0_OFFSET UNITYSDK_OFFSET(0x193ED910)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDROGUEHEX_B__50_1_OFFSET UNITYSDK_OFFSET(0x193EDA30)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDSPECIALMARK_B__46_0_OFFSET UNITYSDK_OFFSET(0x193EBFE0)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDSPECIALMARK_B__46_1_OFFSET UNITYSDK_OFFSET(0x193EC1F0)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDSPECIALMARK_B__46_2_OFFSET UNITYSDK_OFFSET(0x193EC390)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDSPECIALMARK_B__46_3_OFFSET UNITYSDK_OFFSET(0x193EC1E0)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDTUTORIAL_B__54_0_OFFSET UNITYSDK_OFFSET(0x193EE310)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarIconControl___c_TypeDefinitionIndex = 60236;

	class AvatarIconControl___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::AvatarMarkFlags, ::System::String*>** StaticGet___9__43_5()
		{
			return (::System::Func_2<::RPG::Client::AvatarMarkFlags, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x65BE0);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_678*, ::R3::Observable_1<::RPG::Client::TextID>*>** StaticGet___9__49_2()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_678*, ::R3::Observable_1<::RPG::Client::TextID>*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x65BE8);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_678*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__46_0()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_678*, ::R3::Observable_1<::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x65BF0);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_678*, ::Class_0_16E4307DCC419505_320<::UnityEngine::GameObject*>*>** StaticGet___9__41_3()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_678*, ::Class_0_16E4307DCC419505_320<::UnityEngine::GameObject*>*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x65BF8);
		}
		static ::System::Func_2<::RPG::Client::AvatarSpecialMarkType, ::System::Boolean>** StaticGet___9__46_3()
		{
			return (::System::Func_2<::RPG::Client::AvatarSpecialMarkType, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x65C00);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_678*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__45_5()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_678*, ::R3::Observable_1<::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x65C08);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_678*, ::R3::Observable_1<::RPG::Client::TextID>*>** StaticGet___9__49_7()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_678*, ::R3::Observable_1<::RPG::Client::TextID>*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x65C10);
		}
		static ::System::Func_2<::RPG::Client::AvatarMarkFlags, ::System::Boolean>** StaticGet___9__45_12()
		{
			return (::System::Func_2<::RPG::Client::AvatarMarkFlags, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x65C18);
		}
		static ::System::Action_2<::RPG::Client::MonoMaterialSwitch*, ::RPG::Client::AvatarMaterialIndex>** StaticGet___9__52_1()
		{
			return (::System::Action_2<::RPG::Client::MonoMaterialSwitch*, ::RPG::Client::AvatarMaterialIndex>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x65C20);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_678*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__48_1()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_678*, ::R3::Observable_1<::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x65C28);
		}
		static ::System::Func_2<::RPG::Client::AvatarMarkFlags, ::System::String*>** StaticGet___9__43_6()
		{
			return (::System::Func_2<::RPG::Client::AvatarMarkFlags, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x65C30);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_678*, ::R3::Observable_1<::System::String*>*>** StaticGet___9__49_3()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_678*, ::R3::Observable_1<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x65C38);
		}
		static ::System::Func_2<::RPG::Client::AvatarMarkFlags, ::System::Boolean>** StaticGet___9__45_7()
		{
			return (::System::Func_2<::RPG::Client::AvatarMarkFlags, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x65C40);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_678*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__48_0()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_678*, ::R3::Observable_1<::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x65C48);
		}
		static ::System::Func_4<::Class_1_90889A2023AB884E_3*, ::System::Boolean, ::System::Int32, ::System::Boolean>** StaticGet___9__48_5()
		{
			return (::System::Func_4<::Class_1_90889A2023AB884E_3*, ::System::Boolean, ::System::Int32, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x65C50);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_678*, ::Class_0_16E4307DCC419505_677*>** StaticGet___9__53_1()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_678*, ::Class_0_16E4307DCC419505_677*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x65C58);
		}
		static ::System::Func_2<::RPG::Client::AvatarMarkFlags, ::System::Boolean>** StaticGet___9__45_11()
		{
			return (::System::Func_2<::RPG::Client::AvatarMarkFlags, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x65C60);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_678*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__45_3()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_678*, ::R3::Observable_1<::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x65C68);
		}
		static ::System::Func_2<::Class_1_90889A2023AB884E_3*, ::System::Boolean>** StaticGet___9__44_2()
		{
			return (::System::Func_2<::Class_1_90889A2023AB884E_3*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x65C70);
		}
		static ::System::Func_2<::Class_1_90889A2023AB884E_3*, ::System::Boolean>** StaticGet___9__42_5()
		{
			return (::System::Func_2<::Class_1_90889A2023AB884E_3*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x65C78);
		}
		static ::System::Func_2<::Class_1_90889A2023AB884E_3*, ::System::Boolean>** StaticGet___9__43_4()
		{
			return (::System::Func_2<::Class_1_90889A2023AB884E_3*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x65C80);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_678*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__48_3()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_678*, ::R3::Observable_1<::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x65C88);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_678*, ::R3::Observable_1<::System::String*>*>** StaticGet___9__42_1()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_678*, ::R3::Observable_1<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x65C90);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_678*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__45_0()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_678*, ::R3::Observable_1<::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x65C98);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_678*, ::R3::Observable_1<::System::UInt32>*>** StaticGet___9__54_0()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_678*, ::R3::Observable_1<::System::UInt32>*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x65CA0);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_678*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__49_0()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_678*, ::R3::Observable_1<::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x65CA8);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_678*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__42_4()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_678*, ::R3::Observable_1<::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x65CB0);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_678*, ::Class_0_16E4307DCC419505_679*>** StaticGet___9__53_3()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_678*, ::Class_0_16E4307DCC419505_679*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x65CB8);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_678*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__53_2()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_678*, ::R3::Observable_1<::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x65CC0);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_678*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__45_1()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_678*, ::R3::Observable_1<::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x65CC8);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_678*, ::R3::Observable_1<::RPG::Client::TextID>*>** StaticGet___9__44_1()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_678*, ::R3::Observable_1<::RPG::Client::TextID>*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x65CD0);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_678*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__50_0()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_678*, ::R3::Observable_1<::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x65CD8);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_678*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__42_2()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_678*, ::R3::Observable_1<::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x65CE0);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_678*, ::R3::Observable_1<::System::Int32>*>** StaticGet___9__50_1()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_678*, ::R3::Observable_1<::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x65CE8);
		}
		static ::System::Func_4<::Class_1_90889A2023AB884E_3*, ::System::Boolean, ::System::Int32, ::System::Boolean>** StaticGet___9__48_4()
		{
			return (::System::Func_4<::Class_1_90889A2023AB884E_3*, ::System::Boolean, ::System::Int32, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x65CF0);
		}
		static ::System::Func_2<::RPG::Client::AvatarMarkFlags, ::System::Boolean>** StaticGet___9__45_9()
		{
			return (::System::Func_2<::RPG::Client::AvatarMarkFlags, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x65CF8);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_678*, ::R3::Observable_1<::System::Int32>*>** StaticGet___9__43_1()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_678*, ::R3::Observable_1<::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x65D00);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_678*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__45_6()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_678*, ::R3::Observable_1<::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x65D08);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_678*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__41_1()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_678*, ::R3::Observable_1<::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x65D10);
		}
		static ::System::Func_2<::RPG::Client::AvatarMarkFlags, ::System::Boolean>** StaticGet___9__45_8()
		{
			return (::System::Func_2<::RPG::Client::AvatarMarkFlags, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x65D18);
		}
		static ::RPG::Client::AvatarIconControl___c** StaticGet___9()
		{
			return (::RPG::Client::AvatarIconControl___c**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x65D20);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_678*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__45_2()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_678*, ::R3::Observable_1<::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x65D28);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_678*, ::Class_0_16E4307DCC419505_318*>** StaticGet___9__41_0()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_678*, ::Class_0_16E4307DCC419505_318*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x65D30);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_678*, ::R3::Observable_1<::RPG::Client::TextID>*>** StaticGet___9__46_2()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_678*, ::R3::Observable_1<::RPG::Client::TextID>*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x65D38);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_678*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__43_0()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_678*, ::R3::Observable_1<::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x65D40);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_678*, ::R3::Observable_1<::System::String*>*>** StaticGet___9__42_0()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_678*, ::R3::Observable_1<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x65D48);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_678*, ::R3::Observable_1<::System::String*>*>** StaticGet___9__43_2()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_678*, ::R3::Observable_1<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x65D50);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_678*, ::R3::Observable_1<::System::String*>*>** StaticGet___9__46_1()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_678*, ::R3::Observable_1<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x65D58);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_678*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__45_4()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_678*, ::R3::Observable_1<::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x65D60);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_678*, ::R3::Observable_1<::RPG::Client::TextID>*>** StaticGet___9__49_5()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_678*, ::R3::Observable_1<::RPG::Client::TextID>*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x65D68);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_678*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__44_0()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_678*, ::R3::Observable_1<::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x65D70);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_678*, ::R3::Observable_1<::System::String*>*>** StaticGet___9__43_3()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_678*, ::R3::Observable_1<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x65D78);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_678*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__41_2()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_678*, ::R3::Observable_1<::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x65D80);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_678*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__49_1()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_678*, ::R3::Observable_1<::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x65D88);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_678*, ::R3::Observable_1<::System::ValueTuple_2<::System::String*, ::System::UInt32>>*>** StaticGet___9__51_0()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_678*, ::R3::Observable_1<::System::ValueTuple_2<::System::String*, ::System::UInt32>>*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x65D90);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_678*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__49_6()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_678*, ::R3::Observable_1<::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x65D98);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_678*, ::R3::Observable_1<::System::Int32>*>** StaticGet___9__48_2()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_678*, ::R3::Observable_1<::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x65DA0);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_678*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__49_4()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_678*, ::R3::Observable_1<::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x65DA8);
		}
		static ::System::Func_2<::RPG::Client::AvatarMarkFlags, ::System::Boolean>** StaticGet___9__45_13()
		{
			return (::System::Func_2<::RPG::Client::AvatarMarkFlags, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x65DB0);
		}
		static ::System::Func_2<::RPG::Client::AvatarMarkFlags, ::System::Boolean>** StaticGet___9__45_10()
		{
			return (::System::Func_2<::RPG::Client::AvatarMarkFlags, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x65DB8);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_678*, ::R3::Observable_1<::System::String*>*>** StaticGet___9__42_3()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_678*, ::R3::Observable_1<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x65DC0);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_678*, ::R3::Observable_1<::RPG::Client::AvatarMaterialIndex>*>** StaticGet___9__52_0()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_678*, ::R3::Observable_1<::RPG::Client::AvatarMaterialIndex>*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x65DC8);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_678*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__53_0()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_678*, ::R3::Observable_1<::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x65DD0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C__CTOR_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_318* __BindButton_b__41_0(::Class_0_16E4307DCC419505_678* a1)
		{
			return ((::Class_0_16E4307DCC419505_318*(*)(::PVOID, ::Class_0_16E4307DCC419505_678*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDBUTTON_B__41_0_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::Boolean>* __BindButton_b__41_1(::Class_0_16E4307DCC419505_678* a1)
		{
			return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID, ::Class_0_16E4307DCC419505_678*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDBUTTON_B__41_1_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::Boolean>* __BindButton_b__41_2(::Class_0_16E4307DCC419505_678* a1)
		{
			return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID, ::Class_0_16E4307DCC419505_678*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDBUTTON_B__41_2_OFFSET))(this, a1);
		}

		::Class_0_16E4307DCC419505_320<::UnityEngine::GameObject*>* __BindButton_b__41_3(::Class_0_16E4307DCC419505_678* a1)
		{
			return ((::Class_0_16E4307DCC419505_320<::UnityEngine::GameObject*>*(*)(::PVOID, ::Class_0_16E4307DCC419505_678*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDBUTTON_B__41_3_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::String*>* __BindImages_b__42_0(::Class_0_16E4307DCC419505_678* a1)
		{
			return ((::R3::Observable_1<::System::String*>*(*)(::PVOID, ::Class_0_16E4307DCC419505_678*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDIMAGES_B__42_0_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::String*>* __BindImages_b__42_1(::Class_0_16E4307DCC419505_678* a1)
		{
			return ((::R3::Observable_1<::System::String*>*(*)(::PVOID, ::Class_0_16E4307DCC419505_678*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDIMAGES_B__42_1_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::Boolean>* __BindImages_b__42_2(::Class_0_16E4307DCC419505_678* a1)
		{
			return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID, ::Class_0_16E4307DCC419505_678*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDIMAGES_B__42_2_OFFSET))(this, a1);
		}

		::System::Boolean __BindImages_b__42_5(::Class_1_90889A2023AB884E_3* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_90889A2023AB884E_3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDIMAGES_B__42_5_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::String*>* __BindImages_b__42_3(::Class_0_16E4307DCC419505_678* a1)
		{
			return ((::R3::Observable_1<::System::String*>*(*)(::PVOID, ::Class_0_16E4307DCC419505_678*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDIMAGES_B__42_3_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::Boolean>* __BindImages_b__42_4(::Class_0_16E4307DCC419505_678* a1)
		{
			return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID, ::Class_0_16E4307DCC419505_678*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDIMAGES_B__42_4_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::Boolean>* __BindLevelPanel_b__43_0(::Class_0_16E4307DCC419505_678* a1)
		{
			return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID, ::Class_0_16E4307DCC419505_678*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDLEVELPANEL_B__43_0_OFFSET))(this, a1);
		}

		::System::Boolean __BindLevelPanel_b__43_4(::Class_1_90889A2023AB884E_3* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_90889A2023AB884E_3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDLEVELPANEL_B__43_4_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::Int32>* __BindLevelPanel_b__43_1(::Class_0_16E4307DCC419505_678* a1)
		{
			return ((::R3::Observable_1<::System::Int32>*(*)(::PVOID, ::Class_0_16E4307DCC419505_678*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDLEVELPANEL_B__43_1_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::String*>* __BindLevelPanel_b__43_2(::Class_0_16E4307DCC419505_678* a1)
		{
			return ((::R3::Observable_1<::System::String*>*(*)(::PVOID, ::Class_0_16E4307DCC419505_678*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDLEVELPANEL_B__43_2_OFFSET))(this, a1);
		}

		::System::String* __BindLevelPanel_b__43_5(::RPG::Client::AvatarMarkFlags a1)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::Client::AvatarMarkFlags))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDLEVELPANEL_B__43_5_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::String*>* __BindLevelPanel_b__43_3(::Class_0_16E4307DCC419505_678* a1)
		{
			return ((::R3::Observable_1<::System::String*>*(*)(::PVOID, ::Class_0_16E4307DCC419505_678*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDLEVELPANEL_B__43_3_OFFSET))(this, a1);
		}

		::System::String* __BindLevelPanel_b__43_6(::RPG::Client::AvatarMarkFlags a1)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::Client::AvatarMarkFlags))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDLEVELPANEL_B__43_6_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::Boolean>* __BindNamePanel_b__44_0(::Class_0_16E4307DCC419505_678* a1)
		{
			return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID, ::Class_0_16E4307DCC419505_678*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDNAMEPANEL_B__44_0_OFFSET))(this, a1);
		}

		::System::Boolean __BindNamePanel_b__44_2(::Class_1_90889A2023AB884E_3* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_90889A2023AB884E_3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDNAMEPANEL_B__44_2_OFFSET))(this, a1);
		}

		::R3::Observable_1<::RPG::Client::TextID>* __BindNamePanel_b__44_1(::Class_0_16E4307DCC419505_678* a1)
		{
			return ((::R3::Observable_1<::RPG::Client::TextID>*(*)(::PVOID, ::Class_0_16E4307DCC419505_678*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDNAMEPANEL_B__44_1_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::Boolean>* __BindMarks_b__45_0(::Class_0_16E4307DCC419505_678* a1)
		{
			return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID, ::Class_0_16E4307DCC419505_678*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDMARKS_B__45_0_OFFSET))(this, a1);
		}

		::System::Boolean __BindMarks_b__45_7(::RPG::Client::AvatarMarkFlags a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::AvatarMarkFlags))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDMARKS_B__45_7_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::Boolean>* __BindMarks_b__45_1(::Class_0_16E4307DCC419505_678* a1)
		{
			return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID, ::Class_0_16E4307DCC419505_678*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDMARKS_B__45_1_OFFSET))(this, a1);
		}

		::System::Boolean __BindMarks_b__45_8(::RPG::Client::AvatarMarkFlags a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::AvatarMarkFlags))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDMARKS_B__45_8_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::Boolean>* __BindMarks_b__45_2(::Class_0_16E4307DCC419505_678* a1)
		{
			return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID, ::Class_0_16E4307DCC419505_678*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDMARKS_B__45_2_OFFSET))(this, a1);
		}

		::System::Boolean __BindMarks_b__45_9(::RPG::Client::AvatarMarkFlags a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::AvatarMarkFlags))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDMARKS_B__45_9_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::Boolean>* __BindMarks_b__45_3(::Class_0_16E4307DCC419505_678* a1)
		{
			return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID, ::Class_0_16E4307DCC419505_678*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDMARKS_B__45_3_OFFSET))(this, a1);
		}

		::System::Boolean __BindMarks_b__45_10(::RPG::Client::AvatarMarkFlags a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::AvatarMarkFlags))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDMARKS_B__45_10_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::Boolean>* __BindMarks_b__45_4(::Class_0_16E4307DCC419505_678* a1)
		{
			return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID, ::Class_0_16E4307DCC419505_678*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDMARKS_B__45_4_OFFSET))(this, a1);
		}

		::System::Boolean __BindMarks_b__45_11(::RPG::Client::AvatarMarkFlags a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::AvatarMarkFlags))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDMARKS_B__45_11_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::Boolean>* __BindMarks_b__45_5(::Class_0_16E4307DCC419505_678* a1)
		{
			return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID, ::Class_0_16E4307DCC419505_678*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDMARKS_B__45_5_OFFSET))(this, a1);
		}

		::System::Boolean __BindMarks_b__45_12(::RPG::Client::AvatarMarkFlags a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::AvatarMarkFlags))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDMARKS_B__45_12_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::Boolean>* __BindMarks_b__45_6(::Class_0_16E4307DCC419505_678* a1)
		{
			return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID, ::Class_0_16E4307DCC419505_678*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDMARKS_B__45_6_OFFSET))(this, a1);
		}

		::System::Boolean __BindMarks_b__45_13(::RPG::Client::AvatarMarkFlags a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::AvatarMarkFlags))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDMARKS_B__45_13_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::Boolean>* __BindSpecialMark_b__46_0(::Class_0_16E4307DCC419505_678* a1)
		{
			return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID, ::Class_0_16E4307DCC419505_678*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDSPECIALMARK_B__46_0_OFFSET))(this, a1);
		}

		::System::Boolean __BindSpecialMark_b__46_3(::RPG::Client::AvatarSpecialMarkType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::AvatarSpecialMarkType))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDSPECIALMARK_B__46_3_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::String*>* __BindSpecialMark_b__46_1(::Class_0_16E4307DCC419505_678* a1)
		{
			return ((::R3::Observable_1<::System::String*>*(*)(::PVOID, ::Class_0_16E4307DCC419505_678*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDSPECIALMARK_B__46_1_OFFSET))(this, a1);
		}

		::R3::Observable_1<::RPG::Client::TextID>* __BindSpecialMark_b__46_2(::Class_0_16E4307DCC419505_678* a1)
		{
			return ((::R3::Observable_1<::RPG::Client::TextID>*(*)(::PVOID, ::Class_0_16E4307DCC419505_678*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDSPECIALMARK_B__46_2_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::Boolean>* __BindOrderAndCheckMark_b__48_0(::Class_0_16E4307DCC419505_678* a1)
		{
			return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID, ::Class_0_16E4307DCC419505_678*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDORDERANDCHECKMARK_B__48_0_OFFSET))(this, a1);
		}

		::System::Boolean __BindOrderAndCheckMark_b__48_4(::Class_1_90889A2023AB884E_3* a1, ::System::Boolean a2, ::System::Int32 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_90889A2023AB884E_3*, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDORDERANDCHECKMARK_B__48_4_OFFSET))(this, a1, a2, a3);
		}

		::R3::Observable_1<::System::Boolean>* __BindOrderAndCheckMark_b__48_1(::Class_0_16E4307DCC419505_678* a1)
		{
			return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID, ::Class_0_16E4307DCC419505_678*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDORDERANDCHECKMARK_B__48_1_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::Int32>* __BindOrderAndCheckMark_b__48_2(::Class_0_16E4307DCC419505_678* a1)
		{
			return ((::R3::Observable_1<::System::Int32>*(*)(::PVOID, ::Class_0_16E4307DCC419505_678*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDORDERANDCHECKMARK_B__48_2_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::Boolean>* __BindOrderAndCheckMark_b__48_3(::Class_0_16E4307DCC419505_678* a1)
		{
			return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID, ::Class_0_16E4307DCC419505_678*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDORDERANDCHECKMARK_B__48_3_OFFSET))(this, a1);
		}

		::System::Boolean __BindOrderAndCheckMark_b__48_5(::Class_1_90889A2023AB884E_3* a1, ::System::Boolean a2, ::System::Int32 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_90889A2023AB884E_3*, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDORDERANDCHECKMARK_B__48_5_OFFSET))(this, a1, a2, a3);
		}

		::R3::Observable_1<::System::Boolean>* __BindHintAreas_b__49_0(::Class_0_16E4307DCC419505_678* a1)
		{
			return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID, ::Class_0_16E4307DCC419505_678*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDHINTAREAS_B__49_0_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::Boolean>* __BindHintAreas_b__49_1(::Class_0_16E4307DCC419505_678* a1)
		{
			return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID, ::Class_0_16E4307DCC419505_678*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDHINTAREAS_B__49_1_OFFSET))(this, a1);
		}

		::R3::Observable_1<::RPG::Client::TextID>* __BindHintAreas_b__49_2(::Class_0_16E4307DCC419505_678* a1)
		{
			return ((::R3::Observable_1<::RPG::Client::TextID>*(*)(::PVOID, ::Class_0_16E4307DCC419505_678*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDHINTAREAS_B__49_2_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::String*>* __BindHintAreas_b__49_3(::Class_0_16E4307DCC419505_678* a1)
		{
			return ((::R3::Observable_1<::System::String*>*(*)(::PVOID, ::Class_0_16E4307DCC419505_678*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDHINTAREAS_B__49_3_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::Boolean>* __BindHintAreas_b__49_4(::Class_0_16E4307DCC419505_678* a1)
		{
			return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID, ::Class_0_16E4307DCC419505_678*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDHINTAREAS_B__49_4_OFFSET))(this, a1);
		}

		::R3::Observable_1<::RPG::Client::TextID>* __BindHintAreas_b__49_5(::Class_0_16E4307DCC419505_678* a1)
		{
			return ((::R3::Observable_1<::RPG::Client::TextID>*(*)(::PVOID, ::Class_0_16E4307DCC419505_678*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDHINTAREAS_B__49_5_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::Boolean>* __BindHintAreas_b__49_6(::Class_0_16E4307DCC419505_678* a1)
		{
			return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID, ::Class_0_16E4307DCC419505_678*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDHINTAREAS_B__49_6_OFFSET))(this, a1);
		}

		::R3::Observable_1<::RPG::Client::TextID>* __BindHintAreas_b__49_7(::Class_0_16E4307DCC419505_678* a1)
		{
			return ((::R3::Observable_1<::RPG::Client::TextID>*(*)(::PVOID, ::Class_0_16E4307DCC419505_678*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDHINTAREAS_B__49_7_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::Boolean>* __BindRogueHex_b__50_0(::Class_0_16E4307DCC419505_678* a1)
		{
			return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID, ::Class_0_16E4307DCC419505_678*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDROGUEHEX_B__50_0_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::Int32>* __BindRogueHex_b__50_1(::Class_0_16E4307DCC419505_678* a1)
		{
			return ((::R3::Observable_1<::System::Int32>*(*)(::PVOID, ::Class_0_16E4307DCC419505_678*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDROGUEHEX_B__50_1_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::ValueTuple_2<::System::String*, ::System::UInt32>>* __BindRedDot_b__51_0(::Class_0_16E4307DCC419505_678* a1)
		{
			return ((::R3::Observable_1<::System::ValueTuple_2<::System::String*, ::System::UInt32>>*(*)(::PVOID, ::Class_0_16E4307DCC419505_678*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDREDDOT_B__51_0_OFFSET))(this, a1);
		}

		::R3::Observable_1<::RPG::Client::AvatarMaterialIndex>* __BindMaterial_b__52_0(::Class_0_16E4307DCC419505_678* a1)
		{
			return ((::R3::Observable_1<::RPG::Client::AvatarMaterialIndex>*(*)(::PVOID, ::Class_0_16E4307DCC419505_678*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDMATERIAL_B__52_0_OFFSET))(this, a1);
		}

		::System::Void __BindMaterial_b__52_1(::RPG::Client::MonoMaterialSwitch* a1, ::RPG::Client::AvatarMaterialIndex a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoMaterialSwitch*, ::RPG::Client::AvatarMaterialIndex))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDMATERIAL_B__52_1_OFFSET))(this, a1, a2);
		}

		::R3::Observable_1<::System::Boolean>* __BindChildControls_b__53_0(::Class_0_16E4307DCC419505_678* a1)
		{
			return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID, ::Class_0_16E4307DCC419505_678*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDCHILDCONTROLS_B__53_0_OFFSET))(this, a1);
		}

		::Class_0_16E4307DCC419505_677* __BindChildControls_b__53_1(::Class_0_16E4307DCC419505_678* a1)
		{
			return ((::Class_0_16E4307DCC419505_677*(*)(::PVOID, ::Class_0_16E4307DCC419505_678*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDCHILDCONTROLS_B__53_1_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::Boolean>* __BindChildControls_b__53_2(::Class_0_16E4307DCC419505_678* a1)
		{
			return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID, ::Class_0_16E4307DCC419505_678*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDCHILDCONTROLS_B__53_2_OFFSET))(this, a1);
		}

		::Class_0_16E4307DCC419505_679* __BindChildControls_b__53_3(::Class_0_16E4307DCC419505_678* a1)
		{
			return ((::Class_0_16E4307DCC419505_679*(*)(::PVOID, ::Class_0_16E4307DCC419505_678*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDCHILDCONTROLS_B__53_3_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::UInt32>* __BindTutorial_b__54_0(::Class_0_16E4307DCC419505_678* a1)
		{
			return ((::R3::Observable_1<::System::UInt32>*(*)(::PVOID, ::Class_0_16E4307DCC419505_678*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARICONCONTROL___C___BINDTUTORIAL_B__54_0_OFFSET))(this, a1);
		}
	};
}
