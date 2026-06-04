#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
#include "unitysdk/UnityEngine/Bounds.h"

namespace RPG::Client { class WorldSpaceTileParticlesMonoPlugin; }
namespace UnityEngine { class ComputeBuffer; }
namespace UnityEngine { class MaterialPropertyBlock; }

#define RPG_CLIENT_WORLDSPACETILEPARTICLESBEHAVIOR_GET__OWNER_OFFSET UNITYSDK_OFFSET(0xCC4CA10)
#define RPG_CLIENT_WORLDSPACETILEPARTICLESBEHAVIOR_LATETICK_OFFSET UNITYSDK_OFFSET(0xCC4BAB0)
#define RPG_CLIENT_WORLDSPACETILEPARTICLESBEHAVIOR_METHOD_3_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0xCC4B880)
#define RPG_CLIENT_WORLDSPACETILEPARTICLESBEHAVIOR_METHOD_3_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xCC4CA50)
#define RPG_CLIENT_WORLDSPACETILEPARTICLESBEHAVIOR_METHOD_3_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0xCC4B9F0)
#define RPG_CLIENT_WORLDSPACETILEPARTICLESBEHAVIOR_METHOD_3_4343F372F34C05BF_2_OFFSET UNITYSDK_OFFSET(0xCC4BA50)
#define RPG_CLIENT_WORLDSPACETILEPARTICLESBEHAVIOR_METHOD_3_4343F372F34C05BF_3_OFFSET UNITYSDK_OFFSET(0xCC4CA90)
#define RPG_CLIENT_WORLDSPACETILEPARTICLESBEHAVIOR_METHOD_3_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xCC4B990)
#define RPG_CLIENT_WORLDSPACETILEPARTICLESBEHAVIOR_METHOD_3_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0xCC4CC30)
#define RPG_CLIENT_WORLDSPACETILEPARTICLESBEHAVIOR_METHOD_3_5790A55946AA509D_2_OFFSET UNITYSDK_OFFSET(0xCC4CC90)
#define RPG_CLIENT_WORLDSPACETILEPARTICLESBEHAVIOR_METHOD_3_5790A55946AA509D_3_OFFSET UNITYSDK_OFFSET(0xCC4CCF0)
#define RPG_CLIENT_WORLDSPACETILEPARTICLESBEHAVIOR_METHOD_3_5790A55946AA509D_4_OFFSET UNITYSDK_OFFSET(0xCC4CD50)
#define RPG_CLIENT_WORLDSPACETILEPARTICLESBEHAVIOR_METHOD_3_5790A55946AA509D_5_OFFSET UNITYSDK_OFFSET(0xCC4CDB0)
#define RPG_CLIENT_WORLDSPACETILEPARTICLESBEHAVIOR_METHOD_3_5790A55946AA509D_6_OFFSET UNITYSDK_OFFSET(0xCC4CED0)
#define RPG_CLIENT_WORLDSPACETILEPARTICLESBEHAVIOR_METHOD_3_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xCC4CBD0)
#define RPG_CLIENT_WORLDSPACETILEPARTICLESBEHAVIOR_METHOD_3_90A07D9BC1B409B9_OFFSET UNITYSDK_OFFSET(0xCC4B130)
#define RPG_CLIENT_WORLDSPACETILEPARTICLESBEHAVIOR_METHOD_3_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xCC4B0A0)
#define RPG_CLIENT_WORLDSPACETILEPARTICLESBEHAVIOR_METHOD_3_E2BCD1B56132A826_OFFSET UNITYSDK_OFFSET(0xCC4B1A0)
#define RPG_CLIENT_WORLDSPACETILEPARTICLESBEHAVIOR_METHOD_3_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0xCC4CE70)
#define RPG_CLIENT_WORLDSPACETILEPARTICLESBEHAVIOR__CCTOR_OFFSET UNITYSDK_OFFSET(0xCC4CB00)
#define RPG_CLIENT_WORLDSPACETILEPARTICLESBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0xCC4CAF0)
#define RPG_CLIENT_WORLDSPACETILEPARTICLESBEHAVIOR___IFIXBASEPROXY_LATETICK_OFFSET UNITYSDK_OFFSET(0xCC4CE10)

