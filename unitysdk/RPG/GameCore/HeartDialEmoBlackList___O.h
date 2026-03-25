#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/HeartDialEmoType.h"
#include "unitysdk/System/Object.h"

template <typename T> class Class_1_F5630E87DACEF386_DelegateParseBinary_1;

namespace RPG::GameCore
{
	inline static constexpr unsigned int HeartDialEmoBlackList___O_TypeDefinitionIndex = 19523;

	class HeartDialEmoBlackList___O : public ::System::Object
	{
	public:
		static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::HeartDialEmoType>** StaticGet__0___FromBinary()
		{
			return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::HeartDialEmoType>**)Il2CppClass::FromTypeDefinitionIndex(HeartDialEmoBlackList___O_TypeDefinitionIndex)->GetStaticField(0x23640);
		}
	};
}
