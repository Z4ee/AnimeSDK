#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SkillEffect.h"
#include "unitysdk/System/Object.h"

template <typename T> class Class_1_9EB2CB86795DEEF1_DelegateParseJson_1;

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareControlSkillEffect___O_TypeDefinitionIndex = 21771;

	class ByCompareControlSkillEffect___O : public ::System::Object
	{
	public:
		static ::Class_1_9EB2CB86795DEEF1_DelegateParseJson_1<::RPG::GameCore::SkillEffect>** StaticGet__0___FromJson()
		{
			return (::Class_1_9EB2CB86795DEEF1_DelegateParseJson_1<::RPG::GameCore::SkillEffect>**)Il2CppClass::FromTypeDefinitionIndex(ByCompareControlSkillEffect___O_TypeDefinitionIndex)->GetStaticField(0x7810);
		}
	};
}
