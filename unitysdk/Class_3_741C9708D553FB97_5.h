#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_22A27517C270DC2B.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_E87F1D15F1D4AC72;
namespace MoleMole { class UIThreeDMapElement_MainCityCollectContext; }
namespace System { class String; }
namespace UnityEngine { class RectTransform; }

#define CLASS_3_741C9708D553FB97_5_METHOD_3_10B63366FA27F87D_OFFSET UNITYSDK_OFFSET(0x18B587E0)
#define CLASS_3_741C9708D553FB97_5_METHOD_3_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x18B58830)
#define CLASS_3_741C9708D553FB97_5_METHOD_3_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0x18B58710)
#define CLASS_3_741C9708D553FB97_5_METHOD_3_E9DD3ECB433053C3_OFFSET UNITYSDK_OFFSET(0x18B58570)
#define CLASS_3_741C9708D553FB97_5__CTOR_OFFSET UNITYSDK_OFFSET(0x18B58780)

inline static constexpr unsigned int Class_3_741C9708D553FB97_5_TypeDefinitionIndex = 54585;

class Class_3_741C9708D553FB97_5 : public ::Class_2_22A27517C270DC2B<::MoleMole::UIThreeDMapElement_MainCityCollectContext*>
{
public:
	::UnityEngine::RectTransform* Field_3_0; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_741C9708D553FB97_5__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_E9DD3ECB433053C3(::Struct_2_575273D27F02957E& a1, ::Class_2_E87F1D15F1D4AC72* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_3_741C9708D553FB97_5_METHOD_3_E9DD3ECB433053C3_OFFSET))(this, a1, a2);
	}

	::System::String* Method_3_88B60F3B95FAA4F1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_741C9708D553FB97_5_METHOD_3_88B60F3B95FAA4F1_OFFSET))(this);
	}

	::System::Void Method_3_10B63366FA27F87D(::Struct_2_575273D27F02957E& a1, ::Class_2_E87F1D15F1D4AC72* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_3_741C9708D553FB97_5_METHOD_3_10B63366FA27F87D_OFFSET))(this, a1, a2);
	}

	::System::String* Method_3_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_741C9708D553FB97_5_METHOD_3_126AB3935214AA22_OFFSET))(this);
	}
};
