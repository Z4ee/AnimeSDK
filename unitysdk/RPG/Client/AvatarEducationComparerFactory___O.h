#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::AvatarSystem { class IAvatar; }
namespace System { template <typename T1, typename T2> class Func_2; }

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarEducationComparerFactory___O_TypeDefinitionIndex = 62544;

	class AvatarEducationComparerFactory___O : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::AvatarSystem::IAvatar*, ::System::Boolean>** StaticGet__1___CheckIsGrowthTarget()
		{
			return (::System::Func_2<::RPG::AvatarSystem::IAvatar*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(AvatarEducationComparerFactory___O_TypeDefinitionIndex)->GetStaticField(0x658C0);
		}
		static ::System::Func_2<::RPG::AvatarSystem::IAvatar*, ::System::Boolean>** StaticGet__0___CheckIsTrial()
		{
			return (::System::Func_2<::RPG::AvatarSystem::IAvatar*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(AvatarEducationComparerFactory___O_TypeDefinitionIndex)->GetStaticField(0x658C8);
		}
		static ::System::Func_2<::RPG::AvatarSystem::IAvatar*, ::System::Boolean>** StaticGet__2___CheckIsMarked()
		{
			return (::System::Func_2<::RPG::AvatarSystem::IAvatar*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(AvatarEducationComparerFactory___O_TypeDefinitionIndex)->GetStaticField(0x658D0);
		}
	};
}
