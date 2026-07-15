#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_56DCA1B58073717B;
class Class_2_985AEACD6131E132;
namespace RPG::GameCore { class FourRotateVoxelFinishPointConfig; }

#define CLASS_2_985AEACD6131E132___C__DISPLAYCLASS10_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17C51B10)
#define CLASS_2_985AEACD6131E132___C__DISPLAYCLASS10_0__SETUPFINISHPOINTREWARDINTERACT_B__0_OFFSET UNITYSDK_OFFSET(0x17C55840)

inline static constexpr unsigned int Class_2_985AEACD6131E132___c__DisplayClass10_0_TypeDefinitionIndex = 72799;

class Class_2_985AEACD6131E132___c__DisplayClass10_0 : public ::System::Object
{
public:
	::Class_2_985AEACD6131E132* __4__this; // 0x10
	::RPG::GameCore::FourRotateVoxelFinishPointConfig* finishPropConfig; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_985AEACD6131E132___C__DISPLAYCLASS10_0__CTOR_OFFSET))(this);
	}

	::System::Void _SetupFinishPointRewardInteract_b__0(::Class_2_56DCA1B58073717B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_56DCA1B58073717B*))((::PBYTE)hIl2Cpp + CLASS_2_985AEACD6131E132___C__DISPLAYCLASS10_0__SETUPFINISHPOINTREWARDINTERACT_B__0_OFFSET))(this, a1);
	}
};
