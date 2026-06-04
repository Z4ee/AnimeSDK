#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client::LittleGame { class ElfRestaurantGameEntity; }
namespace RPG::GameCore { class ST_Side_ElfInteractCurrentSlot; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_3C263D4961A88F66_METHOD_3_522F20E67F600B4B_OFFSET UNITYSDK_OFFSET(0xAD4CED0)
#define CLASS_3_3C263D4961A88F66_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xAD4C990)
#define CLASS_3_3C263D4961A88F66_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xAD4D170)
#define CLASS_3_3C263D4961A88F66_TICK_OFFSET UNITYSDK_OFFSET(0xAD4D1C0)
#define CLASS_3_3C263D4961A88F66__CTOR_OFFSET UNITYSDK_OFFSET(0xAD4C960)
#define CLASS_3_3C263D4961A88F66___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0xAD4D370)

inline static constexpr unsigned int Class_3_3C263D4961A88F66_TypeDefinitionIndex = 48791;

class Class_3_3C263D4961A88F66 : public ::RPG::GameCore::ST_Task_1<::RPG::GameCore::ST_Side_ElfInteractCurrentSlot*>
{
public:
	::RPG::Client::LittleGame::ElfRestaurantGameEntity* Field_3_0; // 0x28
	::System::Single Field_3_1; // 0x30
	::UnityEngine::Vector3 Field_3_2; // 0x34
	::UnityEngine::Quaternion Field_3_3; // 0x40
	::UnityEngine::Quaternion Field_3_4; // 0x50
	::System::Single Field_3_5; // 0x60
	::UnityEngine::Vector3 Field_3_6; // 0x64

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Side_ElfInteractCurrentSlot* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Side_ElfInteractCurrentSlot*))((::PBYTE)hIl2Cpp + CLASS_3_3C263D4961A88F66__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3C263D4961A88F66_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3C263D4961A88F66_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_3C263D4961A88F66_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_3_522F20E67F600B4B(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_3C263D4961A88F66_METHOD_3_522F20E67F600B4B_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_3C263D4961A88F66___IFIXBASEPROXY_TICK_OFFSET))(this, a1);
	}
};
