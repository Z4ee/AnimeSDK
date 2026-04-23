#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MapConnectivityEdgeType.h"
#include "unitysdk/System/Object.h"

template <typename T> class Class_1_F5630E87DACEF386_DelegateParseBinary_1;

namespace RPG::GameCore
{
	inline static constexpr unsigned int MapConnectivityEdgeWeightConfig___O_TypeDefinitionIndex = 16490;

	class MapConnectivityEdgeWeightConfig___O : public ::System::Object
	{
	public:
		static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::MapConnectivityEdgeType>** StaticGet__0___FromBinary()
		{
			return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::MapConnectivityEdgeType>**)Il2CppClass::FromTypeDefinitionIndex(MapConnectivityEdgeWeightConfig___O_TypeDefinitionIndex)->GetStaticField(0x33340);
		}
	};
}
