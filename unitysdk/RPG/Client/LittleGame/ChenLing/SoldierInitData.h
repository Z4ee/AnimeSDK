#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Transform; }

#define RPG_CLIENT_LITTLEGAME_CHENLING_SOLDIERINITDATA_GET_ISALLY_OFFSET UNITYSDK_OFFSET(0xA689B40)
#define RPG_CLIENT_LITTLEGAME_CHENLING_SOLDIERINITDATA_GET_MAXHP_OFFSET UNITYSDK_OFFSET(0xA689B20)
#define RPG_CLIENT_LITTLEGAME_CHENLING_SOLDIERINITDATA_GET_ROOTTRANSFORM_OFFSET UNITYSDK_OFFSET(0xA689B60)
#define RPG_CLIENT_LITTLEGAME_CHENLING_SOLDIERINITDATA_GET_UID_OFFSET UNITYSDK_OFFSET(0xA689B00)
#define RPG_CLIENT_LITTLEGAME_CHENLING_SOLDIERINITDATA_SET_ISALLY_OFFSET UNITYSDK_OFFSET(0xA689B50)
#define RPG_CLIENT_LITTLEGAME_CHENLING_SOLDIERINITDATA_SET_MAXHP_OFFSET UNITYSDK_OFFSET(0xA689B30)
#define RPG_CLIENT_LITTLEGAME_CHENLING_SOLDIERINITDATA_SET_ROOTTRANSFORM_OFFSET UNITYSDK_OFFSET(0xA689B70)
#define RPG_CLIENT_LITTLEGAME_CHENLING_SOLDIERINITDATA_SET_UID_OFFSET UNITYSDK_OFFSET(0xA689B10)
#define RPG_CLIENT_LITTLEGAME_CHENLING_SOLDIERINITDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA689320)

namespace RPG::Client::LittleGame::ChenLing
{
	inline static constexpr unsigned int SoldierInitData_TypeDefinitionIndex = 71326;

	class SoldierInitData : public ::System::Object
	{
	public:
		::UnityEngine::Transform* _RootTransform_k__BackingField; // 0x10
		::System::Boolean _IsAlly_k__BackingField; // 0x18
		::System::Int32 _MaxHP_k__BackingField; // 0x1C
		::System::Int32 _UID_k__BackingField; // 0x20

		::System::Void _ctor(::System::Int32 uid, ::System::Int32 maxHP, ::UnityEngine::Transform* rootTransform, ::System::Boolean isAlly)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_SOLDIERINITDATA__CTOR_OFFSET))(this, uid, maxHP, rootTransform, isAlly);
		}

		::System::Int32 get_UID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_SOLDIERINITDATA_GET_UID_OFFSET))(this);
		}

		::System::Void set_UID(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_SOLDIERINITDATA_SET_UID_OFFSET))(this, value);
		}

		::System::Int32 get_MaxHP()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_SOLDIERINITDATA_GET_MAXHP_OFFSET))(this);
		}

		::System::Void set_MaxHP(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_SOLDIERINITDATA_SET_MAXHP_OFFSET))(this, value);
		}

		::System::Boolean get_IsAlly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_SOLDIERINITDATA_GET_ISALLY_OFFSET))(this);
		}

		::System::Void set_IsAlly(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_SOLDIERINITDATA_SET_ISALLY_OFFSET))(this, value);
		}

		::UnityEngine::Transform* get_RootTransform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_SOLDIERINITDATA_GET_ROOTTRANSFORM_OFFSET))(this);
		}

		::System::Void set_RootTransform(::UnityEngine::Transform* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_SOLDIERINITDATA_SET_ROOTTRANSFORM_OFFSET))(this, value);
		}
	};
}
