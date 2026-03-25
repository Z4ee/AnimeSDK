#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceTargetLockStatus.h"
#include "unitysdk/System/Object.h"

template <typename T> class Class_1_F5630E87DACEF386_DelegateParseBinary_1;

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceCatCommonConfig___O_TypeDefinitionIndex = 16900;

	class CakeRaceCatCommonConfig___O : public ::System::Object
	{
	public:
		static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::CakeRaceTargetLockStatus>** StaticGet__0___FromBinary()
		{
			return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::CakeRaceTargetLockStatus>**)Il2CppClass::FromTypeDefinitionIndex(CakeRaceCatCommonConfig___O_TypeDefinitionIndex)->GetStaticField(0x254F0);
		}
	};
}
