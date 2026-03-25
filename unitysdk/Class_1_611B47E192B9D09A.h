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

#define CLASS_1_611B47E192B9D09A_METHOD_1_054FEA4718D8370C_OFFSET UNITYSDK_OFFSET(0x113AD990)
#define CLASS_1_611B47E192B9D09A_METHOD_1_0A70D7B849A494C5_1_OFFSET UNITYSDK_OFFSET(0x113AB9B0)
#define CLASS_1_611B47E192B9D09A_METHOD_1_0A70D7B849A494C5_2_OFFSET UNITYSDK_OFFSET(0x113ABB40)
#define CLASS_1_611B47E192B9D09A_METHOD_1_0A70D7B849A494C5_OFFSET UNITYSDK_OFFSET(0x113AB820)
#define CLASS_1_611B47E192B9D09A_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x113AABA0)
#define CLASS_1_611B47E192B9D09A_METHOD_1_2C0B30E6D49270C5_OFFSET UNITYSDK_OFFSET(0x113AD430)
#define CLASS_1_611B47E192B9D09A_METHOD_1_2E167B2EE069C337_OFFSET UNITYSDK_OFFSET(0x113ADAF0)
#define CLASS_1_611B47E192B9D09A_METHOD_1_3E8A1FBDB0ECC40F_OFFSET UNITYSDK_OFFSET(0x113AAE20)
#define CLASS_1_611B47E192B9D09A_METHOD_1_5700CA1B9161463C_OFFSET UNITYSDK_OFFSET(0x113AD3B0)
#define CLASS_1_611B47E192B9D09A_METHOD_1_60881D6F248432DF_OFFSET UNITYSDK_OFFSET(0x113AD290)
#define CLASS_1_611B47E192B9D09A_METHOD_1_64723BAADBD4D43C_OFFSET UNITYSDK_OFFSET(0x113AB020)
#define CLASS_1_611B47E192B9D09A_METHOD_1_6D5F59BCE8B4A09A_1_OFFSET UNITYSDK_OFFSET(0x113AAD00)
#define CLASS_1_611B47E192B9D09A_METHOD_1_6D5F59BCE8B4A09A_2_OFFSET UNITYSDK_OFFSET(0x113AAF00)
#define CLASS_1_611B47E192B9D09A_METHOD_1_6D5F59BCE8B4A09A_OFFSET UNITYSDK_OFFSET(0x113AABE0)
#define CLASS_1_611B47E192B9D09A_METHOD_1_73250EF5F9006ADB_OFFSET UNITYSDK_OFFSET(0x113ABFF0)
#define CLASS_1_611B47E192B9D09A_METHOD_1_78AAEE97CA3CECB5_OFFSET UNITYSDK_OFFSET(0x113ADA40)
#define CLASS_1_611B47E192B9D09A_METHOD_1_81C32BFBC4CC6809_1_OFFSET UNITYSDK_OFFSET(0x113AC2F0)
#define CLASS_1_611B47E192B9D09A_METHOD_1_81C32BFBC4CC6809_2_OFFSET UNITYSDK_OFFSET(0x113ACCE0)
#define CLASS_1_611B47E192B9D09A_METHOD_1_81C32BFBC4CC6809_3_OFFSET UNITYSDK_OFFSET(0x113AD090)
#define CLASS_1_611B47E192B9D09A_METHOD_1_81C32BFBC4CC6809_OFFSET UNITYSDK_OFFSET(0x113ABCD0)
#define CLASS_1_611B47E192B9D09A_METHOD_1_8D9772F6745C5D7B_OFFSET UNITYSDK_OFFSET(0x113AD5B0)
#define CLASS_1_611B47E192B9D09A_METHOD_1_95C9A8D45FEC5B17_OFFSET UNITYSDK_OFFSET(0x113AD510)
#define CLASS_1_611B47E192B9D09A_METHOD_1_9A1B06354B33D3B8_OFFSET UNITYSDK_OFFSET(0x113AD8E0)
#define CLASS_1_611B47E192B9D09A_METHOD_1_A3B7CAD9C0181EC4_1_OFFSET UNITYSDK_OFFSET(0x113AC480)
#define CLASS_1_611B47E192B9D09A_METHOD_1_A3B7CAD9C0181EC4_2_OFFSET UNITYSDK_OFFSET(0x113AC610)
#define CLASS_1_611B47E192B9D09A_METHOD_1_A3B7CAD9C0181EC4_3_OFFSET UNITYSDK_OFFSET(0x113AC7A0)
#define CLASS_1_611B47E192B9D09A_METHOD_1_A3B7CAD9C0181EC4_4_OFFSET UNITYSDK_OFFSET(0x113AC930)
#define CLASS_1_611B47E192B9D09A_METHOD_1_A3B7CAD9C0181EC4_OFFSET UNITYSDK_OFFSET(0x113AC180)
#define CLASS_1_611B47E192B9D09A_METHOD_1_B429995FEDE6996E_10_OFFSET UNITYSDK_OFFSET(0x113ACF80)
#define CLASS_1_611B47E192B9D09A_METHOD_1_B429995FEDE6996E_1_OFFSET UNITYSDK_OFFSET(0x113AB1C0)
#define CLASS_1_611B47E192B9D09A_METHOD_1_B429995FEDE6996E_2_OFFSET UNITYSDK_OFFSET(0x113AB2D0)
#define CLASS_1_611B47E192B9D09A_METHOD_1_B429995FEDE6996E_3_OFFSET UNITYSDK_OFFSET(0x113AB3E0)
#define CLASS_1_611B47E192B9D09A_METHOD_1_B429995FEDE6996E_4_OFFSET UNITYSDK_OFFSET(0x113AB4F0)
#define CLASS_1_611B47E192B9D09A_METHOD_1_B429995FEDE6996E_5_OFFSET UNITYSDK_OFFSET(0x113AB600)
#define CLASS_1_611B47E192B9D09A_METHOD_1_B429995FEDE6996E_6_OFFSET UNITYSDK_OFFSET(0x113AB710)
#define CLASS_1_611B47E192B9D09A_METHOD_1_B429995FEDE6996E_7_OFFSET UNITYSDK_OFFSET(0x113ACAC0)
#define CLASS_1_611B47E192B9D09A_METHOD_1_B429995FEDE6996E_8_OFFSET UNITYSDK_OFFSET(0x113ACBD0)
#define CLASS_1_611B47E192B9D09A_METHOD_1_B429995FEDE6996E_9_OFFSET UNITYSDK_OFFSET(0x113ACE70)
#define CLASS_1_611B47E192B9D09A_METHOD_1_B429995FEDE6996E_OFFSET UNITYSDK_OFFSET(0x113AB0B0)
#define CLASS_1_611B47E192B9D09A_METHOD_1_C38ADD3CBD8C83FF_1_OFFSET UNITYSDK_OFFSET(0x113AD870)
#define CLASS_1_611B47E192B9D09A_METHOD_1_C38ADD3CBD8C83FF_OFFSET UNITYSDK_OFFSET(0x113AD7F0)
#define CLASS_1_611B47E192B9D09A_METHOD_1_E69758BC72874DFF_OFFSET UNITYSDK_OFFSET(0x113AD220)
#define CLASS_1_611B47E192B9D09A_METHOD_1_EA4A1D7B94DA7C73_OFFSET UNITYSDK_OFFSET(0x113AD630)
#define CLASS_1_611B47E192B9D09A_METHOD_1_F1D1A26F60E3337D_OFFSET UNITYSDK_OFFSET(0x113ABE60)

