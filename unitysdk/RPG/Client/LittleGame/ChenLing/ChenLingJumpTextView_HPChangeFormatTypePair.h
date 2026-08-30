#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ChenLing/ChenLingHPChangeFormatType.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Transform; }

#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGJUMPTEXTVIEW_HPCHANGEFORMATTYPEPAIR__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC1C890)

namespace RPG::Client::LittleGame::ChenLing
{
	inline static constexpr unsigned int ChenLingJumpTextView_HPChangeFormatTypePair_TypeDefinitionIndex = 77502;

	class ChenLingJumpTextView_HPChangeFormatTypePair : public ::System::Object
	{
	public:
		::RPG::Client::LittleGame::ChenLing::ChenLingHPChangeFormatType HPChangeFormatType; // 0x10
		::UnityEngine::Transform* IconTransform; // 0x18
		::UnityEngine::Transform* TextTransform; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGJUMPTEXTVIEW_HPCHANGEFORMATTYPEPAIR__CTOR_OFFSET))(this);
		}
	};
}
