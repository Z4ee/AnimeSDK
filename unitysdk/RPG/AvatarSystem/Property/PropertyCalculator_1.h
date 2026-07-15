#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_422;
namespace RPG::AvatarSystem::Property { template <typename T> class IPropertyContext_1; }
namespace RPG::AvatarSystem::Property { template <typename T> class IPropertyFormula_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

namespace RPG::AvatarSystem::Property
{
	inline static constexpr unsigned int PropertyCalculator_1_TypeDefinitionIndex = 49629;

	template <typename TValue>
	class PropertyCalculator_1 : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::Class_0_16E4307DCC419505_422*, ::RPG::AvatarSystem::Property::IPropertyFormula_1<TValue>*>* _Formulas; // 0x0
	};
}
