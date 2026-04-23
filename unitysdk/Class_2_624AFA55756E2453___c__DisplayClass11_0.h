#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_624AFA55756E2453;
class Class_2_624AFA55756E2453_Class_2_A6C83DE587736314;
namespace RPG::GameCore { class GameEntity; }

#define CLASS_2_624AFA55756E2453___C__DISPLAYCLASS11_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9346200)
#define CLASS_2_624AFA55756E2453___C__DISPLAYCLASS11_0__TRYCREATEPOSESWITCHER_B__0_OFFSET UNITYSDK_OFFSET(0x9347F20)

inline static constexpr unsigned int Class_2_624AFA55756E2453___c__DisplayClass11_0_TypeDefinitionIndex = 55907;

class Class_2_624AFA55756E2453___c__DisplayClass11_0 : public ::System::Object
{
public:
	::Class_2_624AFA55756E2453_Class_2_A6C83DE587736314* volumeV2; // 0x10
	::Class_2_624AFA55756E2453* __4__this; // 0x18
	::System::UInt32 groupID; // 0x20
	::System::UInt32 instanceID; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_624AFA55756E2453___C__DISPLAYCLASS11_0__CTOR_OFFSET))(this);
	}

	::System::Void _TryCreatePoseSwitcher_b__0(::RPG::GameCore::GameEntity* entity)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_624AFA55756E2453___C__DISPLAYCLASS11_0__TRYCREATEPOSESWITCHER_B__0_OFFSET))(this, entity);
	}
};
