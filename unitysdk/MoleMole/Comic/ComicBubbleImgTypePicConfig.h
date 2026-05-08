#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedScriptableObject.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Sprite; }

#define MOLEMOLE_COMIC_COMICBUBBLEIMGTYPEPICCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0BD600)

namespace MoleMole::Comic
{
	inline static constexpr unsigned int ComicBubbleImgTypePicConfig_TypeDefinitionIndex = 30601;

	class ComicBubbleImgTypePicConfig : public ::Sirenix::OdinInspector::SerializedScriptableObject
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::Sprite*>* sprites; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_COMICBUBBLEIMGTYPEPICCONFIG__CTOR_OFFSET))(this);
		}
	};
}
