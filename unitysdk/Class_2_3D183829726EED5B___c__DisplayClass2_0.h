#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class AddMenuItem; }

#define CLASS_2_3D183829726EED5B___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0x123A2DC0)
#define CLASS_2_3D183829726EED5B___C__DISPLAYCLASS2_0__ONTASKBEGIN_B__0_OFFSET UNITYSDK_OFFSET(0x123A2E80)

inline static constexpr unsigned int Class_2_3D183829726EED5B___c__DisplayClass2_0_TypeDefinitionIndex = 53358;

class Class_2_3D183829726EED5B___c__DisplayClass2_0 : public ::System::Object
{
public:
	::RPG::GameCore::AddMenuItem* menuItem; // 0x10
	::System::UInt32 instanceID; // 0x18
	::System::UInt32 groupID; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3D183829726EED5B___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
	}

	::System::Void _OnTaskBegin_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3D183829726EED5B___C__DISPLAYCLASS2_0__ONTASKBEGIN_B__0_OFFSET))(this);
	}
};
