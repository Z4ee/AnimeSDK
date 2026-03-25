#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ItemRarity.h"
#include "unitysdk/System/Object.h"

template <typename T> class Class_1_F5630E87DACEF386_DelegateParseBinary_1;

namespace RPG::GameCore
{
	inline static constexpr unsigned int GachaTimelineConfig___O_TypeDefinitionIndex = 15663;

	class GachaTimelineConfig___O : public ::System::Object
	{
	public:
		static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ItemRarity>** StaticGet__0___FromBinary()
		{
			return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ItemRarity>**)Il2CppClass::FromTypeDefinitionIndex(GachaTimelineConfig___O_TypeDefinitionIndex)->GetStaticField(0x1F770);
		}
	};
}
