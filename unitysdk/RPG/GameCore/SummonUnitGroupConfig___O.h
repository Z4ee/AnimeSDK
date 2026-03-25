#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ELevelPerformanceType.h"
#include "unitysdk/System/Object.h"

template <typename T> class Class_1_F5630E87DACEF386_DelegateParseBinary_1;

namespace RPG::GameCore
{
	inline static constexpr unsigned int SummonUnitGroupConfig___O_TypeDefinitionIndex = 16175;

	class SummonUnitGroupConfig___O : public ::System::Object
	{
	public:
		static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ELevelPerformanceType>** StaticGet__0___FromBinary()
		{
			return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ELevelPerformanceType>**)Il2CppClass::FromTypeDefinitionIndex(SummonUnitGroupConfig___O_TypeDefinitionIndex)->GetStaticField(0x12AA0);
		}
	};
}
