#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define FOUNDATION_DEBUGOPTIONS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D5916E0)
#define FOUNDATION_DEBUGOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5916D0)

namespace Foundation
{
	inline static constexpr unsigned int DebugOptions_TypeDefinitionIndex = 7855;

	class DebugOptions : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet_UseNewEnumerator()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(DebugOptions_TypeDefinitionIndex)->GetStaticField(0x38D0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_DEBUGOPTIONS__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_DEBUGOPTIONS__CCTOR_OFFSET))();
		}
	};
}
