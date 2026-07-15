#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::AvatarSystem { class IAvatar; }
namespace System { template <typename T1, typename T2> class Func_2; }

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournBuildRefInfo___O_TypeDefinitionIndex = 64529;

	class RogueTournBuildRefInfo___O : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::AvatarSystem::IAvatar*, ::System::Boolean>** StaticGet__0___CheckIsHero()
		{
			return (::System::Func_2<::RPG::AvatarSystem::IAvatar*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournBuildRefInfo___O_TypeDefinitionIndex)->GetStaticField(0x28C30);
		}
	};
}
