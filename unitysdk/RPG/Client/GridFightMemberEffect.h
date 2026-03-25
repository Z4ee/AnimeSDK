#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class ParticleSystemRenderer; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_GRIDFIGHTMEMBEREFFECT_DESPAWNED_OFFSET UNITYSDK_OFFSET(0x98550C0)
#define RPG_CLIENT_GRIDFIGHTMEMBEREFFECT_GET_FOLLOWPATH_OFFSET UNITYSDK_OFFSET(0x9854BD0)
#define RPG_CLIENT_GRIDFIGHTMEMBEREFFECT_METHOD_5_CC5EA97ABCF69FED_OFFSET UNITYSDK_OFFSET(0x98551A0)
#define RPG_CLIENT_GRIDFIGHTMEMBEREFFECT_ONCREATE_OFFSET UNITYSDK_OFFSET(0x984DB20)
#define RPG_CLIENT_GRIDFIGHTMEMBEREFFECT_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x9855110)
#define RPG_CLIENT_GRIDFIGHTMEMBEREFFECT_SETUID_OFFSET UNITYSDK_OFFSET(0x9854BE0)
#define RPG_CLIENT_GRIDFIGHTMEMBEREFFECT_SPAWNED_OFFSET UNITYSDK_OFFSET(0x9854F60)
#define RPG_CLIENT_GRIDFIGHTMEMBEREFFECT_UPDATE_OFFSET UNITYSDK_OFFSET(0x9854FA0)
#define RPG_CLIENT_GRIDFIGHTMEMBEREFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x984DD60)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightMemberEffect_TypeDefinitionIndex = 52395;

	class GridFightMemberEffect : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Transform* Field_5_0; // 0x18
		::System::UInt32 Field_5_1; // 0x20
		::Il2CppArray<::UnityEngine::ParticleSystemRenderer*>* Field_5_2; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMEMBEREFFECT__CTOR_OFFSET))(this);
		}

		::System::String* get_FollowPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMEMBEREFFECT_GET_FOLLOWPATH_OFFSET))(this);
		}

		::System::Void SetUID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMEMBEREFFECT_SETUID_OFFSET))(this, a1);
		}

		::System::Void Spawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMEMBEREFFECT_SPAWNED_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMEMBEREFFECT_UPDATE_OFFSET))(this);
		}

		::System::Void Despawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMEMBEREFFECT_DESPAWNED_OFFSET))(this);
		}

		::System::Void OnCreate(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMEMBEREFFECT_ONCREATE_OFFSET))(this, a1);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMEMBEREFFECT_ONDESTROY_OFFSET))(this);
		}

		::System::Void Method_5_CC5EA97ABCF69FED(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMEMBEREFFECT_METHOD_5_CC5EA97ABCF69FED_OFFSET))(this, a1);
		}
	};
}
