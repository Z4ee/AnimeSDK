#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonoSceneObjectBase.h"
#include "unitysdk/MoleMole/MonoTowerHolderObject_Enum_3_A194B73A82D9E1B3.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_MONOTOWERHOLDEROBJECT_GETALL_OFFSET UNITYSDK_OFFSET(0x13865E60)
#define MOLEMOLE_MONOTOWERHOLDEROBJECT_HASTAG_OFFSET UNITYSDK_OFFSET(0x13866040)
#define MOLEMOLE_MONOTOWERHOLDEROBJECT_ISALLOWED_OFFSET UNITYSDK_OFFSET(0x13865FA0)
#define MOLEMOLE_MONOTOWERHOLDEROBJECT_METHOD_7_BB5BE9EEA0111E72_OFFSET UNITYSDK_OFFSET(0x13866270)
#define MOLEMOLE_MONOTOWERHOLDEROBJECT_POPTAG_OFFSET UNITYSDK_OFFSET(0x13866120)
#define MOLEMOLE_MONOTOWERHOLDEROBJECT_PUSHTAG_OFFSET UNITYSDK_OFFSET(0x138660A0)
#define MOLEMOLE_MONOTOWERHOLDEROBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x13866180)

namespace MoleMole
{
	inline static constexpr unsigned int MonoTowerHolderObject_TypeDefinitionIndex = 73648;

	class MonoTowerHolderObject : public ::MoleMole::MonoSceneObjectBase
	{
	public:
		::MoleMole::MonoTowerHolderObject_Enum_3_A194B73A82D9E1B3 TowerRangeType; // 0x28
		::System::String* AddTowerAbility; // 0x30
		::System::Boolean isOccupied; // 0x38
		::System::Collections::Generic::List_1<::System::UInt32>* disableTags; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTOWERHOLDEROBJECT__CTOR_OFFSET))(this);
		}

		static ::Il2CppArray<::MoleMole::MonoTowerHolderObject*>* GetAll()
		{
			return ((::Il2CppArray<::MoleMole::MonoTowerHolderObject*>*(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTOWERHOLDEROBJECT_GETALL_OFFSET))();
		}

		::System::Boolean IsAllowed(::MoleMole::MonoTowerHolderObject_Enum_3_A194B73A82D9E1B3 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::MonoTowerHolderObject_Enum_3_A194B73A82D9E1B3))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTOWERHOLDEROBJECT_ISALLOWED_OFFSET))(this, a1);
		}

		::System::Boolean HasTag()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTOWERHOLDEROBJECT_HASTAG_OFFSET))(this);
		}

		::System::Void PushTag(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTOWERHOLDEROBJECT_PUSHTAG_OFFSET))(this, a1);
		}

		::System::Void PopTag(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTOWERHOLDEROBJECT_POPTAG_OFFSET))(this, a1);
		}

		static ::System::Boolean Method_7_BB5BE9EEA0111E72(::MoleMole::MonoTowerHolderObject* a1)
		{
			return ((::System::Boolean(*)(::MoleMole::MonoTowerHolderObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTOWERHOLDEROBJECT_METHOD_7_BB5BE9EEA0111E72_OFFSET))(a1);
		}
	};
}
