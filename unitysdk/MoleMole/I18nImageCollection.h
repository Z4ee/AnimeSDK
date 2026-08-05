#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/I18nImage.h"
#include "unitysdk/MoleMole/LanguageType.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace MoleMole
{
	inline static constexpr unsigned int I18nImageCollection_TypeDefinitionIndex = 42996;

	struct alignas(8) I18nImageCollection
	{
		::System::String* imageKey; // 0x10
		::MoleMole::LanguageType DefaultLanguageType; // 0x18
		::System::Collections::Generic::List_1<::MoleMole::I18nImage>* I18NImages; // 0x20
	};
}
