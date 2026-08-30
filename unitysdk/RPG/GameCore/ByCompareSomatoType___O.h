#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterSomatoType.h"
#include "unitysdk/System/Object.h"

template <typename T> class Class_1_D837DED66799FBE3_DelegateParseJson_1;

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareSomatoType___O_TypeDefinitionIndex = 23462;

	class ByCompareSomatoType___O : public ::System::Object
	{
	public:
		static ::Class_1_D837DED66799FBE3_DelegateParseJson_1<::RPG::GameCore::CharacterSomatoType>** StaticGet__0___FromJson()
		{
			return (::Class_1_D837DED66799FBE3_DelegateParseJson_1<::RPG::GameCore::CharacterSomatoType>**)Il2CppClass::FromTypeDefinitionIndex(ByCompareSomatoType___O_TypeDefinitionIndex)->GetStaticField(0xF7C0);
		}
	};
}
