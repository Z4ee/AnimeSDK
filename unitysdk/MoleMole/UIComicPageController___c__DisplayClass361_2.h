#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIComicPageController___c__DisplayClass361_1; }
namespace System { class String; }

#define MOLEMOLE_UICOMICPAGECONTROLLER___C__DISPLAYCLASS361_2__CTOR_OFFSET UNITYSDK_OFFSET(0x16D8DEF0)

namespace MoleMole
{
	inline static constexpr unsigned int UIComicPageController___c__DisplayClass361_2_TypeDefinitionIndex = 87090;

	class UIComicPageController___c__DisplayClass361_2 : public ::System::Object
	{
	public:
		::System::String* endAudioKey; // 0x10
		::MoleMole::UIComicPageController___c__DisplayClass361_1* CS___8__locals2; // 0x18
		::System::Single audioDuration; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER___C__DISPLAYCLASS361_2__CTOR_OFFSET))(this);
		}
	};
}
