#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LoadingDescGroup.h"
#include "unitysdk/System/Object.h"

template <typename T> class Class_1_F5630E87DACEF386_DelegateParseBinary_1;

namespace RPG::GameCore
{
	inline static constexpr unsigned int LoadingFuncConfigRow___O_TypeDefinitionIndex = 12773;

	class LoadingFuncConfigRow___O : public ::System::Object
	{
	public:
		static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LoadingDescGroup>** StaticGet__0___FromBinary()
		{
			return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LoadingDescGroup>**)Il2CppClass::FromTypeDefinitionIndex(LoadingFuncConfigRow___O_TypeDefinitionIndex)->GetStaticField(0x268C0);
		}
	};
}
