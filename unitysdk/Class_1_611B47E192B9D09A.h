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

#define CLASS_1_611B47E192B9D09A_METHOD_1_054FEA4718D8370C_OFFSET UNITYSDK_OFFSET(0x17E699E0)
#define CLASS_1_611B47E192B9D09A_METHOD_1_0A70D7B849A494C5_1_OFFSET UNITYSDK_OFFSET(0x17E675B0)
#define CLASS_1_611B47E192B9D09A_METHOD_1_0A70D7B849A494C5_2_OFFSET UNITYSDK_OFFSET(0x17E67740)
#define CLASS_1_611B47E192B9D09A_METHOD_1_0A70D7B849A494C5_OFFSET UNITYSDK_OFFSET(0x17E67420)
#define CLASS_1_611B47E192B9D09A_METHOD_1_10E682F51C1A047C_OFFSET UNITYSDK_OFFSET(0x17E68070)
#define CLASS_1_611B47E192B9D09A_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x17E667A0)
#define CLASS_1_611B47E192B9D09A_METHOD_1_2C0B30E6D49270C5_OFFSET UNITYSDK_OFFSET(0x17E69510)
#define CLASS_1_611B47E192B9D09A_METHOD_1_2E167B2EE069C337_OFFSET UNITYSDK_OFFSET(0x17E69B40)
#define CLASS_1_611B47E192B9D09A_METHOD_1_3E8A1FBDB0ECC40F_OFFSET UNITYSDK_OFFSET(0x17E66A20)
#define CLASS_1_611B47E192B9D09A_METHOD_1_5700CA1B9161463C_OFFSET UNITYSDK_OFFSET(0x17E69490)
#define CLASS_1_611B47E192B9D09A_METHOD_1_60881D6F248432DF_OFFSET UNITYSDK_OFFSET(0x17E69370)
#define CLASS_1_611B47E192B9D09A_METHOD_1_6D5F59BCE8B4A09A_1_OFFSET UNITYSDK_OFFSET(0x17E66900)
#define CLASS_1_611B47E192B9D09A_METHOD_1_6D5F59BCE8B4A09A_2_OFFSET UNITYSDK_OFFSET(0x17E66B00)
#define CLASS_1_611B47E192B9D09A_METHOD_1_6D5F59BCE8B4A09A_OFFSET UNITYSDK_OFFSET(0x17E667E0)
#define CLASS_1_611B47E192B9D09A_METHOD_1_73250EF5F9006ADB_OFFSET UNITYSDK_OFFSET(0x17E67BF0)
#define CLASS_1_611B47E192B9D09A_METHOD_1_78AAEE97CA3CECB5_OFFSET UNITYSDK_OFFSET(0x17E69A90)
#define CLASS_1_611B47E192B9D09A_METHOD_1_81C32BFBC4CC6809_1_OFFSET UNITYSDK_OFFSET(0x17E67EE0)
#define CLASS_1_611B47E192B9D09A_METHOD_1_81C32BFBC4CC6809_2_OFFSET UNITYSDK_OFFSET(0x17E68DC0)
#define CLASS_1_611B47E192B9D09A_METHOD_1_81C32BFBC4CC6809_3_OFFSET UNITYSDK_OFFSET(0x17E69170)
#define CLASS_1_611B47E192B9D09A_METHOD_1_81C32BFBC4CC6809_OFFSET UNITYSDK_OFFSET(0x17E678D0)
#define CLASS_1_611B47E192B9D09A_METHOD_1_868B43028BDC3BFA_OFFSET UNITYSDK_OFFSET(0x17E69670)
#define CLASS_1_611B47E192B9D09A_METHOD_1_8D9772F6745C5D7B_OFFSET UNITYSDK_OFFSET(0x17E695F0)
#define CLASS_1_611B47E192B9D09A_METHOD_1_95C9A8D45FEC5B17_OFFSET UNITYSDK_OFFSET(0x17E65540)
#define CLASS_1_611B47E192B9D09A_METHOD_1_9A1B06354B33D3B8_OFFSET UNITYSDK_OFFSET(0x17E69930)
#define CLASS_1_611B47E192B9D09A_METHOD_1_9E0833B0D6566F28_OFFSET UNITYSDK_OFFSET(0x17E66C20)
#define CLASS_1_611B47E192B9D09A_METHOD_1_A3B7CAD9C0181EC4_1_OFFSET UNITYSDK_OFFSET(0x17E68560)
#define CLASS_1_611B47E192B9D09A_METHOD_1_A3B7CAD9C0181EC4_2_OFFSET UNITYSDK_OFFSET(0x17E686F0)
#define CLASS_1_611B47E192B9D09A_METHOD_1_A3B7CAD9C0181EC4_3_OFFSET UNITYSDK_OFFSET(0x17E68880)
#define CLASS_1_611B47E192B9D09A_METHOD_1_A3B7CAD9C0181EC4_4_OFFSET UNITYSDK_OFFSET(0x17E68A10)
#define CLASS_1_611B47E192B9D09A_METHOD_1_A3B7CAD9C0181EC4_OFFSET UNITYSDK_OFFSET(0x17E67D80)
#define CLASS_1_611B47E192B9D09A_METHOD_1_B429995FEDE6996E_10_OFFSET UNITYSDK_OFFSET(0x17E69060)
#define CLASS_1_611B47E192B9D09A_METHOD_1_B429995FEDE6996E_1_OFFSET UNITYSDK_OFFSET(0x17E66DC0)
#define CLASS_1_611B47E192B9D09A_METHOD_1_B429995FEDE6996E_2_OFFSET UNITYSDK_OFFSET(0x17E66ED0)
#define CLASS_1_611B47E192B9D09A_METHOD_1_B429995FEDE6996E_3_OFFSET UNITYSDK_OFFSET(0x17E66FE0)
#define CLASS_1_611B47E192B9D09A_METHOD_1_B429995FEDE6996E_4_OFFSET UNITYSDK_OFFSET(0x17E670F0)
#define CLASS_1_611B47E192B9D09A_METHOD_1_B429995FEDE6996E_5_OFFSET UNITYSDK_OFFSET(0x17E67200)
#define CLASS_1_611B47E192B9D09A_METHOD_1_B429995FEDE6996E_6_OFFSET UNITYSDK_OFFSET(0x17E67310)
#define CLASS_1_611B47E192B9D09A_METHOD_1_B429995FEDE6996E_7_OFFSET UNITYSDK_OFFSET(0x17E68BA0)
#define CLASS_1_611B47E192B9D09A_METHOD_1_B429995FEDE6996E_8_OFFSET UNITYSDK_OFFSET(0x17E68CB0)
#define CLASS_1_611B47E192B9D09A_METHOD_1_B429995FEDE6996E_9_OFFSET UNITYSDK_OFFSET(0x17E68F50)
#define CLASS_1_611B47E192B9D09A_METHOD_1_B429995FEDE6996E_OFFSET UNITYSDK_OFFSET(0x17E66CB0)
#define CLASS_1_611B47E192B9D09A_METHOD_1_C38ADD3CBD8C83FF_1_OFFSET UNITYSDK_OFFSET(0x17E698C0)
#define CLASS_1_611B47E192B9D09A_METHOD_1_C38ADD3CBD8C83FF_OFFSET UNITYSDK_OFFSET(0x17E69840)
#define CLASS_1_611B47E192B9D09A_METHOD_1_E69758BC72874DFF_OFFSET UNITYSDK_OFFSET(0x17E69300)
#define CLASS_1_611B47E192B9D09A_METHOD_1_F1D1A26F60E3337D_OFFSET UNITYSDK_OFFSET(0x17E67A60)

