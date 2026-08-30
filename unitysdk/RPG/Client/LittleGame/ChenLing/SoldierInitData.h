#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Transform; }

#define RPG_CLIENT_LITTLEGAME_CHENLING_SOLDIERINITDATA_GET_ISALLY_OFFSET UNITYSDK_OFFSET(0x1AC228C0)
#define RPG_CLIENT_LITTLEGAME_CHENLING_SOLDIERINITDATA_GET_MAXHP_OFFSET UNITYSDK_OFFSET(0x1AC228A0)
#define RPG_CLIENT_LITTLEGAME_CHENLING_SOLDIERINITDATA_GET_ROOTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1AC228E0)
#define RPG_CLIENT_LITTLEGAME_CHENLING_SOLDIERINITDATA_GET_UID_OFFSET UNITYSDK_OFFSET(0x1AC22880)
#define RPG_CLIENT_LITTLEGAME_CHENLING_SOLDIERINITDATA_SET_ISALLY_OFFSET UNITYSDK_OFFSET(0x1AC228D0)
#define RPG_CLIENT_LITTLEGAME_CHENLING_SOLDIERINITDATA_SET_MAXHP_OFFSET UNITYSDK_OFFSET(0x1AC228B0)
#define RPG_CLIENT_LITTLEGAME_CHENLING_SOLDIERINITDATA_SET_ROOTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1AC228F0)
#define RPG_CLIENT_LITTLEGAME_CHENLING_SOLDIERINITDATA_SET_UID_OFFSET UNITYSDK_OFFSET(0x1AC22890)
#define RPG_CLIENT_LITTLEGAME_CHENLING_SOLDIERINITDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC22010)

namespace RPG::Client::LittleGame::ChenLing
{
	inline static constexpr unsigned int SoldierInitData_TypeDefinitionIndex = 77357;

	class SoldierInitData : public ::System::Object
	{
	public:
		::UnityEngine::Transform* _RootTransform_k__BackingField; // 0x10
		::System::Int32 _MaxHP_k__BackingField; // 0x18
		::System::Boolean _IsAlly_k__BackingField; // 0x1C
		::System::Int32 _UID_k__BackingField; // 0x20

		::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2, ::UnityEngine::Transform* a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_SOLDIERINITDATA__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Int32 get_UID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_SOLDIERINITDATA_GET_UID_OFFSET))(this);
		}

		::System::Void set_UID(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_SOLDIERINITDATA_SET_UID_OFFSET))(this, a1);
		}

		::System::Int32 get_MaxHP()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_SOLDIERINITDATA_GET_MAXHP_OFFSET))(this);
		}

		::System::Void set_MaxHP(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_SOLDIERINITDATA_SET_MAXHP_OFFSET))(this, a1);
		}

		::System::Boolean get_IsAlly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_SOLDIERINITDATA_GET_ISALLY_OFFSET))(this);
		}

		::System::Void set_IsAlly(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_SOLDIERINITDATA_SET_ISALLY_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* get_RootTransform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_SOLDIERINITDATA_GET_ROOTTRANSFORM_OFFSET))(this);
		}

		::System::Void set_RootTransform(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_SOLDIERINITDATA_SET_ROOTTRANSFORM_OFFSET))(this, a1);
		}
	};
}
