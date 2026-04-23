#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace CriWare { class CriManaMovieMaterial; }
namespace RPG::Client { class ClientOnlyCommonConfig; }
namespace RPG::Client { class DebugPerformanceInfoPanel; }
namespace RPG::Client { class LocalizedText; }
namespace RPG::GameCore { class AnchorInfo; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameWorld; }
namespace System { class String; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Canvas; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::Playables { class PlayableDirector; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }

#define CLASS_1_611B47E192B9D09A_METHOD_1_054FEA4718D8370C_OFFSET UNITYSDK_OFFSET(0xCD21DF0)
#define CLASS_1_611B47E192B9D09A_METHOD_1_0A70D7B849A494C5_1_OFFSET UNITYSDK_OFFSET(0xCD1F980)
#define CLASS_1_611B47E192B9D09A_METHOD_1_0A70D7B849A494C5_2_OFFSET UNITYSDK_OFFSET(0xCD1FB10)
#define CLASS_1_611B47E192B9D09A_METHOD_1_0A70D7B849A494C5_OFFSET UNITYSDK_OFFSET(0xCD1F7F0)
#define CLASS_1_611B47E192B9D09A_METHOD_1_10E682F51C1A047C_OFFSET UNITYSDK_OFFSET(0xCD20450)
#define CLASS_1_611B47E192B9D09A_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0xCD1EB70)
#define CLASS_1_611B47E192B9D09A_METHOD_1_2C0B30E6D49270C5_OFFSET UNITYSDK_OFFSET(0xCD21890)
#define CLASS_1_611B47E192B9D09A_METHOD_1_2E167B2EE069C337_OFFSET UNITYSDK_OFFSET(0xCD21F50)
#define CLASS_1_611B47E192B9D09A_METHOD_1_3E8A1FBDB0ECC40F_OFFSET UNITYSDK_OFFSET(0xCD1EDF0)
#define CLASS_1_611B47E192B9D09A_METHOD_1_5700CA1B9161463C_OFFSET UNITYSDK_OFFSET(0xCD21810)
#define CLASS_1_611B47E192B9D09A_METHOD_1_60881D6F248432DF_OFFSET UNITYSDK_OFFSET(0xCD216F0)
#define CLASS_1_611B47E192B9D09A_METHOD_1_64723BAADBD4D43C_OFFSET UNITYSDK_OFFSET(0xCD1EFF0)
#define CLASS_1_611B47E192B9D09A_METHOD_1_6D5F59BCE8B4A09A_1_OFFSET UNITYSDK_OFFSET(0xCD1ECD0)
#define CLASS_1_611B47E192B9D09A_METHOD_1_6D5F59BCE8B4A09A_2_OFFSET UNITYSDK_OFFSET(0xCD1EED0)
#define CLASS_1_611B47E192B9D09A_METHOD_1_6D5F59BCE8B4A09A_OFFSET UNITYSDK_OFFSET(0xCD1EBB0)
#define CLASS_1_611B47E192B9D09A_METHOD_1_73250EF5F9006ADB_OFFSET UNITYSDK_OFFSET(0xCD1FFC0)
#define CLASS_1_611B47E192B9D09A_METHOD_1_78AAEE97CA3CECB5_OFFSET UNITYSDK_OFFSET(0xCD21EA0)
#define CLASS_1_611B47E192B9D09A_METHOD_1_81C32BFBC4CC6809_1_OFFSET UNITYSDK_OFFSET(0xCD202C0)
#define CLASS_1_611B47E192B9D09A_METHOD_1_81C32BFBC4CC6809_2_OFFSET UNITYSDK_OFFSET(0xCD21140)
#define CLASS_1_611B47E192B9D09A_METHOD_1_81C32BFBC4CC6809_3_OFFSET UNITYSDK_OFFSET(0xCD214F0)
#define CLASS_1_611B47E192B9D09A_METHOD_1_81C32BFBC4CC6809_OFFSET UNITYSDK_OFFSET(0xCD1FCA0)
#define CLASS_1_611B47E192B9D09A_METHOD_1_8D9772F6745C5D7B_OFFSET UNITYSDK_OFFSET(0xCD21A10)
#define CLASS_1_611B47E192B9D09A_METHOD_1_95C9A8D45FEC5B17_OFFSET UNITYSDK_OFFSET(0xCD21970)
#define CLASS_1_611B47E192B9D09A_METHOD_1_9A1B06354B33D3B8_OFFSET UNITYSDK_OFFSET(0xCD21D40)
#define CLASS_1_611B47E192B9D09A_METHOD_1_A3B7CAD9C0181EC4_1_OFFSET UNITYSDK_OFFSET(0xCD208E0)
#define CLASS_1_611B47E192B9D09A_METHOD_1_A3B7CAD9C0181EC4_2_OFFSET UNITYSDK_OFFSET(0xCD20A70)
#define CLASS_1_611B47E192B9D09A_METHOD_1_A3B7CAD9C0181EC4_3_OFFSET UNITYSDK_OFFSET(0xCD20C00)
#define CLASS_1_611B47E192B9D09A_METHOD_1_A3B7CAD9C0181EC4_4_OFFSET UNITYSDK_OFFSET(0xCD20D90)
#define CLASS_1_611B47E192B9D09A_METHOD_1_A3B7CAD9C0181EC4_OFFSET UNITYSDK_OFFSET(0xCD20150)
#define CLASS_1_611B47E192B9D09A_METHOD_1_B429995FEDE6996E_10_OFFSET UNITYSDK_OFFSET(0xCD213E0)
#define CLASS_1_611B47E192B9D09A_METHOD_1_B429995FEDE6996E_1_OFFSET UNITYSDK_OFFSET(0xCD1F190)
#define CLASS_1_611B47E192B9D09A_METHOD_1_B429995FEDE6996E_2_OFFSET UNITYSDK_OFFSET(0xCD1F2A0)
#define CLASS_1_611B47E192B9D09A_METHOD_1_B429995FEDE6996E_3_OFFSET UNITYSDK_OFFSET(0xCD1F3B0)
#define CLASS_1_611B47E192B9D09A_METHOD_1_B429995FEDE6996E_4_OFFSET UNITYSDK_OFFSET(0xCD1F4C0)
#define CLASS_1_611B47E192B9D09A_METHOD_1_B429995FEDE6996E_5_OFFSET UNITYSDK_OFFSET(0xCD1F5D0)
#define CLASS_1_611B47E192B9D09A_METHOD_1_B429995FEDE6996E_6_OFFSET UNITYSDK_OFFSET(0xCD1F6E0)
#define CLASS_1_611B47E192B9D09A_METHOD_1_B429995FEDE6996E_7_OFFSET UNITYSDK_OFFSET(0xCD20F20)
#define CLASS_1_611B47E192B9D09A_METHOD_1_B429995FEDE6996E_8_OFFSET UNITYSDK_OFFSET(0xCD21030)
#define CLASS_1_611B47E192B9D09A_METHOD_1_B429995FEDE6996E_9_OFFSET UNITYSDK_OFFSET(0xCD212D0)
#define CLASS_1_611B47E192B9D09A_METHOD_1_B429995FEDE6996E_OFFSET UNITYSDK_OFFSET(0xCD1F080)
#define CLASS_1_611B47E192B9D09A_METHOD_1_C38ADD3CBD8C83FF_1_OFFSET UNITYSDK_OFFSET(0xCD21CD0)
#define CLASS_1_611B47E192B9D09A_METHOD_1_C38ADD3CBD8C83FF_OFFSET UNITYSDK_OFFSET(0xCD21C50)
#define CLASS_1_611B47E192B9D09A_METHOD_1_E69758BC72874DFF_OFFSET UNITYSDK_OFFSET(0xCD21680)
#define CLASS_1_611B47E192B9D09A_METHOD_1_EA4A1D7B94DA7C73_OFFSET UNITYSDK_OFFSET(0xCD21A90)
#define CLASS_1_611B47E192B9D09A_METHOD_1_F1D1A26F60E3337D_OFFSET UNITYSDK_OFFSET(0xCD1FE30)

inline static constexpr unsigned int Class_1_611B47E192B9D09A_TypeDefinitionIndex = 45226;

class Class_1_611B47E192B9D09A : public ::System::Object
{
public:
	static ::UnityEngine::Transform** StaticGet_Field_1_60()
	{
		return (::UnityEngine::Transform**)Il2CppClass::FromTypeDefinitionIndex(Class_1_611B47E192B9D09A_TypeDefinitionIndex)->GetStaticField(0x6AF70);
	}
	static ::UnityEngine::Transform** StaticGet_Field_1_43()
	{
		return (::UnityEngine::Transform**)Il2CppClass::FromTypeDefinitionIndex(Class_1_611B47E192B9D09A_TypeDefinitionIndex)->GetStaticField(0x6AF78);
	}
	static ::UnityEngine::Transform** StaticGet_Field_1_65()
	{
		return (::UnityEngine::Transform**)Il2CppClass::FromTypeDefinitionIndex(Class_1_611B47E192B9D09A_TypeDefinitionIndex)->GetStaticField(0x6AF80);
	}
	static ::UnityEngine::Transform** StaticGet_Field_1_36()
	{
		return (::UnityEngine::Transform**)Il2CppClass::FromTypeDefinitionIndex(Class_1_611B47E192B9D09A_TypeDefinitionIndex)->GetStaticField(0x6AF88);
	}
	static ::UnityEngine::UI::Text** StaticGet_Field_1_46()
	{
		return (::UnityEngine::UI::Text**)Il2CppClass::FromTypeDefinitionIndex(Class_1_611B47E192B9D09A_TypeDefinitionIndex)->GetStaticField(0x6AF90);
	}
	static ::UnityEngine::UI::Image** StaticGet_Field_1_64()
	{
		return (::UnityEngine::UI::Image**)Il2CppClass::FromTypeDefinitionIndex(Class_1_611B47E192B9D09A_TypeDefinitionIndex)->GetStaticField(0x6AF98);
	}
	static ::UnityEngine::Transform** StaticGet_Field_1_38()
	{
		return (::UnityEngine::Transform**)Il2CppClass::FromTypeDefinitionIndex(Class_1_611B47E192B9D09A_TypeDefinitionIndex)->GetStaticField(0x6AFA0);
	}
	static ::UnityEngine::Transform** StaticGet_Field_1_40()
	{
		return (::UnityEngine::Transform**)Il2CppClass::FromTypeDefinitionIndex(Class_1_611B47E192B9D09A_TypeDefinitionIndex)->GetStaticField(0x6AFA8);
	}
	static ::UnityEngine::Transform** StaticGet_Field_1_45()
	{
		return (::UnityEngine::Transform**)Il2CppClass::FromTypeDefinitionIndex(Class_1_611B47E192B9D09A_TypeDefinitionIndex)->GetStaticField(0x6AFB0);
	}
	static ::UnityEngine::UI::Image** StaticGet_Field_1_61()
	{
		return (::UnityEngine::UI::Image**)Il2CppClass::FromTypeDefinitionIndex(Class_1_611B47E192B9D09A_TypeDefinitionIndex)->GetStaticField(0x6AFB8);
	}
	static ::UnityEngine::Transform** StaticGet_Field_1_63()
	{
		return (::UnityEngine::Transform**)Il2CppClass::FromTypeDefinitionIndex(Class_1_611B47E192B9D09A_TypeDefinitionIndex)->GetStaticField(0x6AFC0);
	}
	static ::UnityEngine::UI::Image** StaticGet_Field_1_49()
	{
		return (::UnityEngine::UI::Image**)Il2CppClass::FromTypeDefinitionIndex(Class_1_611B47E192B9D09A_TypeDefinitionIndex)->GetStaticField(0x6AFC8);
	}
	static ::UnityEngine::Transform** StaticGet_Field_1_35()
	{
		return (::UnityEngine::Transform**)Il2CppClass::FromTypeDefinitionIndex(Class_1_611B47E192B9D09A_TypeDefinitionIndex)->GetStaticField(0x6AFD0);
	}
	static ::UnityEngine::UI::Image** StaticGet_Field_1_54()
	{
		return (::UnityEngine::UI::Image**)Il2CppClass::FromTypeDefinitionIndex(Class_1_611B47E192B9D09A_TypeDefinitionIndex)->GetStaticField(0x6AFD8);
	}
	static ::UnityEngine::Transform** StaticGet_Field_1_59()
	{
		return (::UnityEngine::Transform**)Il2CppClass::FromTypeDefinitionIndex(Class_1_611B47E192B9D09A_TypeDefinitionIndex)->GetStaticField(0x6AFE0);
	}
	static ::CriWare::CriManaMovieMaterial** StaticGet_Field_1_50()
	{
		return (::CriWare::CriManaMovieMaterial**)Il2CppClass::FromTypeDefinitionIndex(Class_1_611B47E192B9D09A_TypeDefinitionIndex)->GetStaticField(0x6AFE8);
	}
	static ::RPG::Client::LocalizedText** StaticGet_Field_1_52()
	{
		return (::RPG::Client::LocalizedText**)Il2CppClass::FromTypeDefinitionIndex(Class_1_611B47E192B9D09A_TypeDefinitionIndex)->GetStaticField(0x6AFF0);
	}
	static ::UnityEngine::UI::Text** StaticGet_Field_1_47()
	{
		return (::UnityEngine::UI::Text**)Il2CppClass::FromTypeDefinitionIndex(Class_1_611B47E192B9D09A_TypeDefinitionIndex)->GetStaticField(0x6AFF8);
	}
	static ::UnityEngine::Transform** StaticGet_Field_1_41()
	{
		return (::UnityEngine::Transform**)Il2CppClass::FromTypeDefinitionIndex(Class_1_611B47E192B9D09A_TypeDefinitionIndex)->GetStaticField(0x6B000);
	}
	static ::UnityEngine::Transform** StaticGet_Field_1_44()
	{
		return (::UnityEngine::Transform**)Il2CppClass::FromTypeDefinitionIndex(Class_1_611B47E192B9D09A_TypeDefinitionIndex)->GetStaticField(0x6B008);
	}
	static ::RPG::Client::ClientOnlyCommonConfig** StaticGet_Field_1_68()
	{
		return (::RPG::Client::ClientOnlyCommonConfig**)Il2CppClass::FromTypeDefinitionIndex(Class_1_611B47E192B9D09A_TypeDefinitionIndex)->GetStaticField(0x6B010);
	}
	static ::RPG::Client::LocalizedText** StaticGet_Field_1_58()
	{
		return (::RPG::Client::LocalizedText**)Il2CppClass::FromTypeDefinitionIndex(Class_1_611B47E192B9D09A_TypeDefinitionIndex)->GetStaticField(0x6B018);
	}
	static ::RPG::Client::LocalizedText** StaticGet_Field_1_57()
	{
		return (::RPG::Client::LocalizedText**)Il2CppClass::FromTypeDefinitionIndex(Class_1_611B47E192B9D09A_TypeDefinitionIndex)->GetStaticField(0x6B020);
	}
	static ::UnityEngine::UI::Text** StaticGet_Field_1_48()
	{
		return (::UnityEngine::UI::Text**)Il2CppClass::FromTypeDefinitionIndex(Class_1_611B47E192B9D09A_TypeDefinitionIndex)->GetStaticField(0x6B028);
	}
	static ::UnityEngine::Transform** StaticGet_Field_1_66()
	{
		return (::UnityEngine::Transform**)Il2CppClass::FromTypeDefinitionIndex(Class_1_611B47E192B9D09A_TypeDefinitionIndex)->GetStaticField(0x6B030);
	}
	static ::RPG::Client::LocalizedText** StaticGet_Field_1_56()
	{
		return (::RPG::Client::LocalizedText**)Il2CppClass::FromTypeDefinitionIndex(Class_1_611B47E192B9D09A_TypeDefinitionIndex)->GetStaticField(0x6B038);
	}
	static ::RPG::Client::LocalizedText** StaticGet_Field_1_55()
	{
		return (::RPG::Client::LocalizedText**)Il2CppClass::FromTypeDefinitionIndex(Class_1_611B47E192B9D09A_TypeDefinitionIndex)->GetStaticField(0x6B040);
	}
	static ::UnityEngine::Transform** StaticGet_Field_1_39()
	{
		return (::UnityEngine::Transform**)Il2CppClass::FromTypeDefinitionIndex(Class_1_611B47E192B9D09A_TypeDefinitionIndex)->GetStaticField(0x6B048);
	}
	static ::RPG::Client::DebugPerformanceInfoPanel** StaticGet_Field_1_51()
	{
		return (::RPG::Client::DebugPerformanceInfoPanel**)Il2CppClass::FromTypeDefinitionIndex(Class_1_611B47E192B9D09A_TypeDefinitionIndex)->GetStaticField(0x6B050);
	}
	static ::UnityEngine::Transform** StaticGet_Field_1_42()
	{
		return (::UnityEngine::Transform**)Il2CppClass::FromTypeDefinitionIndex(Class_1_611B47E192B9D09A_TypeDefinitionIndex)->GetStaticField(0x6B058);
	}
	static ::UnityEngine::Transform** StaticGet_Field_1_62()
	{
		return (::UnityEngine::Transform**)Il2CppClass::FromTypeDefinitionIndex(Class_1_611B47E192B9D09A_TypeDefinitionIndex)->GetStaticField(0x6B060);
	}
	static ::UnityEngine::Playables::PlayableDirector** StaticGet_Field_1_67()
	{
		return (::UnityEngine::Playables::PlayableDirector**)Il2CppClass::FromTypeDefinitionIndex(Class_1_611B47E192B9D09A_TypeDefinitionIndex)->GetStaticField(0x6B068);
	}
	static ::UnityEngine::UI::Image** StaticGet_Field_1_53()
	{
		return (::UnityEngine::UI::Image**)Il2CppClass::FromTypeDefinitionIndex(Class_1_611B47E192B9D09A_TypeDefinitionIndex)->GetStaticField(0x6B070);
	}
	static ::UnityEngine::Canvas** StaticGet_Field_1_37()
	{
		return (::UnityEngine::Canvas**)Il2CppClass::FromTypeDefinitionIndex(Class_1_611B47E192B9D09A_TypeDefinitionIndex)->GetStaticField(0x6B078);
	}
	static ::System::Boolean* StaticGet_Field_1_0()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_611B47E192B9D09A_TypeDefinitionIndex)->GetStaticField(0x11BC0);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_611B47E192B9D09A_TypeDefinitionIndex)->GetStaticField(0x11BC1);
	}
	// static const ::System::String* Field_1_2; // 0x0
	// static const ::System::String* Field_1_3; // 0x0
	// static const ::System::String* Field_1_4; // 0x0
	// static const ::System::String* Field_1_5; // 0x0
	// static const ::System::String* Field_1_6; // 0x0
	// static const ::System::String* Field_1_7; // 0x0
	// static const ::System::String* Field_1_8; // 0x0
	// static const ::System::String* Field_1_9; // 0x0
	// static const ::System::String* Field_1_10; // 0x0
	// static const ::System::String* Field_1_11; // 0x0
	// static const ::System::String* Field_1_12; // 0x0
	// static const ::System::String* Field_1_13; // 0x0
	// static const ::System::String* Field_1_14; // 0x0
	// static const ::System::String* Field_1_15; // 0x0
	// static const ::System::String* Field_1_16; // 0x0
	// static const ::System::String* Field_1_17; // 0x0
	// static const ::System::String* Field_1_18; // 0x0
	// static const ::System::String* Field_1_19; // 0x0
	// static const ::System::String* Field_1_20; // 0x0
	// static const ::System::String* Field_1_21; // 0x0
	// static const ::System::String* Field_1_22; // 0x0
	// static const ::System::String* Field_1_23; // 0x0
	// static const ::System::String* Field_1_24; // 0x0
	// static const ::System::String* Field_1_25; // 0x0
	// static const ::System::String* Field_1_26; // 0x0
	// static const ::System::String* Field_1_27; // 0x0
	// static const ::System::String* Field_1_28; // 0x0
	// static const ::System::String* Field_1_29; // 0x0
	// static const ::System::String* Field_1_30; // 0x0
	// static const ::System::String* Field_1_31; // 0x0
	// static const ::System::String* Field_1_32; // 0x0
	// static const ::System::String* Field_1_33; // 0x0
	// static const ::System::String* Field_1_34; // 0x0

	static ::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CLASS_1_611B47E192B9D09A_METHOD_1_128774387667156B_OFFSET))();
	}

	static ::UnityEngine::Transform* Method_1_6D5F59BCE8B4A09A()
	{
		return ((::UnityEngine::Transform*(*)())((::PBYTE)hIl2Cpp + CLASS_1_611B47E192B9D09A_METHOD_1_6D5F59BCE8B4A09A_OFFSET))();
	}

	static ::UnityEngine::Transform* Method_1_6D5F59BCE8B4A09A_1()
	{
		return ((::UnityEngine::Transform*(*)())((::PBYTE)hIl2Cpp + CLASS_1_611B47E192B9D09A_METHOD_1_6D5F59BCE8B4A09A_1_OFFSET))();
	}

	static ::UnityEngine::Canvas* Method_1_3E8A1FBDB0ECC40F()
	{
		return ((::UnityEngine::Canvas*(*)())((::PBYTE)hIl2Cpp + CLASS_1_611B47E192B9D09A_METHOD_1_3E8A1FBDB0ECC40F_OFFSET))();
	}

	static ::UnityEngine::Transform* Method_1_6D5F59BCE8B4A09A_2()
	{
		return ((::UnityEngine::Transform*(*)())((::PBYTE)hIl2Cpp + CLASS_1_611B47E192B9D09A_METHOD_1_6D5F59BCE8B4A09A_2_OFFSET))();
	}

	static ::UnityEngine::Camera* Method_1_64723BAADBD4D43C()
	{
		return ((::UnityEngine::Camera*(*)())((::PBYTE)hIl2Cpp + CLASS_1_611B47E192B9D09A_METHOD_1_64723BAADBD4D43C_OFFSET))();
	}

	static ::UnityEngine::Transform* Method_1_B429995FEDE6996E()
	{
		return ((::UnityEngine::Transform*(*)())((::PBYTE)hIl2Cpp + CLASS_1_611B47E192B9D09A_METHOD_1_B429995FEDE6996E_OFFSET))();
	}

	static ::UnityEngine::Transform* Method_1_B429995FEDE6996E_1()
	{
		return ((::UnityEngine::Transform*(*)())((::PBYTE)hIl2Cpp + CLASS_1_611B47E192B9D09A_METHOD_1_B429995FEDE6996E_1_OFFSET))();
	}

	static ::UnityEngine::Transform* Method_1_B429995FEDE6996E_2()
	{
		return ((::UnityEngine::Transform*(*)())((::PBYTE)hIl2Cpp + CLASS_1_611B47E192B9D09A_METHOD_1_B429995FEDE6996E_2_OFFSET))();
	}

	static ::UnityEngine::Transform* Method_1_B429995FEDE6996E_3()
	{
		return ((::UnityEngine::Transform*(*)())((::PBYTE)hIl2Cpp + CLASS_1_611B47E192B9D09A_METHOD_1_B429995FEDE6996E_3_OFFSET))();
	}

	static ::UnityEngine::Transform* Method_1_B429995FEDE6996E_4()
	{
		return ((::UnityEngine::Transform*(*)())((::PBYTE)hIl2Cpp + CLASS_1_611B47E192B9D09A_METHOD_1_B429995FEDE6996E_4_OFFSET))();
	}

	static ::UnityEngine::Transform* Method_1_B429995FEDE6996E_5()
	{
		return ((::UnityEngine::Transform*(*)())((::PBYTE)hIl2Cpp + CLASS_1_611B47E192B9D09A_METHOD_1_B429995FEDE6996E_5_OFFSET))();
	}

	static ::UnityEngine::Transform* Method_1_B429995FEDE6996E_6()
	{
		return ((::UnityEngine::Transform*(*)())((::PBYTE)hIl2Cpp + CLASS_1_611B47E192B9D09A_METHOD_1_B429995FEDE6996E_6_OFFSET))();
	}

	static ::UnityEngine::UI::Text* Method_1_0A70D7B849A494C5()
	{
		return ((::UnityEngine::UI::Text*(*)())((::PBYTE)hIl2Cpp + CLASS_1_611B47E192B9D09A_METHOD_1_0A70D7B849A494C5_OFFSET))();
	}

	static ::UnityEngine::UI::Text* Method_1_0A70D7B849A494C5_1()
	{
		return ((::UnityEngine::UI::Text*(*)())((::PBYTE)hIl2Cpp + CLASS_1_611B47E192B9D09A_METHOD_1_0A70D7B849A494C5_1_OFFSET))();
	}

	static ::UnityEngine::UI::Text* Method_1_0A70D7B849A494C5_2()
	{
		return ((::UnityEngine::UI::Text*(*)())((::PBYTE)hIl2Cpp + CLASS_1_611B47E192B9D09A_METHOD_1_0A70D7B849A494C5_2_OFFSET))();
	}

	static ::UnityEngine::UI::Image* Method_1_81C32BFBC4CC6809()
	{
		return ((::UnityEngine::UI::Image*(*)())((::PBYTE)hIl2Cpp + CLASS_1_611B47E192B9D09A_METHOD_1_81C32BFBC4CC6809_OFFSET))();
	}

	static ::CriWare::CriManaMovieMaterial* Method_1_F1D1A26F60E3337D()
	{
		return ((::CriWare::CriManaMovieMaterial*(*)())((::PBYTE)hIl2Cpp + CLASS_1_611B47E192B9D09A_METHOD_1_F1D1A26F60E3337D_OFFSET))();
	}

	static ::RPG::Client::DebugPerformanceInfoPanel* Method_1_73250EF5F9006ADB()
	{
		return ((::RPG::Client::DebugPerformanceInfoPanel*(*)())((::PBYTE)hIl2Cpp + CLASS_1_611B47E192B9D09A_METHOD_1_73250EF5F9006ADB_OFFSET))();
	}

	static ::RPG::Client::LocalizedText* Method_1_A3B7CAD9C0181EC4()
	{
		return ((::RPG::Client::LocalizedText*(*)())((::PBYTE)hIl2Cpp + CLASS_1_611B47E192B9D09A_METHOD_1_A3B7CAD9C0181EC4_OFFSET))();
	}

	static ::UnityEngine::UI::Image* Method_1_81C32BFBC4CC6809_1()
	{
		return ((::UnityEngine::UI::Image*(*)())((::PBYTE)hIl2Cpp + CLASS_1_611B47E192B9D09A_METHOD_1_81C32BFBC4CC6809_1_OFFSET))();
	}

	static ::UnityEngine::UI::Image* Method_1_10E682F51C1A047C()
	{
		return ((::UnityEngine::UI::Image*(*)())((::PBYTE)hIl2Cpp + CLASS_1_611B47E192B9D09A_METHOD_1_10E682F51C1A047C_OFFSET))();
	}

	static ::RPG::Client::LocalizedText* Method_1_A3B7CAD9C0181EC4_1()
	{
		return ((::RPG::Client::LocalizedText*(*)())((::PBYTE)hIl2Cpp + CLASS_1_611B47E192B9D09A_METHOD_1_A3B7CAD9C0181EC4_1_OFFSET))();
	}

	static ::RPG::Client::LocalizedText* Method_1_A3B7CAD9C0181EC4_2()
	{
		return ((::RPG::Client::LocalizedText*(*)())((::PBYTE)hIl2Cpp + CLASS_1_611B47E192B9D09A_METHOD_1_A3B7CAD9C0181EC4_2_OFFSET))();
	}

	static ::RPG::Client::LocalizedText* Method_1_A3B7CAD9C0181EC4_3()
	{
		return ((::RPG::Client::LocalizedText*(*)())((::PBYTE)hIl2Cpp + CLASS_1_611B47E192B9D09A_METHOD_1_A3B7CAD9C0181EC4_3_OFFSET))();
	}

	static ::RPG::Client::LocalizedText* Method_1_A3B7CAD9C0181EC4_4()
	{
		return ((::RPG::Client::LocalizedText*(*)())((::PBYTE)hIl2Cpp + CLASS_1_611B47E192B9D09A_METHOD_1_A3B7CAD9C0181EC4_4_OFFSET))();
	}

	static ::UnityEngine::Transform* Method_1_B429995FEDE6996E_7()
	{
		return ((::UnityEngine::Transform*(*)())((::PBYTE)hIl2Cpp + CLASS_1_611B47E192B9D09A_METHOD_1_B429995FEDE6996E_7_OFFSET))();
	}

	static ::UnityEngine::Transform* Method_1_B429995FEDE6996E_8()
	{
		return ((::UnityEngine::Transform*(*)())((::PBYTE)hIl2Cpp + CLASS_1_611B47E192B9D09A_METHOD_1_B429995FEDE6996E_8_OFFSET))();
	}

	static ::UnityEngine::UI::Image* Method_1_81C32BFBC4CC6809_2()
	{
		return ((::UnityEngine::UI::Image*(*)())((::PBYTE)hIl2Cpp + CLASS_1_611B47E192B9D09A_METHOD_1_81C32BFBC4CC6809_2_OFFSET))();
	}

	static ::UnityEngine::Transform* Method_1_B429995FEDE6996E_9()
	{
		return ((::UnityEngine::Transform*(*)())((::PBYTE)hIl2Cpp + CLASS_1_611B47E192B9D09A_METHOD_1_B429995FEDE6996E_9_OFFSET))();
	}

	static ::UnityEngine::Transform* Method_1_B429995FEDE6996E_10()
	{
		return ((::UnityEngine::Transform*(*)())((::PBYTE)hIl2Cpp + CLASS_1_611B47E192B9D09A_METHOD_1_B429995FEDE6996E_10_OFFSET))();
	}

	static ::UnityEngine::UI::Image* Method_1_81C32BFBC4CC6809_3()
	{
		return ((::UnityEngine::UI::Image*(*)())((::PBYTE)hIl2Cpp + CLASS_1_611B47E192B9D09A_METHOD_1_81C32BFBC4CC6809_3_OFFSET))();
	}

	static ::UnityEngine::GameObject* Method_1_E69758BC72874DFF()
	{
		return ((::UnityEngine::GameObject*(*)())((::PBYTE)hIl2Cpp + CLASS_1_611B47E192B9D09A_METHOD_1_E69758BC72874DFF_OFFSET))();
	}

	static ::UnityEngine::Transform* Method_1_60881D6F248432DF()
	{
		return ((::UnityEngine::Transform*(*)())((::PBYTE)hIl2Cpp + CLASS_1_611B47E192B9D09A_METHOD_1_60881D6F248432DF_OFFSET))();
	}

	static ::UnityEngine::Transform* Method_1_5700CA1B9161463C()
	{
		return ((::UnityEngine::Transform*(*)())((::PBYTE)hIl2Cpp + CLASS_1_611B47E192B9D09A_METHOD_1_5700CA1B9161463C_OFFSET))();
	}

	static ::UnityEngine::Playables::PlayableDirector* Method_1_2C0B30E6D49270C5()
	{
		return ((::UnityEngine::Playables::PlayableDirector*(*)())((::PBYTE)hIl2Cpp + CLASS_1_611B47E192B9D09A_METHOD_1_2C0B30E6D49270C5_OFFSET))();
	}

	static ::RPG::Client::ClientOnlyCommonConfig* Method_1_95C9A8D45FEC5B17()
	{
		return ((::RPG::Client::ClientOnlyCommonConfig*(*)())((::PBYTE)hIl2Cpp + CLASS_1_611B47E192B9D09A_METHOD_1_95C9A8D45FEC5B17_OFFSET))();
	}

	static ::RPG::GameCore::GameEntity* Method_1_8D9772F6745C5D7B(::System::String* a1)
	{
		return ((::RPG::GameCore::GameEntity*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_611B47E192B9D09A_METHOD_1_8D9772F6745C5D7B_OFFSET))(a1);
	}

	static ::UnityEngine::GameObject* Method_1_C38ADD3CBD8C83FF(::System::String* a1)
	{
		return ((::UnityEngine::GameObject*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_611B47E192B9D09A_METHOD_1_C38ADD3CBD8C83FF_OFFSET))(a1);
	}

	static ::UnityEngine::GameObject* Method_1_C38ADD3CBD8C83FF_1(::System::String* a1)
	{
		return ((::UnityEngine::GameObject*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_611B47E192B9D09A_METHOD_1_C38ADD3CBD8C83FF_1_OFFSET))(a1);
	}

	static ::RPG::GameCore::GameWorld* Method_1_EA4A1D7B94DA7C73()
	{
		return ((::RPG::GameCore::GameWorld*(*)())((::PBYTE)hIl2Cpp + CLASS_1_611B47E192B9D09A_METHOD_1_EA4A1D7B94DA7C73_OFFSET))();
	}

	static ::UnityEngine::GameObject* Method_1_9A1B06354B33D3B8(::UnityEngine::GameObject* a1, ::System::String* a2)
	{
		return ((::UnityEngine::GameObject*(*)(::UnityEngine::GameObject*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_611B47E192B9D09A_METHOD_1_9A1B06354B33D3B8_OFFSET))(a1, a2);
	}

	static ::UnityEngine::Transform* Method_1_054FEA4718D8370C(::System::String* a1, ::System::String* a2)
	{
		return ((::UnityEngine::Transform*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_611B47E192B9D09A_METHOD_1_054FEA4718D8370C_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::AnchorInfo* Method_1_78AAEE97CA3CECB5(::System::String* a1, ::System::String* a2)
	{
		return ((::RPG::GameCore::AnchorInfo*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_611B47E192B9D09A_METHOD_1_78AAEE97CA3CECB5_OFFSET))(a1, a2);
	}

	static ::UnityEngine::GameObject* Method_1_2E167B2EE069C337(::System::String* a1)
	{
		return ((::UnityEngine::GameObject*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_611B47E192B9D09A_METHOD_1_2E167B2EE069C337_OFFSET))(a1);
	}
};
