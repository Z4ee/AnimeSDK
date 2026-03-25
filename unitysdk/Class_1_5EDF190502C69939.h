#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/FrameCapture_CaptureFeature.h"
#include "unitysdk/RPG/CustomRP/FrameCapture_CaptureType.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class RenderTexture; }

#define CLASS_1_5EDF190502C69939_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xD1AB7F0)
#define CLASS_1_5EDF190502C69939_METHOD_1_46AACBD5F2272C44_OFFSET UNITYSDK_OFFSET(0xD1AB8E0)
#define CLASS_1_5EDF190502C69939_METHOD_1_806F7294BDC72AF8_OFFSET UNITYSDK_OFFSET(0xD1ABB10)
#define CLASS_1_5EDF190502C69939_METHOD_1_8DC7A8D48742DFD6_OFFSET UNITYSDK_OFFSET(0xD1ABE40)
#define CLASS_1_5EDF190502C69939_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xD1ABDD0)
#define CLASS_1_5EDF190502C69939_SET_CURRENT_OFFSET UNITYSDK_OFFSET(0xD1AB800)
#define CLASS_1_5EDF190502C69939__CTOR_OFFSET UNITYSDK_OFFSET(0xD1AB810)

inline static constexpr unsigned int Class_1_5EDF190502C69939_TypeDefinitionIndex = 59654;

class Class_1_5EDF190502C69939 : public ::System::Object
{
public:
	static ::Class_1_5EDF190502C69939** StaticGet__Current_k__BackingField()
	{
		return (::Class_1_5EDF190502C69939**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5EDF190502C69939_TypeDefinitionIndex)->GetStaticField(0x15980);
	}
	::UnityEngine::RenderTexture* Field_1_2; // 0x10
	::System::Int32 Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5EDF190502C69939__CTOR_OFFSET))(this);
	}

	static ::Class_1_5EDF190502C69939* get_Current()
	{
		return ((::Class_1_5EDF190502C69939*(*)())((::PBYTE)hIl2Cpp + CLASS_1_5EDF190502C69939_GET_CURRENT_OFFSET))();
	}

	static ::System::Void set_Current(::Class_1_5EDF190502C69939* value)
	{
		return ((::System::Void(*)(::Class_1_5EDF190502C69939*))((::PBYTE)hIl2Cpp + CLASS_1_5EDF190502C69939_SET_CURRENT_OFFSET))(value);
	}

	static ::UnityEngine::RenderTexture* Method_1_46AACBD5F2272C44(::System::Single a1, ::RPG::CustomRP::FrameCapture_CaptureType a2, ::RPG::CustomRP::FrameCapture_CaptureFeature a3)
	{
		return ((::UnityEngine::RenderTexture*(*)(::System::Single, ::RPG::CustomRP::FrameCapture_CaptureType, ::RPG::CustomRP::FrameCapture_CaptureFeature))((::PBYTE)hIl2Cpp + CLASS_1_5EDF190502C69939_METHOD_1_46AACBD5F2272C44_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_806F7294BDC72AF8(::UnityEngine::RenderTexture* a1, ::RPG::CustomRP::FrameCapture_CaptureType a2, ::RPG::CustomRP::FrameCapture_CaptureFeature a3)
	{
		return ((::System::Void(*)(::UnityEngine::RenderTexture*, ::RPG::CustomRP::FrameCapture_CaptureType, ::RPG::CustomRP::FrameCapture_CaptureFeature))((::PBYTE)hIl2Cpp + CLASS_1_5EDF190502C69939_METHOD_1_806F7294BDC72AF8_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5EDF190502C69939_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::UnityEngine::RenderTexture* Method_1_8DC7A8D48742DFD6()
	{
		return ((::UnityEngine::RenderTexture*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5EDF190502C69939_METHOD_1_8DC7A8D48742DFD6_OFFSET))(this);
	}
};
