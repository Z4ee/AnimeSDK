#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonEnumCategory.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int BindJsonEnumHelper_1_TypeDefinitionIndex = 23979;

	template <typename E>
	class BindJsonEnumHelper_1 : public ::System::Object
	{
	public:
		static ::System::Nullable_1<::RPG::GameCore::JsonEnumCategory>* StaticGet_BindCategory()
		{
			return (::System::Nullable_1<::RPG::GameCore::JsonEnumCategory>*)Il2CppClass::FromTypeDefinitionIndex(BindJsonEnumHelper_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
