#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Microsoft/CSharp/CodeDomProvider.h"

#define MICROSOFT_CSHARP_CSHARPCODEPROVIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x19F9C610)

namespace Microsoft::CSharp
{
	inline static constexpr unsigned int CSharpCodeProvider_TypeDefinitionIndex = 1767;

	class CSharpCodeProvider : public ::Microsoft::CSharp::CodeDomProvider
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_CSHARPCODEPROVIDER__CTOR_OFFSET))(this);
		}
	};
}
