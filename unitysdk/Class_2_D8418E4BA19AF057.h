#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_37DF30C8B3AA0F39.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_E87F1D15F1D4AC72;
namespace MoleMole { class UIUrbanMapPointWidgetContext; }
template <typename T> class Class_2_000597E145D7A42A;

#define CLASS_2_D8418E4BA19AF057_METHOD_2_216DD48172B849AF_OFFSET UNITYSDK_OFFSET(0x134B6170)
#define CLASS_2_D8418E4BA19AF057_METHOD_2_9DE87B16AD0A605E_OFFSET UNITYSDK_OFFSET(0x134B6230)
#define CLASS_2_D8418E4BA19AF057_METHOD_2_AD3BDF33DE2FF690_OFFSET UNITYSDK_OFFSET(0x134B5F60)
#define CLASS_2_D8418E4BA19AF057__CTOR_OFFSET UNITYSDK_OFFSET(0x134B61E0)

inline static constexpr unsigned int Class_2_D8418E4BA19AF057_TypeDefinitionIndex = 58478;

class Class_2_D8418E4BA19AF057 : public ::Class_1_37DF30C8B3AA0F39
{
public:
	::Class_2_000597E145D7A42A<::System::Boolean>* Field_2_0; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8418E4BA19AF057__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_AD3BDF33DE2FF690(::Struct_2_575273D27F02957E& a1, ::Class_2_E87F1D15F1D4AC72* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_2_D8418E4BA19AF057_METHOD_2_AD3BDF33DE2FF690_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_216DD48172B849AF(::MoleMole::UIUrbanMapPointWidgetContext* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIUrbanMapPointWidgetContext*))((::PBYTE)hIl2Cpp + CLASS_2_D8418E4BA19AF057_METHOD_2_216DD48172B849AF_OFFSET))(this, a1);
	}

	::System::Void Method_2_9DE87B16AD0A605E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8418E4BA19AF057_METHOD_2_9DE87B16AD0A605E_OFFSET))(this);
	}
};
