#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_F346500DFC680A13;
class Class_2_F8EB4D9464ADCCA1;

#define NPCCROWD_ANIMATION_CROWDUNITTESTBASE___C__DISPLAYCLASS4_1__CTOR_OFFSET UNITYSDK_OFFSET(0x102B2FC0)
#define NPCCROWD_ANIMATION_CROWDUNITTESTBASE___C__DISPLAYCLASS4_1__INIT_B__1_OFFSET UNITYSDK_OFFSET(0x102B2FD0)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int CrowdUnitTestBase___c__DisplayClass4_1_TypeDefinitionIndex = 87594;

	class CrowdUnitTestBase___c__DisplayClass4_1 : public ::System::Object
	{
	public:
		::Class_2_F346500DFC680A13* p; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_CROWDUNITTESTBASE___C__DISPLAYCLASS4_1__CTOR_OFFSET))(this);
		}

		::System::Boolean _Init_b__1(::Class_2_F8EB4D9464ADCCA1* m)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_F8EB4D9464ADCCA1*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_CROWDUNITTESTBASE___C__DISPLAYCLASS4_1__INIT_B__1_OFFSET))(this, m);
		}
	};
}
