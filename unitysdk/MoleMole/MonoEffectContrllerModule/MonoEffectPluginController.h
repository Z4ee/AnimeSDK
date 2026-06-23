#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonoEffectContrllerModule/BulletModule.h"
#include "unitysdk/MoleMole/MonoEffectContrllerModule/SetupModule.h"
#include "unitysdk/MoleMole/MonoEffectContrllerModule/TargetSelectorModule.h"
#include "unitysdk/MoleMole/MonoEffectContrllerModule/TraceGroupModule.h"
#include "unitysdk/MoleMole/MonoEffectSerializedPluginBase.h"
#include "unitysdk/UnityEngine/ParticleSystem_Particle.h"

class Class_1_2DDAC2F6C97EB8AD;
class Class_1_D1A44554FE046F73;
class Class_3_DBF5783EF2C3816D;
namespace MoleMole::MonoEffectContrllerModule { class PreviewModule; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class ParticleSystem; }

#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_MONOEFFECTPLUGINCONTROLLER_AWAKE_OFFSET UNITYSDK_OFFSET(0x19152690)
#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_MONOEFFECTPLUGINCONTROLLER_FORCESTOPALLPARTICLE_OFFSET UNITYSDK_OFFSET(0x19151CD0)
#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_MONOEFFECTPLUGINCONTROLLER_GETMAINSYSTEM_OFFSET UNITYSDK_OFFSET(0x191520F0)
#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_MONOEFFECTPLUGINCONTROLLER_GETSYSTEMLIST_OFFSET UNITYSDK_OFFSET(0x19152130)
#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_MONOEFFECTPLUGINCONTROLLER_GET_BOUNDCOMPONENT_OFFSET UNITYSDK_OFFSET(0x191520E0)
#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_MONOEFFECTPLUGINCONTROLLER_GET_RANDOM_OFFSET UNITYSDK_OFFSET(0x191520D0)
#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_MONOEFFECTPLUGINCONTROLLER_INIT_OFFSET UNITYSDK_OFFSET(0x19152170)
#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_MONOEFFECTPLUGINCONTROLLER_ISENABLED_OFFSET UNITYSDK_OFFSET(0x19151E20)
#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_MONOEFFECTPLUGINCONTROLLER_METHOD_7_6FF37E46CECAAD22_OFFSET UNITYSDK_OFFSET(0x19152500)
#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_MONOEFFECTPLUGINCONTROLLER_METHOD_7_9765352E01408D38_OFFSET UNITYSDK_OFFSET(0x19152850)
#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_MONOEFFECTPLUGINCONTROLLER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x191526D0)
#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_MONOEFFECTPLUGINCONTROLLER_PROCESSCONTROLLER_OFFSET UNITYSDK_OFFSET(0x19151F80)
#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_MONOEFFECTPLUGINCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x19152800)
#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_MONOEFFECTPLUGINCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x19152720)

namespace MoleMole::MonoEffectContrllerModule
{
	inline static constexpr unsigned int MonoEffectPluginController_TypeDefinitionIndex = 53026;

	class MonoEffectPluginController : public ::MoleMole::MonoEffectSerializedPluginBase
	{
	public:
		static ::UnityEngine::ParticleSystem_Particle* StaticGet_Field_7_5()
		{
			return (::UnityEngine::ParticleSystem_Particle*)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginController_TypeDefinitionIndex)->GetStaticField(0xE380);
		}
		// static const ::System::Int32 EmptyParticleRandomSeed = 0x0; // 0x0
		::Class_1_2DDAC2F6C97EB8AD* Field_7_0; // 0x58
		::UnityEngine::ParticleSystem* MainSystem; // 0x60
		::System::Collections::Generic::List_1<::UnityEngine::ParticleSystem*>* SystemList; // 0x68
		::System::Collections::Generic::List_1<::Class_1_D1A44554FE046F73*>* Field_7_3; // 0x70
		::MoleMole::MonoEffectContrllerModule::SetupModule SetupModule; // 0x78
		::MoleMole::MonoEffectContrllerModule::TargetSelectorModule TargetConfig; // 0x80
		::MoleMole::MonoEffectContrllerModule::TraceGroupModule TraceGroup; // 0xC0
		::MoleMole::MonoEffectContrllerModule::BulletModule BulletModule; // 0xD0
		::MoleMole::MonoEffectContrllerModule::PreviewModule* Preview; // 0xE8
		::Class_3_DBF5783EF2C3816D* Field_7_11; // 0xF0

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

		::Class_3_DBF5783EF2C3816D* get_BoundComponent()
		{
			return ((::Class_3_DBF5783EF2C3816D*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTCONTRLLERMODULE_MONOEFFECTPLUGINCONTROLLER_GET_BOUNDCOMPONENT_OFFSET))(this);
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
