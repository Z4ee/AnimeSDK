#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

namespace RPG::Client
{
	inline static constexpr unsigned int RPGApplication___O_TypeDefinitionIndex = 69457;

	class RPGApplication___O : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet__0___Quit()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(RPGApplication___O_TypeDefinitionIndex)->GetStaticField(0x65AE0);
		}
	};
}
