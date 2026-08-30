#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/HideFlags.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/VLB/AttenuationEquation.h"
#include "unitysdk/VLB/BlendingMode.h"
#include "unitysdk/VLB/ColorMode.h"
#include "unitysdk/VLB/MeshType.h"
#include "unitysdk/VLB/OccluderDimensions.h"
#include "unitysdk/VLB/PlaneAlignment.h"
#include "unitysdk/VLB/RenderQueue.h"
#include "unitysdk/VLB/RenderingMode.h"

namespace System { class String; }

#define CLASS_1_D9F8312298567B44_METHOD_1_43CCBC2ADB276A81_OFFSET UNITYSDK_OFFSET(0x1521AE60)
#define CLASS_1_D9F8312298567B44__CCTOR_OFFSET UNITYSDK_OFFSET(0x1521AEC0)

inline static constexpr unsigned int Class_1_D9F8312298567B44_TypeDefinitionIndex = 49412;

class Class_1_D9F8312298567B44 : public ::System::Object
{
public:
	static ::UnityEngine::Vector3* StaticGet_BFJMPGOIEND()
	{
		return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D9F8312298567B44_TypeDefinitionIndex)->GetStaticField(0x11D00);
	}
	static ::System::Boolean* StaticGet_AMLFKIFMDAF()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D9F8312298567B44_TypeDefinitionIndex)->GetStaticField(0x11D0C);
	}
	static ::UnityEngine::LayerMask* StaticGet_NJHGKJIKBPB()
	{
		return (::UnityEngine::LayerMask*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D9F8312298567B44_TypeDefinitionIndex)->GetStaticField(0x11D10);
	}
	static ::UnityEngine::Color* StaticGet_COEBBAICICB()
	{
		return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D9F8312298567B44_TypeDefinitionIndex)->GetStaticField(0x11D14);
	}
	// static const ::System::String* MHJAEKOHKEM; // 0x0
	// static const ::System::String* FPGAEPJPFKG; // 0x0
	// static const ::System::String* KPIGKKECBJI; // 0x0
	// static const ::System::String* NPFPPBBIEMJ; // 0x0
	// static const ::System::String* OGBGEDHCMLB; // 0x0
	// static const ::System::String* JPOFEALLDAM; // 0x0
	// static const ::VLB::ColorMode EDONCLHELID; // 0x0
	// static const ::System::Single EIBGEGPABFK; // 0x0
	// static const ::System::Single LGGLKIIPBDL; // 0x0
	// static const ::System::Single HHPLCDMBCKG; // 0x0
	// static const ::System::Single IBEPFPMIFPB; // 0x0
	// static const ::System::Single CDFAMKFPNAM; // 0x0
	// static const ::VLB::MeshType KHJAEHBOIIJ; // 0x0
	// static const ::System::Int32 GOLFGHKGCBK = 0x12; // 0x0
	// static const ::System::Int32 MMLGOHBMEBK = 0x3; // 0x0
	// static const ::System::Int32 PJCGKDLPCLK = 0x100; // 0x0
	// static const ::System::Int32 MANODPLNBHH = 0x5; // 0x0
	// static const ::System::Int32 JFMMFMMMFHI = 0x0; // 0x0
	// static const ::System::Int32 BGHLCGFBEAD = 0x40; // 0x0
	// static const ::System::Boolean APGPAPIMOHB; // 0x0
	// static const ::VLB::AttenuationEquation GBDJKCCMLJA; // 0x0
	// static const ::System::Single PKKMDCPDFHB; // 0x0
	// static const ::System::Single PHMLPNLEMLL; // 0x0
	// static const ::System::Single AJMGIPPBKDK; // 0x0
	// static const ::System::Single NPBNFCOBAGI; // 0x0
	// static const ::System::Single OHIEEGICNAL; // 0x0
	// static const ::System::Single HAEHPKHPHCB; // 0x0
	// static const ::System::Single JMOIJJPNNJM; // 0x0
	// static const ::System::Single OPNPBAHOIOA; // 0x0
	// static const ::System::Single JODNFMDAJEE; // 0x0
	// static const ::System::Single GCDFHFJAJJL; // 0x0
	// static const ::System::Single ANGDMMINGON; // 0x0
	// static const ::System::Single FONHJCGKAMM; // 0x0
	// static const ::System::Single GIADFDIICFO; // 0x0
	// static const ::System::Single EECHBEDENBO; // 0x0
	// static const ::System::Single FLIGCCKJJBH; // 0x0
	// static const ::System::Single NLOAMFJNCKA; // 0x0
	// static const ::System::Single OBIDEPFBKNH; // 0x0
	// static const ::System::Single MCEOBAKLJCK; // 0x0
	// static const ::VLB::BlendingMode FAPIHKMIOMA; // 0x0
	// static const ::VLB::OccluderDimensions HPJFAPFHJIJ; // 0x0
	// static const ::System::Single PJJKJICMEIN; // 0x0
	// static const ::System::Int32 PHBPFPDJGKP = 0x3; // 0x0
	// static const ::System::Single CMGKDIOCOCC; // 0x0
	// static const ::System::Single OJLPNMFGBJD; // 0x0
	// static const ::System::Single GONHLDHJDIJ; // 0x0
	// static const ::System::Single EPGAMHPGBMG; // 0x0
	// static const ::System::Single NDEJBELGJMK; // 0x0
	// static const ::System::Single MBDKPDCAJHG; // 0x0
	// static const ::VLB::PlaneAlignment LFAIDOKCAKP; // 0x0
	// static const ::System::Single NJGDAOABMHF; // 0x0
	// static const ::System::Boolean MFPNIIJLJNG; // 0x0
	// static const ::System::Int32 AELDECEBHLA = 0x1; // 0x0
	// static const ::System::String* ELHHFMLBHKB; // 0x0
	// static const ::VLB::RenderQueue EOEJEAMMBCM; // 0x0
	// static const ::VLB::RenderingMode LBMJNEJNAEG; // 0x0
	// static const ::System::Int32 EOPKAAJCBCL = 0x40; // 0x0
	// static const ::System::Int32 MNNCAMNLBEO = 0x18; // 0x0
	// static const ::System::Int32 AHGBCHBBHMC = 0x5; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D9F8312298567B44__CCTOR_OFFSET))();
	}

	static ::UnityEngine::HideFlags Method_1_43CCBC2ADB276A81()
	{
		return ((::UnityEngine::HideFlags(*)())((::PBYTE)hIl2Cpp + CLASS_1_D9F8312298567B44_METHOD_1_43CCBC2ADB276A81_OFFSET))();
	}
};
