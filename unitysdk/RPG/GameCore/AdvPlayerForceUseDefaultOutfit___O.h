#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PlayerOutfitSlotType.h"
#include "unitysdk/System/Object.h"

template <typename T> class Class_1_F5630E87DACEF386_DelegateParseBinary_1;

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvPlayerForceUseDefaultOutfit___O_TypeDefinitionIndex = 20019;

	class AdvPlayerForceUseDefaultOutfit___O : public ::System::Object
	{
	public:
		static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::PlayerOutfitSlotType>** StaticGet__0___FromBinary()
		{
			return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::PlayerOutfitSlotType>**)Il2CppClass::FromTypeDefinitionIndex(AdvPlayerForceUseDefaultOutfit___O_TypeDefinitionIndex)->GetStaticField(0x5940);
		}
	};
}
