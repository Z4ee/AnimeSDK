#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Prop { class JigsawItemData; }
namespace RPG::Client::Prop { class JigsawPuzzleBoard; }
namespace RPG::Client::Prop { class JigsawPuzzleItem; }
namespace UnityEngine { class RectTransform; }

#define RPG_CLIENT_JIGSAWPUZZLEUTILS_ISMOUSEPOSINRECTBYCLAMP_OFFSET UNITYSDK_OFFSET(0x99732A0)
#define RPG_CLIENT_JIGSAWPUZZLEUTILS_ISPOSINRECT_OFFSET UNITYSDK_OFFSET(0x9973950)
#define RPG_CLIENT_JIGSAWPUZZLEUTILS_SETUPJIGSAWPUZZLEITEM_OFFSET UNITYSDK_OFFSET(0x99738A0)

namespace RPG::Client
{
	inline static constexpr unsigned int JigsawPuzzleUtils_TypeDefinitionIndex = 53403;

	class JigsawPuzzleUtils : public ::System::Object
	{
	public:
		static ::System::Void SetupJigsawPuzzleItem(::RPG::Client::Prop::JigsawPuzzleItem* item, ::RPG::Client::Prop::JigsawItemData* itemData, ::RPG::Client::Prop::JigsawPuzzleBoard* board)
		{
			return ((::System::Void(*)(::RPG::Client::Prop::JigsawPuzzleItem*, ::RPG::Client::Prop::JigsawItemData*, ::RPG::Client::Prop::JigsawPuzzleBoard*))((::PBYTE)hIl2Cpp + RPG_CLIENT_JIGSAWPUZZLEUTILS_SETUPJIGSAWPUZZLEITEM_OFFSET))(item, itemData, board);
		}

		static ::System::Boolean IsMousePosInRectByClamp(::UnityEngine::RectTransform* rectTransfrom)
		{
			return ((::System::Boolean(*)(::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_JIGSAWPUZZLEUTILS_ISMOUSEPOSINRECTBYCLAMP_OFFSET))(rectTransfrom);
		}

		static ::System::Boolean IsPosInRect(::UnityEngine::RectTransform* rectTransfrom, ::System::Single positionX, ::System::Single positionY)
		{
			return ((::System::Boolean(*)(::UnityEngine::RectTransform*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_JIGSAWPUZZLEUTILS_ISPOSINRECT_OFFSET))(rectTransfrom, positionX, positionY);
		}
	};
}
