#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_BASEREDDOTRECORD_GET_RECORDVERSION_OFFSET UNITYSDK_OFFSET(0x12CFC120)
#define MOLEMOLE_BASEREDDOTRECORD__CTOR_OFFSET UNITYSDK_OFFSET(0x12CFC130)

namespace MoleMole
{
	inline static constexpr unsigned int BaseRedDotRecord_TypeDefinitionIndex = 70298;

	class BaseRedDotRecord : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BASEREDDOTRECORD__CTOR_OFFSET))(this);
		}

		::System::UInt16 get_RecordVersion()
		{
			return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BASEREDDOTRECORD_GET_RECORDVERSION_OFFSET))(this);
		}
	};
}
