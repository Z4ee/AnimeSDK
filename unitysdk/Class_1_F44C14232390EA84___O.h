#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class BaseLobby; }
namespace System { template <typename T> class Action_1; }

inline static constexpr unsigned int Class_1_F44C14232390EA84___O_TypeDefinitionIndex = 66088;

class Class_1_F44C14232390EA84___O : public ::System::Object
{
public:
	static ::System::Action_1<::RPG::Client::BaseLobby*>** StaticGet__0____UiOpenLobbyPage()
	{
		return (::System::Action_1<::RPG::Client::BaseLobby*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F44C14232390EA84___O_TypeDefinitionIndex)->GetStaticField(0x26F70);
	}
};
