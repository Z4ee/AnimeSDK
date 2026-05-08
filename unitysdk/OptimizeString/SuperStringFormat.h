#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace OptimizeString { class StringBuilderNoGC; }
namespace System { class String; }

#define OPTIMIZESTRING_SUPERSTRINGFORMAT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C5425F0)
#define OPTIMIZESTRING_SUPERSTRINGFORMAT__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5425E0)

namespace OptimizeString
{
	inline static constexpr unsigned int SuperStringFormat_TypeDefinitionIndex = 7123;

	class SuperStringFormat : public ::System::Object
	{
	public:
		static ::OptimizeString::StringBuilderNoGC** StaticGet_s_formatStringBuilder()
		{
			return (::OptimizeString::StringBuilderNoGC**)Il2CppClass::FromTypeDefinitionIndex(SuperStringFormat_TypeDefinitionIndex)->GetStaticField(0x6010);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPTIMIZESTRING_SUPERSTRINGFORMAT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OPTIMIZESTRING_SUPERSTRINGFORMAT__CCTOR_OFFSET))();
		}
	};
}
