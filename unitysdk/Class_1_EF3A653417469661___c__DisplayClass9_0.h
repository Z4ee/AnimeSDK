#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_EF3A653417469661;
class Class_2_B8E38BF47138A2E5;
namespace RPG::GameCore { class FourRotateVoxelPortalConfig; }

#define CLASS_1_EF3A653417469661___C__DISPLAYCLASS9_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA774630)
#define CLASS_1_EF3A653417469661___C__DISPLAYCLASS9_0__INITIALIZE_B__0_OFFSET UNITYSDK_OFFSET(0xA776890)

inline static constexpr unsigned int Class_1_EF3A653417469661___c__DisplayClass9_0_TypeDefinitionIndex = 71312;

class Class_1_EF3A653417469661___c__DisplayClass9_0 : public ::System::Object
{
public:
	::RPG::GameCore::FourRotateVoxelPortalConfig* config; // 0x10
	::Class_1_EF3A653417469661* __4__this; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF3A653417469661___C__DISPLAYCLASS9_0__CTOR_OFFSET))(this);
	}

	::System::Void _Initialize_b__0(::Class_2_B8E38BF47138A2E5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*))((::PBYTE)hIl2Cpp + CLASS_1_EF3A653417469661___C__DISPLAYCLASS9_0__INITIALIZE_B__0_OFFSET))(this, a1);
	}
};
