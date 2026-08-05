#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Sequence.h"

#define MOLEMOLE_NAPSEQUENCE_GETPRIORITY_OFFSET UNITYSDK_OFFSET(0x17927880)
#define MOLEMOLE_NAPSEQUENCE__CTOR_OFFSET UNITYSDK_OFFSET(0x179278D0)
#define MOLEMOLE_NAPSEQUENCE___BASE_GETPRIORITY_OFFSET UNITYSDK_OFFSET(0x17927960)

namespace MoleMole
{
	inline static constexpr unsigned int NapSequence_TypeDefinitionIndex = 86906;

	class NapSequence : public ::BehaviorDesigner::Runtime::Tasks::Sequence
	{
	public:
		::System::Single Priority; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPSEQUENCE__CTOR_OFFSET))(this);
		}

		::System::Single GetPriority()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPSEQUENCE_GETPRIORITY_OFFSET))(this);
		}

		::System::Single __base_GetPriority()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPSEQUENCE___BASE_GETPRIORITY_OFFSET))(this);
		}
	};
}
