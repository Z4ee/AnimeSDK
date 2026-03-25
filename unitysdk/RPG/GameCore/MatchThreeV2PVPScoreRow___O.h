#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MultiPlayerGameMode.h"
#include "unitysdk/System/Object.h"

template <typename T> class Class_1_F5630E87DACEF386_DelegateParseBinary_1;

namespace RPG::GameCore
{
	inline static constexpr unsigned int MatchThreeV2PVPScoreRow___O_TypeDefinitionIndex = 10992;

	class MatchThreeV2PVPScoreRow___O : public ::System::Object
	{
	public:
		static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::MultiPlayerGameMode>** StaticGet__0___FromBinary()
		{
			return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::MultiPlayerGameMode>**)Il2CppClass::FromTypeDefinitionIndex(MatchThreeV2PVPScoreRow___O_TypeDefinitionIndex)->GetStaticField(0x28B70);
		}
	};
}
