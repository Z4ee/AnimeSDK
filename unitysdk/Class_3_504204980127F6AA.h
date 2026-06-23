#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_3C5DD5A134AA6201.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_E87F1D15F1D4AC72;
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIUrbanMapCollectListRowWidgetContext; }
namespace MoleMole { class UIUrbanMapRightStreetInfoContext_Collect; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
template <typename T> class Class_0_16E4307DCC419505_153;

#define CLASS_3_504204980127F6AA_METHOD_3_4DAF7BF6C23EDE4D_OFFSET UNITYSDK_OFFSET(0x12CBDD80)
#define CLASS_3_504204980127F6AA_METHOD_3_6335C5A205E89E10_OFFSET UNITYSDK_OFFSET(0x12CBD470)
#define CLASS_3_504204980127F6AA_METHOD_3_8B0B28A78338F3BB_OFFSET UNITYSDK_OFFSET(0x12CBDDD0)
#define CLASS_3_504204980127F6AA_METHOD_3_ED5CC9DFC2089C06_OFFSET UNITYSDK_OFFSET(0x12CBD7D0)
#define CLASS_3_504204980127F6AA_METHOD_3_FC681A4BD4FBDE26_OFFSET UNITYSDK_OFFSET(0x12CBDF40)
#define CLASS_3_504204980127F6AA__CTOR_OFFSET UNITYSDK_OFFSET(0x12CBD770)

inline static constexpr unsigned int Class_3_504204980127F6AA_TypeDefinitionIndex = 41215;

class Class_3_504204980127F6AA : public ::Class_2_3C5DD5A134AA6201<::MoleMole::UIUrbanMapRightStreetInfoContext_Collect*>
{
public:
	::Class_0_16E4307DCC419505_153<::System::Collections::Generic::IList_1<::MoleMole::UIUrbanMapCollectListRowWidgetContext*>*>* Field_3_0; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_504204980127F6AA__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_6335C5A205E89E10(::Struct_2_575273D27F02957E& a1, ::Class_2_E87F1D15F1D4AC72* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_3_504204980127F6AA_METHOD_3_6335C5A205E89E10_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::IList_1<::MoleMole::UIUrbanMapCollectListRowWidgetContext*>* Method_3_ED5CC9DFC2089C06()
	{
		return ((::System::Collections::Generic::IList_1<::MoleMole::UIUrbanMapCollectListRowWidgetContext*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_504204980127F6AA_METHOD_3_ED5CC9DFC2089C06_OFFSET))(this);
	}

	::System::Void Method_3_4DAF7BF6C23EDE4D(::Struct_2_575273D27F02957E& a1, ::Class_2_E87F1D15F1D4AC72* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_3_504204980127F6AA_METHOD_3_4DAF7BF6C23EDE4D_OFFSET))(this, a1, a2);
	}

	::MoleMole::UIControllerContextBase* Method_3_8B0B28A78338F3BB()
	{
		return ((::MoleMole::UIControllerContextBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_504204980127F6AA_METHOD_3_8B0B28A78338F3BB_OFFSET))(this);
	}

	::System::Int32 Method_3_FC681A4BD4FBDE26(::MoleMole::UIUrbanMapCollectListRowWidgetContext* a1, ::MoleMole::UIUrbanMapCollectListRowWidgetContext* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::MoleMole::UIUrbanMapCollectListRowWidgetContext*, ::MoleMole::UIUrbanMapCollectListRowWidgetContext*))((::PBYTE)hIl2Cpp + CLASS_3_504204980127F6AA_METHOD_3_FC681A4BD4FBDE26_OFFSET))(this, a1, a2);
	}
};
