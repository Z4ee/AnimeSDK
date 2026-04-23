#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RogueTournPersonaRoomAttributeData; }
namespace System { template <typename T1, typename T2> class Func_2; }

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournPersonaGameRoomCardData___O_TypeDefinitionIndex = 62424;

	class RogueTournPersonaGameRoomCardData___O : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::UInt32, ::RPG::Client::RogueTournPersonaRoomAttributeData*>** StaticGet__0___GetData()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::Client::RogueTournPersonaRoomAttributeData*>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournPersonaGameRoomCardData___O_TypeDefinitionIndex)->GetStaticField(0x1A9B0);
		}
	};
}
