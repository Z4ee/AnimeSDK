#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigTargetSelector.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_ZENKOVPYROISPERFECTBLINKAIDTARGETSELECTOR_METHOD_2_795CCF0CFE7601C6_OFFSET UNITYSDK_OFFSET(0x1487EC40)
#define MOLEMOLE_CONFIG_ZENKOVPYROISPERFECTBLINKAIDTARGETSELECTOR_METHOD_2_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0x1487ED90)
#define MOLEMOLE_CONFIG_ZENKOVPYROISPERFECTBLINKAIDTARGETSELECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1487EDD0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ZenkovPyroisPerfectBlinkAidTargetSelector_TypeDefinitionIndex = 87917;

	class ZenkovPyroisPerfectBlinkAidTargetSelector : public ::MoleMole::Config::ConfigTargetSelector
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVPYROISPERFECTBLINKAIDTARGETSELECTOR__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* Method_2_795CCF0CFE7601C6(::MoleMole::Battle::Entity* a1)
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVPYROISPERFECTBLINKAIDTARGETSELECTOR_METHOD_2_795CCF0CFE7601C6_OFFSET))(this, a1);
		}

		::System::String* Method_2_DA1BF2C227DC3D86()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVPYROISPERFECTBLINKAIDTARGETSELECTOR_METHOD_2_DA1BF2C227DC3D86_OFFSET))(this);
		}
	};
}
