#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/CommonAbilityTarget.h"
#include "unitysdk/MoleMole/Config/EntityType.h"

namespace MoleMole::Battle { class Entity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_ENTITYTYPEABILITYTARGET_METHOD_3_78BB607F43B05857_OFFSET UNITYSDK_OFFSET(0x1AA67FE0)
#define MOLEMOLE_CONFIG_ENTITYTYPEABILITYTARGET_METHOD_3_7D517655F72D87C3_OFFSET UNITYSDK_OFFSET(0x1AA67E90)
#define MOLEMOLE_CONFIG_ENTITYTYPEABILITYTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA67FD0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int EntityTypeAbilityTarget_TypeDefinitionIndex = 80383;

	class EntityTypeAbilityTarget : public ::MoleMole::Config::CommonAbilityTarget
	{
	public:
		::MoleMole::Config::EntityType entityType; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ENTITYTYPEABILITYTARGET__CTOR_OFFSET))(this);
		}

		::System::Boolean Method_3_7D517655F72D87C3(::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* a1, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ENTITYTYPEABILITYTARGET_METHOD_3_7D517655F72D87C3_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_3_78BB607F43B05857(::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* a1, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ENTITYTYPEABILITYTARGET_METHOD_3_78BB607F43B05857_OFFSET))(this, a1, a2);
		}
	};
}
