#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_50FE0F81D72F755C.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_E87F1D15F1D4AC72;
namespace MoleMole { class UIThreeDMapElement_BigSceneStoreContext; }
namespace System { class String; }
namespace UnityEngine { class RectTransform; }

#define CLASS_3_AAAC44FF4CB2D937_4_METHOD_3_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x18B56AB0)
#define CLASS_3_AAAC44FF4CB2D937_4_METHOD_3_3E058A8B3089DC74_OFFSET UNITYSDK_OFFSET(0x18B56A60)
#define CLASS_3_AAAC44FF4CB2D937_4_METHOD_3_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0x18B56990)
#define CLASS_3_AAAC44FF4CB2D937_4_METHOD_3_E9DD3ECB433053C3_OFFSET UNITYSDK_OFFSET(0x18B567F0)
#define CLASS_3_AAAC44FF4CB2D937_4__CTOR_OFFSET UNITYSDK_OFFSET(0x18B56A00)

inline static constexpr unsigned int Class_3_AAAC44FF4CB2D937_4_TypeDefinitionIndex = 85821;

class Class_3_AAAC44FF4CB2D937_4 : public ::Class_2_50FE0F81D72F755C<::MoleMole::UIThreeDMapElement_BigSceneStoreContext*>
{
public:
	::UnityEngine::RectTransform* Field_3_0; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AAAC44FF4CB2D937_4__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_E9DD3ECB433053C3(::Struct_2_575273D27F02957E& a1, ::Class_2_E87F1D15F1D4AC72* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_3_AAAC44FF4CB2D937_4_METHOD_3_E9DD3ECB433053C3_OFFSET))(this, a1, a2);
	}

	::System::String* Method_3_88B60F3B95FAA4F1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AAAC44FF4CB2D937_4_METHOD_3_88B60F3B95FAA4F1_OFFSET))(this);
	}

	::System::Void Method_3_3E058A8B3089DC74(::Struct_2_575273D27F02957E& a1, ::Class_2_E87F1D15F1D4AC72* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_3_AAAC44FF4CB2D937_4_METHOD_3_3E058A8B3089DC74_OFFSET))(this, a1, a2);
	}

	::System::String* Method_3_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AAAC44FF4CB2D937_4_METHOD_3_126AB3935214AA22_OFFSET))(this);
	}
};
