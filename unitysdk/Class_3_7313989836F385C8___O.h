#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MonoEffect; }
namespace System { template <typename T> class Action_1; }

inline static constexpr unsigned int Class_3_7313989836F385C8___O_TypeDefinitionIndex = 55618;

class Class_3_7313989836F385C8___O : public ::System::Object
{
public:
	static ::System::Action_1<::RPG::Client::MonoEffect*>** StaticGet__0____OnEffectLoaded()
	{
		return (::System::Action_1<::RPG::Client::MonoEffect*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_7313989836F385C8___O_TypeDefinitionIndex)->GetStaticField(0x435C0);
	}
};
