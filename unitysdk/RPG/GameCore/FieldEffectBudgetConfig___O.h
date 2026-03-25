#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EntityType.h"
#include "unitysdk/RPG/GameCore/StageType.h"
#include "unitysdk/System/Object.h"

template <typename T> class Class_1_F5630E87DACEF386_DelegateParseBinary_1;

namespace RPG::GameCore
{
	inline static constexpr unsigned int FieldEffectBudgetConfig___O_TypeDefinitionIndex = 15100;

	class FieldEffectBudgetConfig___O : public ::System::Object
	{
	public:
		static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::StageType>** StaticGet__1___FromBinary()
		{
			return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::StageType>**)Il2CppClass::FromTypeDefinitionIndex(FieldEffectBudgetConfig___O_TypeDefinitionIndex)->GetStaticField(0x2D910);
		}
		static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::EntityType>** StaticGet__0___FromBinary()
		{
			return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::EntityType>**)Il2CppClass::FromTypeDefinitionIndex(FieldEffectBudgetConfig___O_TypeDefinitionIndex)->GetStaticField(0x2D918);
		}
	};
}
