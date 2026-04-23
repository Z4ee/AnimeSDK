#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PropType.h"
#include "unitysdk/System/Object.h"

template <typename T> class Class_1_F5630E87DACEF386_DelegateParseBinary_1;

namespace RPG::GameCore
{
	inline static constexpr unsigned int SummonUnitInteractionDestroyRule___O_TypeDefinitionIndex = 16706;

	class SummonUnitInteractionDestroyRule___O : public ::System::Object
	{
	public:
		static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::PropType>** StaticGet__0___FromBinary()
		{
			return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::PropType>**)Il2CppClass::FromTypeDefinitionIndex(SummonUnitInteractionDestroyRule___O_TypeDefinitionIndex)->GetStaticField(0x55780);
		}
	};
}
