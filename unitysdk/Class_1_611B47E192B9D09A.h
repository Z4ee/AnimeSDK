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

#define CLASS_1_611B47E192B9D09A_METHOD_1_054FEA4718D8370C_OFFSET UNITYSDK_OFFSET(0xB72D700)
#define CLASS_1_611B47E192B9D09A_METHOD_1_10E682F51C1A047C_OFFSET UNITYSDK_OFFSET(0xB72BB40)
#define CLASS_1_611B47E192B9D09A_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0xB729F00)
#define CLASS_1_611B47E192B9D09A_METHOD_1_1B2740C3E67BDE48_1_OFFSET UNITYSDK_OFFSET(0xB72AF20)
#define CLASS_1_611B47E192B9D09A_METHOD_1_1B2740C3E67BDE48_2_OFFSET UNITYSDK_OFFSET(0xB72B0E0)
#define CLASS_1_611B47E192B9D09A_METHOD_1_1B2740C3E67BDE48_OFFSET UNITYSDK_OFFSET(0xB72AD60)
#define CLASS_1_611B47E192B9D09A_METHOD_1_2C0B30E6D49270C5_OFFSET UNITYSDK_OFFSET(0xB72D210)
#define CLASS_1_611B47E192B9D09A_METHOD_1_2DCAF97EF4A7682E_OFFSET UNITYSDK_OFFSET(0xB72D860)
#define CLASS_1_611B47E192B9D09A_METHOD_1_36CD98119ACA0760_OFFSET UNITYSDK_OFFSET(0xB72D040)
#define CLASS_1_611B47E192B9D09A_METHOD_1_3B028BDF292CD17F_1_OFFSET UNITYSDK_OFFSET(0xB72C050)
#define CLASS_1_611B47E192B9D09A_METHOD_1_3B028BDF292CD17F_2_OFFSET UNITYSDK_OFFSET(0xB72C210)
#define CLASS_1_611B47E192B9D09A_METHOD_1_3B028BDF292CD17F_3_OFFSET UNITYSDK_OFFSET(0xB72C3D0)
#define CLASS_1_611B47E192B9D09A_METHOD_1_3B028BDF292CD17F_4_OFFSET UNITYSDK_OFFSET(0xB72C590)
#define CLASS_1_611B47E192B9D09A_METHOD_1_3B028BDF292CD17F_OFFSET UNITYSDK_OFFSET(0xB72B7E0)
#define CLASS_1_611B47E192B9D09A_METHOD_1_3E8A1FBDB0ECC40F_OFFSET UNITYSDK_OFFSET(0xB72A1E0)
#define CLASS_1_611B47E192B9D09A_METHOD_1_5700CA1B9161463C_OFFSET UNITYSDK_OFFSET(0xB72D190)
#define CLASS_1_611B47E192B9D09A_METHOD_1_68B32EB91B0DBCB4_1_OFFSET UNITYSDK_OFFSET(0xB72B980)
#define CLASS_1_611B47E192B9D09A_METHOD_1_68B32EB91B0DBCB4_2_OFFSET UNITYSDK_OFFSET(0xB72C9D0)
#define CLASS_1_611B47E192B9D09A_METHOD_1_68B32EB91B0DBCB4_3_OFFSET UNITYSDK_OFFSET(0xB72CE10)
#define CLASS_1_611B47E192B9D09A_METHOD_1_68B32EB91B0DBCB4_OFFSET UNITYSDK_OFFSET(0xB72B2A0)
#define CLASS_1_611B47E192B9D09A_METHOD_1_6F399B0DD7F1C28A_OFFSET UNITYSDK_OFFSET(0xB72B620)
#define CLASS_1_611B47E192B9D09A_METHOD_1_78AAEE97CA3CECB5_OFFSET UNITYSDK_OFFSET(0xB72D7B0)
#define CLASS_1_611B47E192B9D09A_METHOD_1_868B43028BDC3BFA_OFFSET UNITYSDK_OFFSET(0xB72D370)
#define CLASS_1_611B47E192B9D09A_METHOD_1_8D9772F6745C5D7B_OFFSET UNITYSDK_OFFSET(0xB72D2F0)
#define CLASS_1_611B47E192B9D09A_METHOD_1_95C9A8D45FEC5B17_OFFSET UNITYSDK_OFFSET(0xB728CA0)
#define CLASS_1_611B47E192B9D09A_METHOD_1_97A4805235F59560_OFFSET UNITYSDK_OFFSET(0xB72B460)
#define CLASS_1_611B47E192B9D09A_METHOD_1_9E0833B0D6566F28_OFFSET UNITYSDK_OFFSET(0xB72A410)
#define CLASS_1_611B47E192B9D09A_METHOD_1_AAF0946A38F5B4FC_OFFSET UNITYSDK_OFFSET(0xB72D630)
#define CLASS_1_611B47E192B9D09A_METHOD_1_C38ADD3CBD8C83FF_1_OFFSET UNITYSDK_OFFSET(0xB72D5C0)
#define CLASS_1_611B47E192B9D09A_METHOD_1_C38ADD3CBD8C83FF_OFFSET UNITYSDK_OFFSET(0xB72D540)
#define CLASS_1_611B47E192B9D09A_METHOD_1_CD2EC0D03CAA1ECD_1_OFFSET UNITYSDK_OFFSET(0xB72A090)
#define CLASS_1_611B47E192B9D09A_METHOD_1_CD2EC0D03CAA1ECD_2_OFFSET UNITYSDK_OFFSET(0xB72A2C0)
#define CLASS_1_611B47E192B9D09A_METHOD_1_CD2EC0D03CAA1ECD_OFFSET UNITYSDK_OFFSET(0xB729F40)
#define CLASS_1_611B47E192B9D09A_METHOD_1_DE8143D57D9A7874_10_OFFSET UNITYSDK_OFFSET(0xB72CCD0)
#define CLASS_1_611B47E192B9D09A_METHOD_1_DE8143D57D9A7874_1_OFFSET UNITYSDK_OFFSET(0xB72A5E0)
#define CLASS_1_611B47E192B9D09A_METHOD_1_DE8143D57D9A7874_2_OFFSET UNITYSDK_OFFSET(0xB72A720)
#define CLASS_1_611B47E192B9D09A_METHOD_1_DE8143D57D9A7874_3_OFFSET UNITYSDK_OFFSET(0xB72A860)
#define CLASS_1_611B47E192B9D09A_METHOD_1_DE8143D57D9A7874_4_OFFSET UNITYSDK_OFFSET(0xB72A9A0)
#define CLASS_1_611B47E192B9D09A_METHOD_1_DE8143D57D9A7874_5_OFFSET UNITYSDK_OFFSET(0xB72AAE0)
#define CLASS_1_611B47E192B9D09A_METHOD_1_DE8143D57D9A7874_6_OFFSET UNITYSDK_OFFSET(0xB72AC20)
#define CLASS_1_611B47E192B9D09A_METHOD_1_DE8143D57D9A7874_7_OFFSET UNITYSDK_OFFSET(0xB72C750)
#define CLASS_1_611B47E192B9D09A_METHOD_1_DE8143D57D9A7874_8_OFFSET UNITYSDK_OFFSET(0xB72C890)
#define CLASS_1_611B47E192B9D09A_METHOD_1_DE8143D57D9A7874_9_OFFSET UNITYSDK_OFFSET(0xB72CB90)
#define CLASS_1_611B47E192B9D09A_METHOD_1_DE8143D57D9A7874_OFFSET UNITYSDK_OFFSET(0xB72A4A0)
#define CLASS_1_611B47E192B9D09A_METHOD_1_E69758BC72874DFF_OFFSET UNITYSDK_OFFSET(0xB72CFD0)

