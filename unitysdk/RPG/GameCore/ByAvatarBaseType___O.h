#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarBaseType.h"
#include "unitysdk/System/Object.h"

template <typename T> class Class_1_D837DED66799FBE3_DelegateParseJson_1;

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByAvatarBaseType___O_TypeDefinitionIndex = 22312;

	class ByAvatarBaseType___O : public ::System::Object
	{
	public:
		static ::Class_1_D837DED66799FBE3_DelegateParseJson_1<::RPG::GameCore::AvatarBaseType>** StaticGet__0___FromJson()
		{
			return (::Class_1_D837DED66799FBE3_DelegateParseJson_1<::RPG::GameCore::AvatarBaseType>**)Il2CppClass::FromTypeDefinitionIndex(ByAvatarBaseType___O_TypeDefinitionIndex)->GetStaticField(0xE0C0);
		}
	};
}
