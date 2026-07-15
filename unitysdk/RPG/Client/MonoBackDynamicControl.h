#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_B49063F7086F3D85;
namespace RPG::Client::Prop { class OpticalIllusionPuzzleBoard; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_MONOBACKDYNAMICCONTROL_AWAKE_OFFSET UNITYSDK_OFFSET(0x18077000)
#define RPG_CLIENT_MONOBACKDYNAMICCONTROL_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x18077140)
#define RPG_CLIENT_MONOBACKDYNAMICCONTROL_ONENABLE_OFFSET UNITYSDK_OFFSET(0x18077070)
#define RPG_CLIENT_MONOBACKDYNAMICCONTROL_SETBOARDSCRIPT_OFFSET UNITYSDK_OFFSET(0x180771D0)
#define RPG_CLIENT_MONOBACKDYNAMICCONTROL_UPDATE_OFFSET UNITYSDK_OFFSET(0x180770D0)
#define RPG_CLIENT_MONOBACKDYNAMICCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x18077230)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoBackDynamicControl_TypeDefinitionIndex = 67568;

	class MonoBackDynamicControl : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::GameObject* mainRoot; // 0x18
		::UnityEngine::GameObject* leftUpRoot; // 0x20
		::UnityEngine::GameObject* rightBottomRoot; // 0x28
		::UnityEngine::GameObject* backGroundRoot; // 0x30
		::Il2CppArray<::UnityEngine::Vector3>* leftUpAspectPos; // 0x38
		::Il2CppArray<::UnityEngine::Vector3>* rightBottomAspectPos; // 0x40
		::Il2CppArray<::UnityEngine::Vector3>* mainRootAspectScale; // 0x48
		::RPG::Client::Prop::OpticalIllusionPuzzleBoard* pzzuleBoard; // 0x50
		::System::Single orthographicSizeCorection; // 0x58
		::Class_2_B49063F7086F3D85* _Behavior; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOBACKDYNAMICCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOBACKDYNAMICCONTROL_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOBACKDYNAMICCONTROL_ONENABLE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOBACKDYNAMICCONTROL_UPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOBACKDYNAMICCONTROL_ONDESTROY_OFFSET))(this);
		}

		::System::Void SetBoardScript(::RPG::Client::Prop::OpticalIllusionPuzzleBoard* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::OpticalIllusionPuzzleBoard*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOBACKDYNAMICCONTROL_SETBOARDSCRIPT_OFFSET))(this, a1);
		}
	};
}
