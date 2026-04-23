#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client::ActivityIdleLive { class IdleLiveDanmuContentData; }
namespace System { class Object; }
namespace UnityEngine { class RectTransform; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDANMUBASE_CORE_OFFSET UNITYSDK_OFFSET(0x9B3EA40)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDANMUBASE_DESPAWNED_OFFSET UNITYSDK_OFFSET(0x9B3E940)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDANMUBASE_GETWORLDEDGE_OFFSET UNITYSDK_OFFSET(0x9B3EDF0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDANMUBASE_GETWORLDHEIGHT_OFFSET UNITYSDK_OFFSET(0x9B3ED60)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDANMUBASE_GET_ISENDED_OFFSET UNITYSDK_OFFSET(0x9B3E680)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDANMUBASE_GET_UID_OFFSET UNITYSDK_OFFSET(0x9B3E6A0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDANMUBASE_HASLEFTRIGHTEDGE_OFFSET UNITYSDK_OFFSET(0x9B3EE80)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDANMUBASE_METHOD_5_25CD86BF8626C8D9_OFFSET UNITYSDK_OFFSET(0x9B3EB80)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDANMUBASE_METHOD_5_E7EF6BC52B28648C_OFFSET UNITYSDK_OFFSET(0x9B3E760)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDANMUBASE_ONCREATE_OFFSET UNITYSDK_OFFSET(0x9B3E980)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDANMUBASE_SETFLYSPEED_OFFSET UNITYSDK_OFFSET(0x9B3ED00)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDANMUBASE_SETISSTART_OFFSET UNITYSDK_OFFSET(0x9B3E6C0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDANMUBASE_SET_ISENDED_OFFSET UNITYSDK_OFFSET(0x9B3E690)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDANMUBASE_SET_UID_OFFSET UNITYSDK_OFFSET(0x9B3E6B0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDANMUBASE_SPAWNED_OFFSET UNITYSDK_OFFSET(0x9B3E710)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDANMUBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x9B3EF90)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveDanmuBase_TypeDefinitionIndex = 69230;

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

		::System::Void set_IsEnded(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDANMUBASE_SET_ISENDED_OFFSET))(this, value);
		}

		::System::UInt32 get_Uid()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDANMUBASE_GET_UID_OFFSET))(this);
		}

		::System::Void set_Uid(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDANMUBASE_SET_UID_OFFSET))(this, value);
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
