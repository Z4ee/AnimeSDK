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

#define CLASS_1_611B47E192B9D09A_METHOD_1_054FEA4718D8370C_OFFSET UNITYSDK_OFFSET(0xA5AA5D0)
#define CLASS_1_611B47E192B9D09A_METHOD_1_0A70D7B849A494C5_1_OFFSET UNITYSDK_OFFSET(0xA5A8210)
#define CLASS_1_611B47E192B9D09A_METHOD_1_0A70D7B849A494C5_2_OFFSET UNITYSDK_OFFSET(0xA5A83A0)
#define CLASS_1_611B47E192B9D09A_METHOD_1_0A70D7B849A494C5_OFFSET UNITYSDK_OFFSET(0xA5A8080)
#define CLASS_1_611B47E192B9D09A_METHOD_1_10E682F51C1A047C_OFFSET UNITYSDK_OFFSET(0xA5A8CD0)
#define CLASS_1_611B47E192B9D09A_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0xA5A7400)
#define CLASS_1_611B47E192B9D09A_METHOD_1_2C0B30E6D49270C5_OFFSET UNITYSDK_OFFSET(0xA5AA100)
#define CLASS_1_611B47E192B9D09A_METHOD_1_2E167B2EE069C337_OFFSET UNITYSDK_OFFSET(0xA5AA730)
#define CLASS_1_611B47E192B9D09A_METHOD_1_3E8A1FBDB0ECC40F_OFFSET UNITYSDK_OFFSET(0xA5A7680)
#define CLASS_1_611B47E192B9D09A_METHOD_1_5700CA1B9161463C_OFFSET UNITYSDK_OFFSET(0xA5AA080)
#define CLASS_1_611B47E192B9D09A_METHOD_1_60881D6F248432DF_OFFSET UNITYSDK_OFFSET(0xA5A9F60)
#define CLASS_1_611B47E192B9D09A_METHOD_1_6D5F59BCE8B4A09A_1_OFFSET UNITYSDK_OFFSET(0xA5A7560)
#define CLASS_1_611B47E192B9D09A_METHOD_1_6D5F59BCE8B4A09A_2_OFFSET UNITYSDK_OFFSET(0xA5A7760)
#define CLASS_1_611B47E192B9D09A_METHOD_1_6D5F59BCE8B4A09A_OFFSET UNITYSDK_OFFSET(0xA5A7440)
#define CLASS_1_611B47E192B9D09A_METHOD_1_73250EF5F9006ADB_OFFSET UNITYSDK_OFFSET(0xA5A8850)
#define CLASS_1_611B47E192B9D09A_METHOD_1_78AAEE97CA3CECB5_OFFSET UNITYSDK_OFFSET(0xA5AA680)
#define CLASS_1_611B47E192B9D09A_METHOD_1_81C32BFBC4CC6809_1_OFFSET UNITYSDK_OFFSET(0xA5A8B40)
#define CLASS_1_611B47E192B9D09A_METHOD_1_81C32BFBC4CC6809_2_OFFSET UNITYSDK_OFFSET(0xA5A99B0)
#define CLASS_1_611B47E192B9D09A_METHOD_1_81C32BFBC4CC6809_3_OFFSET UNITYSDK_OFFSET(0xA5A9D60)
#define CLASS_1_611B47E192B9D09A_METHOD_1_81C32BFBC4CC6809_OFFSET UNITYSDK_OFFSET(0xA5A8530)
#define CLASS_1_611B47E192B9D09A_METHOD_1_868B43028BDC3BFA_OFFSET UNITYSDK_OFFSET(0xA5AA260)
#define CLASS_1_611B47E192B9D09A_METHOD_1_8D9772F6745C5D7B_OFFSET UNITYSDK_OFFSET(0xA5AA1E0)
#define CLASS_1_611B47E192B9D09A_METHOD_1_95C9A8D45FEC5B17_OFFSET UNITYSDK_OFFSET(0xA5A6400)
#define CLASS_1_611B47E192B9D09A_METHOD_1_9A1B06354B33D3B8_OFFSET UNITYSDK_OFFSET(0xA5AA520)
#define CLASS_1_611B47E192B9D09A_METHOD_1_9E0833B0D6566F28_OFFSET UNITYSDK_OFFSET(0xA5A7880)
#define CLASS_1_611B47E192B9D09A_METHOD_1_A3B7CAD9C0181EC4_1_OFFSET UNITYSDK_OFFSET(0xA5A9150)
#define CLASS_1_611B47E192B9D09A_METHOD_1_A3B7CAD9C0181EC4_2_OFFSET UNITYSDK_OFFSET(0xA5A92E0)
#define CLASS_1_611B47E192B9D09A_METHOD_1_A3B7CAD9C0181EC4_3_OFFSET UNITYSDK_OFFSET(0xA5A9470)
#define CLASS_1_611B47E192B9D09A_METHOD_1_A3B7CAD9C0181EC4_4_OFFSET UNITYSDK_OFFSET(0xA5A9600)
#define CLASS_1_611B47E192B9D09A_METHOD_1_A3B7CAD9C0181EC4_OFFSET UNITYSDK_OFFSET(0xA5A89E0)
#define CLASS_1_611B47E192B9D09A_METHOD_1_B429995FEDE6996E_10_OFFSET UNITYSDK_OFFSET(0xA5A9C50)
#define CLASS_1_611B47E192B9D09A_METHOD_1_B429995FEDE6996E_1_OFFSET UNITYSDK_OFFSET(0xA5A7A20)
#define CLASS_1_611B47E192B9D09A_METHOD_1_B429995FEDE6996E_2_OFFSET UNITYSDK_OFFSET(0xA5A7B30)
#define CLASS_1_611B47E192B9D09A_METHOD_1_B429995FEDE6996E_3_OFFSET UNITYSDK_OFFSET(0xA5A7C40)
#define CLASS_1_611B47E192B9D09A_METHOD_1_B429995FEDE6996E_4_OFFSET UNITYSDK_OFFSET(0xA5A7D50)
#define CLASS_1_611B47E192B9D09A_METHOD_1_B429995FEDE6996E_5_OFFSET UNITYSDK_OFFSET(0xA5A7E60)
#define CLASS_1_611B47E192B9D09A_METHOD_1_B429995FEDE6996E_6_OFFSET UNITYSDK_OFFSET(0xA5A7F70)
#define CLASS_1_611B47E192B9D09A_METHOD_1_B429995FEDE6996E_7_OFFSET UNITYSDK_OFFSET(0xA5A9790)
#define CLASS_1_611B47E192B9D09A_METHOD_1_B429995FEDE6996E_8_OFFSET UNITYSDK_OFFSET(0xA5A98A0)
#define CLASS_1_611B47E192B9D09A_METHOD_1_B429995FEDE6996E_9_OFFSET UNITYSDK_OFFSET(0xA5A9B40)
#define CLASS_1_611B47E192B9D09A_METHOD_1_B429995FEDE6996E_OFFSET UNITYSDK_OFFSET(0xA5A7910)
#define CLASS_1_611B47E192B9D09A_METHOD_1_C38ADD3CBD8C83FF_1_OFFSET UNITYSDK_OFFSET(0xA5AA4B0)
#define CLASS_1_611B47E192B9D09A_METHOD_1_C38ADD3CBD8C83FF_OFFSET UNITYSDK_OFFSET(0xA5AA430)
#define CLASS_1_611B47E192B9D09A_METHOD_1_E69758BC72874DFF_OFFSET UNITYSDK_OFFSET(0xA5A9EF0)
#define CLASS_1_611B47E192B9D09A_METHOD_1_F1D1A26F60E3337D_OFFSET UNITYSDK_OFFSET(0xA5A86C0)

