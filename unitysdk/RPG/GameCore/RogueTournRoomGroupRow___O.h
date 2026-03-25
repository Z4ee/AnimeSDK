#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueTournRoomType.h"
#include "unitysdk/System/Object.h"

template <typename T> class Class_1_F5630E87DACEF386_DelegateParseBinary_1;

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueTournRoomGroupRow___O_TypeDefinitionIndex = 13696;

	class RogueTournRoomGroupRow___O : public ::System::Object
	{
	public:
		static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::RogueTournRoomType>** StaticGet__0___FromBinary()
		{
			return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::RogueTournRoomType>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournRoomGroupRow___O_TypeDefinitionIndex)->GetStaticField(0x6190);
		}
	};
}
