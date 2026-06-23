#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

class Class_3_6D73516CC6FEADD7;
namespace BehaviorDesigner::Runtime { class SharedFloat; }
namespace System { class String; }

#define MOLEMOLE_UPDATECD_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x122DDFA0)
#define MOLEMOLE_UPDATECD_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x122DE1E0)
#define MOLEMOLE_UPDATECD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x122DE520)
#define MOLEMOLE_UPDATECD__CTOR_OFFSET UNITYSDK_OFFSET(0x122DE770)
#define MOLEMOLE_UPDATECD___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x122DE8A0)
#define MOLEMOLE_UPDATECD___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x122DE810)
#define MOLEMOLE_UPDATECD___BASE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x122DE930)

namespace MoleMole
{
	inline static constexpr unsigned int UpdateCD_TypeDefinitionIndex = 78834;

	class UpdateCD : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::BehaviorDesigner::Runtime::SharedFloat* UpdateRatio; // 0x58
		::Class_3_6D73516CC6FEADD7* _aiCharacter; // 0x60
		::BehaviorDesigner::Runtime::SharedFloat* CD; // 0x68
		::System::Single defaultTime; // 0x70
		::System::Single randomRangePositive; // 0x74
		::System::Boolean keepUpdating; // 0x78
		::System::Boolean applyPositiveRandom; // 0x79
		::System::Boolean applyNegetiveRandom; // 0x7A
		::System::Single randomRangeNegtive; // 0x7C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UPDATECD__CTOR_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UPDATECD_ONAWAKE_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UPDATECD_ONUPDATE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UPDATECD_TOSTRING_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UPDATECD___BASE_ONUPDATE_OFFSET))(this);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UPDATECD___BASE_ONAWAKE_OFFSET))(this);
		}

		::System::String* __base_ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UPDATECD___BASE_TOSTRING_OFFSET))(this);
		}
	};
}
