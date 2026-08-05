#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_C125CED56C589EEE.h"
#include "unitysdk/MoleMole/MonoEffectContrllerModule/BulletModule.h"
#include "unitysdk/MoleMole/MonoEffectContrllerModule/SetupModule.h"
#include "unitysdk/MoleMole/MonoEffectContrllerModule/TargetSelectorModule.h"
#include "unitysdk/MoleMole/MonoEffectContrllerModule/TraceGroupModule.h"
#include "unitysdk/MoleMole/MonoEffectSerializedPluginBase.h"
#include "unitysdk/UnityEngine/ParticleSystem_Particle.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_280;
class Class_1_2DDAC2F6C97EB8AD;
class Class_1_D1A44554FE046F73;
class Class_3_F0C8C4E9D0100466;
namespace MoleMole::MonoEffectContrllerModule { class PreviewModule; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class ParticleSystem; }

#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_MONOEFFECTPLUGINCONTROLLER_AWAKE_OFFSET UNITYSDK_OFFSET(0x118E6E40)
#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_MONOEFFECTPLUGINCONTROLLER_FORCESTOPALLPARTICLE_OFFSET UNITYSDK_OFFSET(0x118E5E90)
#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_MONOEFFECTPLUGINCONTROLLER_GETMAINSYSTEM_OFFSET UNITYSDK_OFFSET(0x118E62B0)
#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_MONOEFFECTPLUGINCONTROLLER_GETSYSTEMLIST_OFFSET UNITYSDK_OFFSET(0x118E62F0)
#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_MONOEFFECTPLUGINCONTROLLER_GET_BOUNDCOMPONENT_OFFSET UNITYSDK_OFFSET(0x118E62A0)
#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_MONOEFFECTPLUGINCONTROLLER_GET_RANDOM_OFFSET UNITYSDK_OFFSET(0x118E6290)
#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_MONOEFFECTPLUGINCONTROLLER_INITEMITTERINERTIA_OFFSET UNITYSDK_OFFSET(0x118E6850)
#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_MONOEFFECTPLUGINCONTROLLER_INIT_OFFSET UNITYSDK_OFFSET(0x118E6330)
#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_MONOEFFECTPLUGINCONTROLLER_ISENABLED_OFFSET UNITYSDK_OFFSET(0x118E5FE0)
#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_MONOEFFECTPLUGINCONTROLLER_METHOD_7_6FF37E46CECAAD22_OFFSET UNITYSDK_OFFSET(0x118E66C0)
#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_MONOEFFECTPLUGINCONTROLLER_METHOD_7_9765352E01408D38_OFFSET UNITYSDK_OFFSET(0x118E7000)
#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_MONOEFFECTPLUGINCONTROLLER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x118E6E80)
#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_MONOEFFECTPLUGINCONTROLLER_PROCESSCONTROLLER_OFFSET UNITYSDK_OFFSET(0x118E6140)
#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_MONOEFFECTPLUGINCONTROLLER_TICKEMITTERINERTIAANDGETCUMOFFSET_OFFSET UNITYSDK_OFFSET(0x118E6A30)
#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_MONOEFFECTPLUGINCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x118E6FB0)
#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_MONOEFFECTPLUGINCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x118E6ED0)

namespace MoleMole::MonoEffectContrllerModule
{
	inline static constexpr unsigned int MonoEffectPluginController_TypeDefinitionIndex = 45303;

