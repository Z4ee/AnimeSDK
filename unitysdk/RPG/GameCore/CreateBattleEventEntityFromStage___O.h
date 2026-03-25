#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BattleEventEntitySubType.h"
#include "unitysdk/System/Object.h"

template <typename T> class Class_1_F5630E87DACEF386_DelegateParseBinary_1;

namespace RPG::GameCore
{
	inline static constexpr unsigned int CreateBattleEventEntityFromStage___O_TypeDefinitionIndex = 21655;

	class CreateBattleEventEntityFromStage___O : public ::System::Object
	{
	public:
		static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::BattleEventEntitySubType>** StaticGet__0___FromBinary()
		{
			return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::BattleEventEntitySubType>**)Il2CppClass::FromTypeDefinitionIndex(CreateBattleEventEntityFromStage___O_TypeDefinitionIndex)->GetStaticField(0x29260);
		}
	};
}
