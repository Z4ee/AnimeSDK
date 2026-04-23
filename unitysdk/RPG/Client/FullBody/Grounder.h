#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client::FullBody { class Grounder_Class_3_50D343C44D28BEFB_9; }
namespace RPG::Client::FullBody { class Grounding; }
namespace RPG::Client::FullBody { class Grounding_Class_1_BF264403995EDA8F; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class Coroutine; }

#define RPG_CLIENT_FULLBODY_GROUNDER_GET_INITIATED_OFFSET UNITYSDK_OFFSET(0xA3E2660)
#define RPG_CLIENT_FULLBODY_GROUNDER_GET_ISIKENABLED_OFFSET UNITYSDK_OFFSET(0xA3E25C0)
#define RPG_CLIENT_FULLBODY_GROUNDER_GET_ISIKUPDATEENABLED_OFFSET UNITYSDK_OFFSET(0xA3E2650)
#define RPG_CLIENT_FULLBODY_GROUNDER_METHOD_5_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0xA3E2BC0)
#define RPG_CLIENT_FULLBODY_GROUNDER_METHOD_5_135A6C290305C949_OFFSET UNITYSDK_OFFSET(0xA3E2C10)
#define RPG_CLIENT_FULLBODY_GROUNDER_METHOD_5_627C7524E98F4AC5_1_OFFSET UNITYSDK_OFFSET(0xA3E3210)
#define RPG_CLIENT_FULLBODY_GROUNDER_METHOD_5_627C7524E98F4AC5_OFFSET UNITYSDK_OFFSET(0xA3E3180)
#define RPG_CLIENT_FULLBODY_GROUNDER_METHOD_5_7744894CEC41BF06_OFFSET UNITYSDK_OFFSET(0xA3E32A0)
#define RPG_CLIENT_FULLBODY_GROUNDER_METHOD_5_968FC12B18A43BC3_OFFSET UNITYSDK_OFFSET(0xA3E27B0)
#define RPG_CLIENT_FULLBODY_GROUNDER_METHOD_5_E39C6E87494B02E3_OFFSET UNITYSDK_OFFSET(0xA3E2680)
#define RPG_CLIENT_FULLBODY_GROUNDER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xA3E30E0)
#define RPG_CLIENT_FULLBODY_GROUNDER_ONENABLE_OFFSET UNITYSDK_OFFSET(0xA3E3040)
#define RPG_CLIENT_FULLBODY_GROUNDER_SET_INITIATED_OFFSET UNITYSDK_OFFSET(0xA3E2670)
#define RPG_CLIENT_FULLBODY_GROUNDER_SET_ISIKENABLED_OFFSET UNITYSDK_OFFSET(0xA3E25D0)
#define RPG_CLIENT_FULLBODY_GROUNDER__CTOR_OFFSET UNITYSDK_OFFSET(0xA3E33C0)

namespace RPG::Client::FullBody
{
	inline static constexpr unsigned int Grounder_TypeDefinitionIndex = 68336;

	class Grounder : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single weight; // 0x18
		::RPG::Client::FullBody::Grounding* solver; // 0x20
		::RPG::Client::FullBody::Grounder_Class_3_50D343C44D28BEFB_9* OnPreGrounder; // 0x28
		::RPG::Client::FullBody::Grounder_Class_3_50D343C44D28BEFB_9* OnPostGrounder; // 0x30
		::RPG::Client::FullBody::Grounder_Class_3_50D343C44D28BEFB_9* OnPostIK; // 0x38
		::System::Boolean isManualUpdate; // 0x40
		::System::Boolean Field_5_6; // 0x41
		::System::Boolean _initiated_k__BackingField; // 0x42
		::UnityEngine::Coroutine* Field_5_8; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDER__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsIKEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDER_GET_ISIKENABLED_OFFSET))(this);
		}

		::System::Void set_IsIKEnabled(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDER_SET_ISIKENABLED_OFFSET))(this, a1);
		}

		::System::Boolean get_IsIKUpdateEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDER_GET_ISIKUPDATEENABLED_OFFSET))(this);
		}

		::System::Boolean get_initiated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDER_GET_INITIATED_OFFSET))(this);
		}

		::System::Void set_initiated(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDER_SET_INITIATED_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 Method_5_E39C6E87494B02E3()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDER_METHOD_5_E39C6E87494B02E3_OFFSET))(this);
		}

		::System::Void Method_5_050E70FEDB783306(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDER_METHOD_5_050E70FEDB783306_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 Method_5_968FC12B18A43BC3(::RPG::Client::FullBody::Grounding_Class_1_BF264403995EDA8F* a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::RPG::Client::FullBody::Grounding_Class_1_BF264403995EDA8F*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDER_METHOD_5_968FC12B18A43BC3_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 Method_5_135A6C290305C949(::RPG::Client::FullBody::Grounding_Class_1_BF264403995EDA8F* a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::RPG::Client::FullBody::Grounding_Class_1_BF264403995EDA8F*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDER_METHOD_5_135A6C290305C949_OFFSET))(this, a1);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDER_ONDISABLE_OFFSET))(this);
		}

		::System::Collections::IEnumerator* Method_5_627C7524E98F4AC5()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDER_METHOD_5_627C7524E98F4AC5_OFFSET))(this);
		}

		::System::Collections::IEnumerator* Method_5_627C7524E98F4AC5_1()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDER_METHOD_5_627C7524E98F4AC5_1_OFFSET))(this);
		}

		::System::Void Method_5_7744894CEC41BF06()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDER_METHOD_5_7744894CEC41BF06_OFFSET))(this);
		}
	};
}
