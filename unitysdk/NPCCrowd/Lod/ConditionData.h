#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define NPCCROWD_LOD_CONDITIONDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x61E6F0)

namespace NPCCrowd::Lod
{
	inline static constexpr unsigned int ConditionData_TypeDefinitionIndex = 74708;

	struct alignas(8) ConditionData
	{
		::System::Single distance; // 0x10
		::System::Single softArea; // 0x14
		::System::Int32 customIdx; // 0x18
		::System::Double sqrtDistOuter; // 0x20
		::System::Double sqrtDistInner; // 0x28
		::System::Boolean callbackFlag; // 0x30
		::System::Boolean callbackOuter; // 0x31

		::System::Void _ctor(::System::Single distance, ::System::Single softArea, ::System::Int32 customIdx)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_CONDITIONDATA__CTOR_OFFSET))(this, distance, softArea, customIdx);
		}
	};
}
