#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

namespace RPG::Client
{
	inline static constexpr unsigned int EnvironmentSystem___O_TypeDefinitionIndex = 69749;

	class EnvironmentSystem___O : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet__0____RestoreDeferLightingMaterialOnDispose()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(EnvironmentSystem___O_TypeDefinitionIndex)->GetStaticField(0x63E10);
		}
	};
}
