#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SlotDisplayType.h"
#include "unitysdk/System/Object.h"

template <typename T> class Class_1_F5630E87DACEF386_DelegateParseBinary_1;

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayerRoomSlotConfigRow___O_TypeDefinitionIndex = 13747;

	class PlayerRoomSlotConfigRow___O : public ::System::Object
	{
	public:
		static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::SlotDisplayType>** StaticGet__0___FromBinary()
		{
			return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::SlotDisplayType>**)Il2CppClass::FromTypeDefinitionIndex(PlayerRoomSlotConfigRow___O_TypeDefinitionIndex)->GetStaticField(0x468A0);
		}
	};
}
