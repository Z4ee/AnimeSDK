#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"

namespace System { class String; }

#define MOLEMOLE_ARCADE_COREBASE_MSGQUEUEKEYEXISTEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EDD45C0)
#define MOLEMOLE_ARCADE_COREBASE_MSGQUEUEKEYEXISTEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1EDD4640)
#define MOLEMOLE_ARCADE_COREBASE_MSGQUEUEKEYEXISTEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1EDD4540)

namespace MoleMole::Arcade::CoreBase
{
	inline static constexpr unsigned int MsgQueueKeyExistException_TypeDefinitionIndex = 29551;

	class MsgQueueKeyExistException : public ::System::Exception
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_COREBASE_MSGQUEUEKEYEXISTEXCEPTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_COREBASE_MSGQUEUEKEYEXISTEXCEPTION__CTOR_1_OFFSET))(this, a1);
		}

		::System::Void _ctor_2(::System::String* a1, ::System::Exception* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_COREBASE_MSGQUEUEKEYEXISTEXCEPTION__CTOR_2_OFFSET))(this, a1, a2);
		}
	};
}
