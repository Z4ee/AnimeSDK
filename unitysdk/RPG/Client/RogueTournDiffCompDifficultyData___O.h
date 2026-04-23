#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RogueTournDifficultyCompData; }
namespace System { template <typename T1, typename T2> class Func_2; }

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournDiffCompDifficultyData___O_TypeDefinitionIndex = 62283;

	class RogueTournDiffCompDifficultyData___O : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::UInt32, ::RPG::Client::RogueTournDifficultyCompData*>** StaticGet__0___GetData()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::Client::RogueTournDifficultyCompData*>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournDiffCompDifficultyData___O_TypeDefinitionIndex)->GetStaticField(0x18990);
		}
	};
}
