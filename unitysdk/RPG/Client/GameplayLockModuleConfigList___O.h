#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GamePlayLockTarget.h"
#include "unitysdk/RPG/Client/LockFlagType.h"
#include "unitysdk/RPG/Client/LockSource.h"
#include "unitysdk/System/Object.h"

template <typename T> class Class_1_F5630E87DACEF386_DelegateParseBinary_1;

namespace RPG::Client
{
	inline static constexpr unsigned int GameplayLockModuleConfigList___O_TypeDefinitionIndex = 9931;

	class GameplayLockModuleConfigList___O : public ::System::Object
	{
	public:
		static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::Client::LockFlagType>** StaticGet__1___FromBinary()
		{
			return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::Client::LockFlagType>**)Il2CppClass::FromTypeDefinitionIndex(GameplayLockModuleConfigList___O_TypeDefinitionIndex)->GetStaticField(0x1E5F0);
		}
		static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::Client::GamePlayLockTarget>** StaticGet__2___FromBinary()
		{
			return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::Client::GamePlayLockTarget>**)Il2CppClass::FromTypeDefinitionIndex(GameplayLockModuleConfigList___O_TypeDefinitionIndex)->GetStaticField(0x1E5F8);
		}
		static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::Client::LockSource>** StaticGet__0___FromBinary()
		{
			return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::Client::LockSource>**)Il2CppClass::FromTypeDefinitionIndex(GameplayLockModuleConfigList___O_TypeDefinitionIndex)->GetStaticField(0x1E600);
		}
	};
}
