#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIComicPageController___c__DisplayClass340_0; }
namespace System { class String; }

#define MOLEMOLE_UICOMICPAGECONTROLLER___C__DISPLAYCLASS340_1__CTOR_OFFSET UNITYSDK_OFFSET(0x16376DF0)

namespace MoleMole
{
	inline static constexpr unsigned int UIComicPageController___c__DisplayClass340_1_TypeDefinitionIndex = 40024;

	class UIComicPageController___c__DisplayClass340_1 : public ::System::Object
	{
	public:
		::System::String* pageStartAudioKey; // 0x10
		::MoleMole::UIComicPageController___c__DisplayClass340_0* CS___8__locals1; // 0x18
		::System::Single audioDuration; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER___C__DISPLAYCLASS340_1__CTOR_OFFSET))(this);
		}
	};
}
