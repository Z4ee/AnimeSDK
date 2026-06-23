#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/GalGameActionBase.h"
#include "unitysdk/MoleMole/GalGame/GalGameImgExchangeType.h"

namespace System { class String; }

#define MOLEMOLE_GALGAME_GALGAMEDYNAMICPICTUREDISPLAYACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x182E0790)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int GalGameDynamicPictureDisplayAction_TypeDefinitionIndex = 52211;

	class GalGameDynamicPictureDisplayAction : public ::MoleMole::GalGame::GalGameActionBase
	{
	public:
		::System::String* horror30PicFadeOutClip; // 0x10
		::System::String* horror30PicFadeInClip; // 0x18
		::System::String* backgroundKey; // 0x20
		::System::Boolean isUsingSpecialImgExchange; // 0x28
		::MoleMole::GalGame::GalGameImgExchangeType imgExchangeType; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALGAMEDYNAMICPICTUREDISPLAYACTION__CTOR_OFFSET))(this);
		}
	};
}
