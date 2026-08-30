#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Prop { class ChimeraDuelShopChimeraInstanceView; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace UnityEngine { class Renderer; }

#define RPG_CLIENT_PROP_CHIMERADUELSHOPCHIMERAINSTANCEVIEW___ITERATEPARTS_D__20_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1A8E40A0)
#define RPG_CLIENT_PROP_CHIMERADUELSHOPCHIMERAINSTANCEVIEW___ITERATEPARTS_D__20_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_UNITYENGINE_RENDERER__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1A8E4220)
#define RPG_CLIENT_PROP_CHIMERADUELSHOPCHIMERAINSTANCEVIEW___ITERATEPARTS_D__20_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_UNITYENGINE_RENDERER__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1A8E41B0)
#define RPG_CLIENT_PROP_CHIMERADUELSHOPCHIMERAINSTANCEVIEW___ITERATEPARTS_D__20_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1A8E42A0)
#define RPG_CLIENT_PROP_CHIMERADUELSHOPCHIMERAINSTANCEVIEW___ITERATEPARTS_D__20_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1A8E4210)
#define RPG_CLIENT_PROP_CHIMERADUELSHOPCHIMERAINSTANCEVIEW___ITERATEPARTS_D__20_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1A8E41C0)
#define RPG_CLIENT_PROP_CHIMERADUELSHOPCHIMERAINSTANCEVIEW___ITERATEPARTS_D__20_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A8E4090)
#define RPG_CLIENT_PROP_CHIMERADUELSHOPCHIMERAINSTANCEVIEW___ITERATEPARTS_D__20__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8E4030)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraDuelShopChimeraInstanceView___IterateParts_d__20_TypeDefinitionIndex = 77872;

	class ChimeraDuelShopChimeraInstanceView___IterateParts_d__20 : public ::System::Object
	{
	public:
		::RPG::Client::Prop::ChimeraDuelShopChimeraInstanceView* __4__this; // 0x10
		::UnityEngine::Renderer* __2__current; // 0x18
		::System::Int32 __1__state; // 0x20
		::System::Int32 __l__initialThreadId; // 0x24

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELSHOPCHIMERAINSTANCEVIEW___ITERATEPARTS_D__20__CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELSHOPCHIMERAINSTANCEVIEW___ITERATEPARTS_D__20_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELSHOPCHIMERAINSTANCEVIEW___ITERATEPARTS_D__20_MOVENEXT_OFFSET))(this);
		}

		::UnityEngine::Renderer* System_Collections_Generic_IEnumerator_UnityEngine_Renderer__get_Current()
		{
			return ((::UnityEngine::Renderer*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELSHOPCHIMERAINSTANCEVIEW___ITERATEPARTS_D__20_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_UNITYENGINE_RENDERER__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELSHOPCHIMERAINSTANCEVIEW___ITERATEPARTS_D__20_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELSHOPCHIMERAINSTANCEVIEW___ITERATEPARTS_D__20_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::UnityEngine::Renderer*>* System_Collections_Generic_IEnumerable_UnityEngine_Renderer__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::UnityEngine::Renderer*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELSHOPCHIMERAINSTANCEVIEW___ITERATEPARTS_D__20_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_UNITYENGINE_RENDERER__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELSHOPCHIMERAINSTANCEVIEW___ITERATEPARTS_D__20_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}
	};
}
