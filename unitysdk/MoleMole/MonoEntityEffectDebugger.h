#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_AA5E322261F64EE5.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define MOLEMOLE_MONOENTITYEFFECTDEBUGGER_METHOD_5_ABE7715DB28B2DD1_OFFSET UNITYSDK_OFFSET(0x16CD01E0)
#define MOLEMOLE_MONOENTITYEFFECTDEBUGGER_PLAYEFFECT_OFFSET UNITYSDK_OFFSET(0x16CCFF80)
#define MOLEMOLE_MONOENTITYEFFECTDEBUGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x16CD0160)

namespace MoleMole
{
	inline static constexpr unsigned int MonoEntityEffectDebugger_TypeDefinitionIndex = 75193;

	class MonoEntityEffectDebugger : public ::UnityEngine::MonoBehaviour
	{
	public:
		// static const ::System::Single Field_5_10; // 0x0
		::MoleMole::Battle::Entity* entity; // 0x18
		::System::String* _effectName; // 0x20
		::System::String* _attachPointName; // 0x28
		::System::Single _deltaTime; // 0x30
		::UnityEngine::Vector3 posOffset; // 0x34
		::Enum_3_AA5E322261F64EE5 posRelativeOption; // 0x40
		::UnityEngine::Vector3 angleOffset; // 0x44
		::Enum_3_AA5E322261F64EE5 angleRelativeOption; // 0x50
		::System::Boolean showCords; // 0x54
		::System::Boolean showAngleCords; // 0x55
		::UnityEngine::Color Field_5_11; // 0x58
		::UnityEngine::Color Field_5_12; // 0x68
		::UnityEngine::Color Field_5_13; // 0x78
		::System::Boolean Field_5_14; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYEFFECTDEBUGGER__CTOR_OFFSET))(this);
		}

		::System::Void PlayEffect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYEFFECTDEBUGGER_PLAYEFFECT_OFFSET))(this);
		}

		::System::Void Method_5_ABE7715DB28B2DD1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYEFFECTDEBUGGER_METHOD_5_ABE7715DB28B2DD1_OFFSET))(this);
		}
	};
}
