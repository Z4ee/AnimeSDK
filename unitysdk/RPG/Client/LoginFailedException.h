#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"

#define RPG_CLIENT_LOGINFAILEDEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0xA6FF690)

namespace RPG::Client
{
	inline static constexpr unsigned int LoginFailedException_TypeDefinitionIndex = 56356;

	class LoginFailedException : public ::System::Exception
	{
	public:
		::System::Int32 ErrorCode; // 0x88
		::System::Int32 SubErrorCode; // 0x8C
		::System::Boolean Handled; // 0x90
		::System::Boolean ResetPhase; // 0x91

		::System::Void _ctor(::System::Int32 errorCode, ::System::Boolean handled, ::System::Int32 subErrorCode, ::System::Boolean resetPhase)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOGINFAILEDEXCEPTION__CTOR_OFFSET))(this, errorCode, handled, subErrorCode, resetPhase);
		}
	};
}
