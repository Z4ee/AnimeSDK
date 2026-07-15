#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

namespace RPG::Client
{
	inline static constexpr unsigned int UI3DUtilities___O_TypeDefinitionIndex = 69677;

	class UI3DUtilities___O : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet__0___RemoveUnloadSceneUnavailableReason()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UI3DUtilities___O_TypeDefinitionIndex)->GetStaticField(0x4B110);
		}
	};
}
