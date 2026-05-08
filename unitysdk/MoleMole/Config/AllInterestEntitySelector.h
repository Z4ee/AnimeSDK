#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigTargetSelector.h"

namespace MoleMole::Battle { class Entity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_ALLINTERESTENTITYSELECTOR_METHOD_2_1418E9B6808528A4_OFFSET UNITYSDK_OFFSET(0x1869D480)
#define MOLEMOLE_CONFIG_ALLINTERESTENTITYSELECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1869D580)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AllInterestEntitySelector_TypeDefinitionIndex = 61612;

	class AllInterestEntitySelector : public ::MoleMole::Config::ConfigTargetSelector
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ALLINTERESTENTITYSELECTOR__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* Method_2_1418E9B6808528A4(::MoleMole::Battle::Entity* a1)
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ALLINTERESTENTITYSELECTOR_METHOD_2_1418E9B6808528A4_OFFSET))(this, a1);
		}
	};
}
