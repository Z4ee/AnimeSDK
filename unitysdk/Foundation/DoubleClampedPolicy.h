#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define FOUNDATION_DOUBLECLAMPEDPOLICY_FOUNDATION_ICLAMPFUNC_SYSTEM_DOUBLE__CLAMP_OFFSET UNITYSDK_OFFSET(0x1F0C88E0)
#define FOUNDATION_DOUBLECLAMPEDPOLICY_FOUNDATION_IMAXFUNC_SYSTEM_DOUBLE__MAX_OFFSET UNITYSDK_OFFSET(0x1F0C8930)
#define FOUNDATION_DOUBLECLAMPEDPOLICY_FOUNDATION_IMINFUNC_SYSTEM_DOUBLE__MIN_OFFSET UNITYSDK_OFFSET(0x1F0C8900)
#define FOUNDATION_DOUBLECLAMPEDPOLICY__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F0C8960)
#define FOUNDATION_DOUBLECLAMPEDPOLICY__CTOR_OFFSET UNITYSDK_OFFSET(0x1F0C88D0)

namespace Foundation
{
	inline static constexpr unsigned int DoubleClampedPolicy_TypeDefinitionIndex = 8535;

	class DoubleClampedPolicy : public ::System::Object
	{
	public:
		static ::Foundation::DoubleClampedPolicy** StaticGet_Instance()
		{
			return (::Foundation::DoubleClampedPolicy**)Il2CppClass::FromTypeDefinitionIndex(DoubleClampedPolicy_TypeDefinitionIndex)->GetStaticField(0x7500);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_DOUBLECLAMPEDPOLICY__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_DOUBLECLAMPEDPOLICY__CCTOR_OFFSET))();
		}

		::System::Double Foundation_IClampFunc_System_Double__Clamp(::System::Double value, ::System::Double min, ::System::Double max)
		{
			return ((::System::Double(*)(::PVOID, ::System::Double, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + FOUNDATION_DOUBLECLAMPEDPOLICY_FOUNDATION_ICLAMPFUNC_SYSTEM_DOUBLE__CLAMP_OFFSET))(this, value, min, max);
		}

		::System::Double Foundation_IMinFunc_System_Double__Min(::System::Double left, ::System::Double right)
		{
			return ((::System::Double(*)(::PVOID, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + FOUNDATION_DOUBLECLAMPEDPOLICY_FOUNDATION_IMINFUNC_SYSTEM_DOUBLE__MIN_OFFSET))(this, left, right);
		}

		::System::Double Foundation_IMaxFunc_System_Double__Max(::System::Double left, ::System::Double right)
		{
			return ((::System::Double(*)(::PVOID, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + FOUNDATION_DOUBLECLAMPEDPOLICY_FOUNDATION_IMAXFUNC_SYSTEM_DOUBLE__MAX_OFFSET))(this, left, right);
		}
	};
}
