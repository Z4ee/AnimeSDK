#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NPCCROWD_IDGENERATOR_GENID_OFFSET UNITYSDK_OFFSET(0x10A0C540)
#define NPCCROWD_IDGENERATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x10A0C590)

namespace NPCCrowd
{
	inline static constexpr unsigned int IdGenerator_TypeDefinitionIndex = 79886;

	class IdGenerator : public ::System::Object
	{
	public:
		::System::Int32 currentId; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_IDGENERATOR__CTOR_OFFSET))(this);
		}

		::System::Int32 GenId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_IDGENERATOR_GENID_OFFSET))(this);
		}
	};
}
