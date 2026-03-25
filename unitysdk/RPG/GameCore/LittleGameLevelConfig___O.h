#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LockSource.h"
#include "unitysdk/System/Object.h"

template <typename T> class Class_1_F5630E87DACEF386_DelegateParseBinary_1;

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameLevelConfig___O_TypeDefinitionIndex = 17293;

	class LittleGameLevelConfig___O : public ::System::Object
	{
	public:
		static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::Client::LockSource>** StaticGet__0___FromBinary()
		{
			return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::Client::LockSource>**)Il2CppClass::FromTypeDefinitionIndex(LittleGameLevelConfig___O_TypeDefinitionIndex)->GetStaticField(0x26650);
		}
	};
}