inline static constexpr unsigned int Class_1_611B47E192B9D09A_TypeDefinitionIndex = 39317;

class Class_1_611B47E192B9D09A : public ::System::Object
{
public:
	static ::UnityEngine::UI::Image** StaticGet_Field_1_48()
	{
		return (::UnityEngine::UI::Image**)Il2CppClass::FromTypeDefinitionIndex(Class_1_611B47E192B9D09A_TypeDefinitionIndex)->GetStaticField(0x31300);
	}
	static ::RPG::Client::LocalizedText** StaticGet_Field_1_51()
	{
		return (::RPG::Client::LocalizedText**)Il2CppClass::FromTypeDefinitionIndex(Class_1_611B47E192B9D09A_TypeDefinitionIndex)->GetStaticField(0x31308);
	}
	static ::RPG::Client::LocalizedText** StaticGet_Field_1_54()
	{
		return (::RPG::Client::LocalizedText**)Il2CppClass::FromTypeDefinitionIndex(Class_1_611B47E192B9D09A_TypeDefinitionIndex)->GetStaticField(0x31310);
	}
	static ::UnityEngine::Transform** StaticGet_Field_1_38()
	{
		return (::UnityEngine::Transform**)Il2CppClass::FromTypeDefinitionIndex(Class_1_611B47E192B9D09A_TypeDefinitionIndex)->GetStaticField(0x31318);
	}
	static ::RPG::Client::LocalizedText** StaticGet_Field_1_56()
	{
		return (::RPG::Client::LocalizedText**)Il2CppClass::FromTypeDefinitionIndex(Class_1_611B47E192B9D09A_TypeDefinitionIndex)->GetStaticField(0x31320);
	}
	static ::UnityEngine::UI::Image** StaticGet_Field_1_62()
	{
		return (::UnityEngine::UI::Image**)Il2CppClass::FromTypeDefinitionIndex(Class_1_611B47E192B9D09A_TypeDefinitionIndex)->GetStaticField(0x31328);
	}
	static ::UnityEngine::UI::Text** StaticGet_Field_1_47()
	{
		return (::UnityEngine::UI::Text**)Il2CppClass::FromTypeDefinitionIndex(Class_1_611B47E192B9D09A_TypeDefinitionIndex)->GetStaticField(0x31330);
	}
	static ::UnityEngine::Transform** StaticGet_Field_1_63()
	{
		return (::UnityEngine::Transform**)Il2CppClass::FromTypeDefinitionIndex(Class_1_611B47E192B9D09A_TypeDefinitionIndex)->GetStaticField(0x31338);
	}
	static ::RPG::Client::LocalizedText** StaticGet_Field_1_55()
	{
		return (::RPG::Client::LocalizedText**)Il2CppClass::FromTypeDefinitionIndex(Class_1_611B47E192B9D09A_TypeDefinitionIndex)->GetStaticField(0x31340);
	}
	static ::RPG::Client::ClientOnlyCommonConfig** StaticGet_Field_1_66()
	{
		return (::RPG::Client::ClientOnlyCommonConfig**)Il2CppClass::FromTypeDefinitionIndex(Class_1_611B47E192B9D09A_TypeDefinitionIndex)->GetStaticField(0x31348);
	}
	static ::UnityEngine::Transform** StaticGet_Field_1_39()
	{
		return (::UnityEngine::Transform**)Il2CppClass::FromTypeDefinitionIndex(Class_1_611B47E192B9D09A_TypeDefinitionIndex)->GetStaticField(0x31350);
	}
	static ::UnityEngine::Transform** StaticGet_Field_1_43()
	{
		return (::UnityEngine::Transform**)Il2CppClass::FromTypeDefinitionIndex(Class_1_611B47E192B9D09A_TypeDefinitionIndex)->GetStaticField(0x31358);
	}
	static ::UnityEngine::Transform** StaticGet_Field_1_57()
	{
		return (::UnityEngine::Transform**)Il2CppClass::FromTypeDefinitionIndex(Class_1_611B47E192B9D09A_TypeDefinitionIndex)->GetStaticField(0x31360);
	}
	static ::UnityEngine::Transform** StaticGet_Field_1_61()
	{
		return (::UnityEngine::Transform**)Il2CppClass::FromTypeDefinitionIndex(Class_1_611B47E192B9D09A_TypeDefinitionIndex)->GetStaticField(0x31368);
	}
	static ::UnityEngine::Transform** StaticGet_Field_1_64()
	{
		return (::UnityEngine::Transform**)Il2CppClass::FromTypeDefinitionIndex(Class_1_611B47E192B9D09A_TypeDefinitionIndex)->GetStaticField(0x31370);
	}
	static ::RPG::Client::DebugPerformanceInfoPanel** StaticGet_Field_1_50()
	{
		return (::RPG::Client::DebugPerformanceInfoPanel**)Il2CppClass::FromTypeDefinitionIndex(Class_1_611B47E192B9D09A_TypeDefinitionIndex)->GetStaticField(0x31378);
	}
	static ::UnityEngine::UI::Text** StaticGet_Field_1_46()
	{
		return (::UnityEngine::UI::Text**)Il2CppClass::FromTypeDefinitionIndex(Class_1_611B47E192B9D09A_TypeDefinitionIndex)->GetStaticField(0x31380);
	}
	static ::UnityEngine::UI::Image** StaticGet_Field_1_52()
	{
		return (::UnityEngine::UI::Image**)Il2CppClass::FromTypeDefinitionIndex(Class_1_611B47E192B9D09A_TypeDefinitionIndex)->GetStaticField(0x31388);
	}
	static ::UnityEngine::Canvas** StaticGet_Field_1_36()
	{
		return (::UnityEngine::Canvas**)Il2CppClass::FromTypeDefinitionIndex(Class_1_611B47E192B9D09A_TypeDefinitionIndex)->GetStaticField(0x31390);
	}
	static ::UnityEngine::Transform** StaticGet_Field_1_58()
	{
		return (::UnityEngine::Transform**)Il2CppClass::FromTypeDefinitionIndex(Class_1_611B47E192B9D09A_TypeDefinitionIndex)->GetStaticField(0x31398);
	}
	static ::UnityEngine::Transform** StaticGet_Field_1_44()
	{
		return (::UnityEngine::Transform**)Il2CppClass::FromTypeDefinitionIndex(Class_1_611B47E192B9D09A_TypeDefinitionIndex)->GetStaticField(0x313A0);
	}
	static ::CriWare::CriManaMovieMaterial** StaticGet_Field_1_49()
	{
		return (::CriWare::CriManaMovieMaterial**)Il2CppClass::FromTypeDefinitionIndex(Class_1_611B47E192B9D09A_TypeDefinitionIndex)->GetStaticField(0x313A8);
	}
	static ::RPG::Client::LocalizedText** StaticGet_Field_1_53()
	{
		return (::RPG::Client::LocalizedText**)Il2CppClass::FromTypeDefinitionIndex(Class_1_611B47E192B9D09A_TypeDefinitionIndex)->GetStaticField(0x313B0);
	}
	static ::UnityEngine::Transform** StaticGet_Field_1_41()
	{
		return (::UnityEngine::Transform**)Il2CppClass::FromTypeDefinitionIndex(Class_1_611B47E192B9D09A_TypeDefinitionIndex)->GetStaticField(0x313B8);
	}
	static ::UnityEngine::Transform** StaticGet_Field_1_40()
	{
		return (::UnityEngine::Transform**)Il2CppClass::FromTypeDefinitionIndex(Class_1_611B47E192B9D09A_TypeDefinitionIndex)->GetStaticField(0x313C0);
	}
	static ::UnityEngine::Transform** StaticGet_Field_1_35()
	{
		return (::UnityEngine::Transform**)Il2CppClass::FromTypeDefinitionIndex(Class_1_611B47E192B9D09A_TypeDefinitionIndex)->GetStaticField(0x313C8);
	}
	static ::UnityEngine::Transform** StaticGet_Field_1_42()
	{
		return (::UnityEngine::Transform**)Il2CppClass::FromTypeDefinitionIndex(Class_1_611B47E192B9D09A_TypeDefinitionIndex)->GetStaticField(0x313D0);
	}
	static ::UnityEngine::Transform** StaticGet_Field_1_34()
	{
		return (::UnityEngine::Transform**)Il2CppClass::FromTypeDefinitionIndex(Class_1_611B47E192B9D09A_TypeDefinitionIndex)->GetStaticField(0x313D8);
	}
	static ::UnityEngine::Transform** StaticGet_Field_1_37()
	{
		return (::UnityEngine::Transform**)Il2CppClass::FromTypeDefinitionIndex(Class_1_611B47E192B9D09A_TypeDefinitionIndex)->GetStaticField(0x313E0);
	}
	static ::UnityEngine::Playables::PlayableDirector** StaticGet_Field_1_65()
	{
		return (::UnityEngine::Playables::PlayableDirector**)Il2CppClass::FromTypeDefinitionIndex(Class_1_611B47E192B9D09A_TypeDefinitionIndex)->GetStaticField(0x313E8);
	}
	static ::UnityEngine::Transform** StaticGet_Field_1_60()
	{
		return (::UnityEngine::Transform**)Il2CppClass::FromTypeDefinitionIndex(Class_1_611B47E192B9D09A_TypeDefinitionIndex)->GetStaticField(0x313F0);
	}
	static ::UnityEngine::UI::Image** StaticGet_Field_1_59()
	{
		return (::UnityEngine::UI::Image**)Il2CppClass::FromTypeDefinitionIndex(Class_1_611B47E192B9D09A_TypeDefinitionIndex)->GetStaticField(0x313F8);
	}
	static ::UnityEngine::UI::Text** StaticGet_Field_1_45()
	{
		return (::UnityEngine::UI::Text**)Il2CppClass::FromTypeDefinitionIndex(Class_1_611B47E192B9D09A_TypeDefinitionIndex)->GetStaticField(0x31400);
	}
	static ::System::Boolean* StaticGet_Field_1_0()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_611B47E192B9D09A_TypeDefinitionIndex)->GetStaticField(0x10160);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_611B47E192B9D09A_TypeDefinitionIndex)->GetStaticField(0x10161);
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
