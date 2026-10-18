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

#define RPG_CLIENT_AVATARICONCONTROL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xC6FAF70)
#define RPG_CLIENT_AVATARICONCONTROL___C__CTOR_OFFSET UNITYSDK_OFFSET(0xC6FAFB0)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDBUTTON_B__41_0_OFFSET UNITYSDK_OFFSET(0xC6FAFC0)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDBUTTON_B__41_1_OFFSET UNITYSDK_OFFSET(0xC6FB0E0)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDBUTTON_B__41_2_OFFSET UNITYSDK_OFFSET(0xC6FB200)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDBUTTON_B__41_3_OFFSET UNITYSDK_OFFSET(0xC6FB320)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDCHILDCONTROLS_B__53_0_OFFSET UNITYSDK_OFFSET(0xC6FF260)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDCHILDCONTROLS_B__53_1_OFFSET UNITYSDK_OFFSET(0xC6FF3E0)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDCHILDCONTROLS_B__53_2_OFFSET UNITYSDK_OFFSET(0xC6FF500)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDCHILDCONTROLS_B__53_3_OFFSET UNITYSDK_OFFSET(0xC6FF680)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDHINTAREAS_B__49_0_OFFSET UNITYSDK_OFFSET(0xC6FE4A0)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDHINTAREAS_B__49_1_OFFSET UNITYSDK_OFFSET(0xC6FE5C0)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDHINTAREAS_B__49_2_OFFSET UNITYSDK_OFFSET(0xC6FE6E0)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDHINTAREAS_B__49_3_OFFSET UNITYSDK_OFFSET(0xC6FE800)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDHINTAREAS_B__49_4_OFFSET UNITYSDK_OFFSET(0xC6FE920)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDHINTAREAS_B__49_5_OFFSET UNITYSDK_OFFSET(0xC6FEA40)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDHINTAREAS_B__49_6_OFFSET UNITYSDK_OFFSET(0xC6FEB60)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDHINTAREAS_B__49_7_OFFSET UNITYSDK_OFFSET(0xC6FEC80)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDIMAGES_B__42_0_OFFSET UNITYSDK_OFFSET(0xC6FB440)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDIMAGES_B__42_1_OFFSET UNITYSDK_OFFSET(0xC6FB560)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDIMAGES_B__42_2_OFFSET UNITYSDK_OFFSET(0xC6FB680)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDIMAGES_B__42_3_OFFSET UNITYSDK_OFFSET(0xC6FB8A0)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDIMAGES_B__42_4_OFFSET UNITYSDK_OFFSET(0xC6FB9C0)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDIMAGES_B__42_5_OFFSET UNITYSDK_OFFSET(0xC6FB880)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDLEVELPANEL_B__43_0_OFFSET UNITYSDK_OFFSET(0xC6FBAE0)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDLEVELPANEL_B__43_1_OFFSET UNITYSDK_OFFSET(0xC6FBD00)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDLEVELPANEL_B__43_2_OFFSET UNITYSDK_OFFSET(0xC6FBE20)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDLEVELPANEL_B__43_3_OFFSET UNITYSDK_OFFSET(0xC6FC070)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDLEVELPANEL_B__43_4_OFFSET UNITYSDK_OFFSET(0xC6FBCE0)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDLEVELPANEL_B__43_5_OFFSET UNITYSDK_OFFSET(0xC6FC020)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDLEVELPANEL_B__43_6_OFFSET UNITYSDK_OFFSET(0xC6FC270)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDMARKS_B__45_0_OFFSET UNITYSDK_OFFSET(0xC6FC600)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDMARKS_B__45_10_OFFSET UNITYSDK_OFFSET(0xC6FCE30)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDMARKS_B__45_11_OFFSET UNITYSDK_OFFSET(0xC6FD040)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDMARKS_B__45_12_OFFSET UNITYSDK_OFFSET(0xC6FD250)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDMARKS_B__45_13_OFFSET UNITYSDK_OFFSET(0xC6FD460)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDMARKS_B__45_1_OFFSET UNITYSDK_OFFSET(0xC6FC810)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDMARKS_B__45_2_OFFSET UNITYSDK_OFFSET(0xC6FCA20)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDMARKS_B__45_3_OFFSET UNITYSDK_OFFSET(0xC6FCC30)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDMARKS_B__45_4_OFFSET UNITYSDK_OFFSET(0xC6FCE40)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDMARKS_B__45_5_OFFSET UNITYSDK_OFFSET(0xC6FD050)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDMARKS_B__45_6_OFFSET UNITYSDK_OFFSET(0xC6FD260)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDMARKS_B__45_7_OFFSET UNITYSDK_OFFSET(0xC6FC800)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDMARKS_B__45_8_OFFSET UNITYSDK_OFFSET(0xC6FCA10)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDMARKS_B__45_9_OFFSET UNITYSDK_OFFSET(0xC6FCC20)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDMATERIAL_B__52_0_OFFSET UNITYSDK_OFFSET(0xC6FF100)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDMATERIAL_B__52_1_OFFSET UNITYSDK_OFFSET(0xC6FF220)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDNAMEPANEL_B__44_0_OFFSET UNITYSDK_OFFSET(0xC6FC2C0)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDNAMEPANEL_B__44_1_OFFSET UNITYSDK_OFFSET(0xC6FC4E0)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDNAMEPANEL_B__44_2_OFFSET UNITYSDK_OFFSET(0xC6FC4C0)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDORDERANDCHECKMARK_B__48_0_OFFSET UNITYSDK_OFFSET(0xC6FD940)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDORDERANDCHECKMARK_B__48_1_OFFSET UNITYSDK_OFFSET(0xC6FDDD0)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDORDERANDCHECKMARK_B__48_2_OFFSET UNITYSDK_OFFSET(0xC6FDEF0)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDORDERANDCHECKMARK_B__48_3_OFFSET UNITYSDK_OFFSET(0xC6FE010)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDORDERANDCHECKMARK_B__48_4_OFFSET UNITYSDK_OFFSET(0xC6FDDA0)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDORDERANDCHECKMARK_B__48_5_OFFSET UNITYSDK_OFFSET(0xC6FE470)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDREDDOT_B__51_0_OFFSET UNITYSDK_OFFSET(0xC6FEFE0)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDROGUEHEX_B__50_0_OFFSET UNITYSDK_OFFSET(0xC6FEDA0)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDROGUEHEX_B__50_1_OFFSET UNITYSDK_OFFSET(0xC6FEEC0)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDSPECIALMARK_B__46_0_OFFSET UNITYSDK_OFFSET(0xC6FD470)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDSPECIALMARK_B__46_1_OFFSET UNITYSDK_OFFSET(0xC6FD680)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDSPECIALMARK_B__46_2_OFFSET UNITYSDK_OFFSET(0xC6FD820)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDSPECIALMARK_B__46_3_OFFSET UNITYSDK_OFFSET(0xC6FD670)
#define RPG_CLIENT_AVATARICONCONTROL___C___BINDTUTORIAL_B__54_0_OFFSET UNITYSDK_OFFSET(0xC6FF7A0)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarIconControl___c_TypeDefinitionIndex = 60099;

	class AvatarIconControl___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::Class_0_16E4307DCC419505_770*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__45_3()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_770*, ::R3::Observable_1<::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x5B790);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_770*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__49_6()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_770*, ::R3::Observable_1<::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x5B798);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_770*, ::R3::Observable_1<::System::String*>*>** StaticGet___9__42_3()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_770*, ::R3::Observable_1<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x5B7A0);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_770*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__50_0()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_770*, ::R3::Observable_1<::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x5B7A8);
		}
		static ::RPG::Client::AvatarIconControl___c** StaticGet___9()
		{
			return (::RPG::Client::AvatarIconControl___c**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x5B7B0);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_770*, ::Class_0_16E4307DCC419505_397*>** StaticGet___9__41_0()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_770*, ::Class_0_16E4307DCC419505_397*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x5B7B8);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_770*, ::R3::Observable_1<::System::String*>*>** StaticGet___9__42_0()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_770*, ::R3::Observable_1<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x5B7C0);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_770*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__43_0()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_770*, ::R3::Observable_1<::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x5B7C8);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_770*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__44_0()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_770*, ::R3::Observable_1<::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x5B7D0);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_770*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__41_1()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_770*, ::R3::Observable_1<::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x5B7D8);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_770*, ::R3::Observable_1<::System::String*>*>** StaticGet___9__43_3()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_770*, ::R3::Observable_1<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x5B7E0);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_770*, ::R3::Observable_1<::RPG::Client::TextID>*>** StaticGet___9__49_7()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_770*, ::R3::Observable_1<::RPG::Client::TextID>*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x5B7E8);
		}
		static ::System::Func_2<::RPG::Client::AvatarMarkFlags, ::System::Boolean>** StaticGet___9__45_12()
		{
			return (::System::Func_2<::RPG::Client::AvatarMarkFlags, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x5B7F0);
		}
		static ::System::Func_2<::RPG::Client::AvatarMarkFlags, ::System::Boolean>** StaticGet___9__45_11()
		{
			return (::System::Func_2<::RPG::Client::AvatarMarkFlags, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x5B7F8);
		}
		static ::System::Func_2<::RPG::Client::AvatarMarkFlags, ::System::Boolean>** StaticGet___9__45_13()
		{
			return (::System::Func_2<::RPG::Client::AvatarMarkFlags, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x5B800);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_770*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__49_1()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_770*, ::R3::Observable_1<::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x5B808);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_770*, ::R3::Observable_1<::System::String*>*>** StaticGet___9__43_2()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_770*, ::R3::Observable_1<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x5B810);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_770*, ::R3::Observable_1<::System::String*>*>** StaticGet___9__49_3()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_770*, ::R3::Observable_1<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x5B818);
		}
		static ::System::Func_2<::RPG::Client::AvatarMarkFlags, ::System::Boolean>** StaticGet___9__45_9()
		{
			return (::System::Func_2<::RPG::Client::AvatarMarkFlags, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x5B820);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_770*, ::R3::Observable_1<::System::Int32>*>** StaticGet___9__48_2()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_770*, ::R3::Observable_1<::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x5B828);
		}
		static ::System::Func_4<::Class_1_90889A2023AB884E_3*, ::System::Boolean, ::System::Int32, ::System::Boolean>** StaticGet___9__48_4()
		{
			return (::System::Func_4<::Class_1_90889A2023AB884E_3*, ::System::Boolean, ::System::Int32, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x5B830);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_770*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__45_0()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_770*, ::R3::Observable_1<::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x5B838);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_770*, ::R3::Observable_1<::System::String*>*>** StaticGet___9__42_1()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_770*, ::R3::Observable_1<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x5B840);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_770*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__45_6()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_770*, ::R3::Observable_1<::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x5B848);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_770*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__42_4()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_770*, ::R3::Observable_1<::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x5B850);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_770*, ::R3::Observable_1<::System::Int32>*>** StaticGet___9__43_1()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_770*, ::R3::Observable_1<::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x5B858);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_770*, ::Class_0_16E4307DCC419505_769*>** StaticGet___9__53_1()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_770*, ::Class_0_16E4307DCC419505_769*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x5B860);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_770*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__45_1()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_770*, ::R3::Observable_1<::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x5B868);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_770*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__45_5()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_770*, ::R3::Observable_1<::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x5B870);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_770*, ::R3::Observable_1<::RPG::Client::TextID>*>** StaticGet___9__46_2()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_770*, ::R3::Observable_1<::RPG::Client::TextID>*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x5B878);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_770*, ::R3::Observable_1<::System::Int32>*>** StaticGet___9__50_1()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_770*, ::R3::Observable_1<::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x5B880);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_770*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__49_4()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_770*, ::R3::Observable_1<::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x5B888);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_770*, ::R3::Observable_1<::System::UInt32>*>** StaticGet___9__54_0()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_770*, ::R3::Observable_1<::System::UInt32>*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x5B890);
		}
		static ::System::Action_2<::RPG::Client::MonoMaterialSwitch*, ::RPG::Client::AvatarMaterialIndex>** StaticGet___9__52_1()
		{
			return (::System::Action_2<::RPG::Client::MonoMaterialSwitch*, ::RPG::Client::AvatarMaterialIndex>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x5B898);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_770*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__49_0()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_770*, ::R3::Observable_1<::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x5B8A0);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_770*, ::Class_0_16E4307DCC419505_771*>** StaticGet___9__53_3()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_770*, ::Class_0_16E4307DCC419505_771*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x5B8A8);
		}
		static ::System::Func_2<::RPG::Client::AvatarMarkFlags, ::System::Boolean>** StaticGet___9__45_7()
		{
			return (::System::Func_2<::RPG::Client::AvatarMarkFlags, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x5B8B0);
		}
		static ::System::Func_2<::Class_1_90889A2023AB884E_3*, ::System::Boolean>** StaticGet___9__42_5()
		{
			return (::System::Func_2<::Class_1_90889A2023AB884E_3*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x5B8B8);
		}
		static ::System::Func_2<::Class_1_90889A2023AB884E_3*, ::System::Boolean>** StaticGet___9__44_2()
		{
			return (::System::Func_2<::Class_1_90889A2023AB884E_3*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x5B8C0);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_770*, ::R3::Observable_1<::RPG::Client::TextID>*>** StaticGet___9__44_1()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_770*, ::R3::Observable_1<::RPG::Client::TextID>*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x5B8C8);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_770*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__48_3()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_770*, ::R3::Observable_1<::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x5B8D0);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_770*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__53_2()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_770*, ::R3::Observable_1<::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x5B8D8);
		}
		static ::System::Func_2<::RPG::Client::AvatarMarkFlags, ::System::String*>** StaticGet___9__43_5()
		{
			return (::System::Func_2<::RPG::Client::AvatarMarkFlags, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x5B8E0);
		}
		static ::System::Func_2<::RPG::Client::AvatarMarkFlags, ::System::Boolean>** StaticGet___9__45_8()
		{
			return (::System::Func_2<::RPG::Client::AvatarMarkFlags, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x5B8E8);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_770*, ::R3::Observable_1<::RPG::Client::AvatarMaterialIndex>*>** StaticGet___9__52_0()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_770*, ::R3::Observable_1<::RPG::Client::AvatarMaterialIndex>*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x5B8F0);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_770*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__46_0()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_770*, ::R3::Observable_1<::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x5B8F8);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_770*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__48_1()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_770*, ::R3::Observable_1<::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x5B900);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_770*, ::R3::Observable_1<::System::String*>*>** StaticGet___9__46_1()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_770*, ::R3::Observable_1<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x5B908);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_770*, ::R3::Observable_1<::RPG::Client::TextID>*>** StaticGet___9__49_2()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_770*, ::R3::Observable_1<::RPG::Client::TextID>*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x5B910);
		}
		static ::System::Func_2<::RPG::Client::AvatarSpecialMarkType, ::System::Boolean>** StaticGet___9__46_3()
		{
			return (::System::Func_2<::RPG::Client::AvatarSpecialMarkType, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x5B918);
		}
		static ::System::Func_4<::Class_1_90889A2023AB884E_3*, ::System::Boolean, ::System::Int32, ::System::Boolean>** StaticGet___9__48_5()
		{
			return (::System::Func_4<::Class_1_90889A2023AB884E_3*, ::System::Boolean, ::System::Int32, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x5B920);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_770*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__53_0()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_770*, ::R3::Observable_1<::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x5B928);
		}
		static ::System::Func_2<::RPG::Client::AvatarMarkFlags, ::System::String*>** StaticGet___9__43_6()
		{
			return (::System::Func_2<::RPG::Client::AvatarMarkFlags, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x5B930);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_770*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__41_2()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_770*, ::R3::Observable_1<::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x5B938);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_770*, ::Class_0_16E4307DCC419505_399<::UnityEngine::GameObject*>*>** StaticGet___9__41_3()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_770*, ::Class_0_16E4307DCC419505_399<::UnityEngine::GameObject*>*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x5B940);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_770*, ::R3::Observable_1<::System::ValueTuple_2<::System::String*, ::System::UInt32>>*>** StaticGet___9__51_0()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_770*, ::R3::Observable_1<::System::ValueTuple_2<::System::String*, ::System::UInt32>>*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x5B948);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_770*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__42_2()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_770*, ::R3::Observable_1<::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x5B950);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_770*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__45_4()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_770*, ::R3::Observable_1<::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x5B958);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_770*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__48_0()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_770*, ::R3::Observable_1<::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x5B960);
		}
		static ::System::Func_2<::Class_1_90889A2023AB884E_3*, ::System::Boolean>** StaticGet___9__43_4()
		{
			return (::System::Func_2<::Class_1_90889A2023AB884E_3*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x5B968);
		}
		static ::System::Func_2<::RPG::Client::AvatarMarkFlags, ::System::Boolean>** StaticGet___9__45_10()
		{
			return (::System::Func_2<::RPG::Client::AvatarMarkFlags, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x5B970);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_770*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__45_2()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_770*, ::R3::Observable_1<::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x5B978);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_770*, ::R3::Observable_1<::RPG::Client::TextID>*>** StaticGet___9__49_5()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_770*, ::R3::Observable_1<::RPG::Client::TextID>*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___c_TypeDefinitionIndex)->GetStaticField(0x5B980);
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
