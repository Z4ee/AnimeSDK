#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class NavMeshDataInfo;
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Object; }
namespace UnityEngine::AI { class NavMeshData; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class InputField; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI { class Toggle; }

#define NAVMESHLISTITEMCONTROLLER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x13DFD2B0)
#define NAVMESHLISTITEMCONTROLLER_ONNAMECHANGED_OFFSET UNITYSDK_OFFSET(0x13DFD9E0)
#define NAVMESHLISTITEMCONTROLLER_ONNAVMESHDATADROPPED_OFFSET UNITYSDK_OFFSET(0x13DFDB50)
#define NAVMESHLISTITEMCONTROLLER_ONREMOVECLICKED_OFFSET UNITYSDK_OFFSET(0x13DFDB00)
#define NAVMESHLISTITEMCONTROLLER_ONTOGGLECHANGED_OFFSET UNITYSDK_OFFSET(0x13DFDA70)
#define NAVMESHLISTITEMCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x13DFDD00)

inline static constexpr unsigned int NavMeshListItemController_TypeDefinitionIndex = 50080;

class NavMeshListItemController : public ::UnityEngine::MonoBehaviour
{
public:
	::UnityEngine::UI::InputField* nameInput; // 0x18
	::UnityEngine::UI::Toggle* includeToggle; // 0x20
	::UnityEngine::UI::Text* areaText; // 0x28
	::UnityEngine::UI::Button* removeButton; // 0x30
	::NavMeshDataInfo* dataInfo; // 0x38
	::System::Action_1<::System::String*>* onNameChanged; // 0x40
	::System::Action_1<::UnityEngine::AI::NavMeshData*>* onDataChanged; // 0x48
	::System::Action_1<::System::Boolean>* onToggleChanged; // 0x50
	::System::Action* onRemove; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAVMESHLISTITEMCONTROLLER__CTOR_OFFSET))(this);
	}

	::System::Void Initialize(::NavMeshDataInfo* info, ::System::Action_1<::System::String*>* nameChangedCallback, ::System::Action_1<::UnityEngine::AI::NavMeshData*>* dataChangedCallback, ::System::Action_1<::System::Boolean>* toggleChangedCallback, ::System::Action* removeCallback)
	{
		return ((::System::Void(*)(::PVOID, ::NavMeshDataInfo*, ::System::Action_1<::System::String*>*, ::System::Action_1<::UnityEngine::AI::NavMeshData*>*, ::System::Action_1<::System::Boolean>*, ::System::Action*))((::PBYTE)hIl2Cpp + NAVMESHLISTITEMCONTROLLER_INITIALIZE_OFFSET))(this, info, nameChangedCallback, dataChangedCallback, toggleChangedCallback, removeCallback);
	}

	::System::Void OnNameChanged(::System::String* newName)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NAVMESHLISTITEMCONTROLLER_ONNAMECHANGED_OFFSET))(this, newName);
	}

	::System::Void OnToggleChanged(::System::Boolean isOn)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NAVMESHLISTITEMCONTROLLER_ONTOGGLECHANGED_OFFSET))(this, isOn);
	}

	::System::Void OnRemoveClicked()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAVMESHLISTITEMCONTROLLER_ONREMOVECLICKED_OFFSET))(this);
	}

	::System::Void OnNavMeshDataDropped(::UnityEngine::Object* droppedObject)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + NAVMESHLISTITEMCONTROLLER_ONNAVMESHDATADROPPED_OFFSET))(this, droppedObject);
	}
};
