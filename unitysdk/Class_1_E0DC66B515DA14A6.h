#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GameObjectSpawnPriority.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"

namespace RPG::Client { class ElfFarmCellData; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_1_E0DC66B515DA14A6_CLEAR_OFFSET UNITYSDK_OFFSET(0xD292720)
#define CLASS_1_E0DC66B515DA14A6_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0xD292250)
#define CLASS_1_E0DC66B515DA14A6_ONCANCELSPAWN_OFFSET UNITYSDK_OFFSET(0xD2926A0)
#define CLASS_1_E0DC66B515DA14A6_ONSPAWNASYNC_OFFSET UNITYSDK_OFFSET(0xD292260)
#define CLASS_1_E0DC66B515DA14A6_USELIGHTWEIGHTDEACTIVE_OFFSET UNITYSDK_OFFSET(0xD2926E0)
#define CLASS_1_E0DC66B515DA14A6__CTOR_OFFSET UNITYSDK_OFFSET(0xD292940)

inline static constexpr unsigned int Class_1_E0DC66B515DA14A6_TypeDefinitionIndex = 68628;

class Class_1_E0DC66B515DA14A6 : public ::System::Object
{
public:
	::System::String* BFDAADMGNFD; // 0x10
	::RPG::Client::ElfFarmCellData* KJHODFDPOCG; // 0x18
	::UnityEngine::GameObject* BHOMJHDIOMH; // 0x20
	::System::String* PILMABHICEE; // 0x28
	::UnityEngine::GameObject* FAEGPGKBBLI; // 0x30
	::UnityEngine::Transform* HFLDHJHJNCF; // 0x38
	::UnityEngine::Quaternion FLNOBMJMDNG; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E0DC66B515DA14A6__CTOR_OFFSET))(this);
	}

	::RPG::Client::GameObjectSpawnPriority get_Priority()
	{
		return ((::RPG::Client::GameObjectSpawnPriority(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E0DC66B515DA14A6_GET_PRIORITY_OFFSET))(this);
	}

	::System::Void OnSpawnAsync(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_E0DC66B515DA14A6_ONSPAWNASYNC_OFFSET))(this, a1);
	}

	::System::Void OnCancelSpawn()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E0DC66B515DA14A6_ONCANCELSPAWN_OFFSET))(this);
	}

	::System::Boolean UseLightWeightDeactive()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E0DC66B515DA14A6_USELIGHTWEIGHTDEACTIVE_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E0DC66B515DA14A6_CLEAR_OFFSET))(this);
	}
};
