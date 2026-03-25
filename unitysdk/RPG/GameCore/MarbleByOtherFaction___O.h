#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarbleFaction.h"
#include "unitysdk/System/Object.h"

template <typename T> class Class_1_F5630E87DACEF386_DelegateParseBinary_1;

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleByOtherFaction___O_TypeDefinitionIndex = 15452;

	class MarbleByOtherFaction___O : public ::System::Object
	{
	public:
		static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::MarbleFaction>** StaticGet__0___FromBinary()
		{
			return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::MarbleFaction>**)Il2CppClass::FromTypeDefinitionIndex(MarbleByOtherFaction___O_TypeDefinitionIndex)->GetStaticField(0x27320);
		}
	};
}
