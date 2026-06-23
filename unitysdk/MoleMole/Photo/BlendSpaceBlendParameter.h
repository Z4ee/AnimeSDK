#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define MOLEMOLE_PHOTO_BLENDSPACEBLENDPARAMETER_GETNORMALIZED_OFFSET UNITYSDK_OFFSET(0x824C70)
#define MOLEMOLE_PHOTO_BLENDSPACEBLENDPARAMETER_GETUNCLAMPNORMALIZED_OFFSET UNITYSDK_OFFSET(0x824C80)
#define MOLEMOLE_PHOTO_BLENDSPACEBLENDPARAMETER_GET_MIN_OFFSET UNITYSDK_OFFSET(0x824E40)
#define MOLEMOLE_PHOTO_BLENDSPACEBLENDPARAMETER_GET_RANGE_OFFSET UNITYSDK_OFFSET(0x824E50)

namespace MoleMole::Photo
{
	inline static constexpr unsigned int BlendSpaceBlendParameter_TypeDefinitionIndex = 52299;

	struct alignas(4) BlendSpaceBlendParameter
	{
		::System::Single minValue; // 0x10
		::System::Single maxValue; // 0x14
		::System::Boolean wrapInput; // 0x18

		::System::Single GetNormalized(::System::Single value)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_BLENDSPACEBLENDPARAMETER_GETNORMALIZED_OFFSET))(this, value);
		}

		::System::Single GetUnClampNormalized(::System::Single value)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_BLENDSPACEBLENDPARAMETER_GETUNCLAMPNORMALIZED_OFFSET))(this, value);
		}

		::System::Single get_Min()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_BLENDSPACEBLENDPARAMETER_GET_MIN_OFFSET))(this);
		}

		::System::Single get_Range()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_BLENDSPACEBLENDPARAMETER_GET_RANGE_OFFSET))(this);
		}
	};
}
