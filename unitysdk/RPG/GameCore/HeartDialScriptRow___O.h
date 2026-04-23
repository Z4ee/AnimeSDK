#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/HeartDialEmoType.h"
#include "unitysdk/RPG/GameCore/HeartDialStepType.h"
#include "unitysdk/System/Object.h"

template <typename T> class Class_1_F5630E87DACEF386_DelegateParseBinary_1;

namespace RPG::GameCore
{
	inline static constexpr unsigned int HeartDialScriptRow___O_TypeDefinitionIndex = 12989;

	class HeartDialScriptRow___O : public ::System::Object
	{
	public:
		static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::HeartDialEmoType>** StaticGet__1___FromBinary()
		{
			return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::HeartDialEmoType>**)Il2CppClass::FromTypeDefinitionIndex(HeartDialScriptRow___O_TypeDefinitionIndex)->GetStaticField(0x3CF80);
		}
		static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::HeartDialStepType>** StaticGet__0___FromBinary()
		{
			return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::HeartDialStepType>**)Il2CppClass::FromTypeDefinitionIndex(HeartDialScriptRow___O_TypeDefinitionIndex)->GetStaticField(0x3CF88);
		}
	};
}
