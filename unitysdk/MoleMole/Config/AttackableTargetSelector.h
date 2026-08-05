#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigTargetSelector.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_ATTACKABLETARGETSELECTOR_METHOD_2_97C7C91117561143_OFFSET UNITYSDK_OFFSET(0x17298CD0)
#define MOLEMOLE_CONFIG_ATTACKABLETARGETSELECTOR_METHOD_2_AD9D92D8E8D469F9_OFFSET UNITYSDK_OFFSET(0x17298880)
#define MOLEMOLE_CONFIG_ATTACKABLETARGETSELECTOR_METHOD_2_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0x17298DE0)
#define MOLEMOLE_CONFIG_ATTACKABLETARGETSELECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x17298E20)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AttackableTargetSelector_TypeDefinitionIndex = 60896;

	class AttackableTargetSelector : public ::MoleMole::Config::ConfigTargetSelector
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* _cache; // 0x10
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _idSet; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ATTACKABLETARGETSELECTOR__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* Method_2_AD9D92D8E8D469F9(::MoleMole::Battle::Entity* a1)
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ATTACKABLETARGETSELECTOR_METHOD_2_AD9D92D8E8D469F9_OFFSET))(this, a1);
		}

		::System::String* Method_2_DA1BF2C227DC3D86()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ATTACKABLETARGETSELECTOR_METHOD_2_DA1BF2C227DC3D86_OFFSET))(this);
		}

		::System::Void Method_2_97C7C91117561143(::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ATTACKABLETARGETSELECTOR_METHOD_2_97C7C91117561143_OFFSET))(this, a1);
		}
	};
}
