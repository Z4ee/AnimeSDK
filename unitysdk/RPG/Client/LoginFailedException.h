#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"

#define RPG_CLIENT_LOGINFAILEDEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0xBE5F7D0)

namespace RPG::Client
{
	inline static constexpr unsigned int LoginFailedException_TypeDefinitionIndex = 57118;

	class LoginFailedException : public ::System::Exception
	{
	public:
		::System::Int32 SubErrorCode; // 0x88
		::System::Boolean ResetPhase; // 0x8C
		::System::Boolean Handled; // 0x8D
		::System::Int32 ErrorCode; // 0x90

		::System::Void _ctor(::System::Int32 a1, ::System::Boolean a2, ::System::Int32 a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOGINFAILEDEXCEPTION__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}
	};
}
