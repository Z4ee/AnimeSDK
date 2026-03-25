#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"

#define RPG_CLIENT_LOGINFAILEDEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x9A52380)

namespace RPG::Client
{
	inline static constexpr unsigned int LoginFailedException_TypeDefinitionIndex = 49534;

	class LoginFailedException : public ::System::Exception
	{
	public:
		::System::Boolean Handled; // 0x88
		::System::Boolean ResetPhase; // 0x89
		::System::Int32 SubErrorCode; // 0x8C
		::System::Int32 ErrorCode; // 0x90

		::System::Void _ctor(::System::Int32 errorCode, ::System::Boolean handled, ::System::Int32 subErrorCode, ::System::Boolean resetPhase)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOGINFAILEDEXCEPTION__CTOR_OFFSET))(this, errorCode, handled, subErrorCode, resetPhase);
		}
	};
}
