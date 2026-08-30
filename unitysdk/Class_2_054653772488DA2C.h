#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8A0BE42C657CE107.h"

class Class_0_16E4307DCC419505_475;
class Class_1_0CEEFF4559200500;
class Class_1_106EC17A985EF0BE;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class RtAttachTrigger; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_054653772488DA2C_METHOD_2_0CC4BC19C602BCD0_OFFSET UNITYSDK_OFFSET(0xBD530F0)
#define CLASS_2_054653772488DA2C_METHOD_2_23BA8E676589D10E_OFFSET UNITYSDK_OFFSET(0xBD53320)
#define CLASS_2_054653772488DA2C_METHOD_2_508D4DD02D3DB74E_OFFSET UNITYSDK_OFFSET(0xBD53140)
#define CLASS_2_054653772488DA2C_METHOD_2_B1445E8504415D4D_OFFSET UNITYSDK_OFFSET(0xBD536F0)
#define CLASS_2_054653772488DA2C__CTOR_OFFSET UNITYSDK_OFFSET(0xBD53700)

inline static constexpr unsigned int Class_2_054653772488DA2C_TypeDefinitionIndex = 53961;

class Class_2_054653772488DA2C : public ::Class_1_8A0BE42C657CE107
{
public:
	::RPG::GameCore::GameEntity* GGNHCMFOMBA; // 0x18
	::Class_1_106EC17A985EF0BE* HCCOJKINEHH; // 0x20
	::Class_1_0CEEFF4559200500* JKDKDLIBEOC; // 0x28
	::Class_0_16E4307DCC419505_475* BPOEEEDGCCJ; // 0x30

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
