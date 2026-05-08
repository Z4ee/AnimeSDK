#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_90052ED270846C90.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_E87F1D15F1D4AC72;
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIUrbanMapCollectListRowWidgetContext; }
namespace MoleMole { class UIUrbanMapRightStreetInfoContext_Collect; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
template <typename T> class Class_0_16E4307DCC41950C_12;

#define CLASS_3_468AACA7FBAA98D9_METHOD_3_28092AE644740F78_OFFSET UNITYSDK_OFFSET(0x140AE500)
#define CLASS_3_468AACA7FBAA98D9_METHOD_3_5BEDCA4A57E34227_OFFSET UNITYSDK_OFFSET(0x140AEE20)
#define CLASS_3_468AACA7FBAA98D9_METHOD_3_ED5CC9DFC2089C06_OFFSET UNITYSDK_OFFSET(0x140AE8B0)
#define CLASS_3_468AACA7FBAA98D9_METHOD_3_F814A219696FD5E1_OFFSET UNITYSDK_OFFSET(0x140AEE70)
#define CLASS_3_468AACA7FBAA98D9_METHOD_3_FC681A4BD4FBDE26_OFFSET UNITYSDK_OFFSET(0x140AEF90)
#define CLASS_3_468AACA7FBAA98D9__CTOR_OFFSET UNITYSDK_OFFSET(0x140AE850)

inline static constexpr unsigned int Class_3_468AACA7FBAA98D9_TypeDefinitionIndex = 78244;

class Class_3_468AACA7FBAA98D9 : public ::Class_2_90052ED270846C90<::MoleMole::UIUrbanMapRightStreetInfoContext_Collect*>
{
public:
	::Class_0_16E4307DCC41950C_12<::System::Collections::Generic::IList_1<::MoleMole::UIUrbanMapCollectListRowWidgetContext*>*>* Field_3_0; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_468AACA7FBAA98D9__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_28092AE644740F78(::Struct_2_575273D27F02957E& a1, ::Class_2_E87F1D15F1D4AC72* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_3_468AACA7FBAA98D9_METHOD_3_28092AE644740F78_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::IList_1<::MoleMole::UIUrbanMapCollectListRowWidgetContext*>* Method_3_ED5CC9DFC2089C06()
	{
		return ((::System::Collections::Generic::IList_1<::MoleMole::UIUrbanMapCollectListRowWidgetContext*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_468AACA7FBAA98D9_METHOD_3_ED5CC9DFC2089C06_OFFSET))(this);
	}

	::System::Void Method_3_5BEDCA4A57E34227(::Struct_2_575273D27F02957E& a1, ::Class_2_E87F1D15F1D4AC72* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_3_468AACA7FBAA98D9_METHOD_3_5BEDCA4A57E34227_OFFSET))(this, a1, a2);
	}

	::MoleMole::UIControllerContextBase* Method_3_F814A219696FD5E1()
	{
		return ((::MoleMole::UIControllerContextBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_468AACA7FBAA98D9_METHOD_3_F814A219696FD5E1_OFFSET))(this);
	}

	::System::Int32 Method_3_FC681A4BD4FBDE26(::MoleMole::UIUrbanMapCollectListRowWidgetContext* a1, ::MoleMole::UIUrbanMapCollectListRowWidgetContext* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::MoleMole::UIUrbanMapCollectListRowWidgetContext*, ::MoleMole::UIUrbanMapCollectListRowWidgetContext*))((::PBYTE)hIl2Cpp + CLASS_3_468AACA7FBAA98D9_METHOD_3_FC681A4BD4FBDE26_OFFSET))(this, a1, a2);
	}
};
