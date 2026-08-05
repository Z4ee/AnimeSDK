#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigAbilityTarget.h"
#include "unitysdk/MoleMole/Config/TeleportSelectionType.h"
#include "unitysdk/MoleMole/Config/TelerportSelectionTarget_Enum_3_2E8E06BE07ABB9AF.h"
#include "unitysdk/Struct_2_FA5F50563E60AFBA.h"

namespace MoleMole::Battle { class Entity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_TELERPORTSELECTIONTARGET_METHOD_2_4E6DE28DCC2F1273_OFFSET UNITYSDK_OFFSET(0x1BD767B0)
#define MOLEMOLE_CONFIG_TELERPORTSELECTIONTARGET_METHOD_2_D05756B786EFE748_OFFSET UNITYSDK_OFFSET(0x1BD770B0)
#define MOLEMOLE_CONFIG_TELERPORTSELECTIONTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD770A0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int TelerportSelectionTarget_TypeDefinitionIndex = 46956;

	class TelerportSelectionTarget : public ::MoleMole::Config::ConfigAbilityTarget
	{
	public:
		::MoleMole::Config::TeleportSelectionType TeleportType; // 0x40
		::MoleMole::Config::TelerportSelectionTarget_Enum_3_2E8E06BE07ABB9AF HandleType; // 0x44
		::System::Collections::Generic::List_1<::Struct_2_FA5F50563E60AFBA>* _resolvedTargets; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_TELERPORTSELECTIONTARGET__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Struct_2_FA5F50563E60AFBA>* Method_2_4E6DE28DCC2F1273(::MoleMole::Battle::Entity* a1, ::MoleMole::Battle::Entity* a2, ::MoleMole::Battle::Entity* a3, ::MoleMole::Battle::Entity* a4, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* a5, ::System::UInt32 a6)
		{
			return ((::System::Collections::Generic::List_1<::Struct_2_FA5F50563E60AFBA>*(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_TELERPORTSELECTIONTARGET_METHOD_2_4E6DE28DCC2F1273_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::MoleMole::Battle::Entity* Method_2_D05756B786EFE748(::MoleMole::Battle::Entity* a1, ::MoleMole::Battle::Entity* a2, ::MoleMole::Battle::Entity* a3, ::MoleMole::Battle::Entity* a4, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* a5, ::System::UInt32 a6)
		{
			return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_TELERPORTSELECTIONTARGET_METHOD_2_D05756B786EFE748_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}
	};
}
