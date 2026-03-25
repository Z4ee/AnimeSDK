#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class Animator; }

#define RPG_CLIENT_PROP_CHIMERADUELANIMATOR_AWAKE_OFFSET UNITYSDK_OFFSET(0xA03E5A0)
#define RPG_CLIENT_PROP_CHIMERADUELANIMATOR_INIT_OFFSET UNITYSDK_OFFSET(0xA03E6A0)
#define RPG_CLIENT_PROP_CHIMERADUELANIMATOR_METHOD_5_B1936CE4DA97AA45_1_OFFSET UNITYSDK_OFFSET(0xA03EB30)
#define RPG_CLIENT_PROP_CHIMERADUELANIMATOR_METHOD_5_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0xA03EAB0)
#define RPG_CLIENT_PROP_CHIMERADUELANIMATOR_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xA03E8B0)
#define RPG_CLIENT_PROP_CHIMERADUELANIMATOR_ONENABLE_OFFSET UNITYSDK_OFFSET(0xA03E860)
#define RPG_CLIENT_PROP_CHIMERADUELANIMATOR_START_OFFSET UNITYSDK_OFFSET(0xA03E650)
#define RPG_CLIENT_PROP_CHIMERADUELANIMATOR_TICK_OFFSET UNITYSDK_OFFSET(0xA03EA30)
#define RPG_CLIENT_PROP_CHIMERADUELANIMATOR_UNINIT_OFFSET UNITYSDK_OFFSET(0xA03E900)
#define RPG_CLIENT_PROP_CHIMERADUELANIMATOR__CTOR_OFFSET UNITYSDK_OFFSET(0xA03EBB0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraDuelAnimator_TypeDefinitionIndex = 63747;

	class ChimeraDuelAnimator : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Animator* Field_5_0; // 0x18
		::System::Boolean _ManualTick; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELANIMATOR__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELANIMATOR_AWAKE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELANIMATOR_START_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELANIMATOR_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELANIMATOR_ONDESTROY_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELANIMATOR_INIT_OFFSET))(this);
		}

		::System::Void UnInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELANIMATOR_UNINIT_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELANIMATOR_TICK_OFFSET))(this, a1);
		}

		::System::Void Method_5_B1936CE4DA97AA45()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELANIMATOR_METHOD_5_B1936CE4DA97AA45_OFFSET))(this);
		}

		::System::Void Method_5_B1936CE4DA97AA45_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELANIMATOR_METHOD_5_B1936CE4DA97AA45_1_OFFSET))(this);
		}
	};
}
