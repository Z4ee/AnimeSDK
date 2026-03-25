#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PamActionType.h"
#include "unitysdk/System/Object.h"

template <typename T> class Class_1_F5630E87DACEF386_DelegateParseBinary_1;

namespace RPG::GameCore
{
	inline static constexpr unsigned int PamPlaceInfoRow___O_TypeDefinitionIndex = 13102;

	class PamPlaceInfoRow___O : public ::System::Object
	{
	public:
		static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::PamActionType>** StaticGet__0___FromBinary()
		{
			return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::PamActionType>**)Il2CppClass::FromTypeDefinitionIndex(PamPlaceInfoRow___O_TypeDefinitionIndex)->GetStaticField(0x2F680);
		}
	};
}
