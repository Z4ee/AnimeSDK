#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AnimatorParameterType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client::Prop { class ChimeraGameObjectBuilder; }
namespace System { class String; }
namespace UnityEngine { class Animator; }

#define RPG_CLIENT_PROP_CHIMERAVIEWBUILDER_METHOD_5_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0xA06AA30)
#define RPG_CLIENT_PROP_CHIMERAVIEWBUILDER_METHOD_5_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0xA06ABB0)
#define RPG_CLIENT_PROP_CHIMERAVIEWBUILDER_START_OFFSET UNITYSDK_OFFSET(0xA06A9E0)
#define RPG_CLIENT_PROP_CHIMERAVIEWBUILDER__CTOR_OFFSET UNITYSDK_OFFSET(0xA06AF00)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraViewBuilder_TypeDefinitionIndex = 63954;

	class ChimeraViewBuilder : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::Prop::ChimeraGameObjectBuilder* Builder; // 0x18
		::UnityEngine::Animator* Animator; // 0x20
		::System::UInt32 ChimeraID; // 0x28
		::System::String* AnimatorParamName; // 0x30
		::RPG::GameCore::AnimatorParameterType ParamType; // 0x38
		::System::Single ParamValue; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAVIEWBUILDER__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAVIEWBUILDER_START_OFFSET))(this);
		}

		::System::Void Method_5_25DEA5C65A602671()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAVIEWBUILDER_METHOD_5_25DEA5C65A602671_OFFSET))(this);
		}

		::System::Void Method_5_89D1F247B9D324EE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAVIEWBUILDER_METHOD_5_89D1F247B9D324EE_OFFSET))(this);
		}
	};
}
