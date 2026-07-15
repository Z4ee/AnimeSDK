#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::AvatarSystem::Property { template <typename T> class EmptyModifier_1; }
namespace RPG::AvatarSystem::Property { template <typename T> class IPropertyModifier_1; }

namespace RPG::AvatarSystem::Property
{
	inline static constexpr unsigned int EmptyModifier_1_TypeDefinitionIndex = 49632;

	template <typename TValue>
	class EmptyModifier_1 : public ::System::Object
	{
	public:
		static ::RPG::AvatarSystem::Property::EmptyModifier_1<TValue>** StaticGet__Instance()
		{
			return (::RPG::AvatarSystem::Property::EmptyModifier_1<TValue>**)Il2CppClass::FromTypeDefinitionIndex(EmptyModifier_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
