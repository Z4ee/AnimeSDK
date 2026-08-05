#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_9E1B8E40749AC580.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_E87F1D15F1D4AC72;
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIUrbanMapCollectListRowWidgetContext; }
namespace MoleMole { class UIUrbanMapRightStreetInfoContext_Collect; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
template <typename T> class Class_0_16E4307DCC419505_164;

#define CLASS_3_A6EB908668FE306E_METHOD_3_27117185E6214F68_OFFSET UNITYSDK_OFFSET(0x10F77C00)
#define CLASS_3_A6EB908668FE306E_METHOD_3_2B3A83A1F0ADED5B_OFFSET UNITYSDK_OFFSET(0x10F77820)
#define CLASS_3_A6EB908668FE306E_METHOD_3_6335C5A205E89E10_OFFSET UNITYSDK_OFFSET(0x10F76EF0)
#define CLASS_3_A6EB908668FE306E_METHOD_3_8B0B28A78338F3BB_OFFSET UNITYSDK_OFFSET(0x10F77A90)
#define CLASS_3_A6EB908668FE306E_METHOD_3_9BF6E65930270371_OFFSET UNITYSDK_OFFSET(0x10F77250)
#define CLASS_3_A6EB908668FE306E__CTOR_OFFSET UNITYSDK_OFFSET(0x10F771F0)

inline static constexpr unsigned int Class_3_A6EB908668FE306E_TypeDefinitionIndex = 83865;

class Class_3_A6EB908668FE306E : public ::Class_2_9E1B8E40749AC580<::MoleMole::UIUrbanMapRightStreetInfoContext_Collect*>
{
public:
	::Class_0_16E4307DCC419505_164<::System::Collections::Generic::IList_1<::MoleMole::UIUrbanMapCollectListRowWidgetContext*>*>* Field_3_0; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A6EB908668FE306E__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_6335C5A205E89E10(::Struct_2_575273D27F02957E& a1, ::Class_2_E87F1D15F1D4AC72* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_3_A6EB908668FE306E_METHOD_3_6335C5A205E89E10_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::IList_1<::MoleMole::UIUrbanMapCollectListRowWidgetContext*>* Method_3_9BF6E65930270371()
	{
		return ((::System::Collections::Generic::IList_1<::MoleMole::UIUrbanMapCollectListRowWidgetContext*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A6EB908668FE306E_METHOD_3_9BF6E65930270371_OFFSET))(this);
	}

	::System::Int32 Method_3_2B3A83A1F0ADED5B(::MoleMole::UIUrbanMapCollectListRowWidgetContext* a1, ::MoleMole::UIUrbanMapCollectListRowWidgetContext* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::MoleMole::UIUrbanMapCollectListRowWidgetContext*, ::MoleMole::UIUrbanMapCollectListRowWidgetContext*))((::PBYTE)hIl2Cpp + CLASS_3_A6EB908668FE306E_METHOD_3_2B3A83A1F0ADED5B_OFFSET))(this, a1, a2);
	}

	::MoleMole::UIControllerContextBase* Method_3_8B0B28A78338F3BB()
	{
		return ((::MoleMole::UIControllerContextBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A6EB908668FE306E_METHOD_3_8B0B28A78338F3BB_OFFSET))(this);
	}

	::System::Void Method_3_27117185E6214F68(::Struct_2_575273D27F02957E& a1, ::Class_2_E87F1D15F1D4AC72* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_3_A6EB908668FE306E_METHOD_3_27117185E6214F68_OFFSET))(this, a1, a2);
	}
};
