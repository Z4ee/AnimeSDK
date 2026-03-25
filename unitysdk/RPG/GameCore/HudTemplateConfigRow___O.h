#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GotoType.h"
#include "unitysdk/RPG/GameCore/HudType.h"
#include "unitysdk/System/Object.h"

template <typename T> class Class_1_F5630E87DACEF386_DelegateParseBinary_1;

namespace RPG::GameCore
{
	inline static constexpr unsigned int HudTemplateConfigRow___O_TypeDefinitionIndex = 12607;

	class HudTemplateConfigRow___O : public ::System::Object
	{
	public:
		static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::HudType>** StaticGet__0___FromBinary()
		{
			return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::HudType>**)Il2CppClass::FromTypeDefinitionIndex(HudTemplateConfigRow___O_TypeDefinitionIndex)->GetStaticField(0x23EE0);
		}
		static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::GotoType>** StaticGet__1___FromBinary()
		{
			return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::GotoType>**)Il2CppClass::FromTypeDefinitionIndex(HudTemplateConfigRow___O_TypeDefinitionIndex)->GetStaticField(0x23EE8);
		}
	};
}
