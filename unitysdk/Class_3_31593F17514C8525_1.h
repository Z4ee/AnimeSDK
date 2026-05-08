#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_C5527D115E3A4384.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_E87F1D15F1D4AC72;
namespace MoleMole { class UIThreeDMapElement_PortalContext; }
namespace System { class String; }
namespace UnityEngine { class RectTransform; }

#define CLASS_3_31593F17514C8525_1_METHOD_3_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x13A54D90)
#define CLASS_3_31593F17514C8525_1_METHOD_3_52F53464E42975CF_OFFSET UNITYSDK_OFFSET(0x13A54DA0)
#define CLASS_3_31593F17514C8525_1_METHOD_3_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0x13A54CC0)
#define CLASS_3_31593F17514C8525_1_METHOD_3_E9DD3ECB433053C3_OFFSET UNITYSDK_OFFSET(0x13A54B20)
#define CLASS_3_31593F17514C8525_1__CTOR_OFFSET UNITYSDK_OFFSET(0x13A54D30)

inline static constexpr unsigned int Class_3_31593F17514C8525_1_TypeDefinitionIndex = 61302;

class Class_3_31593F17514C8525_1 : public ::Class_2_C5527D115E3A4384<::MoleMole::UIThreeDMapElement_PortalContext*>
{
public:
	::UnityEngine::RectTransform* Field_3_0; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_31593F17514C8525_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_E9DD3ECB433053C3(::Struct_2_575273D27F02957E& a1, ::Class_2_E87F1D15F1D4AC72* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_3_31593F17514C8525_1_METHOD_3_E9DD3ECB433053C3_OFFSET))(this, a1, a2);
	}

	::System::String* Method_3_88B60F3B95FAA4F1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_31593F17514C8525_1_METHOD_3_88B60F3B95FAA4F1_OFFSET))(this);
	}

	::System::String* Method_3_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_31593F17514C8525_1_METHOD_3_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_3_52F53464E42975CF(::Struct_2_575273D27F02957E& a1, ::Class_2_E87F1D15F1D4AC72* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_3_31593F17514C8525_1_METHOD_3_52F53464E42975CF_OFFSET))(this, a1, a2);
	}
};
