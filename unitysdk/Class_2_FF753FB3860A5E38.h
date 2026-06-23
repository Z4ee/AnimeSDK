#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_37DF30C8B3AA0F39.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_E87F1D15F1D4AC72;
namespace MoleMole { class UISummerEventPopGetRowWidgetController_Data; }
namespace System::Collections { class IEnumerable; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
template <typename T> class Class_2_27110FADB294B5B7;

#define CLASS_2_FF753FB3860A5E38_METHOD_2_4C93A371A0DC625B_OFFSET UNITYSDK_OFFSET(0x1143B050)
#define CLASS_2_FF753FB3860A5E38_METHOD_2_55A2D7889F07519C_OFFSET UNITYSDK_OFFSET(0x1143B4C0)
#define CLASS_2_FF753FB3860A5E38_METHOD_2_573103E18ED7B61D_OFFSET UNITYSDK_OFFSET(0x1143B4B0)
#define CLASS_2_FF753FB3860A5E38_METHOD_2_5A0FE61D0EDB1B3C_OFFSET UNITYSDK_OFFSET(0x1143B580)
#define CLASS_2_FF753FB3860A5E38_METHOD_2_860B0AA036A21F06_OFFSET UNITYSDK_OFFSET(0x1143B4A0)
#define CLASS_2_FF753FB3860A5E38__CTOR_OFFSET UNITYSDK_OFFSET(0x1143B370)

inline static constexpr unsigned int Class_2_FF753FB3860A5E38_TypeDefinitionIndex = 68714;

class Class_2_FF753FB3860A5E38 : public ::Class_1_37DF30C8B3AA0F39
{
public:
	::Class_2_27110FADB294B5B7<::MoleMole::UISummerEventPopGetRowWidgetController_Data*>* Field_2_1; // 0x50
	::System::Int32 Field_2_0; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FF753FB3860A5E38__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_4C93A371A0DC625B(::Struct_2_575273D27F02957E& a1, ::Class_2_E87F1D15F1D4AC72* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_2_FF753FB3860A5E38_METHOD_2_4C93A371A0DC625B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_860B0AA036A21F06(::Class_2_27110FADB294B5B7<::MoleMole::UISummerEventPopGetRowWidgetController_Data*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_27110FADB294B5B7<::MoleMole::UISummerEventPopGetRowWidgetController_Data*>*))((::PBYTE)hIl2Cpp + CLASS_2_FF753FB3860A5E38_METHOD_2_860B0AA036A21F06_OFFSET))(this, a1);
	}

	::Class_2_27110FADB294B5B7<::MoleMole::UISummerEventPopGetRowWidgetController_Data*>* Method_2_573103E18ED7B61D()
	{
		return ((::Class_2_27110FADB294B5B7<::MoleMole::UISummerEventPopGetRowWidgetController_Data*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FF753FB3860A5E38_METHOD_2_573103E18ED7B61D_OFFSET))(this);
	}

	::System::Collections::IEnumerable* Method_2_55A2D7889F07519C()
	{
		return ((::System::Collections::IEnumerable*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FF753FB3860A5E38_METHOD_2_55A2D7889F07519C_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::MoleMole::UISummerEventPopGetRowWidgetController_Data*>* Method_2_5A0FE61D0EDB1B3C()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::MoleMole::UISummerEventPopGetRowWidgetController_Data*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FF753FB3860A5E38_METHOD_2_5A0FE61D0EDB1B3C_OFFSET))(this);
	}
};
