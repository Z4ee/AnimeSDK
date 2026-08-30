#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/NPCBodySize.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_1_DBD884B6630BACC3_EyeTransform;
class Class_3_F946D4081774B88D;
namespace RPG::Client { class MonoEmoNpcEyeController_Class_1_7C6B29F44ADDF825; }
namespace RPG::Client { class MonoEmoNpcEyeController_Class_1_F0E39AD3E60270B6; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MONOEMONPCEYECONTROLLER_ENABLERESET_OFFSET UNITYSDK_OFFSET(0x1B3A8080)
#define RPG_CLIENT_MONOEMONPCEYECONTROLLER_FORCERESET_OFFSET UNITYSDK_OFFSET(0x1B3A12D0)
#define RPG_CLIENT_MONOEMONPCEYECONTROLLER_GET_BODYSIZE_OFFSET UNITYSDK_OFFSET(0x1B3A8B10)
#define RPG_CLIENT_MONOEMONPCEYECONTROLLER_GET_EYECTRL_OFFSET UNITYSDK_OFFSET(0x1B3A1230)
#define RPG_CLIENT_MONOEMONPCEYECONTROLLER_GET_EYETRANSFORMS_OFFSET UNITYSDK_OFFSET(0x1B3A8B20)
#define RPG_CLIENT_MONOEMONPCEYECONTROLLER_GET_ISENABLE_OFFSET UNITYSDK_OFFSET(0x1B3A89F0)
#define RPG_CLIENT_MONOEMONPCEYECONTROLLER_INIT_OFFSET UNITYSDK_OFFSET(0x1B3A7F60)
#define RPG_CLIENT_MONOEMONPCEYECONTROLLER_METHOD_5_5B56B56BFFE4CC00_OFFSET UNITYSDK_OFFSET(0x1B3A8710)
#define RPG_CLIENT_MONOEMONPCEYECONTROLLER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1B3A8370)
#define RPG_CLIENT_MONOEMONPCEYECONTROLLER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1B3A8240)
#define RPG_CLIENT_MONOEMONPCEYECONTROLLER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1B3A8160)
#define RPG_CLIENT_MONOEMONPCEYECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B3A8B30)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEmoNpcEyeController_TypeDefinitionIndex = 71119;

	class MonoEmoNpcEyeController : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::MonoEmoNpcEyeController_Class_1_F0E39AD3E60270B6* LGIKBGMJCHN; // 0x18
		::RPG::Client::MonoEmoNpcEyeController_Class_1_7C6B29F44ADDF825* LKNPOGIAHCH; // 0x20
		::RPG::GameCore::NPCBodySize KNKPGNLJNLP; // 0x28
		::System::Collections::Generic::List_1<::Class_1_DBD884B6630BACC3_EyeTransform*>* FBIBDFCNFAM; // 0x30
		::Class_3_F946D4081774B88D* MDOBEIPOEON; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMONPCEYECONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void Init(::RPG::GameCore::NPCBodySize a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::NPCBodySize))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMONPCEYECONTROLLER_INIT_OFFSET))(this, a1);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMONPCEYECONTROLLER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMONPCEYECONTROLLER_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMONPCEYECONTROLLER_ONDESTROY_OFFSET))(this);
		}

		::System::Void ForceReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMONPCEYECONTROLLER_FORCERESET_OFFSET))(this);
		}

		::System::Void EnableReset(::System::Boolean a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMONPCEYECONTROLLER_ENABLERESET_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_5B56B56BFFE4CC00(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMONPCEYECONTROLLER_METHOD_5_5B56B56BFFE4CC00_OFFSET))(this, a1);
		}

		::System::Boolean get_IsEnable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMONPCEYECONTROLLER_GET_ISENABLE_OFFSET))(this);
		}

		::System::Boolean get_EyeCtrl()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMONPCEYECONTROLLER_GET_EYECTRL_OFFSET))(this);
		}

		::RPG::GameCore::NPCBodySize get_BodySize()
		{
			return ((::RPG::GameCore::NPCBodySize(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMONPCEYECONTROLLER_GET_BODYSIZE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Class_1_DBD884B6630BACC3_EyeTransform*>* get_EyeTransforms()
		{
			return ((::System::Collections::Generic::List_1<::Class_1_DBD884B6630BACC3_EyeTransform*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMONPCEYECONTROLLER_GET_EYETRANSFORMS_OFFSET))(this);
		}
	};
}
