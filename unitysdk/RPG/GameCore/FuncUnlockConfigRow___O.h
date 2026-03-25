#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EntranceShowType.h"
#include "unitysdk/System/Object.h"

template <typename T> class Class_1_F5630E87DACEF386_DelegateParseBinary_1;

namespace RPG::GameCore
{
	inline static constexpr unsigned int FuncUnlockConfigRow___O_TypeDefinitionIndex = 12160;

	class FuncUnlockConfigRow___O : public ::System::Object
	{
	public:
		static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::EntranceShowType>** StaticGet__0___FromBinary()
		{
			return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::EntranceShowType>**)Il2CppClass::FromTypeDefinitionIndex(FuncUnlockConfigRow___O_TypeDefinitionIndex)->GetStaticField(0x1F5F0);
		}
	};
}
