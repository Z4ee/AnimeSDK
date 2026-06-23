#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Vector2Int.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_RANGECURVEITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA515F0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowChessboard_RangeCurveItem_TypeDefinitionIndex = 64430;

	class ConfigHollowChessboard_RangeCurveItem : public ::System::Object
	{
	public:
		::UnityEngine::AnimationCurve* SpringCameraMoveCurve; // 0x10
		::MoleMole::Vector2Int Range; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_RANGECURVEITEM__CTOR_OFFSET))(this);
		}
	};
}
