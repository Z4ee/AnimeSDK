#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FrameCaptureFadeoutType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class UIMeta; }
namespace RPG::Client { class UIValueChangeAnimation; }
namespace System { class Action; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine::UI { class RawImage; }

#define CLASS_1_2A8F67D376A2BFDB_CLEAR_OFFSET UNITYSDK_OFFSET(0x158E20D0)
#define CLASS_1_2A8F67D376A2BFDB_GET_CAPTURETEXTURE_OFFSET UNITYSDK_OFFSET(0x158E22A0)
#define CLASS_1_2A8F67D376A2BFDB_METHOD_1_3844928E9495F691_OFFSET UNITYSDK_OFFSET(0x158E2210)
#define CLASS_1_2A8F67D376A2BFDB_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x158E21B0)
#define CLASS_1_2A8F67D376A2BFDB_SET_CAPTURETEXTURE_OFFSET UNITYSDK_OFFSET(0x158E22B0)
#define CLASS_1_2A8F67D376A2BFDB__CTOR_OFFSET UNITYSDK_OFFSET(0x158E22C0)

inline static constexpr unsigned int Class_1_2A8F67D376A2BFDB_TypeDefinitionIndex = 72713;

class Class_1_2A8F67D376A2BFDB : public ::System::Object
{
public:
	::UnityEngine::RenderTexture* _CaptureTexture_k__BackingField; // 0x10
	::RPG::Client::UIMeta* FGACGGHECGO; // 0x18
	::RPG::Client::UIValueChangeAnimation* MKNKLKMHLBB; // 0x20
	::UnityEngine::UI::RawImage* LLEBFFLOKFK; // 0x28
	::System::Action* COJINAIKIID; // 0x30
	::System::Single HLMHCCCJFBA; // 0x38
	::RPG::GameCore::FrameCaptureFadeoutType PFNGCIBCAAN; // 0x3C
	::System::Single MNEMEGANFBD; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2A8F67D376A2BFDB__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2A8F67D376A2BFDB_CLEAR_OFFSET))(this);
	}

	::System::Void Method_1_3844928E9495F691(::UnityEngine::RenderTexture* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::RenderTexture*))((::PBYTE)hIl2Cpp + CLASS_1_2A8F67D376A2BFDB_METHOD_1_3844928E9495F691_OFFSET))(this, a1);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2A8F67D376A2BFDB_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::UnityEngine::RenderTexture* get_CaptureTexture()
	{
		return ((::UnityEngine::RenderTexture*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2A8F67D376A2BFDB_GET_CAPTURETEXTURE_OFFSET))(this);
	}

	::System::Void set_CaptureTexture(::UnityEngine::RenderTexture* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::RenderTexture*))((::PBYTE)hIl2Cpp + CLASS_1_2A8F67D376A2BFDB_SET_CAPTURETEXTURE_OFFSET))(this, a1);
	}
};
