#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Timeline { class ImgSplitScreenGroupPlayableAsset_SpriteItem; }

#define MOLEMOLE_COMICIMGSPLITSCREENGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x1C221930)

namespace MoleMole
{
	inline static constexpr unsigned int ComicImgSplitScreenGroup_TypeDefinitionIndex = 30577;

	class ComicImgSplitScreenGroup : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::Timeline::ImgSplitScreenGroupPlayableAsset_SpriteItem*>* spriteItems; // 0x10
		::System::String* comicImgStyle; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMICIMGSPLITSCREENGROUP__CTOR_OFFSET))(this);
		}
	};
}
