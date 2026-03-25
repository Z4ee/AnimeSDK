#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_179553DEA16830ED_15_METHOD_1_27FE160831643A26_OFFSET UNITYSDK_OFFSET(0x11497270)
#define CLASS_1_179553DEA16830ED_15_METHOD_1_B1445E8504415D4D_OFFSET UNITYSDK_OFFSET(0x11497260)
#define CLASS_1_179553DEA16830ED_15_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x11497220)
#define CLASS_1_179553DEA16830ED_15__CTOR_OFFSET UNITYSDK_OFFSET(0x11497210)

inline static constexpr unsigned int Class_1_179553DEA16830ED_15_TypeDefinitionIndex = 47641;

class Class_1_179553DEA16830ED_15 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_179553DEA16830ED_15__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_179553DEA16830ED_15_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::RPG::GameCore::GameEntity* Method_1_B1445E8504415D4D()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_179553DEA16830ED_15_METHOD_1_B1445E8504415D4D_OFFSET))(this);
	}

	::System::Void Method_1_27FE160831643A26(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_179553DEA16830ED_15_METHOD_1_27FE160831643A26_OFFSET))(this, a1);
	}
};
