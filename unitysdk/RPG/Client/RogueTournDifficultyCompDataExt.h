#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RogueTournDifficultyCompData; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define RPG_CLIENT_ROGUETOURNDIFFICULTYCOMPDATAEXT_DIFFICULTYCOMPLEVEL_OFFSET UNITYSDK_OFFSET(0x19C1F8D0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournDifficultyCompDataExt_TypeDefinitionIndex = 64587;

	class RogueTournDifficultyCompDataExt : public ::System::Object
	{
	public:
		static ::System::UInt32 DifficultyCompLevel(::System::Collections::Generic::IEnumerable_1<::RPG::Client::RogueTournDifficultyCompData*>* a1)
		{
			return ((::System::UInt32(*)(::System::Collections::Generic::IEnumerable_1<::RPG::Client::RogueTournDifficultyCompData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNDIFFICULTYCOMPDATAEXT_DIFFICULTYCOMPLEVEL_OFFSET))(a1);
		}
	};
}