namespace RPG::Client
{
	inline static constexpr unsigned int WorldSpaceTileParticlesBehavior_TypeDefinitionIndex = 66132;

	class WorldSpaceTileParticlesBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		static ::System::Int32* StaticGet__BoundRotationID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WorldSpaceTileParticlesBehavior_TypeDefinitionIndex)->GetStaticField(0x135F0);
		}
		static ::System::Int32* StaticGet__ParticleVelocityID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WorldSpaceTileParticlesBehavior_TypeDefinitionIndex)->GetStaticField(0x135F4);
		}
		static ::System::Int32* StaticGet__RandomSeed()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WorldSpaceTileParticlesBehavior_TypeDefinitionIndex)->GetStaticField(0x135F8);
		}
		static ::System::Int32* StaticGet__BoundSizeID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WorldSpaceTileParticlesBehavior_TypeDefinitionIndex)->GetStaticField(0x135FC);
		}
		static ::System::Int32* StaticGet__ParticleSize()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WorldSpaceTileParticlesBehavior_TypeDefinitionIndex)->GetStaticField(0x13600);
		}
		static ::System::Int32* StaticGet__BoundCenterID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WorldSpaceTileParticlesBehavior_TypeDefinitionIndex)->GetStaticField(0x13604);
		}
		static ::System::Int32* StaticGet__RandomseedID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WorldSpaceTileParticlesBehavior_TypeDefinitionIndex)->GetStaticField(0x13608);
		}
		static ::System::Int32* StaticGet__FlickerFrequency()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WorldSpaceTileParticlesBehavior_TypeDefinitionIndex)->GetStaticField(0x1360C);
		}
		static ::System::Int32* StaticGet__ParticleColorID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WorldSpaceTileParticlesBehavior_TypeDefinitionIndex)->GetStaticField(0x13610);
		}
		static ::System::Int32* StaticGet__FogScale()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WorldSpaceTileParticlesBehavior_TypeDefinitionIndex)->GetStaticField(0x13614);
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

		::System::Void Method_3_5790A55946AA509D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WORLDSPACETILEPARTICLESBEHAVIOR_METHOD_3_5790A55946AA509D_OFFSET))(this);
		}

		::System::Void Method_3_5790A55946AA509D_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WORLDSPACETILEPARTICLESBEHAVIOR_METHOD_3_5790A55946AA509D_1_OFFSET))(this);
		}

		::System::Void Method_3_5790A55946AA509D_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WORLDSPACETILEPARTICLESBEHAVIOR_METHOD_3_5790A55946AA509D_2_OFFSET))(this);
		}

		::System::Void Method_3_5790A55946AA509D_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WORLDSPACETILEPARTICLESBEHAVIOR_METHOD_3_5790A55946AA509D_3_OFFSET))(this);
		}

		::System::Void Method_3_5790A55946AA509D_4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WORLDSPACETILEPARTICLESBEHAVIOR_METHOD_3_5790A55946AA509D_4_OFFSET))(this);
		}

		::System::Void Method_3_5790A55946AA509D_5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WORLDSPACETILEPARTICLESBEHAVIOR_METHOD_3_5790A55946AA509D_5_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_LateTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_WORLDSPACETILEPARTICLESBEHAVIOR___IFIXBASEPROXY_LATETICK_OFFSET))(this, a1);
		}

		::System::Boolean Method_3_F0E307B84478A272()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WORLDSPACETILEPARTICLESBEHAVIOR_METHOD_3_F0E307B84478A272_OFFSET))(this);
		}

		::System::Void Method_3_5790A55946AA509D_6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WORLDSPACETILEPARTICLESBEHAVIOR_METHOD_3_5790A55946AA509D_6_OFFSET))(this);
		}
	};
}
