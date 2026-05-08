#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_37DF30C8B3AA0F39.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_468A4FBF2E9F527C;
class Class_2_E87F1D15F1D4AC72;
class Class_3_5D0998FB29ADE574;
namespace MoleMole { class ScrollViewItemWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIHadalZoneHistoryTagWidgetController; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_64D3EFB248E825DA_METHOD_2_2609A581167F3840_OFFSET UNITYSDK_OFFSET(0x131C68A0)
#define CLASS_2_64D3EFB248E825DA_METHOD_2_6113B8F70C2B9826_OFFSET UNITYSDK_OFFSET(0x131C65F0)
#define CLASS_2_64D3EFB248E825DA_METHOD_2_B2A9E476CE8053F4_OFFSET UNITYSDK_OFFSET(0x131C7020)
#define CLASS_2_64D3EFB248E825DA_METHOD_2_C43ABBDCD527B5F2_OFFSET UNITYSDK_OFFSET(0x131C6EC0)
#define CLASS_2_64D3EFB248E825DA_METHOD_2_D5E1D97026072FB8_OFFSET UNITYSDK_OFFSET(0x131C5A90)
#define CLASS_2_64D3EFB248E825DA_METHOD_2_E97AC7B8F06B8C3E_OFFSET UNITYSDK_OFFSET(0x131C67D0)
#define CLASS_2_64D3EFB248E825DA__CTOR_OFFSET UNITYSDK_OFFSET(0x131C6E70)

inline static constexpr unsigned int Class_2_64D3EFB248E825DA_TypeDefinitionIndex = 60336;

class Class_2_64D3EFB248E825DA : public ::Class_1_37DF30C8B3AA0F39
{
public:
	::MoleMole::UIHadalZoneHistoryTagWidgetController* Field_2_2; // 0x50
	::MoleMole::UIHadalZoneHistoryTagWidgetController* Field_2_0; // 0x58
	::MoleMole::UIHadalZoneHistoryTagWidgetController* Field_2_1; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_64D3EFB248E825DA__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_D5E1D97026072FB8(::Struct_2_575273D27F02957E& a1, ::Class_2_E87F1D15F1D4AC72* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_2_64D3EFB248E825DA_METHOD_2_D5E1D97026072FB8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_6113B8F70C2B9826(::MoleMole::UIControllerContextBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + CLASS_2_64D3EFB248E825DA_METHOD_2_6113B8F70C2B9826_OFFSET))(this, a1);
	}

	::Class_2_468A4FBF2E9F527C* Method_2_E97AC7B8F06B8C3E()
	{
		return ((::Class_2_468A4FBF2E9F527C*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_64D3EFB248E825DA_METHOD_2_E97AC7B8F06B8C3E_OFFSET))(this);
	}

	::MoleMole::ScrollViewItemWidgetController* Method_2_C43ABBDCD527B5F2(::System::Func_1<::MoleMole::UIControlReference*>* a1)
	{
		return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Func_1<::MoleMole::UIControlReference*>*))((::PBYTE)hIl2Cpp + CLASS_2_64D3EFB248E825DA_METHOD_2_C43ABBDCD527B5F2_OFFSET))(this, a1);
	}

	::System::Void Method_2_2609A581167F3840(::System::Collections::Generic::List_1<::Class_3_5D0998FB29ADE574*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_3_5D0998FB29ADE574*>*))((::PBYTE)hIl2Cpp + CLASS_2_64D3EFB248E825DA_METHOD_2_2609A581167F3840_OFFSET))(this, a1);
	}

	::System::Void Method_2_B2A9E476CE8053F4(::MoleMole::UIControllerContextBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + CLASS_2_64D3EFB248E825DA_METHOD_2_B2A9E476CE8053F4_OFFSET))(this, a1);
	}
};
