#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AbilityProperty.h"
#include "unitysdk/RPG/GameCore/TurnBasedModifierEvent.h"
#include "unitysdk/System/Object.h"

template <typename T> class Class_1_D837DED66799FBE3_DelegateParseJson_1;

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsInModifierCallback___O_TypeDefinitionIndex = 23236;

	class ByIsInModifierCallback___O : public ::System::Object
	{
	public:
		static ::Class_1_D837DED66799FBE3_DelegateParseJson_1<::RPG::GameCore::AbilityProperty>** StaticGet__1___FromJson()
		{
			return (::Class_1_D837DED66799FBE3_DelegateParseJson_1<::RPG::GameCore::AbilityProperty>**)Il2CppClass::FromTypeDefinitionIndex(ByIsInModifierCallback___O_TypeDefinitionIndex)->GetStaticField(0x12BA0);
		}
		static ::Class_1_D837DED66799FBE3_DelegateParseJson_1<::RPG::GameCore::TurnBasedModifierEvent>** StaticGet__0___FromJson()
		{
			return (::Class_1_D837DED66799FBE3_DelegateParseJson_1<::RPG::GameCore::TurnBasedModifierEvent>**)Il2CppClass::FromTypeDefinitionIndex(ByIsInModifierCallback___O_TypeDefinitionIndex)->GetStaticField(0x12BA8);
		}
	};
}
