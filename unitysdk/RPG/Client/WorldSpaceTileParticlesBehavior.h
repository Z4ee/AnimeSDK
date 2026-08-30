#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
#include "unitysdk/UnityEngine/Bounds.h"

namespace RPG::Client { class WorldSpaceTileParticlesMonoPlugin; }
namespace UnityEngine { class ComputeBuffer; }
namespace UnityEngine { class MaterialPropertyBlock; }

#define RPG_CLIENT_WORLDSPACETILEPARTICLESBEHAVIOR_GET__OWNER_OFFSET UNITYSDK_OFFSET(0xE43DB10)
#define RPG_CLIENT_WORLDSPACETILEPARTICLESBEHAVIOR_LATETICK_OFFSET UNITYSDK_OFFSET(0xE43C900)
#define RPG_CLIENT_WORLDSPACETILEPARTICLESBEHAVIOR_METHOD_3_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0xE43C6C0)
#define RPG_CLIENT_WORLDSPACETILEPARTICLESBEHAVIOR_METHOD_3_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xE43DB90)
#define RPG_CLIENT_WORLDSPACETILEPARTICLESBEHAVIOR_METHOD_3_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0xE43C840)
#define RPG_CLIENT_WORLDSPACETILEPARTICLESBEHAVIOR_METHOD_3_4343F372F34C05BF_2_OFFSET UNITYSDK_OFFSET(0xE43C8A0)
#define RPG_CLIENT_WORLDSPACETILEPARTICLESBEHAVIOR_METHOD_3_4343F372F34C05BF_3_OFFSET UNITYSDK_OFFSET(0xE43DBD0)
#define RPG_CLIENT_WORLDSPACETILEPARTICLESBEHAVIOR_METHOD_3_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xE43C7E0)
#define RPG_CLIENT_WORLDSPACETILEPARTICLESBEHAVIOR_METHOD_3_90A07D9BC1B409B9_OFFSET UNITYSDK_OFFSET(0xE43BDB0)
#define RPG_CLIENT_WORLDSPACETILEPARTICLESBEHAVIOR_METHOD_3_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xE43BD20)
#define RPG_CLIENT_WORLDSPACETILEPARTICLESBEHAVIOR_METHOD_3_C38AA259F0B46320_OFFSET UNITYSDK_OFFSET(0xE43BE20)
#define RPG_CLIENT_WORLDSPACETILEPARTICLESBEHAVIOR__CCTOR_OFFSET UNITYSDK_OFFSET(0xE43DC40)
#define RPG_CLIENT_WORLDSPACETILEPARTICLESBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0xE43DC30)

namespace RPG::Client
{
	inline static constexpr unsigned int WorldSpaceTileParticlesBehavior_TypeDefinitionIndex = 70680;

	class WorldSpaceTileParticlesBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		static ::System::Int32* StaticGet__RandomSeed()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WorldSpaceTileParticlesBehavior_TypeDefinitionIndex)->GetStaticField(0x14C20);
		}
		static ::System::Int32* StaticGet__ParticleSize()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WorldSpaceTileParticlesBehavior_TypeDefinitionIndex)->GetStaticField(0x14C24);
		}
		static ::System::Int32* StaticGet__FogScale()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WorldSpaceTileParticlesBehavior_TypeDefinitionIndex)->GetStaticField(0x14C28);
		}
		static ::System::Int32* StaticGet__FlickerFrequency()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WorldSpaceTileParticlesBehavior_TypeDefinitionIndex)->GetStaticField(0x14C2C);
		}
		static ::System::Int32* StaticGet__RandomseedID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WorldSpaceTileParticlesBehavior_TypeDefinitionIndex)->GetStaticField(0x14C30);
		}
		static ::System::Int32* StaticGet__BoundSizeID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WorldSpaceTileParticlesBehavior_TypeDefinitionIndex)->GetStaticField(0x14C34);
		}
		static ::System::Int32* StaticGet__ParticleVelocityID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WorldSpaceTileParticlesBehavior_TypeDefinitionIndex)->GetStaticField(0x14C38);
		}
		static ::System::Int32* StaticGet__ParticleColorID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WorldSpaceTileParticlesBehavior_TypeDefinitionIndex)->GetStaticField(0x14C3C);
		}
		static ::System::Int32* StaticGet__BoundCenterID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WorldSpaceTileParticlesBehavior_TypeDefinitionIndex)->GetStaticField(0x14C40);
		}
		static ::System::Int32* StaticGet__BoundRotationID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WorldSpaceTileParticlesBehavior_TypeDefinitionIndex)->GetStaticField(0x14C44);
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

		::System::Void Method_3_151E25A63D14DDB0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WORLDSPACETILEPARTICLESBEHAVIOR_METHOD_3_151E25A63D14DDB0_OFFSET))(this);
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

		::System::Void Method_3_C38AA259F0B46320()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WORLDSPACETILEPARTICLESBEHAVIOR_METHOD_3_C38AA259F0B46320_OFFSET))(this);
		}

		::RPG::Client::WorldSpaceTileParticlesMonoPlugin* get__Owner()
		{
			return ((::RPG::Client::WorldSpaceTileParticlesMonoPlugin*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WORLDSPACETILEPARTICLESBEHAVIOR_GET__OWNER_OFFSET))(this);
		}
	};
}
