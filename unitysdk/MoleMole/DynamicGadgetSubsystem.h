#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GameSubsystemBaseEx_1.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_DYNAMICGADGETSUBSYSTEM_CANCREATE_OFFSET UNITYSDK_OFFSET(0x19D6F1A0)
#define MOLEMOLE_DYNAMICGADGETSUBSYSTEM_CONSUME_OFFSET UNITYSDK_OFFSET(0x19D6F4D0)
#define MOLEMOLE_DYNAMICGADGETSUBSYSTEM_GET_REMAININGCOUNT_OFFSET UNITYSDK_OFFSET(0x19D6F190)
#define MOLEMOLE_DYNAMICGADGETSUBSYSTEM_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x19D6EE80)
#define MOLEMOLE_DYNAMICGADGETSUBSYSTEM_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x19D6EDD0)
#define MOLEMOLE_DYNAMICGADGETSUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x19D6F510)
#define MOLEMOLE_DYNAMICGADGETSUBSYSTEM___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x19D6F530)

namespace MoleMole
{
	inline static constexpr unsigned int DynamicGadgetSubsystem_TypeDefinitionIndex = 67524;

	class DynamicGadgetSubsystem : public ::MoleMole::GameSubsystemBaseEx_1<::MoleMole::DynamicGadgetSubsystem*>
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::Int32>* _limitedZKRewardIDSet; // 0x10
		::System::Collections::Generic::HashSet_1<::System::Int32>* _limitedVOIDSet; // 0x18
		::System::Int32 _maxNum; // 0x20
		::System::Int32 _usedCount; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DYNAMICGADGETSUBSYSTEM__CTOR_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DYNAMICGADGETSUBSYSTEM_ONAWAKE_OFFSET))(this);
		}

		::System::Void Initialize(::System::Int32 maxNum, ::System::Collections::Generic::List_1<::System::Int32>* limitedVOIDList, ::System::Collections::Generic::List_1<::System::Int32>* limitedZKRewardIDList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_DYNAMICGADGETSUBSYSTEM_INITIALIZE_OFFSET))(this, maxNum, limitedVOIDList, limitedZKRewardIDList);
		}

		::System::Int32 get_RemainingCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DYNAMICGADGETSUBSYSTEM_GET_REMAININGCOUNT_OFFSET))(this);
		}

		::System::Boolean CanCreate(::System::Int32 viewObjectID, ::System::String*& reason)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + MOLEMOLE_DYNAMICGADGETSUBSYSTEM_CANCREATE_OFFSET))(this, viewObjectID, reason);
		}

		::System::Void Consume()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DYNAMICGADGETSUBSYSTEM_CONSUME_OFFSET))(this);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DYNAMICGADGETSUBSYSTEM___BASE_ONAWAKE_OFFSET))(this);
		}
	};
}
