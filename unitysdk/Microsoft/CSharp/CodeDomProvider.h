#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MICROSOFT_CSHARP_CODEDOMPROVIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F24D2A0)

namespace Microsoft::CSharp
{
	inline static constexpr unsigned int CodeDomProvider_TypeDefinitionIndex = 1635;

	class CodeDomProvider : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_CODEDOMPROVIDER__CTOR_OFFSET))(this);
		}
	};
}
