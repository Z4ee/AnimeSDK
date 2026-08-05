#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_27163C40507D1702.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_E87F1D15F1D4AC72;
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIUrbanMapAreaStreetPointWidgetContext; }
namespace MoleMole { class UIUrbanMapCollectListRowWidgetContext; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
template <typename T> class Class_0_16E4307DCC419505_164;

#define CLASS_4_E57DAB97EF158C8F_METHOD_4_07DE80631480FB75_OFFSET UNITYSDK_OFFSET(0x10CF2AC0)
#define CLASS_4_E57DAB97EF158C8F_METHOD_4_7C2C2820B36B9508_OFFSET UNITYSDK_OFFSET(0x10CF32F0)
#define CLASS_4_E57DAB97EF158C8F_METHOD_4_81B2964EE44F42CE_OFFSET UNITYSDK_OFFSET(0x10CF3710)
#define CLASS_4_E57DAB97EF158C8F_METHOD_4_8AA4116EA81436F2_OFFSET UNITYSDK_OFFSET(0x10CF38D0)
#define CLASS_4_E57DAB97EF158C8F_METHOD_4_8B0B28A78338F3BB_OFFSET UNITYSDK_OFFSET(0x10CF3760)
#define CLASS_4_E57DAB97EF158C8F__CTOR_OFFSET UNITYSDK_OFFSET(0x10CF3290)

inline static constexpr unsigned int Class_4_E57DAB97EF158C8F_TypeDefinitionIndex = 64600;

class Class_4_E57DAB97EF158C8F : public ::Class_3_27163C40507D1702<::MoleMole::UIUrbanMapAreaStreetPointWidgetContext*>
{
public:
	::Class_0_16E4307DCC419505_164<::System::Collections::Generic::IList_1<::MoleMole::UIUrbanMapCollectListRowWidgetContext*>*>* Field_4_0; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_E57DAB97EF158C8F__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_07DE80631480FB75(::Struct_2_575273D27F02957E& a1, ::Class_2_E87F1D15F1D4AC72* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_4_E57DAB97EF158C8F_METHOD_4_07DE80631480FB75_OFFSET))(this, a1, a2);
	}

	::System::Void Method_4_7C2C2820B36B9508()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_E57DAB97EF158C8F_METHOD_4_7C2C2820B36B9508_OFFSET))(this);
	}

	::System::Void Method_4_81B2964EE44F42CE(::Struct_2_575273D27F02957E& a1, ::Class_2_E87F1D15F1D4AC72* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_4_E57DAB97EF158C8F_METHOD_4_81B2964EE44F42CE_OFFSET))(this, a1, a2);
	}

	::MoleMole::UIControllerContextBase* Method_4_8B0B28A78338F3BB()
	{
		return ((::MoleMole::UIControllerContextBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_E57DAB97EF158C8F_METHOD_4_8B0B28A78338F3BB_OFFSET))(this);
	}

	::System::Collections::Generic::IList_1<::MoleMole::UIUrbanMapCollectListRowWidgetContext*>* Method_4_8AA4116EA81436F2()
	{
		return ((::System::Collections::Generic::IList_1<::MoleMole::UIUrbanMapCollectListRowWidgetContext*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_E57DAB97EF158C8F_METHOD_4_8AA4116EA81436F2_OFFSET))(this);
	}
};
