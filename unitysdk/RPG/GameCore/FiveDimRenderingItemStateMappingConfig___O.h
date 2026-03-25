#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FDRIStateMaskEnum.h"
#include "unitysdk/System/Object.h"

template <typename T> class Class_1_F5630E87DACEF386_DelegateParseBinary_1;

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimRenderingItemStateMappingConfig___O_TypeDefinitionIndex = 15321;

	class FiveDimRenderingItemStateMappingConfig___O : public ::System::Object
	{
	public:
		static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FDRIStateMaskEnum>** StaticGet__0___FromBinary()
		{
			return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::FDRIStateMaskEnum>**)Il2CppClass::FromTypeDefinitionIndex(FiveDimRenderingItemStateMappingConfig___O_TypeDefinitionIndex)->GetStaticField(0x2F9F0);
		}
	};
}
