#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSISSUECONTROL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA74D7A0)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSISSUECONTROL___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA74D7E0)

namespace RPG::Client::MVVM::View
{
	inline static constexpr unsigned int LimaoNewsIssueControl___c_TypeDefinitionIndex = 68457;

	class LimaoNewsIssueControl___c : public ::System::Object
	{
	public:
		static ::RPG::Client::MVVM::View::LimaoNewsIssueControl___c** StaticGet___9()
		{
			return (::RPG::Client::MVVM::View::LimaoNewsIssueControl___c**)Il2CppClass::FromTypeDefinitionIndex(LimaoNewsIssueControl___c_TypeDefinitionIndex)->GetStaticField(0x1B6A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSISSUECONTROL___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSISSUECONTROL___C__CTOR_OFFSET))(this);
		}
	};
}
