#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8A0BE42C657CE107.h"

class Class_0_16E4307DCC419505_441;
class Class_1_0CEEFF4559200500;
class Class_1_106EC17A985EF0BE;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class RtAttachTrigger; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_054653772488DA2C_METHOD_2_0CC4BC19C602BCD0_OFFSET UNITYSDK_OFFSET(0x1821AC60)
#define CLASS_2_054653772488DA2C_METHOD_2_23BA8E676589D10E_OFFSET UNITYSDK_OFFSET(0x1821AE90)
#define CLASS_2_054653772488DA2C_METHOD_2_508D4DD02D3DB74E_OFFSET UNITYSDK_OFFSET(0x1821ACB0)
#define CLASS_2_054653772488DA2C_METHOD_2_B1445E8504415D4D_OFFSET UNITYSDK_OFFSET(0x1821B260)
#define CLASS_2_054653772488DA2C__CTOR_OFFSET UNITYSDK_OFFSET(0x1821B270)

inline static constexpr unsigned int Class_2_054653772488DA2C_TypeDefinitionIndex = 51277;

class Class_2_054653772488DA2C : public ::Class_1_8A0BE42C657CE107
{
public:
	::Class_1_0CEEFF4559200500* Field_2_0; // 0x18
	::Class_1_106EC17A985EF0BE* Field_2_1; // 0x20
	::RPG::GameCore::GameEntity* Field_2_2; // 0x28
	::Class_0_16E4307DCC419505_441* Field_2_3; // 0x30

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
};
