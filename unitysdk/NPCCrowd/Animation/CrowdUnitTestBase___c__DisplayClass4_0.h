#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_A49223FCF7A3C1CF;
class Class_2_F346500DFC680A13;

#define NPCCROWD_ANIMATION_CROWDUNITTESTBASE___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0x10664DE0)
#define NPCCROWD_ANIMATION_CROWDUNITTESTBASE___C__DISPLAYCLASS4_0__INIT_B__0_OFFSET UNITYSDK_OFFSET(0x10664DF0)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int CrowdUnitTestBase___c__DisplayClass4_0_TypeDefinitionIndex = 80640;

	class CrowdUnitTestBase___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::Class_2_A49223FCF7A3C1CF* t; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_CROWDUNITTESTBASE___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _Init_b__0(::Class_2_F346500DFC680A13* e)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_F346500DFC680A13*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_CROWDUNITTESTBASE___C__DISPLAYCLASS4_0__INIT_B__0_OFFSET))(this, e);
		}
	};
}
