#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_422;
namespace RPG::AvatarSystem::Property { template <typename T> class IPropertyModifier_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

namespace RPG::AvatarSystem::Property
{
	inline static constexpr unsigned int PropertyModifierBuilder_1_TypeDefinitionIndex = 49636;

	template <typename TValue>
	class PropertyModifierBuilder_1 : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::Class_0_16E4307DCC419505_422*, ::RPG::AvatarSystem::Property::IPropertyModifier_1<TValue>*>* _Modifiers; // 0x0
		::System::Boolean _IsDirty_k__BackingField; // 0x0
	};
}