	class MonoEffectPluginController : public ::MoleMole::MonoEffectSerializedPluginBase
	{
	public:
		static ::UnityEngine::ParticleSystem_Particle* StaticGet_Field_7_4()
		{
			return (::UnityEngine::ParticleSystem_Particle*)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginController_TypeDefinitionIndex)->GetStaticField(0xE330);
		}
		// static const ::System::Int32 EmptyParticleRandomSeed = 0x0; // 0x0
		::Class_1_2DDAC2F6C97EB8AD* Field_7_1; // 0x58
		::UnityEngine::ParticleSystem* MainSystem; // 0x60
		::System::Collections::Generic::List_1<::UnityEngine::ParticleSystem*>* SystemList; // 0x68
		::System::Collections::Generic::List_1<::Class_1_D1A44554FE046F73*>* Field_7_6; // 0x70
		::MoleMole::MonoEffectContrllerModule::SetupModule SetupModule; // 0x78
		::MoleMole::MonoEffectContrllerModule::TargetSelectorModule TargetConfig; // 0x80
		::MoleMole::MonoEffectContrllerModule::TraceGroupModule TraceGroup; // 0xC0
		::MoleMole::MonoEffectContrllerModule::BulletModule BulletModule; // 0xD0
		::MoleMole::MonoEffectContrllerModule::PreviewModule* Preview; // 0x100
		::Class_3_F0C8C4E9D0100466* Field_7_14; // 0x108
		::System::Single Field_7_13; // 0x110
		::System::Single Field_7_12; // 0x114
		::System::Single Field_7_19; // 0x118
		::Enum_3_C125CED56C589EEE Field_7_18; // 0x11C
		::UnityEngine::Vector3 Field_7_17; // 0x120
		::UnityEngine::Vector3 Field_7_16; // 0x12C
		::Class_0_16E4307DCC419505_280* Field_7_23; // 0x138
		::UnityEngine::Vector3 Field_7_22; // 0x140

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTCONTRLLERMODULE_MONOEFFECTPLUGINCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTCONTRLLERMODULE_MONOEFFECTPLUGINCONTROLLER__CCTOR_OFFSET))();
		}

		::System::Void ForceStopAllParticle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTCONTRLLERMODULE_MONOEFFECTPLUGINCONTROLLER_FORCESTOPALLPARTICLE_OFFSET))(this);
		}

		::System::Boolean IsEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTCONTRLLERMODULE_MONOEFFECTPLUGINCONTROLLER_ISENABLED_OFFSET))(this);
		}

		::System::Void ProcessController()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTCONTRLLERMODULE_MONOEFFECTPLUGINCONTROLLER_PROCESSCONTROLLER_OFFSET))(this);
		}

		::Class_1_2DDAC2F6C97EB8AD* get_Random()
		{
			return ((::Class_1_2DDAC2F6C97EB8AD*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTCONTRLLERMODULE_MONOEFFECTPLUGINCONTROLLER_GET_RANDOM_OFFSET))(this);
		}

		::Class_3_F0C8C4E9D0100466* get_BoundComponent()
		{
			return ((::Class_3_F0C8C4E9D0100466*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTCONTRLLERMODULE_MONOEFFECTPLUGINCONTROLLER_GET_BOUNDCOMPONENT_OFFSET))(this);
		}

		::UnityEngine::ParticleSystem* GetMainSystem()
		{
			return ((::UnityEngine::ParticleSystem*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTCONTRLLERMODULE_MONOEFFECTPLUGINCONTROLLER_GETMAINSYSTEM_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::UnityEngine::ParticleSystem*>* GetSystemList()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::ParticleSystem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTCONTRLLERMODULE_MONOEFFECTPLUGINCONTROLLER_GETSYSTEMLIST_OFFSET))(this);
		}

		::System::Void Init(::System::Collections::Generic::List_1<::Class_1_D1A44554FE046F73*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_D1A44554FE046F73*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTCONTRLLERMODULE_MONOEFFECTPLUGINCONTROLLER_INIT_OFFSET))(this, a1);
		}

		::System::Void InitEmitterInertia(::System::Single a1, ::System::Single a2, ::System::Single a3, ::Enum_3_C125CED56C589EEE a4, ::UnityEngine::Vector3 a5, ::UnityEngine::Vector3 a6, ::Class_0_16E4307DCC419505_280* a7)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::Enum_3_C125CED56C589EEE, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Class_0_16E4307DCC419505_280*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTCONTRLLERMODULE_MONOEFFECTPLUGINCONTROLLER_INITEMITTERINERTIA_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::UnityEngine::Vector3 TickEmitterInertiaAndGetCumOffset(::System::Single a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTCONTRLLERMODULE_MONOEFFECTPLUGINCONTROLLER_TICKEMITTERINERTIAANDGETCUMOFFSET_OFFSET))(this, a1);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTCONTRLLERMODULE_MONOEFFECTPLUGINCONTROLLER_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTCONTRLLERMODULE_MONOEFFECTPLUGINCONTROLLER_ONDESTROY_OFFSET))(this);
		}

		::System::Void Method_7_9765352E01408D38()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTCONTRLLERMODULE_MONOEFFECTPLUGINCONTROLLER_METHOD_7_9765352E01408D38_OFFSET))(this);
		}

		::System::Void Method_7_6FF37E46CECAAD22(::System::Collections::Generic::List_1<::Class_1_D1A44554FE046F73*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_D1A44554FE046F73*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTCONTRLLERMODULE_MONOEFFECTPLUGINCONTROLLER_METHOD_7_6FF37E46CECAAD22_OFFSET))(this, a1);
		}
	};
}
