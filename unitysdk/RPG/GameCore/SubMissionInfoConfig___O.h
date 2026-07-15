#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MissionVerseParam.h"
#include "unitysdk/System/Object.h"

template <typename T> class Class_1_D837DED66799FBE3_DelegateParseJson_1;

namespace RPG::GameCore
{
	inline static constexpr unsigned int SubMissionInfoConfig___O_TypeDefinitionIndex = 14866;

	class SubMissionInfoConfig___O : public ::System::Object
	{
	public:
		static ::Class_1_D837DED66799FBE3_DelegateParseJson_1<::RPG::GameCore::MissionVerseParam>** StaticGet__0___FromJson()
		{
			return (::Class_1_D837DED66799FBE3_DelegateParseJson_1<::RPG::GameCore::MissionVerseParam>**)Il2CppClass::FromTypeDefinitionIndex(SubMissionInfoConfig___O_TypeDefinitionIndex)->GetStaticField(0x54B0);
		}
	};
}
