#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
#include "unitysdk/UnityEngine/Bounds.h"

namespace RPG::Client { class WorldSpaceTileParticlesMonoPlugin; }
namespace UnityEngine { class ComputeBuffer; }
namespace UnityEngine { class MaterialPropertyBlock; }

#define RPG_CLIENT_WORLDSPACETILEPARTICLESBEHAVIOR_GET__OWNER_OFFSET UNITYSDK_OFFSET(0xB4E67A0)
#define RPG_CLIENT_WORLDSPACETILEPARTICLESBEHAVIOR_LATETICK_OFFSET UNITYSDK_OFFSET(0xB4E58E0)
#define RPG_CLIENT_WORLDSPACETILEPARTICLESBEHAVIOR_METHOD_3_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xB4E67E0)
#define RPG_CLIENT_WORLDSPACETILEPARTICLESBEHAVIOR_METHOD_3_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0xB4E5820)
#define RPG_CLIENT_WORLDSPACETILEPARTICLESBEHAVIOR_METHOD_3_4343F372F34C05BF_2_OFFSET UNITYSDK_OFFSET(0xB4E5880)
#define RPG_CLIENT_WORLDSPACETILEPARTICLESBEHAVIOR_METHOD_3_4343F372F34C05BF_3_OFFSET UNITYSDK_OFFSET(0xB4E6820)
#define RPG_CLIENT_WORLDSPACETILEPARTICLESBEHAVIOR_METHOD_3_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xB4E57C0)
#define RPG_CLIENT_WORLDSPACETILEPARTICLESBEHAVIOR_METHOD_3_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0xB4E69C0)
#define RPG_CLIENT_WORLDSPACETILEPARTICLESBEHAVIOR_METHOD_3_5790A55946AA509D_2_OFFSET UNITYSDK_OFFSET(0xB4E6A20)
#define RPG_CLIENT_WORLDSPACETILEPARTICLESBEHAVIOR_METHOD_3_5790A55946AA509D_3_OFFSET UNITYSDK_OFFSET(0xB4E6A80)
#define RPG_CLIENT_WORLDSPACETILEPARTICLESBEHAVIOR_METHOD_3_5790A55946AA509D_4_OFFSET UNITYSDK_OFFSET(0xB4E6AE0)
#define RPG_CLIENT_WORLDSPACETILEPARTICLESBEHAVIOR_METHOD_3_5790A55946AA509D_5_OFFSET UNITYSDK_OFFSET(0xB4E6B50)
#define RPG_CLIENT_WORLDSPACETILEPARTICLESBEHAVIOR_METHOD_3_5790A55946AA509D_6_OFFSET UNITYSDK_OFFSET(0xB4E6CA0)
#define RPG_CLIENT_WORLDSPACETILEPARTICLESBEHAVIOR_METHOD_3_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xB4E6960)
#define RPG_CLIENT_WORLDSPACETILEPARTICLESBEHAVIOR_METHOD_3_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0xB4E56F0)
#define RPG_CLIENT_WORLDSPACETILEPARTICLESBEHAVIOR_METHOD_3_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xB4E4ED0)
#define RPG_CLIENT_WORLDSPACETILEPARTICLESBEHAVIOR_METHOD_3_AE828D899505A3B4_OFFSET UNITYSDK_OFFSET(0xB4E4FD0)
#define RPG_CLIENT_WORLDSPACETILEPARTICLESBEHAVIOR_METHOD_3_BFB00779E460D7A3_OFFSET UNITYSDK_OFFSET(0xB4E4F60)
#define RPG_CLIENT_WORLDSPACETILEPARTICLESBEHAVIOR_METHOD_3_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0xB4E6C30)
#define RPG_CLIENT_WORLDSPACETILEPARTICLESBEHAVIOR__CCTOR_OFFSET UNITYSDK_OFFSET(0xB4E6890)
#define RPG_CLIENT_WORLDSPACETILEPARTICLESBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0xB4E6880)
#define RPG_CLIENT_WORLDSPACETILEPARTICLESBEHAVIOR___IFIXBASEPROXY_LATETICK_OFFSET UNITYSDK_OFFSET(0xB4E6BC0)

namespace RPG::Client
{
	inline static constexpr unsigned int WorldSpaceTileParticlesBehavior_TypeDefinitionIndex = 65205;

	class WorldSpaceTileParticlesBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		static ::System::Int32* StaticGet__FogScale()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WorldSpaceTileParticlesBehavior_TypeDefinitionIndex)->GetStaticField(0xD780);
		}
		static ::System::Int32* StaticGet__ParticleColorID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WorldSpaceTileParticlesBehavior_TypeDefinitionIndex)->GetStaticField(0xD784);
		}
		static ::System::Int32* StaticGet__RandomSeed()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WorldSpaceTileParticlesBehavior_TypeDefinitionIndex)->GetStaticField(0xD788);
		}
		static ::System::Int32* StaticGet__RandomseedID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WorldSpaceTileParticlesBehavior_TypeDefinitionIndex)->GetStaticField(0xD78C);
		}
		static ::System::Int32* StaticGet__FlickerFrequency()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WorldSpaceTileParticlesBehavior_TypeDefinitionIndex)->GetStaticField(0xD790);
		}
		static ::System::Int32* StaticGet__ParticleSize()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WorldSpaceTileParticlesBehavior_TypeDefinitionIndex)->GetStaticField(0xD794);
		}
		static ::System::Int32* StaticGet__BoundSizeID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WorldSpaceTileParticlesBehavior_TypeDefinitionIndex)->GetStaticField(0xD798);
		}
		static ::System::Int32* StaticGet__BoundCenterID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WorldSpaceTileParticlesBehavior_TypeDefinitionIndex)->GetStaticField(0xD79C);
		}
		static ::System::Int32* StaticGet__ParticleVelocityID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WorldSpaceTileParticlesBehavior_TypeDefinitionIndex)->GetStaticField(0xD7A0);
		}
		static ::System::Int32* StaticGet__BoundRotationID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WorldSpaceTileParticlesBehavior_TypeDefinitionIndex)->GetStaticField(0xD7A4);
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

		::System::Void Method_3_BFB00779E460D7A3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WORLDSPACETILEPARTICLESBEHAVIOR_METHOD_3_BFB00779E460D7A3_OFFSET))(this);
		}

		::System::Void Method_3_89D1F247B9D324EE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WORLDSPACETILEPARTICLESBEHAVIOR_METHOD_3_89D1F247B9D324EE_OFFSET))(this);
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

		::System::Void Method_3_AE828D899505A3B4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WORLDSPACETILEPARTICLESBEHAVIOR_METHOD_3_AE828D899505A3B4_OFFSET))(this);
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

		::System::Void __iFixBaseProxy_LateTick(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_WORLDSPACETILEPARTICLESBEHAVIOR___IFIXBASEPROXY_LATETICK_OFFSET))(this, P0);
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
