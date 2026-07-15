#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_56DCA1B58073717B;
class Class_2_985AEACD6131E132___c__DisplayClass9_0;
namespace RPG::GameCore { class FourRotateVoxelFinishPointConfig; }
namespace RPG::GameCore { class FourRotateVoxelRevert2DVoxelConfig; }

#define CLASS_2_985AEACD6131E132___C__DISPLAYCLASS9_1__CTOR_OFFSET UNITYSDK_OFFSET(0x17C51290)
#define CLASS_2_985AEACD6131E132___C__DISPLAYCLASS9_1___ONVIEWLOAD_B__0_OFFSET UNITYSDK_OFFSET(0x17C55E90)
#define CLASS_2_985AEACD6131E132___C__DISPLAYCLASS9_1___ONVIEWLOAD_B__1_OFFSET UNITYSDK_OFFSET(0x17C55F80)
#define CLASS_2_985AEACD6131E132___C__DISPLAYCLASS9_1___ONVIEWLOAD_B__2_OFFSET UNITYSDK_OFFSET(0x17C55FE0)
#define CLASS_2_985AEACD6131E132___C__DISPLAYCLASS9_1___ONVIEWLOAD_B__3_OFFSET UNITYSDK_OFFSET(0x17C56060)

inline static constexpr unsigned int Class_2_985AEACD6131E132___c__DisplayClass9_1_TypeDefinitionIndex = 72802;

class Class_2_985AEACD6131E132___c__DisplayClass9_1 : public ::System::Object
{
public:
	::RPG::GameCore::FourRotateVoxelRevert2DVoxelConfig* _revert2DVoxelConfig_5__2; // 0x10
	::Class_2_985AEACD6131E132___c__DisplayClass9_0* CS___8__locals3; // 0x18
	::RPG::GameCore::FourRotateVoxelFinishPointConfig* _finishPropConfig_5__3; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_985AEACD6131E132___C__DISPLAYCLASS9_1__CTOR_OFFSET))(this);
	}

	::System::Void __OnViewLoad_b__0(::Class_2_56DCA1B58073717B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_56DCA1B58073717B*))((::PBYTE)hIl2Cpp + CLASS_2_985AEACD6131E132___C__DISPLAYCLASS9_1___ONVIEWLOAD_B__0_OFFSET))(this, a1);
	}

	::System::Void __OnViewLoad_b__1(::Class_2_56DCA1B58073717B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_56DCA1B58073717B*))((::PBYTE)hIl2Cpp + CLASS_2_985AEACD6131E132___C__DISPLAYCLASS9_1___ONVIEWLOAD_B__1_OFFSET))(this, a1);
	}

	::System::Void __OnViewLoad_b__2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_985AEACD6131E132___C__DISPLAYCLASS9_1___ONVIEWLOAD_B__2_OFFSET))(this);
	}

	::System::Void __OnViewLoad_b__3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_985AEACD6131E132___C__DISPLAYCLASS9_1___ONVIEWLOAD_B__3_OFFSET))(this);
	}
};
