#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::CustomRP { class CRPTerrain; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define RPG_CUSTOMRP_CRPTERRAIN__GETGROUPSELECTIONDROPDOWNITEMS_D__19_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x16A769D0)
#define RPG_CUSTOMRP_CRPTERRAIN__GETGROUPSELECTIONDROPDOWNITEMS_D__19_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_OBJECT__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x16A76BC0)
#define RPG_CUSTOMRP_CRPTERRAIN__GETGROUPSELECTIONDROPDOWNITEMS_D__19_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x16A76B50)
#define RPG_CUSTOMRP_CRPTERRAIN__GETGROUPSELECTIONDROPDOWNITEMS_D__19_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x16A76C40)
#define RPG_CUSTOMRP_CRPTERRAIN__GETGROUPSELECTIONDROPDOWNITEMS_D__19_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x16A76BB0)
#define RPG_CUSTOMRP_CRPTERRAIN__GETGROUPSELECTIONDROPDOWNITEMS_D__19_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x16A76B60)
#define RPG_CUSTOMRP_CRPTERRAIN__GETGROUPSELECTIONDROPDOWNITEMS_D__19_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16A769C0)
#define RPG_CUSTOMRP_CRPTERRAIN__GETGROUPSELECTIONDROPDOWNITEMS_D__19__CTOR_OFFSET UNITYSDK_OFFSET(0x16A75920)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int CRPTerrain__GetGroupSelectionDropdownItems_d__19_TypeDefinitionIndex = 29343;

	class CRPTerrain__GetGroupSelectionDropdownItems_d__19 : public ::System::Object
	{
	public:
		::System::Object* __2__current; // 0x10
		::RPG::CustomRP::CRPTerrain* __4__this; // 0x18
		::System::Int32 __l__initialThreadId; // 0x20
		::System::Int32 _i_5__2; // 0x24
		::System::Int32 __1__state; // 0x28

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPTERRAIN__GETGROUPSELECTIONDROPDOWNITEMS_D__19__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPTERRAIN__GETGROUPSELECTIONDROPDOWNITEMS_D__19_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPTERRAIN__GETGROUPSELECTIONDROPDOWNITEMS_D__19_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPTERRAIN__GETGROUPSELECTIONDROPDOWNITEMS_D__19_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPTERRAIN__GETGROUPSELECTIONDROPDOWNITEMS_D__19_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPTERRAIN__GETGROUPSELECTIONDROPDOWNITEMS_D__19_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Object*>* System_Collections_Generic_IEnumerable_System_Object__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPTERRAIN__GETGROUPSELECTIONDROPDOWNITEMS_D__19_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_OBJECT__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPTERRAIN__GETGROUPSELECTIONDROPDOWNITEMS_D__19_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}
	};
}
