#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { template <typename T> class Predicate_1; }

#define MOLEMOLE_UIMUSICPLAYERPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1529B9C0)
#define MOLEMOLE_UIMUSICPLAYERPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1529BA00)
#define MOLEMOLE_UIMUSICPLAYERPAGECONTROLLER___C__ONMAINBTNCLICKHANDLE_B__57_0_OFFSET UNITYSDK_OFFSET(0x1529BA50)
#define MOLEMOLE_UIMUSICPLAYERPAGECONTROLLER___C__ONUIOPEN_B__45_0_OFFSET UNITYSDK_OFFSET(0x1529BA10)

namespace MoleMole
{
	inline static constexpr unsigned int UIMusicPlayerPageController___c_TypeDefinitionIndex = 47388;

	class UIMusicPlayerPageController___c : public ::System::Object
	{
	public:
		static ::System::Predicate_1<::System::Int32>** StaticGet___9__45_0()
		{
			return (::System::Predicate_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIMusicPlayerPageController___c_TypeDefinitionIndex)->GetStaticField(0x3A580);
		}
		static ::MoleMole::UIMusicPlayerPageController___c** StaticGet___9()
		{
			return (::MoleMole::UIMusicPlayerPageController___c**)Il2CppClass::FromTypeDefinitionIndex(UIMusicPlayerPageController___c_TypeDefinitionIndex)->GetStaticField(0x3A588);
		}
		static ::System::Action** StaticGet___9__57_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIMusicPlayerPageController___c_TypeDefinitionIndex)->GetStaticField(0x3A590);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICPLAYERPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICPLAYERPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _OnUIOpen_b__45_0(::System::Int32 x)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICPLAYERPAGECONTROLLER___C__ONUIOPEN_B__45_0_OFFSET))(this, x);
		}

		::System::Void _OnMainBtnClickHandle_b__57_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICPLAYERPAGECONTROLLER___C__ONMAINBTNCLICKHANDLE_B__57_0_OFFSET))(this);
		}
	};
}
