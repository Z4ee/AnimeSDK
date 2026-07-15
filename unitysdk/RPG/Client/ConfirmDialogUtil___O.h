#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class NotifyHandler; }
namespace System { class Action; }

namespace RPG::Client
{
	inline static constexpr unsigned int ConfirmDialogUtil___O_TypeDefinitionIndex = 69413;

	class ConfirmDialogUtil___O : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet__0___OnDialogExit()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(ConfirmDialogUtil___O_TypeDefinitionIndex)->GetStaticField(0x68C70);
		}
		static ::RPG::Client::NotifyHandler** StaticGet__1___OnFocusChange()
		{
			return (::RPG::Client::NotifyHandler**)Il2CppClass::FromTypeDefinitionIndex(ConfirmDialogUtil___O_TypeDefinitionIndex)->GetStaticField(0x68C78);
		}
	};
}
