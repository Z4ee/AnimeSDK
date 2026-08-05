#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }

#define NPCCROWD_ANIMATION_CROWDBENCHMARKBEHAVIOR___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0x12D22B50)
#define NPCCROWD_ANIMATION_CROWDBENCHMARKBEHAVIOR___C__DISPLAYCLASS2_0__GETALLCROWDUNITTESTCASES_B__0_OFFSET UNITYSDK_OFFSET(0x12D25F20)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int CrowdBenchmarkBehavior___c__DisplayClass2_0_TypeDefinitionIndex = 40289;

	class CrowdBenchmarkBehavior___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::System::Type* baseTestType; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_CROWDBENCHMARKBEHAVIOR___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetAllCrowdUnitTestCases_b__0(::System::Type* t)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_CROWDBENCHMARKBEHAVIOR___C__DISPLAYCLASS2_0__GETALLCROWDUNITTESTCASES_B__0_OFFSET))(this, t);
		}
	};
}
