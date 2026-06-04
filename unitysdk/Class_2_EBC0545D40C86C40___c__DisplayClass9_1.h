#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_B8E38BF47138A2E5;
class Class_2_EBC0545D40C86C40___c__DisplayClass9_0;
namespace RPG::GameCore { class FourRotateVoxelFinishPointConfig; }
namespace RPG::GameCore { class FourRotateVoxelRevert2DVoxelConfig; }
namespace System { template <typename T> class Action_1; }

#define CLASS_2_EBC0545D40C86C40___C__DISPLAYCLASS9_1__CTOR_OFFSET UNITYSDK_OFFSET(0x13609A20)
#define CLASS_2_EBC0545D40C86C40___C__DISPLAYCLASS9_1___ONVIEWLOAD_B__0_OFFSET UNITYSDK_OFFSET(0x13609A30)
#define CLASS_2_EBC0545D40C86C40___C__DISPLAYCLASS9_1___ONVIEWLOAD_B__1_OFFSET UNITYSDK_OFFSET(0x13609B20)
#define CLASS_2_EBC0545D40C86C40___C__DISPLAYCLASS9_1___ONVIEWLOAD_B__2_OFFSET UNITYSDK_OFFSET(0x13609B80)
#define CLASS_2_EBC0545D40C86C40___C__DISPLAYCLASS9_1___ONVIEWLOAD_B__3_OFFSET UNITYSDK_OFFSET(0x13609DC0)

inline static constexpr unsigned int Class_2_EBC0545D40C86C40___c__DisplayClass9_1_TypeDefinitionIndex = 71278;

class Class_2_EBC0545D40C86C40___c__DisplayClass9_1 : public ::System::Object
{
public:
	::RPG::GameCore::FourRotateVoxelFinishPointConfig* _finishPropConfig_5__3; // 0x10
	::Class_2_EBC0545D40C86C40___c__DisplayClass9_0* CS___8__locals3; // 0x18
	::RPG::GameCore::FourRotateVoxelRevert2DVoxelConfig* _revert2DVoxelConfig_5__2; // 0x20
	::System::Action_1<::Class_2_B8E38BF47138A2E5*>* __9__3; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EBC0545D40C86C40___C__DISPLAYCLASS9_1__CTOR_OFFSET))(this);
	}

	::System::Void __OnViewLoad_b__0(::Class_2_B8E38BF47138A2E5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*))((::PBYTE)hIl2Cpp + CLASS_2_EBC0545D40C86C40___C__DISPLAYCLASS9_1___ONVIEWLOAD_B__0_OFFSET))(this, a1);
	}

	::System::Void __OnViewLoad_b__1(::Class_2_B8E38BF47138A2E5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*))((::PBYTE)hIl2Cpp + CLASS_2_EBC0545D40C86C40___C__DISPLAYCLASS9_1___ONVIEWLOAD_B__1_OFFSET))(this, a1);
	}

	::System::Void __OnViewLoad_b__2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EBC0545D40C86C40___C__DISPLAYCLASS9_1___ONVIEWLOAD_B__2_OFFSET))(this);
	}

	::System::Void __OnViewLoad_b__3(::Class_2_B8E38BF47138A2E5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*))((::PBYTE)hIl2Cpp + CLASS_2_EBC0545D40C86C40___C__DISPLAYCLASS9_1___ONVIEWLOAD_B__3_OFFSET))(this, a1);
	}
};
