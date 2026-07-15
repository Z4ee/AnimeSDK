#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FateRinHouguRarityType.h"

namespace RPG::Client::FateRin::Card { class IFateRinCardKeywordListViewModel; }
namespace RPG::Client::FateRin::Card { class IFateRinCardManaCostViewModel; }
namespace RPG::Client::FateRin::Card { class IFateRinCardTagViewModel; }
namespace System { class String; }

namespace RPG::Client::FateRin::Card
{
	inline static constexpr unsigned int IFateRinCardViewModel_TypeDefinitionIndex = 76219;

	class IFateRinCardViewModel
	{
	public:
	};
}
