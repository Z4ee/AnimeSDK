#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define MONOEXECUTEBUTTON_AWAKE_OFFSET UNITYSDK_OFFSET(0x108A8360)
#define MONOEXECUTEBUTTON_ONBUTTONCLICK_OFFSET UNITYSDK_OFFSET(0x108A81F0)
#define MONOEXECUTEBUTTON_ONLOCKCORECHANGE_OFFSET UNITYSDK_OFFSET(0x108A7E60)
#define MONOEXECUTEBUTTON_ONPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0x108A82E0)
#define MONOEXECUTEBUTTON_REFRESHBUTTON_OFFSET UNITYSDK_OFFSET(0x108A7DE0)
#define MONOEXECUTEBUTTON_UPDATEFORKEYBORADINPUT_OFFSET UNITYSDK_OFFSET(0x108A8230)
#define MONOEXECUTEBUTTON_UPDATEKEYBORADINPUT_OFFSET UNITYSDK_OFFSET(0x108A8120)
#define MONOEXECUTEBUTTON_UPDATE_OFFSET UNITYSDK_OFFSET(0x108A83C0)
#define MONOEXECUTEBUTTON__CTOR_OFFSET UNITYSDK_OFFSET(0x108A8410)

inline static constexpr unsigned int MonoExecuteButton_TypeDefinitionIndex = 49648;

class MonoExecuteButton : public ::UnityEngine::MonoBehaviour
{
public:
	::System::UInt32 _lockEnemyEntityID; // 0x18
	::System::String* KeyButtonCode; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOEXECUTEBUTTON__CTOR_OFFSET))(this);
	}

	::System::Void RefreshButton(::MoleMole::Battle::Entity* preLockEntity, ::MoleMole::Battle::Entity* newLockEntity)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MONOEXECUTEBUTTON_REFRESHBUTTON_OFFSET))(this, preLockEntity, newLockEntity);
	}

	::System::Void OnLockCoreChange(::MoleMole::Battle::Entity* newEntity)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MONOEXECUTEBUTTON_ONLOCKCORECHANGE_OFFSET))(this, newEntity);
	}

	::System::Void UpdateKeyboradInput()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOEXECUTEBUTTON_UPDATEKEYBORADINPUT_OFFSET))(this);
	}

	::System::Void UpdateForKeyboradInput()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOEXECUTEBUTTON_UPDATEFORKEYBORADINPUT_OFFSET))(this);
	}

	::System::Void OnButtonClick()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOEXECUTEBUTTON_ONBUTTONCLICK_OFFSET))(this);
	}

	::System::Void Awake()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOEXECUTEBUTTON_AWAKE_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOEXECUTEBUTTON_UPDATE_OFFSET))(this);
	}

	::System::Void OnPointerDown(::UnityEngine::EventSystems::PointerEventData* eventData)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MONOEXECUTEBUTTON_ONPOINTERDOWN_OFFSET))(this, eventData);
	}
};
