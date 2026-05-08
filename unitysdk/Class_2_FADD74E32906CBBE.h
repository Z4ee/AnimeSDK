#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_37DF30C8B3AA0F39.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_E87F1D15F1D4AC72;
namespace MoleMole { class UIUrbanMapRoleCarRowWidgetContext; }
namespace MoleMole { class UIUrbanMapRoleCardRowItemWidgetContext; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_2_000597E145D7A42A;
template <typename T> class Class_2_D05FEB32FD372810;

#define CLASS_2_FADD74E32906CBBE_METHOD_2_25311493710404E7_OFFSET UNITYSDK_OFFSET(0x11999220)
#define CLASS_2_FADD74E32906CBBE_METHOD_2_A496ABABBF7B34BA_OFFSET UNITYSDK_OFFSET(0x11999190)
#define CLASS_2_FADD74E32906CBBE_METHOD_2_CB03F7F2A3D89775_OFFSET UNITYSDK_OFFSET(0x119992E0)
#define CLASS_2_FADD74E32906CBBE_METHOD_2_D22AEA4DD2AB2828_OFFSET UNITYSDK_OFFSET(0x11998EA0)
#define CLASS_2_FADD74E32906CBBE__CTOR_OFFSET UNITYSDK_OFFSET(0x119990F0)

inline static constexpr unsigned int Class_2_FADD74E32906CBBE_TypeDefinitionIndex = 79507;

class Class_2_FADD74E32906CBBE : public ::Class_1_37DF30C8B3AA0F39
{
public:
	::Class_2_D05FEB32FD372810<::MoleMole::UIUrbanMapRoleCardRowItemWidgetContext*>* Field_2_2; // 0x50
	::Class_2_000597E145D7A42A<::MoleMole::UIUrbanMapRoleCarRowWidgetContext*>* Field_2_0; // 0x58
	::System::Collections::Generic::List_1<::MoleMole::UIUrbanMapRoleCardRowItemWidgetContext*>* Field_2_1; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FADD74E32906CBBE__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_D22AEA4DD2AB2828(::Struct_2_575273D27F02957E& a1, ::Class_2_E87F1D15F1D4AC72* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_2_FADD74E32906CBBE_METHOD_2_D22AEA4DD2AB2828_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_A496ABABBF7B34BA(::MoleMole::UIUrbanMapRoleCarRowWidgetContext* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIUrbanMapRoleCarRowWidgetContext*))((::PBYTE)hIl2Cpp + CLASS_2_FADD74E32906CBBE_METHOD_2_A496ABABBF7B34BA_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IEnumerable_1<::MoleMole::UIUrbanMapRoleCardRowItemWidgetContext*>* Method_2_25311493710404E7()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::MoleMole::UIUrbanMapRoleCardRowItemWidgetContext*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FADD74E32906CBBE_METHOD_2_25311493710404E7_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::MoleMole::UIUrbanMapRoleCardRowItemWidgetContext*>* Method_2_CB03F7F2A3D89775()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::MoleMole::UIUrbanMapRoleCardRowItemWidgetContext*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FADD74E32906CBBE_METHOD_2_CB03F7F2A3D89775_OFFSET))(this);
	}
};
