#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_422;
namespace RPG::AvatarSystem::Property { template <typename T> class IPropertyModifierProvider_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

namespace RPG::AvatarSystem::Property
{
	inline static constexpr unsigned int PropertyContext_1_TypeDefinitionIndex = 49635;

	template <typename TValue>
	class PropertyContext_1 : public ::System::Object
	{
	public:
		::System::Collections::Generic::IReadOnlyList_1<::RPG::AvatarSystem::Property::IPropertyModifierProvider_1<TValue>*>* _ModifierProviders; // 0x0
	};
}
