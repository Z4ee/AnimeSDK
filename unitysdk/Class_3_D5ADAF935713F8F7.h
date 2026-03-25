#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class ElfRestaurantGameInstance; }
namespace RPG::Client::LittleGame { class ElfRestaurantGameEntity; }
namespace RPG::GameCore { class ST_Main_ElfWaiterProcessEvent; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_D5ADAF935713F8F7_METHOD_3_1659BCB6D1A9FC34_OFFSET UNITYSDK_OFFSET(0x10641F30)
#define CLASS_3_D5ADAF935713F8F7_METHOD_3_D109CE569415FA03_OFFSET UNITYSDK_OFFSET(0x10642DC0)
#define CLASS_3_D5ADAF935713F8F7_METHOD_3_F859CE601F919CF3_OFFSET UNITYSDK_OFFSET(0x106430C0)
#define CLASS_3_D5ADAF935713F8F7_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x10641C60)
#define CLASS_3_D5ADAF935713F8F7_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x10642B90)
#define CLASS_3_D5ADAF935713F8F7_TICK_OFFSET UNITYSDK_OFFSET(0x10642BE0)
#define CLASS_3_D5ADAF935713F8F7__CTOR_OFFSET UNITYSDK_OFFSET(0x10641C40)
#define CLASS_3_D5ADAF935713F8F7___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x106433D0)

inline static constexpr unsigned int Class_3_D5ADAF935713F8F7_TypeDefinitionIndex = 42188;

class Class_3_D5ADAF935713F8F7 : public ::RPG::GameCore::ST_Task_1<::RPG::GameCore::ST_Main_ElfWaiterProcessEvent*>
{
public:
	::RPG::Client::LittleGame::ElfRestaurantGameEntity* Field_3_9; // 0x28
	::RPG::Client::ElfRestaurantGameInstance* Field_3_10; // 0x30
	::UnityEngine::Vector3 Field_3_5; // 0x38
	::System::Single Field_3_3; // 0x44
	::UnityEngine::Quaternion Field_3_8; // 0x48
	::UnityEngine::Vector3 Field_3_6; // 0x58
	::System::Single Field_3_2; // 0x64
	::System::Single Field_3_1; // 0x68
	::System::Single Field_3_4; // 0x6C
	::UnityEngine::Quaternion Field_3_7; // 0x70
	::System::Boolean Field_3_0; // 0x80

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Main_ElfWaiterProcessEvent* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Main_ElfWaiterProcessEvent*))((::PBYTE)hIl2Cpp + CLASS_3_D5ADAF935713F8F7__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D5ADAF935713F8F7_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D5ADAF935713F8F7_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_D5ADAF935713F8F7_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_3_F859CE601F919CF3(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_D5ADAF935713F8F7_METHOD_3_F859CE601F919CF3_OFFSET))(this, a1);
	}

	::System::Void Method_3_1659BCB6D1A9FC34()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D5ADAF935713F8F7_METHOD_3_1659BCB6D1A9FC34_OFFSET))(this);
	}

	::System::Void Method_3_D109CE569415FA03()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D5ADAF935713F8F7_METHOD_3_D109CE569415FA03_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_D5ADAF935713F8F7___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
	}
};
