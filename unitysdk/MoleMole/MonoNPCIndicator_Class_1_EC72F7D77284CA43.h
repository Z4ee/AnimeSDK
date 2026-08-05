#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/AI/PopulationPoolRef.h"
#include "unitysdk/System/Object.h"

namespace NPCCrowd::AI { class NPCPoolConfig; }

#define MOLEMOLE_MONONPCINDICATOR_CLASS_1_EC72F7D77284CA43_METHOD_1_FD742A9B86CB47EC_OFFSET UNITYSDK_OFFSET(0x129CBC80)
#define MOLEMOLE_MONONPCINDICATOR_CLASS_1_EC72F7D77284CA43__CTOR_OFFSET UNITYSDK_OFFSET(0x129CB070)

namespace MoleMole
{
	inline static constexpr unsigned int MonoNPCIndicator_Class_1_EC72F7D77284CA43_TypeDefinitionIndex = 43798;

	class MonoNPCIndicator_Class_1_EC72F7D77284CA43 : public ::System::Object
	{
	public:
		::NPCCrowd::AI::PopulationPoolRef Field_1_0; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONONPCINDICATOR_CLASS_1_EC72F7D77284CA43__CTOR_OFFSET))(this);
		}

		::System::Boolean Method_1_FD742A9B86CB47EC(::NPCCrowd::AI::NPCPoolConfig* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCCrowd::AI::NPCPoolConfig*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONONPCINDICATOR_CLASS_1_EC72F7D77284CA43_METHOD_1_FD742A9B86CB47EC_OFFSET))(this, a1);
		}
	};
}
