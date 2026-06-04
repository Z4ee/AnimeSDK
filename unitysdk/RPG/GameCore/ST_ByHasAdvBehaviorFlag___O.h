#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdventureModifierBehaviorFlag.h"
#include "unitysdk/System/Object.h"

template <typename T> class Class_1_9EB2CB86795DEEF1_DelegateParseJson_1;

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_ByHasAdvBehaviorFlag___O_TypeDefinitionIndex = 18959;

	class ST_ByHasAdvBehaviorFlag___O : public ::System::Object
	{
	public:
		static ::Class_1_9EB2CB86795DEEF1_DelegateParseJson_1<::RPG::GameCore::AdventureModifierBehaviorFlag>** StaticGet__0___FromJson()
		{
			return (::Class_1_9EB2CB86795DEEF1_DelegateParseJson_1<::RPG::GameCore::AdventureModifierBehaviorFlag>**)Il2CppClass::FromTypeDefinitionIndex(ST_ByHasAdvBehaviorFlag___O_TypeDefinitionIndex)->GetStaticField(0x49470);
		}
	};
}
