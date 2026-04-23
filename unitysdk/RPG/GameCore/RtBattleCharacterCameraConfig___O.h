#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RtBattleCharacterCameraTag.h"
#include "unitysdk/System/Object.h"

template <typename T> class Class_1_F5630E87DACEF386_DelegateParseBinary_1;

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtBattleCharacterCameraConfig___O_TypeDefinitionIndex = 17137;

	class RtBattleCharacterCameraConfig___O : public ::System::Object
	{
	public:
		static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::RtBattleCharacterCameraTag>** StaticGet__0___FromBinary()
		{
			return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::RtBattleCharacterCameraTag>**)Il2CppClass::FromTypeDefinitionIndex(RtBattleCharacterCameraConfig___O_TypeDefinitionIndex)->GetStaticField(0x49CD0);
		}
	};
}
