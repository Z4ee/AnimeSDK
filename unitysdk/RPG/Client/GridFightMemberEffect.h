#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class GridFightEffectController; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class ParticleSystemRenderer; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_GRIDFIGHTMEMBEREFFECT_DESPAWNED_OFFSET UNITYSDK_OFFSET(0xBB9ACE0)
#define RPG_CLIENT_GRIDFIGHTMEMBEREFFECT_GET_FOLLOWPATH_OFFSET UNITYSDK_OFFSET(0xBB9A5D0)
#define RPG_CLIENT_GRIDFIGHTMEMBEREFFECT_INIT_OFFSET UNITYSDK_OFFSET(0xBB9A5E0)
#define RPG_CLIENT_GRIDFIGHTMEMBEREFFECT_METHOD_5_06330CD58CB602B6_OFFSET UNITYSDK_OFFSET(0xBB9A8F0)
#define RPG_CLIENT_GRIDFIGHTMEMBEREFFECT_METHOD_5_CA8EA8D597323364_OFFSET UNITYSDK_OFFSET(0xBB9ADF0)
#define RPG_CLIENT_GRIDFIGHTMEMBEREFFECT_ONCREATE_OFFSET UNITYSDK_OFFSET(0xBB92E00)
#define RPG_CLIENT_GRIDFIGHTMEMBEREFFECT_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xBB9AD30)
#define RPG_CLIENT_GRIDFIGHTMEMBEREFFECT_SETUID_OFFSET UNITYSDK_OFFSET(0xBB9A630)
#define RPG_CLIENT_GRIDFIGHTMEMBEREFFECT_SPAWNED_OFFSET UNITYSDK_OFFSET(0xBB9AB70)
#define RPG_CLIENT_GRIDFIGHTMEMBEREFFECT_UPDATE_OFFSET UNITYSDK_OFFSET(0xBB9ABB0)
#define RPG_CLIENT_GRIDFIGHTMEMBEREFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0xBB93040)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightMemberEffect_TypeDefinitionIndex = 60286;

	class GridFightMemberEffect : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Transform* Field_5_0; // 0x18
		::System::UInt32 Field_5_1; // 0x20
		::Il2CppArray<::UnityEngine::ParticleSystemRenderer*>* Field_5_2; // 0x28
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

		::System::Void Method_5_CA8EA8D597323364(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMEMBEREFFECT_METHOD_5_CA8EA8D597323364_OFFSET))(this, a1);
		}
	};
}
