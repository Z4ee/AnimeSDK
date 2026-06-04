#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class ElfRestaurantGameInstance; }
namespace RPG::Client::LittleGame { class ElfRestaurantGameEntity; }
namespace RPG::GameCore { class ST_Main_ElfWaiterProcessEvent; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_D5ADAF935713F8F7_METHOD_3_1659BCB6D1A9FC34_OFFSET UNITYSDK_OFFSET(0x13505DD0)
#define CLASS_3_D5ADAF935713F8F7_METHOD_3_522F20E67F600B4B_OFFSET UNITYSDK_OFFSET(0x13506EE0)
#define CLASS_3_D5ADAF935713F8F7_METHOD_3_8C704EC832EDEFC8_OFFSET UNITYSDK_OFFSET(0x13506C40)
#define CLASS_3_D5ADAF935713F8F7_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x13505AF0)
#define CLASS_3_D5ADAF935713F8F7_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x13506A10)
#define CLASS_3_D5ADAF935713F8F7_TICK_OFFSET UNITYSDK_OFFSET(0x13506A60)
#define CLASS_3_D5ADAF935713F8F7__CTOR_OFFSET UNITYSDK_OFFSET(0x13505AD0)
#define CLASS_3_D5ADAF935713F8F7___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x13507180)

inline static constexpr unsigned int Class_3_D5ADAF935713F8F7_TypeDefinitionIndex = 48785;

class Class_3_D5ADAF935713F8F7 : public ::RPG::GameCore::ST_Task_1<::RPG::GameCore::ST_Main_ElfWaiterProcessEvent*>
{
public:
	::RPG::Client::LittleGame::ElfRestaurantGameEntity* Field_3_0; // 0x28
	::RPG::Client::ElfRestaurantGameInstance* Field_3_1; // 0x30
	::System::Boolean Field_3_2; // 0x38
	::UnityEngine::Vector3 Field_3_3; // 0x3C
	::UnityEngine::Vector3 Field_3_4; // 0x48
	::System::Single Field_3_5; // 0x54
	::UnityEngine::Quaternion Field_3_6; // 0x58
	::System::Single Field_3_7; // 0x68
	::System::Single Field_3_8; // 0x6C
	::UnityEngine::Quaternion Field_3_9; // 0x70
	::System::Single Field_3_10; // 0x80

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

	::System::Void Method_3_522F20E67F600B4B(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_D5ADAF935713F8F7_METHOD_3_522F20E67F600B4B_OFFSET))(this, a1);
	}

	::System::Void Method_3_1659BCB6D1A9FC34()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D5ADAF935713F8F7_METHOD_3_1659BCB6D1A9FC34_OFFSET))(this);
	}

	::System::Void Method_3_8C704EC832EDEFC8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D5ADAF935713F8F7_METHOD_3_8C704EC832EDEFC8_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_D5ADAF935713F8F7___IFIXBASEPROXY_TICK_OFFSET))(this, a1);
	}
};
