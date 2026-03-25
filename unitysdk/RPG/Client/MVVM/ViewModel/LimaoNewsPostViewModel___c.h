#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define RPG_CLIENT_MVVM_VIEWMODEL_LIMAONEWSPOSTVIEWMODEL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9AAFB20)
#define RPG_CLIENT_MVVM_VIEWMODEL_LIMAONEWSPOSTVIEWMODEL___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9AAFB60)
#define RPG_CLIENT_MVVM_VIEWMODEL_LIMAONEWSPOSTVIEWMODEL___C__SHOWSUBMITTEDPOSTWINDOW_B__74_0_OFFSET UNITYSDK_OFFSET(0x9AAFB70)

namespace RPG::Client::MVVM::ViewModel
{
	inline static constexpr unsigned int LimaoNewsPostViewModel___c_TypeDefinitionIndex = 60962;

	class LimaoNewsPostViewModel___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__74_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(LimaoNewsPostViewModel___c_TypeDefinitionIndex)->GetStaticField(0x29C90);
		}
		static ::RPG::Client::MVVM::ViewModel::LimaoNewsPostViewModel___c** StaticGet___9()
		{
			return (::RPG::Client::MVVM::ViewModel::LimaoNewsPostViewModel___c**)Il2CppClass::FromTypeDefinitionIndex(LimaoNewsPostViewModel___c_TypeDefinitionIndex)->GetStaticField(0x29C98);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEWMODEL_LIMAONEWSPOSTVIEWMODEL___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEWMODEL_LIMAONEWSPOSTVIEWMODEL___C__CTOR_OFFSET))(this);
		}

		::System::Void _ShowSubmittedPostWindow_b__74_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEWMODEL_LIMAONEWSPOSTVIEWMODEL___C__SHOWSUBMITTEDPOSTWINDOW_B__74_0_OFFSET))(this);
		}
	};
}
