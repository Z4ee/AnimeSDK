#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/MoleMole/GameSubsystemBaseEx_1.h"
#include "unitysdk/Struct_2_B210258C7CFBA850.h"
#include "unitysdk/Struct_2_C6E67AD78D549CEA.h"

class Class_0_16E4307DCC419505_612;
class Class_0_16E4307DCC419505_633;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_HACKCHARGESUBSYSTEM_ENTERRANGECHARGEMODE_OFFSET UNITYSDK_OFFSET(0x182E46C0)
#define MOLEMOLE_HACKCHARGESUBSYSTEM_EXITRANGECHARGEMODE_OFFSET UNITYSDK_OFFSET(0x182E4720)
#define MOLEMOLE_HACKCHARGESUBSYSTEM_GETCHARGELINE_OFFSET UNITYSDK_OFFSET(0x182E4180)
#define MOLEMOLE_HACKCHARGESUBSYSTEM_GET_ISRANGECHARGEMODE_OFFSET UNITYSDK_OFFSET(0x182E46A0)
#define MOLEMOLE_HACKCHARGESUBSYSTEM_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x182E4300)
#define MOLEMOLE_HACKCHARGESUBSYSTEM_REGISTERCHARGELINE_OFFSET UNITYSDK_OFFSET(0x182E3E80)
#define MOLEMOLE_HACKCHARGESUBSYSTEM_REGISTERRANGECHARGEEFFECT_OFFSET UNITYSDK_OFFSET(0x182E44E0)
#define MOLEMOLE_HACKCHARGESUBSYSTEM_UNREGISTERCHARGELINE_OFFSET UNITYSDK_OFFSET(0x182E3F70)
#define MOLEMOLE_HACKCHARGESUBSYSTEM_UNREGISTERRANGECHARGEEFFECT_OFFSET UNITYSDK_OFFSET(0x182E45D0)
#define MOLEMOLE_HACKCHARGESUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x182E4780)
#define MOLEMOLE_HACKCHARGESUBSYSTEM___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x182E4880)

namespace MoleMole
{
	inline static constexpr unsigned int HackChargeSubsystem_TypeDefinitionIndex = 76325;

	class HackChargeSubsystem : public ::MoleMole::GameSubsystemBaseEx_1<::MoleMole::HackChargeSubsystem*>
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _rangeChargeSources; // 0x10
		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_633*>* RangeChargeEffects; // 0x18
		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_612*>* Effects; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCHARGESUBSYSTEM__CTOR_OFFSET))(this);
		}

		::Struct_2_C6E67AD78D549CEA RegisterChargeLine(::MoleMole::EntityHandle source, ::MoleMole::EntityHandle target)
		{
			return ((::Struct_2_C6E67AD78D549CEA(*)(::PVOID, ::MoleMole::EntityHandle, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCHARGESUBSYSTEM_REGISTERCHARGELINE_OFFSET))(this, source, target);
		}

		::System::Void UnregisterChargeLine(::Struct_2_C6E67AD78D549CEA handle)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_C6E67AD78D549CEA))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCHARGESUBSYSTEM_UNREGISTERCHARGELINE_OFFSET))(this, handle);
		}

		::Class_0_16E4307DCC419505_612* GetChargeLine(::Struct_2_C6E67AD78D549CEA handle)
		{
			return ((::Class_0_16E4307DCC419505_612*(*)(::PVOID, ::Struct_2_C6E67AD78D549CEA))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCHARGESUBSYSTEM_GETCHARGELINE_OFFSET))(this, handle);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCHARGESUBSYSTEM_ONUPDATE_OFFSET))(this);
		}

		::Struct_2_B210258C7CFBA850 RegisterRangeChargeEffect(::MoleMole::EntityHandle source, ::MoleMole::EntityHandle target)
		{
			return ((::Struct_2_B210258C7CFBA850(*)(::PVOID, ::MoleMole::EntityHandle, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCHARGESUBSYSTEM_REGISTERRANGECHARGEEFFECT_OFFSET))(this, source, target);
		}

		::System::Void UnregisterRangeChargeEffect(::Struct_2_B210258C7CFBA850 handle)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_B210258C7CFBA850))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCHARGESUBSYSTEM_UNREGISTERRANGECHARGEEFFECT_OFFSET))(this, handle);
		}

		::System::Boolean get_IsRangeChargeMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCHARGESUBSYSTEM_GET_ISRANGECHARGEMODE_OFFSET))(this);
		}

		::System::Void EnterRangeChargeMode(::System::UInt32 sourceEntityId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCHARGESUBSYSTEM_ENTERRANGECHARGEMODE_OFFSET))(this, sourceEntityId);
		}

		::System::Void ExitRangeChargeMode(::System::UInt32 sourceEntityId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCHARGESUBSYSTEM_EXITRANGECHARGEMODE_OFFSET))(this, sourceEntityId);
		}

		::System::Void __base_OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCHARGESUBSYSTEM___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
