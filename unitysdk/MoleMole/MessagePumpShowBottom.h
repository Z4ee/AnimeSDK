#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/TunnelPartDisplayMessageBase.h"

#define MOLEMOLE_MESSAGEPUMPSHOWBOTTOM_GET_ISPENETRATE_OFFSET UNITYSDK_OFFSET(0x17E86BA0)
#define MOLEMOLE_MESSAGEPUMPSHOWBOTTOM_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x17E86BB0)
#define MOLEMOLE_MESSAGEPUMPSHOWBOTTOM_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x17E86BF0)
#define MOLEMOLE_MESSAGEPUMPSHOWBOTTOM__CTOR_OFFSET UNITYSDK_OFFSET(0x17E86BC0)

namespace MoleMole
{
	inline static constexpr unsigned int MessagePumpShowBottom_TypeDefinitionIndex = 58014;

	class MessagePumpShowBottom : public ::MoleMole::TunnelPartDisplayMessageBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MESSAGEPUMPSHOWBOTTOM__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsPenetrate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MESSAGEPUMPSHOWBOTTOM_GET_ISPENETRATE_OFFSET))(this);
		}

		::System::Int32 get_Priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MESSAGEPUMPSHOWBOTTOM_GET_PRIORITY_OFFSET))(this);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MESSAGEPUMPSHOWBOTTOM_ONPROCESS_OFFSET))(this);
		}
	};
}
