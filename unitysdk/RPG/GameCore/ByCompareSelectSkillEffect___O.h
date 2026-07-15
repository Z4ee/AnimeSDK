#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SkillEffect.h"
#include "unitysdk/System/Object.h"

template <typename T> class Class_1_D837DED66799FBE3_DelegateParseJson_1;

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareSelectSkillEffect___O_TypeDefinitionIndex = 22195;

	class ByCompareSelectSkillEffect___O : public ::System::Object
	{
	public:
		static ::Class_1_D837DED66799FBE3_DelegateParseJson_1<::RPG::GameCore::SkillEffect>** StaticGet__0___FromJson()
		{
			return (::Class_1_D837DED66799FBE3_DelegateParseJson_1<::RPG::GameCore::SkillEffect>**)Il2CppClass::FromTypeDefinitionIndex(ByCompareSelectSkillEffect___O_TypeDefinitionIndex)->GetStaticField(0x272E0);
		}
	};
}
