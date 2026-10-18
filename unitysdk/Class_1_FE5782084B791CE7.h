#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/FrameCapture_CaptureFeature.h"
#include "unitysdk/RPG/CustomRP/FrameCapture_CaptureType.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class RenderTexture; }

#define CLASS_1_FE5782084B791CE7_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x15575D00)
#define CLASS_1_FE5782084B791CE7_METHOD_1_0DDE007B02BA96A9_OFFSET UNITYSDK_OFFSET(0x15576050)
#define CLASS_1_FE5782084B791CE7_METHOD_1_1EF92B1268187A11_OFFSET UNITYSDK_OFFSET(0x15575E00)
#define CLASS_1_FE5782084B791CE7_METHOD_1_8DC7A8D48742DFD6_OFFSET UNITYSDK_OFFSET(0x155763B0)
#define CLASS_1_FE5782084B791CE7_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x15576340)
#define CLASS_1_FE5782084B791CE7_SET_CURRENT_OFFSET UNITYSDK_OFFSET(0x15575D10)
#define CLASS_1_FE5782084B791CE7__CTOR_OFFSET UNITYSDK_OFFSET(0x15575D20)

inline static constexpr unsigned int Class_1_FE5782084B791CE7_TypeDefinitionIndex = 72787;

class Class_1_FE5782084B791CE7 : public ::System::Object
{
public:
	static ::Class_1_FE5782084B791CE7** StaticGet__Current_k__BackingField()
	{
		return (::Class_1_FE5782084B791CE7**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FE5782084B791CE7_TypeDefinitionIndex)->GetStaticField(0x40330);
	}
	::UnityEngine::RenderTexture* ABCJACPIIGJ; // 0x10
	::System::Int32 DOOKGCECNPB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FE5782084B791CE7__CTOR_OFFSET))(this);
	}

	static ::Class_1_FE5782084B791CE7* get_Current()
	{
		return ((::Class_1_FE5782084B791CE7*(*)())((::PBYTE)hIl2Cpp + CLASS_1_FE5782084B791CE7_GET_CURRENT_OFFSET))();
	}

	static ::System::Void set_Current(::Class_1_FE5782084B791CE7* a1)
	{
		return ((::System::Void(*)(::Class_1_FE5782084B791CE7*))((::PBYTE)hIl2Cpp + CLASS_1_FE5782084B791CE7_SET_CURRENT_OFFSET))(a1);
	}

	static ::UnityEngine::RenderTexture* Method_1_1EF92B1268187A11(::System::Single a1, ::RPG::CustomRP::FrameCapture_CaptureType a2, ::RPG::CustomRP::FrameCapture_CaptureFeature a3)
	{
		return ((::UnityEngine::RenderTexture*(*)(::System::Single, ::RPG::CustomRP::FrameCapture_CaptureType, ::RPG::CustomRP::FrameCapture_CaptureFeature))((::PBYTE)hIl2Cpp + CLASS_1_FE5782084B791CE7_METHOD_1_1EF92B1268187A11_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0DDE007B02BA96A9(::UnityEngine::RenderTexture* a1, ::RPG::CustomRP::FrameCapture_CaptureType a2, ::RPG::CustomRP::FrameCapture_CaptureFeature a3)
	{
		return ((::System::Void(*)(::UnityEngine::RenderTexture*, ::RPG::CustomRP::FrameCapture_CaptureType, ::RPG::CustomRP::FrameCapture_CaptureFeature))((::PBYTE)hIl2Cpp + CLASS_1_FE5782084B791CE7_METHOD_1_0DDE007B02BA96A9_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FE5782084B791CE7_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::UnityEngine::RenderTexture* Method_1_8DC7A8D48742DFD6()
	{
		return ((::UnityEngine::RenderTexture*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FE5782084B791CE7_METHOD_1_8DC7A8D48742DFD6_OFFSET))(this);
	}
};
