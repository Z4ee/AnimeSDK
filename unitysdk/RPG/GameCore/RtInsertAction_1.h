#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/RtInsertActionPhase.h"
#include "unitysdk/System/Object.h"

class Class_1_E03F8E82A66D87F1;
namespace RPG::GameCore { class GameWorld; }

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtInsertAction_1_TypeDefinitionIndex = 51644;

	template <typename TParam>
	class RtInsertAction_1 : public ::System::Object
	{
	public:
		::RPG::GameCore::GameWorld* _GameWorld; // 0x0
		::Class_1_E03F8E82A66D87F1* _OwnerModule; // 0x0
		::RPG::GameCore::RtInsertActionPhase _Phase; // 0x0
		::System::Int32 _Priority; // 0x0
		TParam _InsertParam; // 0x0
	};
}
