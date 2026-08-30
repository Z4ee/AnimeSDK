#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class ElfRestaurantGameInstance; }
namespace RPG::Client::LittleGame { class ElfRestaurantGameEntity; }
namespace RPG::GameCore { class ST_Main_ElfWaiterProcessEvent; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_D5ADAF935713F8F7_METHOD_3_1659BCB6D1A9FC34_OFFSET UNITYSDK_OFFSET(0x1525E1A0)
#define CLASS_3_D5ADAF935713F8F7_METHOD_3_8C704EC832EDEFC8_OFFSET UNITYSDK_OFFSET(0x1525F010)
#define CLASS_3_D5ADAF935713F8F7_METHOD_3_DE21204480B88394_OFFSET UNITYSDK_OFFSET(0x1525F2B0)
#define CLASS_3_D5ADAF935713F8F7_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1525DED0)
#define CLASS_3_D5ADAF935713F8F7_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1525EDE0)
#define CLASS_3_D5ADAF935713F8F7_TICK_OFFSET UNITYSDK_OFFSET(0x1525EE30)
#define CLASS_3_D5ADAF935713F8F7__CTOR_OFFSET UNITYSDK_OFFSET(0x1525DEB0)

inline static constexpr unsigned int Class_3_D5ADAF935713F8F7_TypeDefinitionIndex = 52458;

class Class_3_D5ADAF935713F8F7 : public ::RPG::GameCore::ST_Task_1<::RPG::GameCore::ST_Main_ElfWaiterProcessEvent*>
{
public:
	::RPG::Client::LittleGame::ElfRestaurantGameEntity* PBCEKCMKJNB; // 0x28
	::RPG::Client::ElfRestaurantGameInstance* OFLDOAIGGDH; // 0x30
	::UnityEngine::Quaternion ACDOFFNEDEF; // 0x38
	::System::Single KLBFFEFFJID; // 0x48
	::System::Single FMLMBCPKBMC; // 0x4C
	::System::Single ILENJCMADMG; // 0x50
	::UnityEngine::Quaternion HBAIICJGPGC; // 0x54
	::System::Boolean ADLOALLJMOB; // 0x64
	::UnityEngine::Vector3 OIMMGKNHKOA; // 0x68
	::UnityEngine::Vector3 FCAOOKFEOHC; // 0x74
	::System::Single PGMIOKKLHIE; // 0x80

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
