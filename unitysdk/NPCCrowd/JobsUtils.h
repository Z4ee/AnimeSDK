#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NPCCROWD_JOBSUTILS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1150B350)

namespace NPCCrowd
{
	inline static constexpr unsigned int JobsUtils_TypeDefinitionIndex = 70681;

	class JobsUtils : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_INNER_LOOP_BATCH_COUNT()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(JobsUtils_TypeDefinitionIndex)->GetStaticField(0xC680);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_JOBSUTILS__CCTOR_OFFSET))();
		}
	};
}
