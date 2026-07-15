#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

namespace Coffee::UIExtensions
{
	inline static constexpr unsigned int UIParticleUpdater___O_TypeDefinitionIndex = 42360;

	class UIParticleUpdater___O : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet__0___Refresh()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIParticleUpdater___O_TypeDefinitionIndex)->GetStaticField(0x1140);
		}
	};
}
