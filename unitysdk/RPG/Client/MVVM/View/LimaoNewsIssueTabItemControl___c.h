#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSISSUETABITEMCONTROL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9A9D050)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSISSUETABITEMCONTROL___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9A9D090)

namespace RPG::Client::MVVM::View
{
	inline static constexpr unsigned int LimaoNewsIssueTabItemControl___c_TypeDefinitionIndex = 61009;

	class LimaoNewsIssueTabItemControl___c : public ::System::Object
	{
	public:
		static ::RPG::Client::MVVM::View::LimaoNewsIssueTabItemControl___c** StaticGet___9()
		{
			return (::RPG::Client::MVVM::View::LimaoNewsIssueTabItemControl___c**)Il2CppClass::FromTypeDefinitionIndex(LimaoNewsIssueTabItemControl___c_TypeDefinitionIndex)->GetStaticField(0x29220);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSISSUETABITEMCONTROL___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSISSUETABITEMCONTROL___C__CTOR_OFFSET))(this);
		}
	};
}