inline static constexpr unsigned int Class_1_611B47E192B9D09A_TypeDefinitionIndex = 48514;

class Class_1_611B47E192B9D09A : public ::System::Object
{
public:
	static ::UnityEngine::Transform** StaticGet_PAECDBJLLCM()
	{
		return (::UnityEngine::Transform**)Il2CppClass::FromTypeDefinitionIndex(Class_1_611B47E192B9D09A_TypeDefinitionIndex)->GetStaticField(0x64640);
	}
	static ::RPG::Client::DebugPerformanceInfoPanel** StaticGet_FNNJPCLHMPC()
	{
		return (::RPG::Client::DebugPerformanceInfoPanel**)Il2CppClass::FromTypeDefinitionIndex(Class_1_611B47E192B9D09A_TypeDefinitionIndex)->GetStaticField(0x64648);
	}
	static ::UnityEngine::Transform** StaticGet_PLADJIEFFBI()
	{
		return (::UnityEngine::Transform**)Il2CppClass::FromTypeDefinitionIndex(Class_1_611B47E192B9D09A_TypeDefinitionIndex)->GetStaticField(0x64650);
	}
	static ::UnityEngine::Transform** StaticGet_JPICPJEINDC()
	{
		return (::UnityEngine::Transform**)Il2CppClass::FromTypeDefinitionIndex(Class_1_611B47E192B9D09A_TypeDefinitionIndex)->GetStaticField(0x64658);
	}
	static ::UnityEngine::UI::Image** StaticGet_MEPIKEFJLHG()
	{
		return (::UnityEngine::UI::Image**)Il2CppClass::FromTypeDefinitionIndex(Class_1_611B47E192B9D09A_TypeDefinitionIndex)->GetStaticField(0x64660);
	}
	static ::UnityEngine::UI::Image** StaticGet_IEPFFCEBCDB()
	{
		return (::UnityEngine::UI::Image**)Il2CppClass::FromTypeDefinitionIndex(Class_1_611B47E192B9D09A_TypeDefinitionIndex)->GetStaticField(0x64668);
	}
	static ::RPG::Client::LocalizedText** StaticGet_IGKJFIBBOFE()
	{
		return (::RPG::Client::LocalizedText**)Il2CppClass::FromTypeDefinitionIndex(Class_1_611B47E192B9D09A_TypeDefinitionIndex)->GetStaticField(0x64670);
	}
	static ::UnityEngine::UI::Text** StaticGet_IOLCFAPCPDP()
	{
		return (::UnityEngine::UI::Text**)Il2CppClass::FromTypeDefinitionIndex(Class_1_611B47E192B9D09A_TypeDefinitionIndex)->GetStaticField(0x64678);
	}
	static ::UnityEngine::Transform** StaticGet_CPPMPGJCFMJ()
	{
		return (::UnityEngine::Transform**)Il2CppClass::FromTypeDefinitionIndex(Class_1_611B47E192B9D09A_TypeDefinitionIndex)->GetStaticField(0x64680);
	}
	static ::UnityEngine::Transform** StaticGet_LLADEPHOPBE()
	{
		return (::UnityEngine::Transform**)Il2CppClass::FromTypeDefinitionIndex(Class_1_611B47E192B9D09A_TypeDefinitionIndex)->GetStaticField(0x64688);
	}
	static ::RPG::Client::ClientOnlyCommonConfig** StaticGet_FJEPLGBIAOH()
	{
		return (::RPG::Client::ClientOnlyCommonConfig**)Il2CppClass::FromTypeDefinitionIndex(Class_1_611B47E192B9D09A_TypeDefinitionIndex)->GetStaticField(0x64690);
	}
	static ::UnityEngine::UI::Text** StaticGet_JDCABDNBIPH()
	{
		return (::UnityEngine::UI::Text**)Il2CppClass::FromTypeDefinitionIndex(Class_1_611B47E192B9D09A_TypeDefinitionIndex)->GetStaticField(0x64698);
	}
	static ::UnityEngine::UI::Text** StaticGet_FLMOCLGKGLI()
	{
		return (::UnityEngine::UI::Text**)Il2CppClass::FromTypeDefinitionIndex(Class_1_611B47E192B9D09A_TypeDefinitionIndex)->GetStaticField(0x646A0);
	}
	static ::CriWare::CriManaMovieMaterial** StaticGet_BAFJFDKDPON()
	{
		return (::CriWare::CriManaMovieMaterial**)Il2CppClass::FromTypeDefinitionIndex(Class_1_611B47E192B9D09A_TypeDefinitionIndex)->GetStaticField(0x646A8);
	}
	static ::UnityEngine::Transform** StaticGet_LHFCECHDELD()
	{
		return (::UnityEngine::Transform**)Il2CppClass::FromTypeDefinitionIndex(Class_1_611B47E192B9D09A_TypeDefinitionIndex)->GetStaticField(0x646B0);
	}
	static ::RPG::Client::LocalizedText** StaticGet_MBMGNOAGGJO()
	{
		return (::RPG::Client::LocalizedText**)Il2CppClass::FromTypeDefinitionIndex(Class_1_611B47E192B9D09A_TypeDefinitionIndex)->GetStaticField(0x646B8);
	}
	static ::RPG::Client::LocalizedText** StaticGet_CCDJOLNPLBJ()
	{
		return (::RPG::Client::LocalizedText**)Il2CppClass::FromTypeDefinitionIndex(Class_1_611B47E192B9D09A_TypeDefinitionIndex)->GetStaticField(0x646C0);
	}
	static ::UnityEngine::Canvas** StaticGet_EPOABONPPGJ()
	{
		return (::UnityEngine::Canvas**)Il2CppClass::FromTypeDefinitionIndex(Class_1_611B47E192B9D09A_TypeDefinitionIndex)->GetStaticField(0x646C8);
	}
	static ::UnityEngine::Transform** StaticGet_LIGEMMPFLKI()
	{
		return (::UnityEngine::Transform**)Il2CppClass::FromTypeDefinitionIndex(Class_1_611B47E192B9D09A_TypeDefinitionIndex)->GetStaticField(0x646D0);
	}
	static ::UnityEngine::UI::Image** StaticGet_BJKCBOCLKBL()
	{
		return (::UnityEngine::UI::Image**)Il2CppClass::FromTypeDefinitionIndex(Class_1_611B47E192B9D09A_TypeDefinitionIndex)->GetStaticField(0x646D8);
	}
	static ::UnityEngine::Transform** StaticGet_DOLBOABHAAM()
	{
		return (::UnityEngine::Transform**)Il2CppClass::FromTypeDefinitionIndex(Class_1_611B47E192B9D09A_TypeDefinitionIndex)->GetStaticField(0x646E0);
	}
	static ::RPG::Client::LocalizedText** StaticGet_AACOHEKCIDH()
	{
		return (::RPG::Client::LocalizedText**)Il2CppClass::FromTypeDefinitionIndex(Class_1_611B47E192B9D09A_TypeDefinitionIndex)->GetStaticField(0x646E8);
	}
	static ::UnityEngine::UI::Image** StaticGet_AFJIGEDHIPO()
	{
		return (::UnityEngine::UI::Image**)Il2CppClass::FromTypeDefinitionIndex(Class_1_611B47E192B9D09A_TypeDefinitionIndex)->GetStaticField(0x646F0);
	}
	static ::UnityEngine::Transform** StaticGet_NAFDDKLMGLL()
	{
		return (::UnityEngine::Transform**)Il2CppClass::FromTypeDefinitionIndex(Class_1_611B47E192B9D09A_TypeDefinitionIndex)->GetStaticField(0x646F8);
	}
	static ::UnityEngine::Transform** StaticGet_BGPIFFEJIJL()
	{
		return (::UnityEngine::Transform**)Il2CppClass::FromTypeDefinitionIndex(Class_1_611B47E192B9D09A_TypeDefinitionIndex)->GetStaticField(0x64700);
	}
	static ::UnityEngine::Transform** StaticGet_JILDIDPIJJH()
	{
		return (::UnityEngine::Transform**)Il2CppClass::FromTypeDefinitionIndex(Class_1_611B47E192B9D09A_TypeDefinitionIndex)->GetStaticField(0x64708);
	}
	static ::UnityEngine::UI::Image** StaticGet_MFMPHLIAAIH()
	{
		return (::UnityEngine::UI::Image**)Il2CppClass::FromTypeDefinitionIndex(Class_1_611B47E192B9D09A_TypeDefinitionIndex)->GetStaticField(0x64710);
	}
	static ::UnityEngine::Playables::PlayableDirector** StaticGet_OPNHINPCKOJ()
	{
		return (::UnityEngine::Playables::PlayableDirector**)Il2CppClass::FromTypeDefinitionIndex(Class_1_611B47E192B9D09A_TypeDefinitionIndex)->GetStaticField(0x64718);
	}
	static ::UnityEngine::Transform** StaticGet_EJIKHNFJGFI()
	{
		return (::UnityEngine::Transform**)Il2CppClass::FromTypeDefinitionIndex(Class_1_611B47E192B9D09A_TypeDefinitionIndex)->GetStaticField(0x64720);
	}
	static ::UnityEngine::Transform** StaticGet_EAOPEAJHBKG()
	{
		return (::UnityEngine::Transform**)Il2CppClass::FromTypeDefinitionIndex(Class_1_611B47E192B9D09A_TypeDefinitionIndex)->GetStaticField(0x64728);
	}
	static ::UnityEngine::Transform** StaticGet_NIKFDIBDGGJ()
	{
		return (::UnityEngine::Transform**)Il2CppClass::FromTypeDefinitionIndex(Class_1_611B47E192B9D09A_TypeDefinitionIndex)->GetStaticField(0x64730);
	}
	static ::UnityEngine::Transform** StaticGet_KGDOGDLMELJ()
	{
		return (::UnityEngine::Transform**)Il2CppClass::FromTypeDefinitionIndex(Class_1_611B47E192B9D09A_TypeDefinitionIndex)->GetStaticField(0x64738);
	}
	static ::UnityEngine::Transform** StaticGet_DGNBNJFKJLK()
	{
		return (::UnityEngine::Transform**)Il2CppClass::FromTypeDefinitionIndex(Class_1_611B47E192B9D09A_TypeDefinitionIndex)->GetStaticField(0x64740);
	}
	static ::RPG::Client::LocalizedText** StaticGet_APAPIBBMKDL()
	{
		return (::RPG::Client::LocalizedText**)Il2CppClass::FromTypeDefinitionIndex(Class_1_611B47E192B9D09A_TypeDefinitionIndex)->GetStaticField(0x64748);
	}
	static ::System::Boolean* StaticGet_BPFJNDHIFLD()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_611B47E192B9D09A_TypeDefinitionIndex)->GetStaticField(0x14C40);
	}
	static ::System::Boolean* StaticGet_PCMDPHMBOHC()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_611B47E192B9D09A_TypeDefinitionIndex)->GetStaticField(0x14C41);
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

	static ::UnityEngine::Transform* Method_1_CD2EC0D03CAA1ECD()
	{
		return ((::UnityEngine::Transform*(*)())((::PBYTE)hIl2Cpp + CLASS_1_611B47E192B9D09A_METHOD_1_CD2EC0D03CAA1ECD_OFFSET))();
	}

	static ::UnityEngine::Transform* Method_1_CD2EC0D03CAA1ECD_1()
	{
		return ((::UnityEngine::Transform*(*)())((::PBYTE)hIl2Cpp + CLASS_1_611B47E192B9D09A_METHOD_1_CD2EC0D03CAA1ECD_1_OFFSET))();
	}

	static ::UnityEngine::Canvas* Method_1_3E8A1FBDB0ECC40F()
	{
		return ((::UnityEngine::Canvas*(*)())((::PBYTE)hIl2Cpp + CLASS_1_611B47E192B9D09A_METHOD_1_3E8A1FBDB0ECC40F_OFFSET))();
	}

	static ::UnityEngine::Transform* Method_1_CD2EC0D03CAA1ECD_2()
	{
		return ((::UnityEngine::Transform*(*)())((::PBYTE)hIl2Cpp + CLASS_1_611B47E192B9D09A_METHOD_1_CD2EC0D03CAA1ECD_2_OFFSET))();
	}

	static ::UnityEngine::Camera* Method_1_9E0833B0D6566F28()
	{
		return ((::UnityEngine::Camera*(*)())((::PBYTE)hIl2Cpp + CLASS_1_611B47E192B9D09A_METHOD_1_9E0833B0D6566F28_OFFSET))();
	}

	static ::UnityEngine::Transform* Method_1_DE8143D57D9A7874()
	{
		return ((::UnityEngine::Transform*(*)())((::PBYTE)hIl2Cpp + CLASS_1_611B47E192B9D09A_METHOD_1_DE8143D57D9A7874_OFFSET))();
	}

	static ::UnityEngine::Transform* Method_1_DE8143D57D9A7874_1()
	{
		return ((::UnityEngine::Transform*(*)())((::PBYTE)hIl2Cpp + CLASS_1_611B47E192B9D09A_METHOD_1_DE8143D57D9A7874_1_OFFSET))();
	}

	static ::UnityEngine::Transform* Method_1_DE8143D57D9A7874_2()
	{
		return ((::UnityEngine::Transform*(*)())((::PBYTE)hIl2Cpp + CLASS_1_611B47E192B9D09A_METHOD_1_DE8143D57D9A7874_2_OFFSET))();
	}

	static ::UnityEngine::Transform* Method_1_DE8143D57D9A7874_3()
	{
		return ((::UnityEngine::Transform*(*)())((::PBYTE)hIl2Cpp + CLASS_1_611B47E192B9D09A_METHOD_1_DE8143D57D9A7874_3_OFFSET))();
	}

	static ::UnityEngine::Transform* Method_1_DE8143D57D9A7874_4()
	{
		return ((::UnityEngine::Transform*(*)())((::PBYTE)hIl2Cpp + CLASS_1_611B47E192B9D09A_METHOD_1_DE8143D57D9A7874_4_OFFSET))();
	}

	static ::UnityEngine::Transform* Method_1_DE8143D57D9A7874_5()
	{
		return ((::UnityEngine::Transform*(*)())((::PBYTE)hIl2Cpp + CLASS_1_611B47E192B9D09A_METHOD_1_DE8143D57D9A7874_5_OFFSET))();
	}

	static ::UnityEngine::Transform* Method_1_DE8143D57D9A7874_6()
	{
		return ((::UnityEngine::Transform*(*)())((::PBYTE)hIl2Cpp + CLASS_1_611B47E192B9D09A_METHOD_1_DE8143D57D9A7874_6_OFFSET))();
	}

	static ::UnityEngine::UI::Text* Method_1_1B2740C3E67BDE48()
	{
		return ((::UnityEngine::UI::Text*(*)())((::PBYTE)hIl2Cpp + CLASS_1_611B47E192B9D09A_METHOD_1_1B2740C3E67BDE48_OFFSET))();
	}

	static ::UnityEngine::UI::Text* Method_1_1B2740C3E67BDE48_1()
	{
		return ((::UnityEngine::UI::Text*(*)())((::PBYTE)hIl2Cpp + CLASS_1_611B47E192B9D09A_METHOD_1_1B2740C3E67BDE48_1_OFFSET))();
	}

	static ::UnityEngine::UI::Text* Method_1_1B2740C3E67BDE48_2()
	{
		return ((::UnityEngine::UI::Text*(*)())((::PBYTE)hIl2Cpp + CLASS_1_611B47E192B9D09A_METHOD_1_1B2740C3E67BDE48_2_OFFSET))();
	}

	static ::UnityEngine::UI::Image* Method_1_68B32EB91B0DBCB4()
	{
		return ((::UnityEngine::UI::Image*(*)())((::PBYTE)hIl2Cpp + CLASS_1_611B47E192B9D09A_METHOD_1_68B32EB91B0DBCB4_OFFSET))();
	}

	static ::CriWare::CriManaMovieMaterial* Method_1_97A4805235F59560()
	{
		return ((::CriWare::CriManaMovieMaterial*(*)())((::PBYTE)hIl2Cpp + CLASS_1_611B47E192B9D09A_METHOD_1_97A4805235F59560_OFFSET))();
	}

	static ::RPG::Client::DebugPerformanceInfoPanel* Method_1_6F399B0DD7F1C28A()
	{
		return ((::RPG::Client::DebugPerformanceInfoPanel*(*)())((::PBYTE)hIl2Cpp + CLASS_1_611B47E192B9D09A_METHOD_1_6F399B0DD7F1C28A_OFFSET))();
	}

	static ::RPG::Client::LocalizedText* Method_1_3B028BDF292CD17F()
	{
		return ((::RPG::Client::LocalizedText*(*)())((::PBYTE)hIl2Cpp + CLASS_1_611B47E192B9D09A_METHOD_1_3B028BDF292CD17F_OFFSET))();
	}

	static ::UnityEngine::UI::Image* Method_1_68B32EB91B0DBCB4_1()
	{
		return ((::UnityEngine::UI::Image*(*)())((::PBYTE)hIl2Cpp + CLASS_1_611B47E192B9D09A_METHOD_1_68B32EB91B0DBCB4_1_OFFSET))();
	}

	static ::UnityEngine::UI::Image* Method_1_10E682F51C1A047C()
	{
		return ((::UnityEngine::UI::Image*(*)())((::PBYTE)hIl2Cpp + CLASS_1_611B47E192B9D09A_METHOD_1_10E682F51C1A047C_OFFSET))();
	}

	static ::RPG::Client::LocalizedText* Method_1_3B028BDF292CD17F_1()
	{
		return ((::RPG::Client::LocalizedText*(*)())((::PBYTE)hIl2Cpp + CLASS_1_611B47E192B9D09A_METHOD_1_3B028BDF292CD17F_1_OFFSET))();
	}

	static ::RPG::Client::LocalizedText* Method_1_3B028BDF292CD17F_2()
	{
		return ((::RPG::Client::LocalizedText*(*)())((::PBYTE)hIl2Cpp + CLASS_1_611B47E192B9D09A_METHOD_1_3B028BDF292CD17F_2_OFFSET))();
	}

	static ::RPG::Client::LocalizedText* Method_1_3B028BDF292CD17F_3()
	{
		return ((::RPG::Client::LocalizedText*(*)())((::PBYTE)hIl2Cpp + CLASS_1_611B47E192B9D09A_METHOD_1_3B028BDF292CD17F_3_OFFSET))();
	}

	static ::RPG::Client::LocalizedText* Method_1_3B028BDF292CD17F_4()
	{
		return ((::RPG::Client::LocalizedText*(*)())((::PBYTE)hIl2Cpp + CLASS_1_611B47E192B9D09A_METHOD_1_3B028BDF292CD17F_4_OFFSET))();
	}

	static ::UnityEngine::Transform* Method_1_DE8143D57D9A7874_7()
	{
		return ((::UnityEngine::Transform*(*)())((::PBYTE)hIl2Cpp + CLASS_1_611B47E192B9D09A_METHOD_1_DE8143D57D9A7874_7_OFFSET))();
	}

	static ::UnityEngine::Transform* Method_1_DE8143D57D9A7874_8()
	{
		return ((::UnityEngine::Transform*(*)())((::PBYTE)hIl2Cpp + CLASS_1_611B47E192B9D09A_METHOD_1_DE8143D57D9A7874_8_OFFSET))();
	}

	static ::UnityEngine::UI::Image* Method_1_68B32EB91B0DBCB4_2()
	{
		return ((::UnityEngine::UI::Image*(*)())((::PBYTE)hIl2Cpp + CLASS_1_611B47E192B9D09A_METHOD_1_68B32EB91B0DBCB4_2_OFFSET))();
	}

	static ::UnityEngine::Transform* Method_1_DE8143D57D9A7874_9()
	{
		return ((::UnityEngine::Transform*(*)())((::PBYTE)hIl2Cpp + CLASS_1_611B47E192B9D09A_METHOD_1_DE8143D57D9A7874_9_OFFSET))();
	}

	static ::UnityEngine::Transform* Method_1_DE8143D57D9A7874_10()
	{
		return ((::UnityEngine::Transform*(*)())((::PBYTE)hIl2Cpp + CLASS_1_611B47E192B9D09A_METHOD_1_DE8143D57D9A7874_10_OFFSET))();
	}

	static ::UnityEngine::UI::Image* Method_1_68B32EB91B0DBCB4_3()
	{
		return ((::UnityEngine::UI::Image*(*)())((::PBYTE)hIl2Cpp + CLASS_1_611B47E192B9D09A_METHOD_1_68B32EB91B0DBCB4_3_OFFSET))();
	}

	static ::UnityEngine::GameObject* Method_1_E69758BC72874DFF()
	{
		return ((::UnityEngine::GameObject*(*)())((::PBYTE)hIl2Cpp + CLASS_1_611B47E192B9D09A_METHOD_1_E69758BC72874DFF_OFFSET))();
	}

	static ::UnityEngine::Transform* Method_1_36CD98119ACA0760()
	{
		return ((::UnityEngine::Transform*(*)())((::PBYTE)hIl2Cpp + CLASS_1_611B47E192B9D09A_METHOD_1_36CD98119ACA0760_OFFSET))();
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

	static ::UnityEngine::GameObject* Method_1_AAF0946A38F5B4FC(::UnityEngine::GameObject* a1, ::System::String* a2)
	{
		return ((::UnityEngine::GameObject*(*)(::UnityEngine::GameObject*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_611B47E192B9D09A_METHOD_1_AAF0946A38F5B4FC_OFFSET))(a1, a2);
	}

	static ::UnityEngine::Transform* Method_1_054FEA4718D8370C(::System::String* a1, ::System::String* a2)
	{
		return ((::UnityEngine::Transform*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_611B47E192B9D09A_METHOD_1_054FEA4718D8370C_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::AnchorInfo* Method_1_78AAEE97CA3CECB5(::System::String* a1, ::System::String* a2)
	{
		return ((::RPG::GameCore::AnchorInfo*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_611B47E192B9D09A_METHOD_1_78AAEE97CA3CECB5_OFFSET))(a1, a2);
	}

	static ::UnityEngine::GameObject* Method_1_2DCAF97EF4A7682E(::System::String* a1)
	{
		return ((::UnityEngine::GameObject*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_611B47E192B9D09A_METHOD_1_2DCAF97EF4A7682E_OFFSET))(a1);
	}
};
