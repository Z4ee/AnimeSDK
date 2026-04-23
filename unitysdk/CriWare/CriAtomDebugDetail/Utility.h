#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CRIWARE_CRIATOMDEBUGDETAIL_UTILITY_PTRTOSTRINGAUTOORNULL_OFFSET UNITYSDK_OFFSET(0x12BC8240)
#define CRIWARE_CRIATOMDEBUGDETAIL_UTILITY__CTOR_OFFSET UNITYSDK_OFFSET(0x12BC8270)

namespace CriWare::CriAtomDebugDetail
{
	inline static constexpr unsigned int Utility_TypeDefinitionIndex = 36941;

	class Utility : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMDEBUGDETAIL_UTILITY__CTOR_OFFSET))(this);
		}

		static ::System::String* PtrToStringAutoOrNull(::System::IntPtr stringPtr)
		{
			return ((::System::String*(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMDEBUGDETAIL_UTILITY_PTRTOSTRINGAUTOORNULL_OFFSET))(stringPtr);
		}
	};
}
