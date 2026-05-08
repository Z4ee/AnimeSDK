#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_CONFIGDOWNLOADER__CTOR_OFFSET UNITYSDK_OFFSET(0x1231BD50)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigDownloader_TypeDefinitionIndex = 70599;

	class ConfigDownloader : public ::System::Object
	{
	public:
		::System::Int32 BufferSize; // 0x10
		::System::Int32 RetryCount; // 0x14
		::System::Int32 RetrySleepTime; // 0x18
		::System::Int32 ResponseTimeout; // 0x1C
		::System::Int32 ReadWriteTimeout; // 0x20
		::System::Int32 MaxParellelCount; // 0x24
		::System::Int32 SpeedHistoryCount; // 0x28
		::System::Single UpdateInterval; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGDOWNLOADER__CTOR_OFFSET))(this);
		}
	};
}
