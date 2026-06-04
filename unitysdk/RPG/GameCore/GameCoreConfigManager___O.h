#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

namespace RPG::GameCore
{
	inline static constexpr unsigned int GameCoreConfigManager___O_TypeDefinitionIndex = 52760;

	class GameCoreConfigManager___O : public ::System::Object
	{
	public:
		static ::System::Action_1<::System::Single>** StaticGet__0____OnConfigLoadingProgressChanged()
		{
			return (::System::Action_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(GameCoreConfigManager___O_TypeDefinitionIndex)->GetStaticField(0x67FF0);
		}
		static ::System::Action** StaticGet__1____OnConfigsLoadFinished()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(GameCoreConfigManager___O_TypeDefinitionIndex)->GetStaticField(0x67FF8);
		}
	};
}
