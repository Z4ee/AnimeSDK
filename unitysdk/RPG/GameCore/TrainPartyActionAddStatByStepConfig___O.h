#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TrainPartyStatType.h"
#include "unitysdk/System/Object.h"

template <typename T> class Class_1_F5630E87DACEF386_DelegateParseBinary_1;

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyActionAddStatByStepConfig___O_TypeDefinitionIndex = 17175;

	class TrainPartyActionAddStatByStepConfig___O : public ::System::Object
	{
	public:
		static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::TrainPartyStatType>** StaticGet__0___FromBinary()
		{
			return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::TrainPartyStatType>**)Il2CppClass::FromTypeDefinitionIndex(TrainPartyActionAddStatByStepConfig___O_TypeDefinitionIndex)->GetStaticField(0xD510);
		}
	};
}
