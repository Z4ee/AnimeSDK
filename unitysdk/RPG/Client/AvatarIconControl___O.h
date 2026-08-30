#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AvatarSpecialMarkType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarIconControl___O_TypeDefinitionIndex = 60235;

	class AvatarIconControl___O : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::AvatarSpecialMarkType, ::System::String*>** StaticGet__0____GetSpecialMarkColorState()
		{
			return (::System::Func_2<::RPG::Client::AvatarSpecialMarkType, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarIconControl___O_TypeDefinitionIndex)->GetStaticField(0x662F0);
		}
	};
}
