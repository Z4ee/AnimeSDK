#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_1_EF4713A962B958CD;
namespace RPG::Client { class Wheel; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }

#define RPG_CLIENT_SLOTMACHINECONTROLLER_AWAKE_OFFSET UNITYSDK_OFFSET(0xE0AC3F0)
#define RPG_CLIENT_SLOTMACHINECONTROLLER_SETTARGETNUMIMMEDIATELY_OFFSET UNITYSDK_OFFSET(0xE0AC470)
#define RPG_CLIENT_SLOTMACHINECONTROLLER_SETTARGETNUM_OFFSET UNITYSDK_OFFSET(0xE0AC4D0)
#define RPG_CLIENT_SLOTMACHINECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xE0AC5B0)
#define RPG_CLIENT_SLOTMACHINECONTROLLER__RESETNUM_OFFSET UNITYSDK_OFFSET(0xE0AC560)

namespace RPG::Client
{
	inline static constexpr unsigned int SlotMachineController_TypeDefinitionIndex = 70724;

	class SlotMachineController : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Class_1_EF4713A962B958CD* EJCIABDHMJJ; // 0x18
		::Il2CppArray<::RPG::Client::Wheel*>* Wheels; // 0x20
		::System::Boolean UseOverrideUICurveData; // 0x28
		::UnityEngine::AnimationCurve* OverrideUICurveData; // 0x30
		::System::Single OverrideDuration; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SLOTMACHINECONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SLOTMACHINECONTROLLER_AWAKE_OFFSET))(this);
		}

		::System::Void SetTargetNumImmediately(::Il2CppArray<::System::Int32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SLOTMACHINECONTROLLER_SETTARGETNUMIMMEDIATELY_OFFSET))(this, a1);
		}

		::System::Void SetTargetNum(::Il2CppArray<::System::Int32>* a1, ::System::Collections::Generic::List_1<::System::Int32>* a2, ::System::Boolean a3, ::System::Action* a4)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Int32>*, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SLOTMACHINECONTROLLER_SETTARGETNUM_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _ResetNum()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SLOTMACHINECONTROLLER__RESETNUM_OFFSET))(this);
		}
	};
}
