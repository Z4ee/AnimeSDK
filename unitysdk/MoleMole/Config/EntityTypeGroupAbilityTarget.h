#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/CommonAbilityTarget.h"
#include "unitysdk/MoleMole/Config/EntityType.h"
#include "unitysdk/Struct_2_FA5F50563E60AFBA.h"

namespace MoleMole::Battle { class Entity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_ENTITYTYPEGROUPABILITYTARGET_METHOD_3_A2C4327E28F3EBBC_OFFSET UNITYSDK_OFFSET(0x10D0F7F0)
#define MOLEMOLE_CONFIG_ENTITYTYPEGROUPABILITYTARGET_METHOD_3_AA1449B8ACF66DDA_OFFSET UNITYSDK_OFFSET(0x10D0FB60)
#define MOLEMOLE_CONFIG_ENTITYTYPEGROUPABILITYTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x10D0FAD0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int EntityTypeGroupAbilityTarget_TypeDefinitionIndex = 52225;

	class EntityTypeGroupAbilityTarget : public ::MoleMole::Config::CommonAbilityTarget
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::Config::EntityType>* entityTypeGroup; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ENTITYTYPEGROUPABILITYTARGET__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Struct_2_FA5F50563E60AFBA>* Method_3_A2C4327E28F3EBBC(::MoleMole::Battle::Entity* a1, ::MoleMole::Battle::Entity* a2, ::MoleMole::Battle::Entity* a3, ::MoleMole::Battle::Entity* a4, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* a5, ::System::UInt32 a6)
		{
			return ((::System::Collections::Generic::List_1<::Struct_2_FA5F50563E60AFBA>*(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ENTITYTYPEGROUPABILITYTARGET_METHOD_3_A2C4327E28F3EBBC_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Collections::Generic::List_1<::Struct_2_FA5F50563E60AFBA>* Method_3_AA1449B8ACF66DDA(::MoleMole::Battle::Entity* a1, ::MoleMole::Battle::Entity* a2, ::MoleMole::Battle::Entity* a3, ::MoleMole::Battle::Entity* a4, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* a5, ::System::UInt32 a6)
		{
			return ((::System::Collections::Generic::List_1<::Struct_2_FA5F50563E60AFBA>*(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ENTITYTYPEGROUPABILITYTARGET_METHOD_3_AA1449B8ACF66DDA_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}
	};
}
