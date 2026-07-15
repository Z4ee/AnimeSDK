#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_27A6FCAF93534BC1;
class Class_2_27A6FCAF93534BC1_Class_2_A6C83DE587736314;
namespace RPG::GameCore { class GameEntity; }

#define CLASS_2_27A6FCAF93534BC1___C__DISPLAYCLASS11_0__CTOR_OFFSET UNITYSDK_OFFSET(0x175644A0)
#define CLASS_2_27A6FCAF93534BC1___C__DISPLAYCLASS11_0__TRYCREATEPOSESWITCHER_B__0_OFFSET UNITYSDK_OFFSET(0x17565E20)

inline static constexpr unsigned int Class_2_27A6FCAF93534BC1___c__DisplayClass11_0_TypeDefinitionIndex = 57908;

class Class_2_27A6FCAF93534BC1___c__DisplayClass11_0 : public ::System::Object
{
public:
	::Class_2_27A6FCAF93534BC1_Class_2_A6C83DE587736314* volumeV2; // 0x10
	::Class_2_27A6FCAF93534BC1* __4__this; // 0x18
	::System::UInt32 groupID; // 0x20
	::System::UInt32 instanceID; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_27A6FCAF93534BC1___C__DISPLAYCLASS11_0__CTOR_OFFSET))(this);
	}

	::System::Void _TryCreatePoseSwitcher_b__0(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_27A6FCAF93534BC1___C__DISPLAYCLASS11_0__TRYCREATEPOSESWITCHER_B__0_OFFSET))(this, a1);
	}
};
