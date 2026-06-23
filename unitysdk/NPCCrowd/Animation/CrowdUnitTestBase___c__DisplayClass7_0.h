#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FNpcAvatarGenericParams_AccessoryInfo.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define NPCCROWD_ANIMATION_CROWDUNITTESTBASE___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0x11794C70)
#define NPCCROWD_ANIMATION_CROWDUNITTESTBASE___C__DISPLAYCLASS7_0__GETANYPREFABIDWHICHOWNACCESSORY_B__0_OFFSET UNITYSDK_OFFSET(0x11794C80)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int CrowdUnitTestBase___c__DisplayClass7_0_TypeDefinitionIndex = 87595;

	class CrowdUnitTestBase___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::System::Func_2<::FNpcAvatarGenericParams_AccessoryInfo, ::System::Boolean>* __9__0; // 0x10
		::System::String* ownAccessoryItemName; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_CROWDUNITTESTBASE___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetAnyPrefabIdWhichOwnAccessory_b__0(::FNpcAvatarGenericParams_AccessoryInfo n)
		{
			return ((::System::Boolean(*)(::PVOID, ::FNpcAvatarGenericParams_AccessoryInfo))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_CROWDUNITTESTBASE___C__DISPLAYCLASS7_0__GETANYPREFABIDWHICHOWNACCESSORY_B__0_OFFSET))(this, n);
		}
	};
}
