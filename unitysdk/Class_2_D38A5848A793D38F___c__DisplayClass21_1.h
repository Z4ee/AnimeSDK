#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_B8E38BF47138A2E5;
class Class_2_D38A5848A793D38F___c__DisplayClass21_0;
namespace RPG::GameCore { class FourRotateVoxelFinishPointConfig; }
namespace RPG::GameCore { class FourRotateVoxelRevert2DVoxelConfig; }

#define CLASS_2_D38A5848A793D38F___C__DISPLAYCLASS21_1__CTOR_OFFSET UNITYSDK_OFFSET(0x199FB900)
#define CLASS_2_D38A5848A793D38F___C__DISPLAYCLASS21_1___ONVIEWLOAD_B__0_OFFSET UNITYSDK_OFFSET(0x19A02670)
#define CLASS_2_D38A5848A793D38F___C__DISPLAYCLASS21_1___ONVIEWLOAD_B__1_OFFSET UNITYSDK_OFFSET(0x19A02760)
#define CLASS_2_D38A5848A793D38F___C__DISPLAYCLASS21_1___ONVIEWLOAD_B__2_OFFSET UNITYSDK_OFFSET(0x19A027C0)
#define CLASS_2_D38A5848A793D38F___C__DISPLAYCLASS21_1___ONVIEWLOAD_B__3_OFFSET UNITYSDK_OFFSET(0x19A02840)

inline static constexpr unsigned int Class_2_D38A5848A793D38F___c__DisplayClass21_1_TypeDefinitionIndex = 76260;

class Class_2_D38A5848A793D38F___c__DisplayClass21_1 : public ::System::Object
{
public:
	::RPG::GameCore::FourRotateVoxelRevert2DVoxelConfig* _revert2DVoxelConfig_5__2; // 0x10
	::RPG::GameCore::FourRotateVoxelFinishPointConfig* _finishPropConfig_5__3; // 0x18
	::Class_2_D38A5848A793D38F___c__DisplayClass21_0* CS___8__locals3; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D38A5848A793D38F___C__DISPLAYCLASS21_1__CTOR_OFFSET))(this);
	}

	::System::Void __OnViewLoad_b__0(::Class_2_B8E38BF47138A2E5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*))((::PBYTE)hIl2Cpp + CLASS_2_D38A5848A793D38F___C__DISPLAYCLASS21_1___ONVIEWLOAD_B__0_OFFSET))(this, a1);
	}

	::System::Void __OnViewLoad_b__1(::Class_2_B8E38BF47138A2E5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*))((::PBYTE)hIl2Cpp + CLASS_2_D38A5848A793D38F___C__DISPLAYCLASS21_1___ONVIEWLOAD_B__1_OFFSET))(this, a1);
	}

	::System::Void __OnViewLoad_b__2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D38A5848A793D38F___C__DISPLAYCLASS21_1___ONVIEWLOAD_B__2_OFFSET))(this);
	}

	::System::Void __OnViewLoad_b__3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D38A5848A793D38F___C__DISPLAYCLASS21_1___ONVIEWLOAD_B__3_OFFSET))(this);
	}
};
