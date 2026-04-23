#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSISSUEHINTPOPUPWINDOWS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA74F4D0)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSISSUEHINTPOPUPWINDOWS___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA74F510)

namespace RPG::Client::MVVM::View
{
	inline static constexpr unsigned int LimaoNewsIssueHintPopupWindows___c_TypeDefinitionIndex = 68441;

	class LimaoNewsIssueHintPopupWindows___c : public ::System::Object
	{
	public:
		static ::RPG::Client::MVVM::View::LimaoNewsIssueHintPopupWindows___c** StaticGet___9()
		{
			return (::RPG::Client::MVVM::View::LimaoNewsIssueHintPopupWindows___c**)Il2CppClass::FromTypeDefinitionIndex(LimaoNewsIssueHintPopupWindows___c_TypeDefinitionIndex)->GetStaticField(0x1B7C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSISSUEHINTPOPUPWINDOWS___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSISSUEHINTPOPUPWINDOWS___C__CTOR_OFFSET))(this);
		}
	};
}
