#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8A0BE42C657CE107.h"

class Class_0_16E4307DCC419505_416;
class Class_1_0CEEFF4559200500;
class Class_1_71B383B2694DD99B;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class RtAttachTrigger; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_054653772488DA2C_METHOD_2_0CC4BC19C602BCD0_OFFSET UNITYSDK_OFFSET(0xA9FFC60)
#define CLASS_2_054653772488DA2C_METHOD_2_23BA8E676589D10E_OFFSET UNITYSDK_OFFSET(0xA9FFE90)
#define CLASS_2_054653772488DA2C_METHOD_2_508D4DD02D3DB74E_OFFSET UNITYSDK_OFFSET(0xA9FFCB0)
#define CLASS_2_054653772488DA2C_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xAA00210)
#define CLASS_2_054653772488DA2C_METHOD_2_B1445E8504415D4D_OFFSET UNITYSDK_OFFSET(0xAA001F0)
#define CLASS_2_054653772488DA2C__CTOR_OFFSET UNITYSDK_OFFSET(0xAA00200)

inline static constexpr unsigned int Class_2_054653772488DA2C_TypeDefinitionIndex = 50195;

class Class_2_054653772488DA2C : public ::Class_1_8A0BE42C657CE107
{
public:
	::Class_0_16E4307DCC419505_416* Field_2_0; // 0x18
	::Class_1_0CEEFF4559200500* Field_2_1; // 0x20
	::Class_1_71B383B2694DD99B* Field_2_2; // 0x28
	::RPG::GameCore::GameEntity* Field_2_3; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_054653772488DA2C__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_0CC4BC19C602BCD0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_054653772488DA2C_METHOD_2_0CC4BC19C602BCD0_OFFSET))(this);
	}

	::System::Void Method_2_23BA8E676589D10E(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RtAttachTrigger* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RtAttachTrigger*))((::PBYTE)hIl2Cpp + CLASS_2_054653772488DA2C_METHOD_2_23BA8E676589D10E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_508D4DD02D3DB74E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_054653772488DA2C_METHOD_2_508D4DD02D3DB74E_OFFSET))(this);
	}

	::RPG::GameCore::GameEntity* Method_2_B1445E8504415D4D()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_054653772488DA2C_METHOD_2_B1445E8504415D4D_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_054653772488DA2C_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}
};
