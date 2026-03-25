#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_0C58AD91B0F4D809;
class Class_2_DB9010109E00854C___c__DisplayClass5_0;
namespace RPG::GameCore { class FourRotateVoxelFinishPointConfig; }
namespace RPG::GameCore { class FourRotateVoxelRevert2DVoxelConfig; }
namespace System { template <typename T> class Action_1; }

#define CLASS_2_DB9010109E00854C___C__DISPLAYCLASS5_1__CTOR_OFFSET UNITYSDK_OFFSET(0x11419F20)
#define CLASS_2_DB9010109E00854C___C__DISPLAYCLASS5_1___ONVIEWLOAD_B__0_OFFSET UNITYSDK_OFFSET(0x1141E490)
#define CLASS_2_DB9010109E00854C___C__DISPLAYCLASS5_1___ONVIEWLOAD_B__1_OFFSET UNITYSDK_OFFSET(0x1141E4E0)
#define CLASS_2_DB9010109E00854C___C__DISPLAYCLASS5_1___ONVIEWLOAD_B__2_OFFSET UNITYSDK_OFFSET(0x1141E540)
#define CLASS_2_DB9010109E00854C___C__DISPLAYCLASS5_1___ONVIEWLOAD_B__3_OFFSET UNITYSDK_OFFSET(0x1141E770)

inline static constexpr unsigned int Class_2_DB9010109E00854C___c__DisplayClass5_1_TypeDefinitionIndex = 62462;

class Class_2_DB9010109E00854C___c__DisplayClass5_1 : public ::System::Object
{
public:
	::System::Action_1<::Class_2_0C58AD91B0F4D809*>* __9__3; // 0x10
	::Class_2_DB9010109E00854C___c__DisplayClass5_0* CS___8__locals3; // 0x18
	::RPG::GameCore::FourRotateVoxelRevert2DVoxelConfig* _revert2DVoxelConfig_5__2; // 0x20
	::RPG::GameCore::FourRotateVoxelFinishPointConfig* _finishPropConfig_5__3; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DB9010109E00854C___C__DISPLAYCLASS5_1__CTOR_OFFSET))(this);
	}

	::System::Void __OnViewLoad_b__0(::Class_2_0C58AD91B0F4D809* guestEntity)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_0C58AD91B0F4D809*))((::PBYTE)hIl2Cpp + CLASS_2_DB9010109E00854C___C__DISPLAYCLASS5_1___ONVIEWLOAD_B__0_OFFSET))(this, guestEntity);
	}

	::System::Void __OnViewLoad_b__1(::Class_2_0C58AD91B0F4D809* entity)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_0C58AD91B0F4D809*))((::PBYTE)hIl2Cpp + CLASS_2_DB9010109E00854C___C__DISPLAYCLASS5_1___ONVIEWLOAD_B__1_OFFSET))(this, entity);
	}

	::System::Void __OnViewLoad_b__2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DB9010109E00854C___C__DISPLAYCLASS5_1___ONVIEWLOAD_B__2_OFFSET))(this);
	}

	::System::Void __OnViewLoad_b__3(::Class_2_0C58AD91B0F4D809* entity)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_0C58AD91B0F4D809*))((::PBYTE)hIl2Cpp + CLASS_2_DB9010109E00854C___C__DISPLAYCLASS5_1___ONVIEWLOAD_B__3_OFFSET))(this, entity);
	}
};
