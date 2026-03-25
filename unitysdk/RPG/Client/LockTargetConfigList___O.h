#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GamePlayLockTarget.h"
#include "unitysdk/System/Object.h"

template <typename T> class Class_1_F5630E87DACEF386_DelegateParseBinary_1;

namespace RPG::Client
{
	inline static constexpr unsigned int LockTargetConfigList___O_TypeDefinitionIndex = 9929;

	class LockTargetConfigList___O : public ::System::Object
	{
	public:
		static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::Client::GamePlayLockTarget>** StaticGet__0___FromBinary()
		{
			return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::Client::GamePlayLockTarget>**)Il2CppClass::FromTypeDefinitionIndex(LockTargetConfigList___O_TypeDefinitionIndex)->GetStaticField(0x1E670);
		}
	};
}
