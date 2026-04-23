#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections { class IEnumerator; }

#define SRF_COROUTINES_WAITFORSECONDSREALTIME_OFFSET UNITYSDK_OFFSET(0x19EA1EA0)

namespace SRF
{
	inline static constexpr unsigned int Coroutines_TypeDefinitionIndex = 33277;

	class Coroutines : public ::System::Object
	{
	public:
		static ::System::Collections::IEnumerator* WaitForSecondsRealTime(::System::Single time)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Single))((::PBYTE)hIl2Cpp + SRF_COROUTINES_WAITFORSECONDSREALTIME_OFFSET))(time);
		}
	};
}
