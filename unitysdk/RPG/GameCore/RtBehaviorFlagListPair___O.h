#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RtBehaviorFlag.h"
#include "unitysdk/System/Object.h"

template <typename T> class Class_1_F5630E87DACEF386_DelegateParseBinary_1;

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtBehaviorFlagListPair___O_TypeDefinitionIndex = 16751;

	class RtBehaviorFlagListPair___O : public ::System::Object
	{
	public:
		static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::RtBehaviorFlag>** StaticGet__0___FromBinary()
		{
			return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::RtBehaviorFlag>**)Il2CppClass::FromTypeDefinitionIndex(RtBehaviorFlagListPair___O_TypeDefinitionIndex)->GetStaticField(0x4A1A0);
		}
	};
}