inline static constexpr unsigned int Class_1_611B47E192B9D09A_TypeDefinitionIndex = 45783;

class Class_1_611B47E192B9D09A : public ::System::Object
{
public:
	static ::UnityEngine::Transform** StaticGet_Field_1_0()
	{
		return (::UnityEngine::Transform**)Il2CppClass::FromTypeDefinitionIndex(Class_1_611B47E192B9D09A_TypeDefinitionIndex)->GetStaticField(0x64FA0);
	}
	static ::RPG::Client::DebugPerformanceInfoPanel** StaticGet_Field_1_1()
	{
		return (::RPG::Client::DebugPerformanceInfoPanel**)Il2CppClass::FromTypeDefinitionIndex(Class_1_611B47E192B9D09A_TypeDefinitionIndex)->GetStaticField(0x64FA8);
	}
	static ::RPG::Client::LocalizedText** StaticGet_Field_1_2()
	{
		return (::RPG::Client::LocalizedText**)Il2CppClass::FromTypeDefinitionIndex(Class_1_611B47E192B9D09A_TypeDefinitionIndex)->GetStaticField(0x64FB0);
	}
	static ::UnityEngine::Transform** StaticGet_Field_1_3()
	{
		return (::UnityEngine::Transform**)Il2CppClass::FromTypeDefinitionIndex(Class_1_611B47E192B9D09A_TypeDefinitionIndex)->GetStaticField(0x64FB8);
	}
	static ::UnityEngine::Transform** StaticGet_Field_1_4()
	{
		return (::UnityEngine::Transform**)Il2CppClass::FromTypeDefinitionIndex(Class_1_611B47E192B9D09A_TypeDefinitionIndex)->GetStaticField(0x64FC0);
	}
	static ::UnityEngine::UI::Image** StaticGet_Field_1_5()
	{
		return (::UnityEngine::UI::Image**)Il2CppClass::FromTypeDefinitionIndex(Class_1_611B47E192B9D09A_TypeDefinitionIndex)->GetStaticField(0x64FC8);
	}
	static ::UnityEngine::Transform** StaticGet_Field_1_6()
	{
		return (::UnityEngine::Transform**)Il2CppClass::FromTypeDefinitionIndex(Class_1_611B47E192B9D09A_TypeDefinitionIndex)->GetStaticField(0x64FD0);
	}
	static ::RPG::Client::LocalizedText** StaticGet_Field_1_7()
	{
		return (::RPG::Client::LocalizedText**)Il2CppClass::FromTypeDefinitionIndex(Class_1_611B47E192B9D09A_TypeDefinitionIndex)->GetStaticField(0x64FD8);
	}
	static ::CriWare::CriManaMovieMaterial** StaticGet_Field_1_8()
	{
		return (::CriWare::CriManaMovieMaterial**)Il2CppClass::FromTypeDefinitionIndex(Class_1_611B47E192B9D09A_TypeDefinitionIndex)->GetStaticField(0x64FE0);
	}
	static ::UnityEngine::Transform** StaticGet_Field_1_9()
	{
		return (::UnityEngine::Transform**)Il2CppClass::FromTypeDefinitionIndex(Class_1_611B47E192B9D09A_TypeDefinitionIndex)->GetStaticField(0x64FE8);
	}
	static ::UnityEngine::UI::Image** StaticGet_Field_1_10()
	{
		return (::UnityEngine::UI::Image**)Il2CppClass::FromTypeDefinitionIndex(Class_1_611B47E192B9D09A_TypeDefinitionIndex)->GetStaticField(0x64FF0);
	}
	static ::UnityEngine::Transform** StaticGet_Field_1_11()
	{
		return (::UnityEngine::Transform**)Il2CppClass::FromTypeDefinitionIndex(Class_1_611B47E192B9D09A_TypeDefinitionIndex)->GetStaticField(0x64FF8);
	}
	static ::UnityEngine::Transform** StaticGet_Field_1_12()
	{
		return (::UnityEngine::Transform**)Il2CppClass::FromTypeDefinitionIndex(Class_1_611B47E192B9D09A_TypeDefinitionIndex)->GetStaticField(0x65000);
	}
	static ::UnityEngine::UI::Image** StaticGet_Field_1_13()
	{
		return (::UnityEngine::UI::Image**)Il2CppClass::FromTypeDefinitionIndex(Class_1_611B47E192B9D09A_TypeDefinitionIndex)->GetStaticField(0x65008);
	}
	static ::UnityEngine::UI::Text** StaticGet_Field_1_14()
	{
		return (::UnityEngine::UI::Text**)Il2CppClass::FromTypeDefinitionIndex(Class_1_611B47E192B9D09A_TypeDefinitionIndex)->GetStaticField(0x65010);
	}
	static ::RPG::Client::ClientOnlyCommonConfig** StaticGet_Field_1_15()
	{
		return (::RPG::Client::ClientOnlyCommonConfig**)Il2CppClass::FromTypeDefinitionIndex(Class_1_611B47E192B9D09A_TypeDefinitionIndex)->GetStaticField(0x65018);
	}
	static ::UnityEngine::Transform** StaticGet_Field_1_16()
	{
		return (::UnityEngine::Transform**)Il2CppClass::FromTypeDefinitionIndex(Class_1_611B47E192B9D09A_TypeDefinitionIndex)->GetStaticField(0x65020);
	}
	static ::UnityEngine::UI::Image** StaticGet_Field_1_17()
	{
		return (::UnityEngine::UI::Image**)Il2CppClass::FromTypeDefinitionIndex(Class_1_611B47E192B9D09A_TypeDefinitionIndex)->GetStaticField(0x65028);
	}
	static ::UnityEngine::Transform** StaticGet_Field_1_18()
	{
		return (::UnityEngine::Transform**)Il2CppClass::FromTypeDefinitionIndex(Class_1_611B47E192B9D09A_TypeDefinitionIndex)->GetStaticField(0x65030);
	}
	static ::UnityEngine::Transform** StaticGet_Field_1_19()
	{
		return (::UnityEngine::Transform**)Il2CppClass::FromTypeDefinitionIndex(Class_1_611B47E192B9D09A_TypeDefinitionIndex)->GetStaticField(0x65038);
	}
	static ::UnityEngine::UI::Text** StaticGet_Field_1_20()
	{
		return (::UnityEngine::UI::Text**)Il2CppClass::FromTypeDefinitionIndex(Class_1_611B47E192B9D09A_TypeDefinitionIndex)->GetStaticField(0x65040);
	}
	static ::RPG::Client::LocalizedText** StaticGet_Field_1_21()
	{
		return (::RPG::Client::LocalizedText**)Il2CppClass::FromTypeDefinitionIndex(Class_1_611B47E192B9D09A_TypeDefinitionIndex)->GetStaticField(0x65048);
	}
	static ::UnityEngine::Transform** StaticGet_Field_1_22()
	{
		return (::UnityEngine::Transform**)Il2CppClass::FromTypeDefinitionIndex(Class_1_611B47E192B9D09A_TypeDefinitionIndex)->GetStaticField(0x65050);
	}
	static ::UnityEngine::Transform** StaticGet_Field_1_23()
	{
		return (::UnityEngine::Transform**)Il2CppClass::FromTypeDefinitionIndex(Class_1_611B47E192B9D09A_TypeDefinitionIndex)->GetStaticField(0x65058);
	}
	static ::UnityEngine::Transform** StaticGet_Field_1_24()
	{
		return (::UnityEngine::Transform**)Il2CppClass::FromTypeDefinitionIndex(Class_1_611B47E192B9D09A_TypeDefinitionIndex)->GetStaticField(0x65060);
	}
	static ::UnityEngine::Transform** StaticGet_Field_1_25()
	{
		return (::UnityEngine::Transform**)Il2CppClass::FromTypeDefinitionIndex(Class_1_611B47E192B9D09A_TypeDefinitionIndex)->GetStaticField(0x65068);
	}
	static ::UnityEngine::Transform** StaticGet_Field_1_26()
	{
		return (::UnityEngine::Transform**)Il2CppClass::FromTypeDefinitionIndex(Class_1_611B47E192B9D09A_TypeDefinitionIndex)->GetStaticField(0x65070);
	}
	static ::RPG::Client::LocalizedText** StaticGet_Field_1_27()
	{
		return (::RPG::Client::LocalizedText**)Il2CppClass::FromTypeDefinitionIndex(Class_1_611B47E192B9D09A_TypeDefinitionIndex)->GetStaticField(0x65078);
	}
	static ::UnityEngine::UI::Text** StaticGet_Field_1_28()
	{
		return (::UnityEngine::UI::Text**)Il2CppClass::FromTypeDefinitionIndex(Class_1_611B47E192B9D09A_TypeDefinitionIndex)->GetStaticField(0x65080);
	}
	static ::UnityEngine::Canvas** StaticGet_Field_1_29()
	{
		return (::UnityEngine::Canvas**)Il2CppClass::FromTypeDefinitionIndex(Class_1_611B47E192B9D09A_TypeDefinitionIndex)->GetStaticField(0x65088);
	}
	static ::UnityEngine::UI::Image** StaticGet_Field_1_30()
	{
		return (::UnityEngine::UI::Image**)Il2CppClass::FromTypeDefinitionIndex(Class_1_611B47E192B9D09A_TypeDefinitionIndex)->GetStaticField(0x65090);
	}
	static ::UnityEngine::Playables::PlayableDirector** StaticGet_Field_1_31()
	{
		return (::UnityEngine::Playables::PlayableDirector**)Il2CppClass::FromTypeDefinitionIndex(Class_1_611B47E192B9D09A_TypeDefinitionIndex)->GetStaticField(0x65098);
	}
	static ::UnityEngine::Transform** StaticGet_Field_1_32()
	{
		return (::UnityEngine::Transform**)Il2CppClass::FromTypeDefinitionIndex(Class_1_611B47E192B9D09A_TypeDefinitionIndex)->GetStaticField(0x650A0);
	}
	static ::RPG::Client::LocalizedText** StaticGet_Field_1_33()
	{
		return (::RPG::Client::LocalizedText**)Il2CppClass::FromTypeDefinitionIndex(Class_1_611B47E192B9D09A_TypeDefinitionIndex)->GetStaticField(0x650A8);
	}
	static ::System::Boolean* StaticGet_Field_1_34()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_611B47E192B9D09A_TypeDefinitionIndex)->GetStaticField(0x13B90);
	}
	static ::System::Boolean* StaticGet_Field_1_35()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_611B47E192B9D09A_TypeDefinitionIndex)->GetStaticField(0x13B91);
	}
	// static const ::System::String* Field_1_36; // 0x0
	// static const ::System::String* Field_1_37; // 0x0
	// static const ::System::String* Field_1_38; // 0x0
	// static const ::System::String* Field_1_39; // 0x0
	// static const ::System::String* Field_1_40; // 0x0
	// static const ::System::String* Field_1_41; // 0x0
	// static const ::System::String* Field_1_42; // 0x0
	// static const ::System::String* Field_1_43; // 0x0
	// static const ::System::String* Field_1_44; // 0x0
	// static const ::System::String* Field_1_45; // 0x0
	// static const ::System::String* Field_1_46; // 0x0
	// static const ::System::String* Field_1_47; // 0x0
	// static const ::System::String* Field_1_48; // 0x0
	// static const ::System::String* Field_1_49; // 0x0
	// static const ::System::String* Field_1_50; // 0x0
	// static const ::System::String* Field_1_51; // 0x0
	// static const ::System::String* Field_1_52; // 0x0
	// static const ::System::String* Field_1_53; // 0x0
	// static const ::System::String* Field_1_54; // 0x0
	// static const ::System::String* Field_1_55; // 0x0
	// static const ::System::String* Field_1_56; // 0x0
	// static const ::System::String* Field_1_57; // 0x0
	// static const ::System::String* Field_1_58; // 0x0
	// static const ::System::String* Field_1_59; // 0x0
	// static const ::System::String* Field_1_60; // 0x0
	// static const ::System::String* Field_1_61; // 0x0
	// static const ::System::String* Field_1_62; // 0x0
	// static const ::System::String* Field_1_63; // 0x0
	// static const ::System::String* Field_1_64; // 0x0
	// static const ::System::String* Field_1_65; // 0x0
	// static const ::System::String* Field_1_66; // 0x0
	// static const ::System::String* Field_1_67; // 0x0
	// static const ::System::String* Field_1_68; // 0x0

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

	static ::UnityEngine::Camera* Method_1_9E0833B0D6566F28()
	{
		return ((::UnityEngine::Camera*(*)())((::PBYTE)hIl2Cpp + CLASS_1_611B47E192B9D09A_METHOD_1_9E0833B0D6566F28_OFFSET))();
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

	static ::RPG::GameCore::GameWorld* Method_1_868B43028BDC3BFA()
	{
		return ((::RPG::GameCore::GameWorld*(*)())((::PBYTE)hIl2Cpp + CLASS_1_611B47E192B9D09A_METHOD_1_868B43028BDC3BFA_OFFSET))();
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
