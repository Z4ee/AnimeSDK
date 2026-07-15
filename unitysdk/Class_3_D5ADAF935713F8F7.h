#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class ElfRestaurantGameInstance; }
namespace RPG::Client::LittleGame { class ElfRestaurantGameEntity; }
namespace RPG::GameCore { class ST_Main_ElfWaiterProcessEvent; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_D5ADAF935713F8F7_METHOD_3_1659BCB6D1A9FC34_OFFSET UNITYSDK_OFFSET(0x16859530)
#define CLASS_3_D5ADAF935713F8F7_METHOD_3_8C704EC832EDEFC8_OFFSET UNITYSDK_OFFSET(0x1685A3A0)
#define CLASS_3_D5ADAF935713F8F7_METHOD_3_DE21204480B88394_OFFSET UNITYSDK_OFFSET(0x1685A640)
#define CLASS_3_D5ADAF935713F8F7_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16859260)
#define CLASS_3_D5ADAF935713F8F7_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1685A170)
#define CLASS_3_D5ADAF935713F8F7_TICK_OFFSET UNITYSDK_OFFSET(0x1685A1C0)
#define CLASS_3_D5ADAF935713F8F7__CTOR_OFFSET UNITYSDK_OFFSET(0x16859240)

inline static constexpr unsigned int Class_3_D5ADAF935713F8F7_TypeDefinitionIndex = 49798;

class Class_3_D5ADAF935713F8F7 : public ::RPG::GameCore::ST_Task_1<::RPG::GameCore::ST_Main_ElfWaiterProcessEvent*>
{
public:
	::RPG::Client::LittleGame::ElfRestaurantGameEntity* Field_3_0; // 0x28
	::RPG::Client::ElfRestaurantGameInstance* Field_3_1; // 0x30
	::UnityEngine::Quaternion Field_3_2; // 0x38
	::System::Boolean Field_3_3; // 0x48
	::System::Single Field_3_4; // 0x4C
	::UnityEngine::Quaternion Field_3_5; // 0x50
	::System::Single Field_3_6; // 0x60
	::System::Single Field_3_7; // 0x64
	::UnityEngine::Vector3 Field_3_8; // 0x68
	::UnityEngine::Vector3 Field_3_9; // 0x74
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

	::System::Void Method_3_DE21204480B88394(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_D5ADAF935713F8F7_METHOD_3_DE21204480B88394_OFFSET))(this, a1);
	}

	::System::Void Method_3_1659BCB6D1A9FC34()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D5ADAF935713F8F7_METHOD_3_1659BCB6D1A9FC34_OFFSET))(this);
	}

	::System::Void Method_3_8C704EC832EDEFC8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D5ADAF935713F8F7_METHOD_3_8C704EC832EDEFC8_OFFSET))(this);
	}
};
