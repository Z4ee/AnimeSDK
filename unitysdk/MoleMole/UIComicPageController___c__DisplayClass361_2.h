#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIComicPageController___c__DisplayClass361_1; }
namespace System { class String; }

#define MOLEMOLE_UICOMICPAGECONTROLLER___C__DISPLAYCLASS361_2__CTOR_OFFSET UNITYSDK_OFFSET(0x15A3A100)

namespace MoleMole
{
	inline static constexpr unsigned int UIComicPageController___c__DisplayClass361_2_TypeDefinitionIndex = 46629;

	class UIComicPageController___c__DisplayClass361_2 : public ::System::Object
	{
	public:
		::MoleMole::UIComicPageController___c__DisplayClass361_1* CS___8__locals2; // 0x10
		::System::String* endAudioKey; // 0x18
		::System::Single audioDuration; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER___C__DISPLAYCLASS361_2__CTOR_OFFSET))(this);
		}
	};
}
