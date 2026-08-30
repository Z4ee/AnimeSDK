#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Prop { class JigsawItemData; }
namespace RPG::Client::Prop { class JigsawPuzzleBoard; }
namespace RPG::Client::Prop { class JigsawPuzzleItem; }
namespace UnityEngine { class RectTransform; }

#define RPG_CLIENT_JIGSAWPUZZLEUTILS_ISMOUSEPOSINRECTBYCLAMP_OFFSET UNITYSDK_OFFSET(0xD437130)
#define RPG_CLIENT_JIGSAWPUZZLEUTILS_ISPOSINRECT_OFFSET UNITYSDK_OFFSET(0xD437530)
#define RPG_CLIENT_JIGSAWPUZZLEUTILS_SETUPJIGSAWPUZZLEITEM_OFFSET UNITYSDK_OFFSET(0xD437480)

namespace RPG::Client
{
	inline static constexpr unsigned int JigsawPuzzleUtils_TypeDefinitionIndex = 65824;

	class JigsawPuzzleUtils : public ::System::Object
	{
	public:
		static ::System::Void SetupJigsawPuzzleItem(::RPG::Client::Prop::JigsawPuzzleItem* a1, ::RPG::Client::Prop::JigsawItemData* a2, ::RPG::Client::Prop::JigsawPuzzleBoard* a3)
		{
			return ((::System::Void(*)(::RPG::Client::Prop::JigsawPuzzleItem*, ::RPG::Client::Prop::JigsawItemData*, ::RPG::Client::Prop::JigsawPuzzleBoard*))((::PBYTE)hIl2Cpp + RPG_CLIENT_JIGSAWPUZZLEUTILS_SETUPJIGSAWPUZZLEITEM_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean IsMousePosInRectByClamp(::UnityEngine::RectTransform* a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_JIGSAWPUZZLEUTILS_ISMOUSEPOSINRECTBYCLAMP_OFFSET))(a1);
		}

		static ::System::Boolean IsPosInRect(::UnityEngine::RectTransform* a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Boolean(*)(::UnityEngine::RectTransform*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_JIGSAWPUZZLEUTILS_ISPOSINRECT_OFFSET))(a1, a2, a3);
		}
	};
}
