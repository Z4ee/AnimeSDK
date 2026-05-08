#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define QWER_CFUTEX_POST_OFFSET UNITYSDK_OFFSET(0x1BE84F00)
#define QWER_CFUTEX_WAIT_OFFSET UNITYSDK_OFFSET(0x1BE85BD0)
#define QWER_CFUTEX__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE85EB0)

namespace QWER
{
	inline static constexpr unsigned int CFutex_TypeDefinitionIndex = 85848;

	class CFutex : public ::System::Object
	{
	public:
		::System::Object* m_oMonitorObject; // 0x10
		::System::Int32 m_dwCount; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + QWER_CFUTEX__CTOR_OFFSET))(this);
		}

		::System::Boolean Wait(::System::Int32 dwMilliSeconds)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + QWER_CFUTEX_WAIT_OFFSET))(this, dwMilliSeconds);
		}

		::System::Void Post()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + QWER_CFUTEX_POST_OFFSET))(this);
		}
	};
}
