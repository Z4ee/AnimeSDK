#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define R3_EMPTYDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C4237C0)
#define R3_EMPTYDISPOSABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4237B0)

namespace R3
{
	inline static constexpr unsigned int EmptyDisposable_TypeDefinitionIndex = 35904;

	class EmptyDisposable : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + R3_EMPTYDISPOSABLE__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + R3_EMPTYDISPOSABLE_DISPOSE_OFFSET))(this);
		}
	};
}
