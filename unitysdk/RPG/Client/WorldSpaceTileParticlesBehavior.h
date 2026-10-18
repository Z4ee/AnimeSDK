#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
#include "unitysdk/UnityEngine/Bounds.h"

namespace RPG::Client { class WorldSpaceTileParticlesMonoPlugin; }
namespace UnityEngine { class ComputeBuffer; }
namespace UnityEngine { class MaterialPropertyBlock; }

#define RPG_CLIENT_WORLDSPACETILEPARTICLESBEHAVIOR_GET__OWNER_OFFSET UNITYSDK_OFFSET(0xE484D50)
#define RPG_CLIENT_WORLDSPACETILEPARTICLESBEHAVIOR_LATETICK_OFFSET UNITYSDK_OFFSET(0xE483DF0)
#define RPG_CLIENT_WORLDSPACETILEPARTICLESBEHAVIOR_METHOD_3_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0xE483BD0)
#define RPG_CLIENT_WORLDSPACETILEPARTICLESBEHAVIOR_METHOD_3_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xE484D90)
#define RPG_CLIENT_WORLDSPACETILEPARTICLESBEHAVIOR_METHOD_3_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0xE483D30)
#define RPG_CLIENT_WORLDSPACETILEPARTICLESBEHAVIOR_METHOD_3_4343F372F34C05BF_2_OFFSET UNITYSDK_OFFSET(0xE483D90)
#define RPG_CLIENT_WORLDSPACETILEPARTICLESBEHAVIOR_METHOD_3_4343F372F34C05BF_3_OFFSET UNITYSDK_OFFSET(0xE484DD0)
#define RPG_CLIENT_WORLDSPACETILEPARTICLESBEHAVIOR_METHOD_3_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xE483CD0)
#define RPG_CLIENT_WORLDSPACETILEPARTICLESBEHAVIOR_METHOD_3_90A07D9BC1B409B9_OFFSET UNITYSDK_OFFSET(0xE483B60)
#define RPG_CLIENT_WORLDSPACETILEPARTICLESBEHAVIOR_METHOD_3_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xE483AD0)
#define RPG_CLIENT_WORLDSPACETILEPARTICLESBEHAVIOR_METHOD_3_E2BCD1B56132A826_OFFSET UNITYSDK_OFFSET(0xE484E30)
#define RPG_CLIENT_WORLDSPACETILEPARTICLESBEHAVIOR__CCTOR_OFFSET UNITYSDK_OFFSET(0xE485540)
#define RPG_CLIENT_WORLDSPACETILEPARTICLESBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0xE485530)

namespace RPG::Client
{
	inline static constexpr unsigned int WorldSpaceTileParticlesBehavior_TypeDefinitionIndex = 70716;

	class WorldSpaceTileParticlesBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		static ::System::Int32* StaticGet__ParticleVelocityID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WorldSpaceTileParticlesBehavior_TypeDefinitionIndex)->GetStaticField(0x12460);
		}
		static ::System::Int32* StaticGet__RandomSeed()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WorldSpaceTileParticlesBehavior_TypeDefinitionIndex)->GetStaticField(0x12464);
		}
		static ::System::Int32* StaticGet__BoundSizeID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WorldSpaceTileParticlesBehavior_TypeDefinitionIndex)->GetStaticField(0x12468);
		}
		static ::System::Int32* StaticGet__RandomseedID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WorldSpaceTileParticlesBehavior_TypeDefinitionIndex)->GetStaticField(0x1246C);
		}
		static ::System::Int32* StaticGet__FlickerFrequency()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WorldSpaceTileParticlesBehavior_TypeDefinitionIndex)->GetStaticField(0x12470);
		}
		static ::System::Int32* StaticGet__ParticleColorID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WorldSpaceTileParticlesBehavior_TypeDefinitionIndex)->GetStaticField(0x12474);
		}
		static ::System::Int32* StaticGet__ParticleSize()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WorldSpaceTileParticlesBehavior_TypeDefinitionIndex)->GetStaticField(0x12478);
		}
		static ::System::Int32* StaticGet__BoundRotationID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WorldSpaceTileParticlesBehavior_TypeDefinitionIndex)->GetStaticField(0x1247C);
		}
		static ::System::Int32* StaticGet__BoundCenterID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WorldSpaceTileParticlesBehavior_TypeDefinitionIndex)->GetStaticField(0x12480);
		}
		static ::System::Int32* StaticGet__FogScale()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WorldSpaceTileParticlesBehavior_TypeDefinitionIndex)->GetStaticField(0x12484);
		}
		::Il2CppArray<::System::UInt32>* IndirectDrawArgs; // 0x38
		::UnityEngine::ComputeBuffer* IndirectDrawArgsBuffer; // 0x40
		::UnityEngine::Bounds _Bounds; // 0x48
		::UnityEngine::MaterialPropertyBlock* _MPB; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WORLDSPACETILEPARTICLESBEHAVIOR__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_WORLDSPACETILEPARTICLESBEHAVIOR__CCTOR_OFFSET))();
		}

		::System::Void Method_3_9681042564541CD6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WORLDSPACETILEPARTICLESBEHAVIOR_METHOD_3_9681042564541CD6_OFFSET))(this);
		}

		::System::Void Method_3_90A07D9BC1B409B9()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WORLDSPACETILEPARTICLESBEHAVIOR_METHOD_3_90A07D9BC1B409B9_OFFSET))(this);
		}

		::System::Void Method_3_33ACA6CB2ABC73F7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WORLDSPACETILEPARTICLESBEHAVIOR_METHOD_3_33ACA6CB2ABC73F7_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WORLDSPACETILEPARTICLESBEHAVIOR_METHOD_3_4343F372F34C05BF_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WORLDSPACETILEPARTICLESBEHAVIOR_METHOD_3_4343F372F34C05BF_1_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WORLDSPACETILEPARTICLESBEHAVIOR_METHOD_3_4343F372F34C05BF_2_OFFSET))(this);
		}

		::System::Void LateTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_WORLDSPACETILEPARTICLESBEHAVIOR_LATETICK_OFFSET))(this, a1);
		}

		::System::Boolean Method_3_391A84BCD9F51317()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WORLDSPACETILEPARTICLESBEHAVIOR_METHOD_3_391A84BCD9F51317_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WORLDSPACETILEPARTICLESBEHAVIOR_METHOD_3_4343F372F34C05BF_3_OFFSET))(this);
		}

		::System::Void Method_3_E2BCD1B56132A826()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WORLDSPACETILEPARTICLESBEHAVIOR_METHOD_3_E2BCD1B56132A826_OFFSET))(this);
		}

		::RPG::Client::WorldSpaceTileParticlesMonoPlugin* get__Owner()
		{
			return ((::RPG::Client::WorldSpaceTileParticlesMonoPlugin*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WORLDSPACETILEPARTICLESBEHAVIOR_GET__OWNER_OFFSET))(this);
		}
	};
}
