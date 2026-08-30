#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::CrowdAnimator { class SkinnedMeshData; }
namespace System { class String; }
namespace UnityEngine { class ComputeShader; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class Texture2D; }

#define CLASS_1_FEB155D0266B65E2_METHOD_1_3BC9430E920E18AE_OFFSET UNITYSDK_OFFSET(0x19181130)
#define CLASS_1_FEB155D0266B65E2_METHOD_1_8B50C99A62E03A3E_OFFSET UNITYSDK_OFFSET(0x191810D0)
#define CLASS_1_FEB155D0266B65E2__CCTOR_OFFSET UNITYSDK_OFFSET(0x19181820)

inline static constexpr unsigned int Class_1_FEB155D0266B65E2_TypeDefinitionIndex = 73620;

class Class_1_FEB155D0266B65E2 : public ::System::Object
{
public:
	static ::System::Boolean* StaticGet_DPHNNDMOCPJ()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_FEB155D0266B65E2_TypeDefinitionIndex)->GetStaticField(0xA580);
	}
	static ::System::Boolean* StaticGet_EEEMBMAHNMJ()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_FEB155D0266B65E2_TypeDefinitionIndex)->GetStaticField(0xA581);
	}
	static ::System::Int32* StaticGet_NNADHCHDDBE()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_FEB155D0266B65E2_TypeDefinitionIndex)->GetStaticField(0xA584);
	}
	// static const ::System::String* HOAFODJBPLL; // 0x0
	// static const ::System::String* HKIMHMBFNBB; // 0x0
	// static const ::System::String* NDKEHKILJIE; // 0x0
	// static const ::System::String* BLEDIIGHOEH; // 0x0
	// static const ::System::String* ACPNABKGIDE; // 0x0
	// static const ::System::String* FAKPCABCIGK; // 0x0
	// static const ::System::String* OLGHLHFONID; // 0x0
	// static const ::System::String* MKJGHONPCKG; // 0x0
	// static const ::System::String* GOPBCJLAKAD; // 0x0
	// static const ::System::String* GGELHNGBKKG; // 0x0
	// static const ::System::String* FNAOEPPMJMH; // 0x0
	// static const ::System::String* GAOBOPJHFKH; // 0x0
	// static const ::System::String* MGOFNPJAHCL; // 0x0
	// static const ::System::Int32 IKHGOFPKMPL = 0x40; // 0x0
	// static const ::System::Int32 CCAFDCIMAOG = 0x30; // 0x0
	// static const ::System::Int32 FJGLHKFNIEE = 0x20; // 0x0
	// static const ::System::Int32 KLGALKGLLNJ = 0x4; // 0x0
	// static const ::System::Int32 EJILHMLDEJI = 0x4; // 0x0
	// static const ::System::Int32 NECJDPIBOIC = 0x4; // 0x0
	// static const ::System::Int32 PJAGAJHHLFD = 0x8; // 0x0
	// static const ::System::Int32 PCGHJEKBDII = 0x10; // 0x0
	// static const ::System::Single GMJAOGILEPK; // 0x0
	// static const ::System::Single FDIFODCEKFM; // 0x0
	// static const ::System::Int32 EGMILPLIGGA = 0x400; // 0x0
	// static const ::System::Int32 CLKEACLBBMN = 0x20; // 0x0
	// static const ::System::Int32 BEFLKBKBKJC = 0x20; // 0x0
	// static const ::System::Single EDINGBLEIGN; // 0x0
	// static const ::System::Int32 BJNOOEIGCLP = 0x0; // 0x0
	// static const ::System::Int32 EEPJNJGLJAK = 0x4; // 0x0
	// static const ::System::Int32 EPODLKIMCAM = 0x4; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_FEB155D0266B65E2__CCTOR_OFFSET))();
	}

	static ::UnityEngine::ComputeShader* Method_1_8B50C99A62E03A3E(::System::String* a1)
	{
		return ((::UnityEngine::ComputeShader*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_FEB155D0266B65E2_METHOD_1_8B50C99A62E03A3E_OFFSET))(a1);
	}

	static ::UnityEngine::Texture2D* Method_1_3BC9430E920E18AE(::UnityEngine::Mesh* a1, ::RPG::Client::CrowdAnimator::SkinnedMeshData* a2)
	{
		return ((::UnityEngine::Texture2D*(*)(::UnityEngine::Mesh*, ::RPG::Client::CrowdAnimator::SkinnedMeshData*))((::PBYTE)hIl2Cpp + CLASS_1_FEB155D0266B65E2_METHOD_1_3BC9430E920E18AE_OFFSET))(a1, a2);
	}
};
