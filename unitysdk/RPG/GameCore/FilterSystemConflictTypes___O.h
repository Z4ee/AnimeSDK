#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PPEffectFilterType.h"
#include "unitysdk/System/Object.h"

template <typename T> class Class_1_F5630E87DACEF386_DelegateParseBinary_1;

namespace RPG::GameCore
{
	inline static constexpr unsigned int FilterSystemConflictTypes___O_TypeDefinitionIndex = 15613;

	class FilterSystemConflictTypes___O : public ::System::Object
	{
	public:
		static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::PPEffectFilterType>** StaticGet__0___FromBinary()
		{
			return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::PPEffectFilterType>**)Il2CppClass::FromTypeDefinitionIndex(FilterSystemConflictTypes___O_TypeDefinitionIndex)->GetStaticField(0x2F300);
		}
	};
}
