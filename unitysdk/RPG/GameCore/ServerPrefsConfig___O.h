#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ServerPrefsType.h"
#include "unitysdk/System/Object.h"

template <typename T> class Class_1_F5630E87DACEF386_DelegateParseBinary_1;

namespace RPG::GameCore
{
	inline static constexpr unsigned int ServerPrefsConfig___O_TypeDefinitionIndex = 22472;

	class ServerPrefsConfig___O : public ::System::Object
	{
	public:
		static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ServerPrefsType>** StaticGet__0___FromBinary()
		{
			return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ServerPrefsType>**)Il2CppClass::FromTypeDefinitionIndex(ServerPrefsConfig___O_TypeDefinitionIndex)->GetStaticField(0x8450);
		}
	};
}
