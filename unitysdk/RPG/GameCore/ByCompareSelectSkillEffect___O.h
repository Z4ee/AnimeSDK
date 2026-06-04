#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SkillEffect.h"
#include "unitysdk/System/Object.h"

template <typename T> class Class_1_9EB2CB86795DEEF1_DelegateParseJson_1;

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareSelectSkillEffect___O_TypeDefinitionIndex = 21769;

	class ByCompareSelectSkillEffect___O : public ::System::Object
	{
	public:
		static ::Class_1_9EB2CB86795DEEF1_DelegateParseJson_1<::RPG::GameCore::SkillEffect>** StaticGet__0___FromJson()
		{
			return (::Class_1_9EB2CB86795DEEF1_DelegateParseJson_1<::RPG::GameCore::SkillEffect>**)Il2CppClass::FromTypeDefinitionIndex(ByCompareSelectSkillEffect___O_TypeDefinitionIndex)->GetStaticField(0x81B0);
		}
	};
}
