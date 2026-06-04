#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

namespace RPG::Client
{
	inline static constexpr unsigned int MarbleModule___O_TypeDefinitionIndex = 61524;

	class MarbleModule___O : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet__0___OpenMarbleMatchPage()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(MarbleModule___O_TypeDefinitionIndex)->GetStaticField(0x54770);
		}
	};
}
