#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RogueTournPersonaPresetRoomCardData; }
namespace System { template <typename T1, typename T2> class Func_2; }

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournPersonaStyleDataBase___O_TypeDefinitionIndex = 62446;

	class RogueTournPersonaStyleDataBase___O : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::UInt32, ::RPG::Client::RogueTournPersonaPresetRoomCardData*>** StaticGet__0___GetData()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::Client::RogueTournPersonaPresetRoomCardData*>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournPersonaStyleDataBase___O_TypeDefinitionIndex)->GetStaticField(0x1BC80);
		}
	};
}
