#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MONO_SECURITY_PKCS7_SORTEDSET_COMPARE_OFFSET UNITYSDK_OFFSET(0x1E1E2360)
#define MONO_SECURITY_PKCS7_SORTEDSET__CTOR_OFFSET UNITYSDK_OFFSET(0x1E1E24E0)

namespace Mono::Security
{
	inline static constexpr unsigned int PKCS7_SortedSet_TypeDefinitionIndex = 2282;

	class PKCS7_SortedSet : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PKCS7_SORTEDSET__CTOR_OFFSET))(this);
		}

		::System::Int32 Compare(::System::Object* x, ::System::Object* y)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PKCS7_SORTEDSET_COMPARE_OFFSET))(this, x, y);
		}
	};
}
