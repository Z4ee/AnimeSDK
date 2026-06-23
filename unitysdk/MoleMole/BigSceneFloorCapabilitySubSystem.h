#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_512A118E897BF755.h"
#include "unitysdk/Foundation/Unreal/FGameplayTag.h"
#include "unitysdk/MoleMole/GameSubsystemBaseEx_1.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_43BD383C98B4C0C5_60;
class Class_1_F087C81F248BFF51;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define MOLEMOLE_BIGSCENEFLOORCAPABILITYSUBSYSTEM_ACTIVATEFLOORCAPABILITY_OFFSET UNITYSDK_OFFSET(0x12B91AE0)
#define MOLEMOLE_BIGSCENEFLOORCAPABILITYSUBSYSTEM_CONSTRUCT_OFFSET UNITYSDK_OFFSET(0x12B923B0)
#define MOLEMOLE_BIGSCENEFLOORCAPABILITYSUBSYSTEM_DEACTIVATEFLOORCAPABILITY_OFFSET UNITYSDK_OFFSET(0x12B91F60)
#define MOLEMOLE_BIGSCENEFLOORCAPABILITYSUBSYSTEM_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x12B92810)
#define MOLEMOLE_BIGSCENEFLOORCAPABILITYSUBSYSTEM_ONWILLDESTROY_OFFSET UNITYSDK_OFFSET(0x12B92B90)
#define MOLEMOLE_BIGSCENEFLOORCAPABILITYSUBSYSTEM__CCTOR_OFFSET UNITYSDK_OFFSET(0x12B92F50)
#define MOLEMOLE_BIGSCENEFLOORCAPABILITYSUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x12B92220)
#define MOLEMOLE_BIGSCENEFLOORCAPABILITYSUBSYSTEM___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x12B934A0)
#define MOLEMOLE_BIGSCENEFLOORCAPABILITYSUBSYSTEM___BASE_ONWILLDESTROY_OFFSET UNITYSDK_OFFSET(0x12B93530)

namespace MoleMole
{
	inline static constexpr unsigned int BigSceneFloorCapabilitySubSystem_TypeDefinitionIndex = 78523;

	class BigSceneFloorCapabilitySubSystem : public ::MoleMole::GameSubsystemBaseEx_1<::MoleMole::BigSceneFloorCapabilitySubSystem*>
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::MoleMole::BigSceneFloorCapabilitySubSystem*>*>** StaticGet_FloorCapabilityTriggerRegistration()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::MoleMole::BigSceneFloorCapabilitySubSystem*>*>**)Il2CppClass::FromTypeDefinitionIndex(BigSceneFloorCapabilitySubSystem_TypeDefinitionIndex)->GetStaticField(0x33BD0);
		}
		static ::System::Collections::Generic::Dictionary_2<::Enum_3_512A118E897BF755, ::System::Func_1<::Class_1_43BD383C98B4C0C5_60*>*>** StaticGet_FloorCapabilityCreation()
		{
			return (::System::Collections::Generic::Dictionary_2<::Enum_3_512A118E897BF755, ::System::Func_1<::Class_1_43BD383C98B4C0C5_60*>*>**)Il2CppClass::FromTypeDefinitionIndex(BigSceneFloorCapabilitySubSystem_TypeDefinitionIndex)->GetStaticField(0x33BD8);
		}
		::System::Collections::Generic::Dictionary_2<::Enum_3_512A118E897BF755, ::System::ValueTuple_2<::Class_1_43BD383C98B4C0C5_60*, ::System::Int32>>* _activatedFloorCapabilities; // 0x10
		::System::Collections::Generic::Dictionary_2<::Foundation::Unreal::FGameplayTag, ::System::Action_1<::MoleMole::BigSceneFloorCapabilitySubSystem*>*>* _floorCapabilityTriggerRegister; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_F087C81F248BFF51*>* _registeredFloorCapabilityTriggers; // 0x20
		::System::Collections::Generic::Dictionary_2<::Class_1_F087C81F248BFF51*, ::System::Collections::Generic::HashSet_1<::Enum_3_512A118E897BF755>*>* _triggerCapabilityMapping; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEFLOORCAPABILITYSUBSYSTEM__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEFLOORCAPABILITYSUBSYSTEM__CCTOR_OFFSET))();
		}

		::Class_1_43BD383C98B4C0C5_60* ActivateFloorCapability(::Enum_3_512A118E897BF755 type, ::Class_1_F087C81F248BFF51* sourceTrigger)
		{
			return ((::Class_1_43BD383C98B4C0C5_60*(*)(::PVOID, ::Enum_3_512A118E897BF755, ::Class_1_F087C81F248BFF51*))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEFLOORCAPABILITYSUBSYSTEM_ACTIVATEFLOORCAPABILITY_OFFSET))(this, type, sourceTrigger);
		}

		::System::Void DeactivateFloorCapability(::Enum_3_512A118E897BF755 type, ::Class_1_F087C81F248BFF51* sourceTrigger)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_512A118E897BF755, ::Class_1_F087C81F248BFF51*))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEFLOORCAPABILITYSUBSYSTEM_DEACTIVATEFLOORCAPABILITY_OFFSET))(this, type, sourceTrigger);
		}

		::System::Void Construct()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEFLOORCAPABILITYSUBSYSTEM_CONSTRUCT_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEFLOORCAPABILITYSUBSYSTEM_ONAWAKE_OFFSET))(this);
		}

		::System::Void OnWillDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEFLOORCAPABILITYSUBSYSTEM_ONWILLDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEFLOORCAPABILITYSUBSYSTEM___BASE_ONAWAKE_OFFSET))(this);
		}

		::System::Void __base_OnWillDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEFLOORCAPABILITYSUBSYSTEM___BASE_ONWILLDESTROY_OFFSET))(this);
		}
	};
}
