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
template <typename T> class Class_2_0ABEDEEC42FD90B1;

#define CLASS_2_A7B0B3BF6E634A62_METHOD_2_076188C050222996_OFFSET UNITYSDK_OFFSET(0x141B5A80)
#define CLASS_2_A7B0B3BF6E634A62_METHOD_2_0EE7C6E0DA7F3A4D_OFFSET UNITYSDK_OFFSET(0x141B5CE0)
#define CLASS_2_A7B0B3BF6E634A62_METHOD_2_A496ABABBF7B34BA_OFFSET UNITYSDK_OFFSET(0x141B5D30)
#define CLASS_2_A7B0B3BF6E634A62_METHOD_2_D2DB0AE4471ABE82_OFFSET UNITYSDK_OFFSET(0x141B5DC0)
#define CLASS_2_A7B0B3BF6E634A62__CTOR_OFFSET UNITYSDK_OFFSET(0x141B5C40)

inline static constexpr unsigned int Class_2_A7B0B3BF6E634A62_TypeDefinitionIndex = 73866;

class Class_2_A7B0B3BF6E634A62 : public ::Class_1_37DF30C8B3AA0F39
{
public:
	::Class_2_000597E145D7A42A<::MoleMole::UIUrbanMapRoleCarRowWidgetContext*>* Field_2_0; // 0x50
	::System::Collections::Generic::List_1<::MoleMole::UIUrbanMapRoleCardRowItemWidgetContext*>* Field_2_7; // 0x58
	::Class_2_0ABEDEEC42FD90B1<::MoleMole::UIUrbanMapRoleCardRowItemWidgetContext*>* Field_2_6; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A7B0B3BF6E634A62__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_076188C050222996(::Struct_2_575273D27F02957E& a1, ::Class_2_E87F1D15F1D4AC72* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_2_A7B0B3BF6E634A62_METHOD_2_076188C050222996_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::IEnumerable_1<::MoleMole::UIUrbanMapRoleCardRowItemWidgetContext*>* Method_2_0EE7C6E0DA7F3A4D()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::MoleMole::UIUrbanMapRoleCardRowItemWidgetContext*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A7B0B3BF6E634A62_METHOD_2_0EE7C6E0DA7F3A4D_OFFSET))(this);
	}

	::System::Void Method_2_A496ABABBF7B34BA(::MoleMole::UIUrbanMapRoleCarRowWidgetContext* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIUrbanMapRoleCarRowWidgetContext*))((::PBYTE)hIl2Cpp + CLASS_2_A7B0B3BF6E634A62_METHOD_2_A496ABABBF7B34BA_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IEnumerable_1<::MoleMole::UIUrbanMapRoleCardRowItemWidgetContext*>* Method_2_D2DB0AE4471ABE82()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::MoleMole::UIUrbanMapRoleCardRowItemWidgetContext*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A7B0B3BF6E634A62_METHOD_2_D2DB0AE4471ABE82_OFFSET))(this);
	}
};
