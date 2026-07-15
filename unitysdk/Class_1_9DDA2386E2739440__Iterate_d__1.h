#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_9DDA2386E2739440;
class Class_1_CC0F8AEEF044EF7C;
class Class_1_F0B05799E431C176;
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define CLASS_1_9DDA2386E2739440__ITERATE_D__1_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1453EF50)
#define CLASS_1_9DDA2386E2739440__ITERATE_D__1_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_CLIENT_ACTIVITYBENEFITV2CONFIGDATA__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1453F180)
#define CLASS_1_9DDA2386E2739440__ITERATE_D__1_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_ACTIVITYBENEFITV2CONFIGDATA__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1453F110)
#define CLASS_1_9DDA2386E2739440__ITERATE_D__1_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1453F1E0)
#define CLASS_1_9DDA2386E2739440__ITERATE_D__1_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1453F170)
#define CLASS_1_9DDA2386E2739440__ITERATE_D__1_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1453F120)
#define CLASS_1_9DDA2386E2739440__ITERATE_D__1_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1453EF20)
#define CLASS_1_9DDA2386E2739440__ITERATE_D__1__CTOR_OFFSET UNITYSDK_OFFSET(0x1453ED50)
#define CLASS_1_9DDA2386E2739440__ITERATE_D__1___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x1453EF40)

inline static constexpr unsigned int Class_1_9DDA2386E2739440__Iterate_d__1_TypeDefinitionIndex = 58665;

class Class_1_9DDA2386E2739440__Iterate_d__1 : public ::System::Object
{
public:
	::Class_1_9DDA2386E2739440* __4__this; // 0x10
	::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::Class_1_F0B05799E431C176*> _iter_5__2; // 0x18
	::Class_1_CC0F8AEEF044EF7C* __2__current; // 0x58
	::System::Int32 __l__initialThreadId; // 0x60
	::System::Int32 __1__state; // 0x64

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_9DDA2386E2739440__ITERATE_D__1__CTOR_OFFSET))(this, a1);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9DDA2386E2739440__ITERATE_D__1_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9DDA2386E2739440__ITERATE_D__1_MOVENEXT_OFFSET))(this);
	}

	::System::Void __m__Finally1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9DDA2386E2739440__ITERATE_D__1___M__FINALLY1_OFFSET))(this);
	}

	::Class_1_CC0F8AEEF044EF7C* System_Collections_Generic_IEnumerator_RPG_Client_ActivityBenefitV2ConfigData__get_Current()
	{
		return ((::Class_1_CC0F8AEEF044EF7C*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9DDA2386E2739440__ITERATE_D__1_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_ACTIVITYBENEFITV2CONFIGDATA__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9DDA2386E2739440__ITERATE_D__1_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9DDA2386E2739440__ITERATE_D__1_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::Class_1_CC0F8AEEF044EF7C*>* System_Collections_Generic_IEnumerable_RPG_Client_ActivityBenefitV2ConfigData__GetEnumerator()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::Class_1_CC0F8AEEF044EF7C*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9DDA2386E2739440__ITERATE_D__1_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_CLIENT_ACTIVITYBENEFITV2CONFIGDATA__GETENUMERATOR_OFFSET))(this);
	}

	::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9DDA2386E2739440__ITERATE_D__1_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
	}
};
