#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::CustomRP { class CRPTerrain; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define RPG_CUSTOMRP_CRPTERRAIN__GETGROUPSELECTIONDROPDOWNITEMS_D__20_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1C6837F0)
#define RPG_CUSTOMRP_CRPTERRAIN__GETGROUPSELECTIONDROPDOWNITEMS_D__20_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_OBJECT__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1C6839F0)
#define RPG_CUSTOMRP_CRPTERRAIN__GETGROUPSELECTIONDROPDOWNITEMS_D__20_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1C683980)
#define RPG_CUSTOMRP_CRPTERRAIN__GETGROUPSELECTIONDROPDOWNITEMS_D__20_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1C683A70)
#define RPG_CUSTOMRP_CRPTERRAIN__GETGROUPSELECTIONDROPDOWNITEMS_D__20_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1C6839E0)
#define RPG_CUSTOMRP_CRPTERRAIN__GETGROUPSELECTIONDROPDOWNITEMS_D__20_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1C683990)
#define RPG_CUSTOMRP_CRPTERRAIN__GETGROUPSELECTIONDROPDOWNITEMS_D__20_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C6837E0)
#define RPG_CUSTOMRP_CRPTERRAIN__GETGROUPSELECTIONDROPDOWNITEMS_D__20__CTOR_OFFSET UNITYSDK_OFFSET(0x1C682320)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int CRPTerrain__GetGroupSelectionDropdownItems_d__20_TypeDefinitionIndex = 37036;

	class CRPTerrain__GetGroupSelectionDropdownItems_d__20 : public ::System::Object
	{
	public:
		::RPG::CustomRP::CRPTerrain* __4__this; // 0x10
		::System::Object* __2__current; // 0x18
		::System::Int32 __l__initialThreadId; // 0x20
		::System::Int32 _i_5__2; // 0x24
		::System::Int32 __1__state; // 0x28

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPTERRAIN__GETGROUPSELECTIONDROPDOWNITEMS_D__20__CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPTERRAIN__GETGROUPSELECTIONDROPDOWNITEMS_D__20_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPTERRAIN__GETGROUPSELECTIONDROPDOWNITEMS_D__20_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPTERRAIN__GETGROUPSELECTIONDROPDOWNITEMS_D__20_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPTERRAIN__GETGROUPSELECTIONDROPDOWNITEMS_D__20_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPTERRAIN__GETGROUPSELECTIONDROPDOWNITEMS_D__20_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Object*>* System_Collections_Generic_IEnumerable_System_Object__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPTERRAIN__GETGROUPSELECTIONDROPDOWNITEMS_D__20_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_OBJECT__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPTERRAIN__GETGROUPSELECTIONDROPDOWNITEMS_D__20_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}
	};
}
