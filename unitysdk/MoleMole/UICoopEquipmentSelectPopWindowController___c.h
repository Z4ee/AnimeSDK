#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UICOOPEQUIPMENTSELECTPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19376A40)
#define MOLEMOLE_UICOOPEQUIPMENTSELECTPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19376A80)
#define MOLEMOLE_UICOOPEQUIPMENTSELECTPOPWINDOWCONTROLLER___C__INITSORT_B__50_0_OFFSET UNITYSDK_OFFSET(0x19376A90)
#define MOLEMOLE_UICOOPEQUIPMENTSELECTPOPWINDOWCONTROLLER___C__INITSORT_B__50_2_OFFSET UNITYSDK_OFFSET(0x19376BB0)

namespace MoleMole
{
	inline static constexpr unsigned int UICoopEquipmentSelectPopWindowController___c_TypeDefinitionIndex = 82680;

	class UICoopEquipmentSelectPopWindowController___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Int32, ::System::String*>** StaticGet___9__50_2()
		{
			return (::System::Func_2<::System::Int32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(UICoopEquipmentSelectPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x4AC50);
		}
		static ::System::Func_2<::System::Int32, ::System::String*>** StaticGet___9__50_0()
		{
			return (::System::Func_2<::System::Int32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(UICoopEquipmentSelectPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x4AC58);
		}
		static ::MoleMole::UICoopEquipmentSelectPopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UICoopEquipmentSelectPopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UICoopEquipmentSelectPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x4AC60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPEQUIPMENTSELECTPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPEQUIPMENTSELECTPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::String* _InitSort_b__50_0(::System::Int32 filter)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPEQUIPMENTSELECTPOPWINDOWCONTROLLER___C__INITSORT_B__50_0_OFFSET))(this, filter);
		}

		::System::String* _InitSort_b__50_2(::System::Int32 filter)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPEQUIPMENTSELECTPOPWINDOWCONTROLLER___C__INITSORT_B__50_2_OFFSET))(this, filter);
		}
	};
}
