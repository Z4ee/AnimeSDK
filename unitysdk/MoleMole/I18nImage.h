#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/LanguageType.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace UnityEngine { class Texture2D; }

namespace MoleMole
{
	inline static constexpr unsigned int I18nImage_TypeDefinitionIndex = 40554;

	struct alignas(8) I18nImage
	{
		::MoleMole::LanguageType LanguageType; // 0x10
		::System::String* ImagePath; // 0x18
		::UnityEngine::Texture2D* imageTex; // 0x20
	};
}
