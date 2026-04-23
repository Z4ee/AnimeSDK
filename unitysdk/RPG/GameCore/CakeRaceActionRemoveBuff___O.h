#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceBuffName.h"
#include "unitysdk/System/Object.h"

template <typename T> class Class_1_F5630E87DACEF386_DelegateParseBinary_1;

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceActionRemoveBuff___O_TypeDefinitionIndex = 17426;

	class CakeRaceActionRemoveBuff___O : public ::System::Object
	{
	public:
		static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::CakeRaceBuffName>** StaticGet__0___FromBinary()
		{
			return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::CakeRaceBuffName>**)Il2CppClass::FromTypeDefinitionIndex(CakeRaceActionRemoveBuff___O_TypeDefinitionIndex)->GetStaticField(0x262A0);
		}
	};
}