inline static constexpr unsigned int Class_1_611B47E192B9D09A_TypeDefinitionIndex = 48968;

class Class_1_611B47E192B9D09A : public ::System::Object
{
public:
	static ::UnityEngine::Transform** StaticGet_LLADEPHOPBE()
	{
		return (::UnityEngine::Transform**)Il2CppClass::FromTypeDefinitionIndex(Class_1_611B47E192B9D09A_TypeDefinitionIndex)->GetStaticField(0x1C2B0);
	}
	static ::RPG::Client::ClientOnlyCommonConfig** StaticGet_FJEPLGBIAOH()
	{
		return (::RPG::Client::ClientOnlyCommonConfig**)Il2CppClass::FromTypeDefinitionIndex(Class_1_611B47E192B9D09A_TypeDefinitionIndex)->GetStaticField(0x1C2B8);
	}
	static ::UnityEngine::Transform** StaticGet_EJIKHNFJGFI()
	{
		return (::UnityEngine::Transform**)Il2CppClass::FromTypeDefinitionIndex(Class_1_611B47E192B9D09A_TypeDefinitionIndex)->GetStaticField(0x1C2C0);
	}
	static ::UnityEngine::Transform** StaticGet_NAFDDKLMGLL()
	{
		return (::UnityEngine::Transform**)Il2CppClass::FromTypeDefinitionIndex(Class_1_611B47E192B9D09A_TypeDefinitionIndex)->GetStaticField(0x1C2C8);
	}
	static ::UnityEngine::Transform** StaticGet_DOLBOABHAAM()
	{
		return (::UnityEngine::Transform**)Il2CppClass::FromTypeDefinitionIndex(Class_1_611B47E192B9D09A_TypeDefinitionIndex)->GetStaticField(0x1C2D0);
	}
	static ::UnityEngine::Transform** StaticGet_LHFCECHDELD()
	{
		return (::UnityEngine::Transform**)Il2CppClass::FromTypeDefinitionIndex(Class_1_611B47E192B9D09A_TypeDefinitionIndex)->GetStaticField(0x1C2D8);
	}
	static ::RPG::Client::LocalizedText** StaticGet_APAPIBBMKDL()
	{
		return (::RPG::Client::LocalizedText**)Il2CppClass::FromTypeDefinitionIndex(Class_1_611B47E192B9D09A_TypeDefinitionIndex)->GetStaticField(0x1C2E0);
	}
	static ::UnityEngine::Transform** StaticGet_PAECDBJLLCM()
	{
		return (::UnityEngine::Transform**)Il2CppClass::FromTypeDefinitionIndex(Class_1_611B47E192B9D09A_TypeDefinitionIndex)->GetStaticField(0x1C2E8);
	}
	static ::RPG::Client::LocalizedText** StaticGet_CCDJOLNPLBJ()
	{
		return (::RPG::Client::LocalizedText**)Il2CppClass::FromTypeDefinitionIndex(Class_1_611B47E192B9D09A_TypeDefinitionIndex)->GetStaticField(0x1C2F0);
	}
	static ::RPG::Client::LocalizedText** StaticGet_AACOHEKCIDH()
	{
		return (::RPG::Client::LocalizedText**)Il2CppClass::FromTypeDefinitionIndex(Class_1_611B47E192B9D09A_TypeDefinitionIndex)->GetStaticField(0x1C2F8);
	}
	static ::UnityEngine::UI::Image** StaticGet_MEPIKEFJLHG()
	{
		return (::UnityEngine::UI::Image**)Il2CppClass::FromTypeDefinitionIndex(Class_1_611B47E192B9D09A_TypeDefinitionIndex)->GetStaticField(0x1C300);
	}
	static ::CriWare::CriManaMovieMaterial** StaticGet_BAFJFDKDPON()
	{
		return (::CriWare::CriManaMovieMaterial**)Il2CppClass::FromTypeDefinitionIndex(Class_1_611B47E192B9D09A_TypeDefinitionIndex)->GetStaticField(0x1C308);
	}
	static ::UnityEngine::Playables::PlayableDirector** StaticGet_OPNHINPCKOJ()
	{
		return (::UnityEngine::Playables::PlayableDirector**)Il2CppClass::FromTypeDefinitionIndex(Class_1_611B47E192B9D09A_TypeDefinitionIndex)->GetStaticField(0x1C310);
	}
	static ::UnityEngine::Transform** StaticGet_BGPIFFEJIJL()
	{
		return (::UnityEngine::Transform**)Il2CppClass::FromTypeDefinitionIndex(Class_1_611B47E192B9D09A_TypeDefinitionIndex)->GetStaticField(0x1C318);
	}
	static ::RPG::Client::DebugPerformanceInfoPanel** StaticGet_FNNJPCLHMPC()
	{
		return (::RPG::Client::DebugPerformanceInfoPanel**)Il2CppClass::FromTypeDefinitionIndex(Class_1_611B47E192B9D09A_TypeDefinitionIndex)->GetStaticField(0x1C320);
	}
	static ::UnityEngine::Transform** StaticGet_CPPMPGJCFMJ()
	{
		return (::UnityEngine::Transform**)Il2CppClass::FromTypeDefinitionIndex(Class_1_611B47E192B9D09A_TypeDefinitionIndex)->GetStaticField(0x1C328);
	}
	static ::UnityEngine::UI::Text** StaticGet_FLMOCLGKGLI()
	{
		return (::UnityEngine::UI::Text**)Il2CppClass::FromTypeDefinitionIndex(Class_1_611B47E192B9D09A_TypeDefinitionIndex)->GetStaticField(0x1C330);
	}
	static ::UnityEngine::UI::Image** StaticGet_AFJIGEDHIPO()
	{
		return (::UnityEngine::UI::Image**)Il2CppClass::FromTypeDefinitionIndex(Class_1_611B47E192B9D09A_TypeDefinitionIndex)->GetStaticField(0x1C338);
	}
	static ::RPG::Client::LocalizedText** StaticGet_MBMGNOAGGJO()
	{
		return (::RPG::Client::LocalizedText**)Il2CppClass::FromTypeDefinitionIndex(Class_1_611B47E192B9D09A_TypeDefinitionIndex)->GetStaticField(0x1C340);
	}
	static ::UnityEngine::Transform** StaticGet_PLADJIEFFBI()
	{
		return (::UnityEngine::Transform**)Il2CppClass::FromTypeDefinitionIndex(Class_1_611B47E192B9D09A_TypeDefinitionIndex)->GetStaticField(0x1C348);
	}
	static ::UnityEngine::UI::Image** StaticGet_MFMPHLIAAIH()
	{
		return (::UnityEngine::UI::Image**)Il2CppClass::FromTypeDefinitionIndex(Class_1_611B47E192B9D09A_TypeDefinitionIndex)->GetStaticField(0x1C350);
	}
	static ::UnityEngine::Transform** StaticGet_LIGEMMPFLKI()
	{
		return (::UnityEngine::Transform**)Il2CppClass::FromTypeDefinitionIndex(Class_1_611B47E192B9D09A_TypeDefinitionIndex)->GetStaticField(0x1C358);
	}
	static ::UnityEngine::UI::Image** StaticGet_BJKCBOCLKBL()
	{
		return (::UnityEngine::UI::Image**)Il2CppClass::FromTypeDefinitionIndex(Class_1_611B47E192B9D09A_TypeDefinitionIndex)->GetStaticField(0x1C360);
	}
	static ::RPG::Client::LocalizedText** StaticGet_IGKJFIBBOFE()
	{
		return (::RPG::Client::LocalizedText**)Il2CppClass::FromTypeDefinitionIndex(Class_1_611B47E192B9D09A_TypeDefinitionIndex)->GetStaticField(0x1C368);
	}
	static ::UnityEngine::Transform** StaticGet_KGDOGDLMELJ()
	{
		return (::UnityEngine::Transform**)Il2CppClass::FromTypeDefinitionIndex(Class_1_611B47E192B9D09A_TypeDefinitionIndex)->GetStaticField(0x1C370);
	}
	static ::UnityEngine::UI::Image** StaticGet_IEPFFCEBCDB()
	{
		return (::UnityEngine::UI::Image**)Il2CppClass::FromTypeDefinitionIndex(Class_1_611B47E192B9D09A_TypeDefinitionIndex)->GetStaticField(0x1C378);
	}
	static ::UnityEngine::UI::Text** StaticGet_JDCABDNBIPH()
	{
		return (::UnityEngine::UI::Text**)Il2CppClass::FromTypeDefinitionIndex(Class_1_611B47E192B9D09A_TypeDefinitionIndex)->GetStaticField(0x1C380);
	}
	static ::UnityEngine::UI::Text** StaticGet_IOLCFAPCPDP()
	{
		return (::UnityEngine::UI::Text**)Il2CppClass::FromTypeDefinitionIndex(Class_1_611B47E192B9D09A_TypeDefinitionIndex)->GetStaticField(0x1C388);
	}
	static ::UnityEngine::Transform** StaticGet_DGNBNJFKJLK()
	{
		return (::UnityEngine::Transform**)Il2CppClass::FromTypeDefinitionIndex(Class_1_611B47E192B9D09A_TypeDefinitionIndex)->GetStaticField(0x1C390);
	}
	static ::UnityEngine::Transform** StaticGet_JILDIDPIJJH()
	{
		return (::UnityEngine::Transform**)Il2CppClass::FromTypeDefinitionIndex(Class_1_611B47E192B9D09A_TypeDefinitionIndex)->GetStaticField(0x1C398);
	}
	static ::UnityEngine::Transform** StaticGet_JPICPJEINDC()
	{
		return (::UnityEngine::Transform**)Il2CppClass::FromTypeDefinitionIndex(Class_1_611B47E192B9D09A_TypeDefinitionIndex)->GetStaticField(0x1C3A0);
	}
	static ::UnityEngine::Transform** StaticGet_NIKFDIBDGGJ()
	{
		return (::UnityEngine::Transform**)Il2CppClass::FromTypeDefinitionIndex(Class_1_611B47E192B9D09A_TypeDefinitionIndex)->GetStaticField(0x1C3A8);
	}
	static ::UnityEngine::Transform** StaticGet_EAOPEAJHBKG()
	{
		return (::UnityEngine::Transform**)Il2CppClass::FromTypeDefinitionIndex(Class_1_611B47E192B9D09A_TypeDefinitionIndex)->GetStaticField(0x1C3B0);
	}
	static ::UnityEngine::Canvas** StaticGet_EPOABONPPGJ()
	{
		return (::UnityEngine::Canvas**)Il2CppClass::FromTypeDefinitionIndex(Class_1_611B47E192B9D09A_TypeDefinitionIndex)->GetStaticField(0x1C3B8);
	}
	static ::System::Boolean* StaticGet_PCMDPHMBOHC()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_611B47E192B9D09A_TypeDefinitionIndex)->GetStaticField(0x98C0);
	}
	static ::System::Boolean* StaticGet_BPFJNDHIFLD()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_611B47E192B9D09A_TypeDefinitionIndex)->GetStaticField(0x98C1);
	}
	// static const ::System::String* GGDHBBDCAOG; // 0x0
	// static const ::System::String* PCLNMFLHKFP; // 0x0
	// static const ::System::String* HEKAGCELHGA; // 0x0
	// static const ::System::String* NNMOCJLNCHL; // 0x0
	// static const ::System::String* EAFCLNAGBFF; // 0x0
	// static const ::System::String* PABFBJMMJNM; // 0x0
	// static const ::System::String* BMPANFMOJLG; // 0x0
	// static const ::System::String* KANPLMMFFNC; // 0x0
	// static const ::System::String* JBNJDECCPMP; // 0x0
	// static const ::System::String* BGCKKGGFILM; // 0x0
	// static const ::System::String* JLKJFPFEBAA; // 0x0
	// static const ::System::String* GGMMLOOIBOO; // 0x0
	// static const ::System::String* AFEAAFIDLEB; // 0x0
	// static const ::System::String* BINLFPLLLLE; // 0x0
	// static const ::System::String* KNDOCDEJNHA; // 0x0
	// static const ::System::String* DIDDMPKFKCA; // 0x0
	// static const ::System::String* DAMMIAOPKFJ; // 0x0
	// static const ::System::String* DPHLEEGFOAE; // 0x0
	// static const ::System::String* PDKKNEMGDGJ; // 0x0
	// static const ::System::String* EOEIDFDIAFE; // 0x0
	// static const ::System::String* FLBAJMJJBHN; // 0x0
	// static const ::System::String* GDINDNGOJNM; // 0x0
	// static const ::System::String* LLDCBLLCIAO; // 0x0
	// static const ::System::String* EJMGPHHLFOO; // 0x0
	// static const ::System::String* EBOPMIILAEJ; // 0x0
	// static const ::System::String* LKGCNDOJKAK; // 0x0
	// static const ::System::String* IKPJGNCOOFB; // 0x0
	// static const ::System::String* LPKNHLOHMKM; // 0x0
	// static const ::System::String* DABLLMCAEBN; // 0x0
	// static const ::System::String* DJKOOFKGNGI; // 0x0
	// static const ::System::String* KEMCJDMAIOP; // 0x0
	// static const ::System::String* EFGOAOPNPCB; // 0x0
	// static const ::System::String* CJOACMMCHJP; // 0x0

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
