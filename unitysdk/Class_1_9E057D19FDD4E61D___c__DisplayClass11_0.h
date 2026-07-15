#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_9E057D19FDD4E61D;
class Class_2_56DCA1B58073717B;
namespace RPG::GameCore { class FourRotateVoxelPortalConfig; }

#define CLASS_1_9E057D19FDD4E61D___C__DISPLAYCLASS11_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1874C5F0)
#define CLASS_1_9E057D19FDD4E61D___C__DISPLAYCLASS11_0__INITIALIZE_B__0_OFFSET UNITYSDK_OFFSET(0x1874F6D0)

inline static constexpr unsigned int Class_1_9E057D19FDD4E61D___c__DisplayClass11_0_TypeDefinitionIndex = 72835;

class Class_1_9E057D19FDD4E61D___c__DisplayClass11_0 : public ::System::Object
{
public:
	::RPG::GameCore::FourRotateVoxelPortalConfig* config; // 0x10
	::Class_1_9E057D19FDD4E61D* __4__this; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9E057D19FDD4E61D___C__DISPLAYCLASS11_0__CTOR_OFFSET))(this);
	}

	::System::Void _Initialize_b__0(::Class_2_56DCA1B58073717B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_56DCA1B58073717B*))((::PBYTE)hIl2Cpp + CLASS_1_9E057D19FDD4E61D___C__DISPLAYCLASS11_0__INITIALIZE_B__0_OFFSET))(this, a1);
	}
};
