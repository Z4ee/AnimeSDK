#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_EFFECTSIMULATE_IEVALUATECURVE_CLASS_1_3ABCC41A05D06339_1_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x18B13EF0)
#define MOLEMOLE_EFFECTSIMULATE_IEVALUATECURVE_CLASS_1_3ABCC41A05D06339_1__CTOR_OFFSET UNITYSDK_OFFSET(0x18B13EE0)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int IEvaluateCurve_Class_1_3ABCC41A05D06339_1_TypeDefinitionIndex = 53678;

	class IEvaluateCurve_Class_1_3ABCC41A05D06339_1 : public ::System::Object
	{
	public:
		::System::Single Field_1_3; // 0x10
		::System::Single Field_1_0; // 0x14
		::System::Single Field_1_2; // 0x18
		::System::Single Field_1_1; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_IEVALUATECURVE_CLASS_1_3ABCC41A05D06339_1__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_IEVALUATECURVE_CLASS_1_3ABCC41A05D06339_1_METHOD_1_CA373AA1C7054598_OFFSET))(this);
		}
	};
}
