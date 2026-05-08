#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_37DF30C8B3AA0F39.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_E87F1D15F1D4AC72;
namespace MoleMole { class UIUrbanMapPointWidgetContext; }
template <typename T> class Class_2_000597E145D7A42A;

#define CLASS_2_D55ACB5CAFFB4102_METHOD_2_329E0861519EEE54_OFFSET UNITYSDK_OFFSET(0xF530670)
#define CLASS_2_D55ACB5CAFFB4102_METHOD_2_9DE87B16AD0A605E_OFFSET UNITYSDK_OFFSET(0xF530A00)
#define CLASS_2_D55ACB5CAFFB4102_METHOD_2_F3F89A83EA0031B7_OFFSET UNITYSDK_OFFSET(0xF5308A0)
#define CLASS_2_D55ACB5CAFFB4102__CTOR_OFFSET UNITYSDK_OFFSET(0xF5309B0)

inline static constexpr unsigned int Class_2_D55ACB5CAFFB4102_TypeDefinitionIndex = 76627;

class Class_2_D55ACB5CAFFB4102 : public ::Class_1_37DF30C8B3AA0F39
{
public:
	::Class_2_000597E145D7A42A<::System::Boolean>* Field_2_0; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D55ACB5CAFFB4102__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_329E0861519EEE54(::Struct_2_575273D27F02957E& a1, ::Class_2_E87F1D15F1D4AC72* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_2_D55ACB5CAFFB4102_METHOD_2_329E0861519EEE54_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_F3F89A83EA0031B7(::MoleMole::UIUrbanMapPointWidgetContext* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIUrbanMapPointWidgetContext*))((::PBYTE)hIl2Cpp + CLASS_2_D55ACB5CAFFB4102_METHOD_2_F3F89A83EA0031B7_OFFSET))(this, a1);
	}

	::System::Void Method_2_9DE87B16AD0A605E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D55ACB5CAFFB4102_METHOD_2_9DE87B16AD0A605E_OFFSET))(this);
	}
};
