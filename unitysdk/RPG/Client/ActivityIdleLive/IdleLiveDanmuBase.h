#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client::ActivityIdleLive { class IdleLiveDanmuContentData; }
namespace System { class Object; }
namespace UnityEngine { class RectTransform; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDANMUBASE_CORE_OFFSET UNITYSDK_OFFSET(0x19D3B5A0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDANMUBASE_DESPAWNED_OFFSET UNITYSDK_OFFSET(0x19D3B4B0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDANMUBASE_GETWORLDEDGE_OFFSET UNITYSDK_OFFSET(0x19D3B9A0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDANMUBASE_GETWORLDHEIGHT_OFFSET UNITYSDK_OFFSET(0x19D3B920)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDANMUBASE_GET_ISENDED_OFFSET UNITYSDK_OFFSET(0x19D3B1F0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDANMUBASE_GET_UID_OFFSET UNITYSDK_OFFSET(0x19D3B210)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDANMUBASE_HASLEFTRIGHTEDGE_OFFSET UNITYSDK_OFFSET(0x19D3BA10)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDANMUBASE_METHOD_5_25CD86BF8626C8D9_OFFSET UNITYSDK_OFFSET(0x19D3B740)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDANMUBASE_METHOD_5_E7EF6BC52B28648C_OFFSET UNITYSDK_OFFSET(0x19D3B2D0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDANMUBASE_ONCREATE_OFFSET UNITYSDK_OFFSET(0x19D3B4F0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDANMUBASE_SETFLYSPEED_OFFSET UNITYSDK_OFFSET(0x19D3B8C0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDANMUBASE_SETISSTART_OFFSET UNITYSDK_OFFSET(0x19D3B230)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDANMUBASE_SET_ISENDED_OFFSET UNITYSDK_OFFSET(0x19D3B200)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDANMUBASE_SET_UID_OFFSET UNITYSDK_OFFSET(0x19D3B220)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDANMUBASE_SPAWNED_OFFSET UNITYSDK_OFFSET(0x19D3B280)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDANMUBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x19D3BB20)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveDanmuBase_TypeDefinitionIndex = 71565;

	class IdleLiveDanmuBase : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::RectTransform* Field_5_0; // 0x18
		::System::Single Field_5_1; // 0x20
		::Il2CppArray<::UnityEngine::Vector3>* Field_5_2; // 0x28
		::System::Boolean Field_5_3; // 0x30
		::System::Boolean _IsEnded_k__BackingField; // 0x31
		::System::UInt32 _Uid_k__BackingField; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDANMUBASE__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsEnded()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDANMUBASE_GET_ISENDED_OFFSET))(this);
		}

		::System::Void set_IsEnded(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDANMUBASE_SET_ISENDED_OFFSET))(this, a1);
		}

		::System::UInt32 get_Uid()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDANMUBASE_GET_UID_OFFSET))(this);
		}

		::System::Void set_Uid(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDANMUBASE_SET_UID_OFFSET))(this, a1);
		}

		::System::Void SetIsStart(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDANMUBASE_SETISSTART_OFFSET))(this, a1);
		}

		::System::Void Spawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDANMUBASE_SPAWNED_OFFSET))(this);
		}

		::System::Void Despawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDANMUBASE_DESPAWNED_OFFSET))(this);
		}

		::System::Void OnCreate(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDANMUBASE_ONCREATE_OFFSET))(this, a1);
		}

		::System::Void Method_5_E7EF6BC52B28648C()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDANMUBASE_METHOD_5_E7EF6BC52B28648C_OFFSET))(this);
		}

		::System::Void Core(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDANMUBASE_CORE_OFFSET))(this, a1);
		}

		::System::Void Method_5_25CD86BF8626C8D9(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDANMUBASE_METHOD_5_25CD86BF8626C8D9_OFFSET))(this, a1);
		}

		::System::Void SetFlySpeed(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDANMUBASE_SETFLYSPEED_OFFSET))(this, a1);
		}

		::System::Single GetWorldHeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDANMUBASE_GETWORLDHEIGHT_OFFSET))(this);
		}

		::UnityEngine::Vector2 GetWorldEdge()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDANMUBASE_GETWORLDEDGE_OFFSET))(this);
		}

		::System::Boolean HasLeftRightEdge()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDANMUBASE_HASLEFTRIGHTEDGE_OFFSET))(this);
		}
	};
}
