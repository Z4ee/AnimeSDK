#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_56DCA1B58073717B;
class Class_2_985AEACD6131E132;
namespace RPG::GameCore { class FourRotateVoxelRevert2DVoxelConfig; }

#define CLASS_2_985AEACD6131E132___C__DISPLAYCLASS13_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17C51CB0)
#define CLASS_2_985AEACD6131E132___C__DISPLAYCLASS13_0___ADDREVERTALL2DVOXELINTERACTTRIGGER_B__0_OFFSET UNITYSDK_OFFSET(0x17C55CA0)

inline static constexpr unsigned int Class_2_985AEACD6131E132___c__DisplayClass13_0_TypeDefinitionIndex = 72800;

class Class_2_985AEACD6131E132___c__DisplayClass13_0 : public ::System::Object
{
public:
	::Class_2_985AEACD6131E132* __4__this; // 0x10
	::RPG::GameCore::FourRotateVoxelRevert2DVoxelConfig* revert2DVoxelConfig; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_985AEACD6131E132___C__DISPLAYCLASS13_0__CTOR_OFFSET))(this);
	}

	::System::Void __AddRevertAll2DVoxelInteractTrigger_b__0(::Class_2_56DCA1B58073717B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_56DCA1B58073717B*))((::PBYTE)hIl2Cpp + CLASS_2_985AEACD6131E132___C__DISPLAYCLASS13_0___ADDREVERTALL2DVOXELINTERACTTRIGGER_B__0_OFFSET))(this, a1);
	}
};
