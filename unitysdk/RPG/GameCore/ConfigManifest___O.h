#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
template <typename T> class Class_1_9DED06D267F0347B_DelegateParseJson_1;

namespace RPG::GameCore
{
	inline static constexpr unsigned int ConfigManifest___O_TypeDefinitionIndex = 45445;

	class ConfigManifest___O : public ::System::Object
	{
	public:
		static ::Class_1_9DED06D267F0347B_DelegateParseJson_1<::System::String*>** StaticGet__0___FromJson()
		{
			return (::Class_1_9DED06D267F0347B_DelegateParseJson_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigManifest___O_TypeDefinitionIndex)->GetStaticField(0x45830);
		}
	};
}
