#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"

namespace RPG::Client { class Effect_CollapsingParticleMonoPlugin; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Mesh; }

#define RPG_CLIENT_EFFECT_COLLAPSINGPARTICLEBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET UNITYSDK_OFFSET(0xA1C1DD0)
#define RPG_CLIENT_EFFECT_COLLAPSINGPARTICLEBEHAVIOR_LATETICK_OFFSET UNITYSDK_OFFSET(0xA1C3470)
#define RPG_CLIENT_EFFECT_COLLAPSINGPARTICLEBEHAVIOR_METHOD_3_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xA1C1A30)
#define RPG_CLIENT_EFFECT_COLLAPSINGPARTICLEBEHAVIOR_METHOD_3_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0xA1C36A0)
#define RPG_CLIENT_EFFECT_COLLAPSINGPARTICLEBEHAVIOR_METHOD_3_5790A55946AA509D_2_OFFSET UNITYSDK_OFFSET(0xA1C3700)
#define RPG_CLIENT_EFFECT_COLLAPSINGPARTICLEBEHAVIOR_METHOD_3_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xA1C3640)
#define RPG_CLIENT_EFFECT_COLLAPSINGPARTICLEBEHAVIOR_METHOD_3_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0xA1C1960)
#define RPG_CLIENT_EFFECT_COLLAPSINGPARTICLEBEHAVIOR_METHOD_3_D109CE569415FA03_OFFSET UNITYSDK_OFFSET(0xA1C1A90)
#define RPG_CLIENT_EFFECT_COLLAPSINGPARTICLEBEHAVIOR_TICK_OFFSET UNITYSDK_OFFSET(0xA1C1E40)
#define RPG_CLIENT_EFFECT_COLLAPSINGPARTICLEBEHAVIOR__CCTOR_OFFSET UNITYSDK_OFFSET(0xA1C35E0)
#define RPG_CLIENT_EFFECT_COLLAPSINGPARTICLEBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0xA1C35D0)
#define RPG_CLIENT_EFFECT_COLLAPSINGPARTICLEBEHAVIOR___IFIXBASEPROXY_LATETICK_OFFSET UNITYSDK_OFFSET(0xA1C37D0)
#define RPG_CLIENT_EFFECT_COLLAPSINGPARTICLEBEHAVIOR___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0xA1C3760)

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_CollapsingParticleBehavior_TypeDefinitionIndex = 64934;

	class Effect_CollapsingParticleBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		static ::System::Collections::Generic::List_1<::RPG::Client::Effect_CollapsingParticleMonoPlugin*>** StaticGet_particleList()
		{
			return (::System::Collections::Generic::List_1<::RPG::Client::Effect_CollapsingParticleMonoPlugin*>**)Il2CppClass::FromTypeDefinitionIndex(Effect_CollapsingParticleBehavior_TypeDefinitionIndex)->GetStaticField(0x681C0);
		}
		::UnityEngine::Mesh* m_SrcMesh; // 0x38
		::System::Boolean isPrototype; // 0x40
		::System::Boolean hasRegisterd; // 0x41

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_COLLAPSINGPARTICLEBEHAVIOR__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_COLLAPSINGPARTICLEBEHAVIOR__CCTOR_OFFSET))();
		}

		::System::Void Method_3_B1936CE4DA97AA45()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_COLLAPSINGPARTICLEBEHAVIOR_METHOD_3_B1936CE4DA97AA45_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_COLLAPSINGPARTICLEBEHAVIOR_METHOD_3_4343F372F34C05BF_OFFSET))(this);
		}

		::System::Void Method_3_D109CE569415FA03()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_COLLAPSINGPARTICLEBEHAVIOR_METHOD_3_D109CE569415FA03_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_COLLAPSINGPARTICLEBEHAVIOR_TICK_OFFSET))(this, a1);
		}

		::System::Void LateTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_COLLAPSINGPARTICLEBEHAVIOR_LATETICK_OFFSET))(this, a1);
		}

		::RPG::Client::Effect_CollapsingParticleMonoPlugin* get__OwnerMonoPlugin()
		{
			return ((::RPG::Client::Effect_CollapsingParticleMonoPlugin*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_COLLAPSINGPARTICLEBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET))(this);
		}

		::System::Void Method_3_5790A55946AA509D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_COLLAPSINGPARTICLEBEHAVIOR_METHOD_3_5790A55946AA509D_OFFSET))(this);
		}

		::System::Void Method_3_5790A55946AA509D_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_COLLAPSINGPARTICLEBEHAVIOR_METHOD_3_5790A55946AA509D_1_OFFSET))(this);
		}

		::System::Void Method_3_5790A55946AA509D_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_COLLAPSINGPARTICLEBEHAVIOR_METHOD_3_5790A55946AA509D_2_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Tick(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_COLLAPSINGPARTICLEBEHAVIOR___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_LateTick(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_COLLAPSINGPARTICLEBEHAVIOR___IFIXBASEPROXY_LATETICK_OFFSET))(this, P0);
		}
	};
}
