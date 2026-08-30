#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class GridFightEffectController; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class ParticleSystemRenderer; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_GRIDFIGHTMEMBEREFFECT_DESPAWNED_OFFSET UNITYSDK_OFFSET(0xD1FE2D0)
#define RPG_CLIENT_GRIDFIGHTMEMBEREFFECT_GET_FOLLOWPATH_OFFSET UNITYSDK_OFFSET(0xD1FDA40)
#define RPG_CLIENT_GRIDFIGHTMEMBEREFFECT_INIT_OFFSET UNITYSDK_OFFSET(0xD1FDA90)
#define RPG_CLIENT_GRIDFIGHTMEMBEREFFECT_METHOD_5_06330CD58CB602B6_OFFSET UNITYSDK_OFFSET(0xD1FDEC0)
#define RPG_CLIENT_GRIDFIGHTMEMBEREFFECT_METHOD_5_B82E31BEDDA27F97_OFFSET UNITYSDK_OFFSET(0xD1FE3E0)
#define RPG_CLIENT_GRIDFIGHTMEMBEREFFECT_ONCREATE_OFFSET UNITYSDK_OFFSET(0xD1F4820)
#define RPG_CLIENT_GRIDFIGHTMEMBEREFFECT_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xD1FE320)
#define RPG_CLIENT_GRIDFIGHTMEMBEREFFECT_SETUID_OFFSET UNITYSDK_OFFSET(0xD1FDAE0)
#define RPG_CLIENT_GRIDFIGHTMEMBEREFFECT_SPAWNED_OFFSET UNITYSDK_OFFSET(0xD1FE140)
#define RPG_CLIENT_GRIDFIGHTMEMBEREFFECT_UPDATE_OFFSET UNITYSDK_OFFSET(0xD1FE180)
#define RPG_CLIENT_GRIDFIGHTMEMBEREFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0xD1F4A60)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightMemberEffect_TypeDefinitionIndex = 64560;

	class GridFightMemberEffect : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Transform* EJCIMGEICHG; // 0x18
		::System::UInt32 MPIMEEAIELI; // 0x20
		::Il2CppArray<::UnityEngine::ParticleSystemRenderer*>* HNIPMNNODNP; // 0x28
		::RPG::Client::GridFightEffectController* _EffectController; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMEMBEREFFECT__CTOR_OFFSET))(this);
		}

		::System::String* get_FollowPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMEMBEREFFECT_GET_FOLLOWPATH_OFFSET))(this);
		}

		::System::Void Init(::RPG::Client::GridFightEffectController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightEffectController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMEMBEREFFECT_INIT_OFFSET))(this, a1);
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

		::System::Void Method_5_06330CD58CB602B6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMEMBEREFFECT_METHOD_5_06330CD58CB602B6_OFFSET))(this);
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

		::System::Void Method_5_B82E31BEDDA27F97(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMEMBEREFFECT_METHOD_5_B82E31BEDDA27F97_OFFSET))(this, a1);
		}
	};
}
