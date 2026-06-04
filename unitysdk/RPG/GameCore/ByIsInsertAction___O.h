#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SkillType.h"
#include "unitysdk/System/Object.h"

template <typename T> class Class_1_9EB2CB86795DEEF1_DelegateParseJson_1;

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsInsertAction___O_TypeDefinitionIndex = 21332;

	class ByIsInsertAction___O : public ::System::Object
	{
	public:
		static ::Class_1_9EB2CB86795DEEF1_DelegateParseJson_1<::RPG::GameCore::SkillType>** StaticGet__0___FromJson()
		{
			return (::Class_1_9EB2CB86795DEEF1_DelegateParseJson_1<::RPG::GameCore::SkillType>**)Il2CppClass::FromTypeDefinitionIndex(ByIsInsertAction___O_TypeDefinitionIndex)->GetStaticField(0x9930);
		}
	};
}
