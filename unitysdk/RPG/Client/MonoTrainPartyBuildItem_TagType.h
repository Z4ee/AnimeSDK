#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int MonoTrainPartyBuildItem_TagType_TypeDefinitionIndex = 65802;

	enum class MonoTrainPartyBuildItem_TagType : ::System::Int32
	{
		None = 0,
		Big = 1,
		Mid = 2,
		Small = 4,
		Hang = 8,
		Put = 16,
		Salt = 32,
		Badge = 64,
		DisplayShelf = 128,
		DisplayWindow = 256,
		DisplayPiece = 512,
		Decoration = 1024,
	};
}
