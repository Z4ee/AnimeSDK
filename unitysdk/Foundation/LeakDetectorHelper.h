#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define FOUNDATION_LEAKDETECTORHELPER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C00E780)
#define FOUNDATION_LEAKDETECTORHELPER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C00E770)

namespace Foundation
{
	inline static constexpr unsigned int LeakDetectorHelper_TypeDefinitionIndex = 7734;

	class LeakDetectorHelper : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet_EnableLeakDetector()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(LeakDetectorHelper_TypeDefinitionIndex)->GetStaticField(0x12110);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_LEAKDETECTORHELPER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_LEAKDETECTORHELPER__CCTOR_OFFSET))();
		}
	};
}
