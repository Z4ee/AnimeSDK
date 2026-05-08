#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_90052ED270846C90.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_E87F1D15F1D4AC72;
namespace MoleMole { class UIUrbanMapRightListRowNormalContext; }
namespace MoleMole { class UIUrbanMapRightStreetInfoContext_Bangkov; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_B9390801E77EB038_METHOD_3_2C95AFAD0256302F_OFFSET UNITYSDK_OFFSET(0x11AAD970)
#define CLASS_3_B9390801E77EB038_METHOD_3_58EC7BCEC8B140C5_OFFSET UNITYSDK_OFFSET(0x11AAD460)
#define CLASS_3_B9390801E77EB038_METHOD_3_5BEDCA4A57E34227_OFFSET UNITYSDK_OFFSET(0x11AAD410)
#define CLASS_3_B9390801E77EB038_METHOD_3_6335C5A205E89E10_OFFSET UNITYSDK_OFFSET(0x11AACE40)
#define CLASS_3_B9390801E77EB038_METHOD_3_85377D41FEE05B66_OFFSET UNITYSDK_OFFSET(0x11AAD0F0)
#define CLASS_3_B9390801E77EB038__CTOR_OFFSET UNITYSDK_OFFSET(0x11AAD3B0)

inline static constexpr unsigned int Class_3_B9390801E77EB038_TypeDefinitionIndex = 76189;

class Class_3_B9390801E77EB038 : public ::Class_2_90052ED270846C90<::MoleMole::UIUrbanMapRightStreetInfoContext_Bangkov*>
{
public:
	::System::Collections::Generic::List_1<::System::String*>* Field_3_1; // 0x60
	::System::Collections::Generic::List_1<::MoleMole::UIUrbanMapRightListRowNormalContext*>* Field_3_0; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B9390801E77EB038__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_6335C5A205E89E10(::Struct_2_575273D27F02957E& a1, ::Class_2_E87F1D15F1D4AC72* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_3_B9390801E77EB038_METHOD_3_6335C5A205E89E10_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_85377D41FEE05B66()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B9390801E77EB038_METHOD_3_85377D41FEE05B66_OFFSET))(this);
	}

	::System::Void Method_3_5BEDCA4A57E34227(::Struct_2_575273D27F02957E& a1, ::Class_2_E87F1D15F1D4AC72* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_3_B9390801E77EB038_METHOD_3_5BEDCA4A57E34227_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::IEnumerable_1<::MoleMole::UIUrbanMapRightListRowNormalContext*>* Method_3_58EC7BCEC8B140C5()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::MoleMole::UIUrbanMapRightListRowNormalContext*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B9390801E77EB038_METHOD_3_58EC7BCEC8B140C5_OFFSET))(this);
	}

	::System::Void Method_3_2C95AFAD0256302F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B9390801E77EB038_METHOD_3_2C95AFAD0256302F_OFFSET))(this);
	}
};
