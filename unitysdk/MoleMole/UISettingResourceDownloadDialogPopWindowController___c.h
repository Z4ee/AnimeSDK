#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_DAA84C1CDD754F37.h"
#include "unitysdk/System/Object.h"

class Class_1_13B43DCF703FB24C;
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define MOLEMOLE_UISETTINGRESOURCEDOWNLOADDIALOGPOPWINDOWCONTROLLER___C__CALCULATESIZE_ASYNC_B__10_0_OFFSET UNITYSDK_OFFSET(0x15A27B80)
#define MOLEMOLE_UISETTINGRESOURCEDOWNLOADDIALOGPOPWINDOWCONTROLLER___C__CALCULATESIZE_ASYNC_B__10_1_OFFSET UNITYSDK_OFFSET(0x15A27B90)
#define MOLEMOLE_UISETTINGRESOURCEDOWNLOADDIALOGPOPWINDOWCONTROLLER___C__CALCULATESIZE_ASYNC_B__10_2_OFFSET UNITYSDK_OFFSET(0x15A27BB0)
#define MOLEMOLE_UISETTINGRESOURCEDOWNLOADDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15A27990)
#define MOLEMOLE_UISETTINGRESOURCEDOWNLOADDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15A279D0)
#define MOLEMOLE_UISETTINGRESOURCEDOWNLOADDIALOGPOPWINDOWCONTROLLER___C__REFRESHTABS_B__8_1_OFFSET UNITYSDK_OFFSET(0x15A279E0)

namespace MoleMole
{
	inline static constexpr unsigned int UISettingResourceDownloadDialogPopWindowController___c_TypeDefinitionIndex = 85952;

	class UISettingResourceDownloadDialogPopWindowController___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::Struct_2_DAA84C1CDD754F37, ::System::Int64>** StaticGet___9__10_0()
		{
			return (::System::Func_2<::Struct_2_DAA84C1CDD754F37, ::System::Int64>**)Il2CppClass::FromTypeDefinitionIndex(UISettingResourceDownloadDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x42E00);
		}
		static ::System::Func_2<::Struct_2_DAA84C1CDD754F37, ::System::Int64>** StaticGet___9__10_2()
		{
			return (::System::Func_2<::Struct_2_DAA84C1CDD754F37, ::System::Int64>**)Il2CppClass::FromTypeDefinitionIndex(UISettingResourceDownloadDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x42E08);
		}
		static ::MoleMole::UISettingResourceDownloadDialogPopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UISettingResourceDownloadDialogPopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UISettingResourceDownloadDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x42E10);
		}
		static ::System::Func_2<::Class_1_13B43DCF703FB24C*, ::System::Collections::Generic::IEnumerable_1<::Struct_2_DAA84C1CDD754F37>*>** StaticGet___9__10_1()
		{
			return (::System::Func_2<::Class_1_13B43DCF703FB24C*, ::System::Collections::Generic::IEnumerable_1<::Struct_2_DAA84C1CDD754F37>*>**)Il2CppClass::FromTypeDefinitionIndex(UISettingResourceDownloadDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x42E18);
		}
		static ::System::Action_3<::System::Int32, ::System::String*, ::System::Action_1<::System::Boolean>*>** StaticGet___9__8_1()
		{
			return (::System::Action_3<::System::Int32, ::System::String*, ::System::Action_1<::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(UISettingResourceDownloadDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x42E20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGRESOURCEDOWNLOADDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGRESOURCEDOWNLOADDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshTabs_b__8_1(::System::Int32 code, ::System::String* msg, ::System::Action_1<::System::Boolean>* action)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGRESOURCEDOWNLOADDIALOGPOPWINDOWCONTROLLER___C__REFRESHTABS_B__8_1_OFFSET))(this, code, msg, action);
		}

		::System::Int64 _CalculateSize_Async_b__10_0(::Struct_2_DAA84C1CDD754F37 info)
		{
			return ((::System::Int64(*)(::PVOID, ::Struct_2_DAA84C1CDD754F37))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGRESOURCEDOWNLOADDIALOGPOPWINDOWCONTROLLER___C__CALCULATESIZE_ASYNC_B__10_0_OFFSET))(this, info);
		}

		::System::Collections::Generic::IEnumerable_1<::Struct_2_DAA84C1CDD754F37>* _CalculateSize_Async_b__10_1(::Class_1_13B43DCF703FB24C* result)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::Struct_2_DAA84C1CDD754F37>*(*)(::PVOID, ::Class_1_13B43DCF703FB24C*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGRESOURCEDOWNLOADDIALOGPOPWINDOWCONTROLLER___C__CALCULATESIZE_ASYNC_B__10_1_OFFSET))(this, result);
		}

		::System::Int64 _CalculateSize_Async_b__10_2(::Struct_2_DAA84C1CDD754F37 info)
		{
			return ((::System::Int64(*)(::PVOID, ::Struct_2_DAA84C1CDD754F37))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGRESOURCEDOWNLOADDIALOGPOPWINDOWCONTROLLER___C__CALCULATESIZE_ASYNC_B__10_2_OFFSET))(this, info);
		}
	};
}
