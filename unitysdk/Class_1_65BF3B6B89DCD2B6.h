#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/FrameCapture_CaptureFeature.h"
#include "unitysdk/RPG/CustomRP/FrameCapture_CaptureType.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class RenderTexture; }

#define CLASS_1_65BF3B6B89DCD2B6_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x185FB040)
#define CLASS_1_65BF3B6B89DCD2B6_METHOD_1_71107EE52E007EE8_OFFSET UNITYSDK_OFFSET(0x185FB140)
#define CLASS_1_65BF3B6B89DCD2B6_METHOD_1_8DC7A8D48742DFD6_OFFSET UNITYSDK_OFFSET(0x185FB6A0)
#define CLASS_1_65BF3B6B89DCD2B6_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x185FB630)
#define CLASS_1_65BF3B6B89DCD2B6_METHOD_1_B1C4282F23D6329E_OFFSET UNITYSDK_OFFSET(0x185FB370)
#define CLASS_1_65BF3B6B89DCD2B6_SET_CURRENT_OFFSET UNITYSDK_OFFSET(0x185FB050)
#define CLASS_1_65BF3B6B89DCD2B6__CTOR_OFFSET UNITYSDK_OFFSET(0x185FB060)

inline static constexpr unsigned int Class_1_65BF3B6B89DCD2B6_TypeDefinitionIndex = 69478;

class Class_1_65BF3B6B89DCD2B6 : public ::System::Object
{
public:
	static ::Class_1_65BF3B6B89DCD2B6** StaticGet__Current_k__BackingField()
	{
		return (::Class_1_65BF3B6B89DCD2B6**)Il2CppClass::FromTypeDefinitionIndex(Class_1_65BF3B6B89DCD2B6_TypeDefinitionIndex)->GetStaticField(0x30460);
	}
	::UnityEngine::RenderTexture* Field_1_1; // 0x10
	::System::Int32 Field_1_2; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_65BF3B6B89DCD2B6__CTOR_OFFSET))(this);
	}

	static ::Class_1_65BF3B6B89DCD2B6* get_Current()
	{
		return ((::Class_1_65BF3B6B89DCD2B6*(*)())((::PBYTE)hIl2Cpp + CLASS_1_65BF3B6B89DCD2B6_GET_CURRENT_OFFSET))();
	}

	static ::System::Void set_Current(::Class_1_65BF3B6B89DCD2B6* a1)
	{
		return ((::System::Void(*)(::Class_1_65BF3B6B89DCD2B6*))((::PBYTE)hIl2Cpp + CLASS_1_65BF3B6B89DCD2B6_SET_CURRENT_OFFSET))(a1);
	}

	static ::UnityEngine::RenderTexture* Method_1_71107EE52E007EE8(::System::Single a1, ::RPG::CustomRP::FrameCapture_CaptureType a2, ::RPG::CustomRP::FrameCapture_CaptureFeature a3)
	{
		return ((::UnityEngine::RenderTexture*(*)(::System::Single, ::RPG::CustomRP::FrameCapture_CaptureType, ::RPG::CustomRP::FrameCapture_CaptureFeature))((::PBYTE)hIl2Cpp + CLASS_1_65BF3B6B89DCD2B6_METHOD_1_71107EE52E007EE8_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_B1C4282F23D6329E(::UnityEngine::RenderTexture* a1, ::RPG::CustomRP::FrameCapture_CaptureType a2, ::RPG::CustomRP::FrameCapture_CaptureFeature a3)
	{
		return ((::System::Void(*)(::UnityEngine::RenderTexture*, ::RPG::CustomRP::FrameCapture_CaptureType, ::RPG::CustomRP::FrameCapture_CaptureFeature))((::PBYTE)hIl2Cpp + CLASS_1_65BF3B6B89DCD2B6_METHOD_1_B1C4282F23D6329E_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_65BF3B6B89DCD2B6_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::UnityEngine::RenderTexture* Method_1_8DC7A8D48742DFD6()
	{
		return ((::UnityEngine::RenderTexture*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_65BF3B6B89DCD2B6_METHOD_1_8DC7A8D48742DFD6_OFFSET))(this);
	}
};
