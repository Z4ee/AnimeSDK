#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MissionVerseParam.h"
#include "unitysdk/System/Object.h"

template <typename T> class Class_1_F5630E87DACEF386_DelegateParseBinary_1;

namespace RPG::GameCore
{
	inline static constexpr unsigned int SubMissionInfoConfig___O_TypeDefinitionIndex = 17435;

	class SubMissionInfoConfig___O : public ::System::Object
	{
	public:
		static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::MissionVerseParam>** StaticGet__0___FromBinary()
		{
			return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::MissionVerseParam>**)Il2CppClass::FromTypeDefinitionIndex(SubMissionInfoConfig___O_TypeDefinitionIndex)->GetStaticField(0x12970);
		}
	};
}
