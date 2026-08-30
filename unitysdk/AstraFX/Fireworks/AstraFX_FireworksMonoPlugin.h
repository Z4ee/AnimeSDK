#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"
#include "unitysdk/Struct_2_FD37BB0C9F20D20F.h"
#include "unitysdk/Struct_2_FD37BB0C9F20D20F_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace AstraFX::Fireworks { class AstraFX_FireworksBehavior; }
namespace AstraFX::Fireworks { class AstraFX_FireworksEmitter; }
namespace AstraFX::Fireworks { class FireworkType; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Texture2D; }

#define ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSMONOPLUGIN_ADD_ONFIREWORKEXPLODED_OFFSET UNITYSDK_OFFSET(0x17665600)
#define ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSMONOPLUGIN_ADD_ONFIREWORKLAUNCHED_OFFSET UNITYSDK_OFFSET(0x17665500)
#define ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSMONOPLUGIN_AFTERCREATERESOURCES_OFFSET UNITYSDK_OFFSET(0x17665A50)
#define ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSMONOPLUGIN_AFTEREXECUTEPASSES_OFFSET UNITYSDK_OFFSET(0x17665AF0)
#define ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSMONOPLUGIN_BEFOREEXECUTEPASSES_OFFSET UNITYSDK_OFFSET(0x17665A90)
#define ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSMONOPLUGIN_CACHEEMITTERS_OFFSET UNITYSDK_OFFSET(0x176608D0)
#define ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSMONOPLUGIN_GETEMITTERS_OFFSET UNITYSDK_OFFSET(0x176637A0)
#define ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSMONOPLUGIN_INVALIDATEEMITTERCACHE_OFFSET UNITYSDK_OFFSET(0x176654F0)
#define ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSMONOPLUGIN_LAUNCHATWORLDPOSITION_OFFSET UNITYSDK_OFFSET(0x17665960)
#define ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSMONOPLUGIN_LAUNCH_1_OFFSET UNITYSDK_OFFSET(0x17665800)
#define ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSMONOPLUGIN_LAUNCH_OFFSET UNITYSDK_OFFSET(0x17665700)
#define ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSMONOPLUGIN_METHOD_7_5D9CF83CFC617CF9_1_OFFSET UNITYSDK_OFFSET(0x17663DB0)
#define ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSMONOPLUGIN_METHOD_7_5D9CF83CFC617CF9_OFFSET UNITYSDK_OFFSET(0x17663750)
#define ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSMONOPLUGIN_REMOVE_ONFIREWORKEXPLODED_OFFSET UNITYSDK_OFFSET(0x17665680)
#define ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSMONOPLUGIN_REMOVE_ONFIREWORKLAUNCHED_OFFSET UNITYSDK_OFFSET(0x17665580)
#define ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSMONOPLUGIN_RESETSIMULATIONSTATE_OFFSET UNITYSDK_OFFSET(0x17665A00)
#define ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSMONOPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0x17665B30)

namespace AstraFX::Fireworks
{
	inline static constexpr unsigned int AstraFX_FireworksMonoPlugin_TypeDefinitionIndex = 49458;

	class AstraFX_FireworksMonoPlugin : public ::RPG::Client::TAMonoPlugin_1<::AstraFX::Fireworks::AstraFX_FireworksBehavior*>
	{
	public:
		::System::Boolean autoLaunch; // 0x30
		::Il2CppArray<::AstraFX::Fireworks::AstraFX_FireworksEmitter*>* IHKDGPFDLAA; // 0x38
		::System::Boolean OPHMEBKCICM; // 0x40
		::System::Collections::Generic::List_1<::AstraFX::Fireworks::FireworkType*>* fireworkTypes; // 0x48
		::System::Single gravity; // 0x50
		::System::Single airResistance; // 0x54
		::System::Single ribbonUpdateInterval; // 0x58
		::System::Single maxRocketLifetime; // 0x5C
		::UnityEngine::Material* rocketTrailMaterial; // 0x60
		::System::Single rocketTrailWidth; // 0x68
		::System::Single rocketTrailTime; // 0x6C
		::System::Int32 maxRocketTrails; // 0x70
		::UnityEngine::Texture2D* bakedGradientTexture; // 0x78
		::System::Action_1<::Struct_2_FD37BB0C9F20D20F>* OnFireworkLaunched; // 0x80
		::System::Action_1<::Struct_2_FD37BB0C9F20D20F_1>* OnFireworkExploded; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSMONOPLUGIN__CTOR_OFFSET))(this);
		}

		::Il2CppArray<::AstraFX::Fireworks::AstraFX_FireworksEmitter*>* GetEmitters()
		{
			return ((::Il2CppArray<::AstraFX::Fireworks::AstraFX_FireworksEmitter*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSMONOPLUGIN_GETEMITTERS_OFFSET))(this);
		}

		::System::Void CacheEmitters()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSMONOPLUGIN_CACHEEMITTERS_OFFSET))(this);
		}

		::System::Void InvalidateEmitterCache()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSMONOPLUGIN_INVALIDATEEMITTERCACHE_OFFSET))(this);
		}

		::System::Void add_OnFireworkLaunched(::System::Action_1<::Struct_2_FD37BB0C9F20D20F>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::Struct_2_FD37BB0C9F20D20F>*))((::PBYTE)hIl2Cpp + ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSMONOPLUGIN_ADD_ONFIREWORKLAUNCHED_OFFSET))(this, a1);
		}

		::System::Void remove_OnFireworkLaunched(::System::Action_1<::Struct_2_FD37BB0C9F20D20F>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::Struct_2_FD37BB0C9F20D20F>*))((::PBYTE)hIl2Cpp + ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSMONOPLUGIN_REMOVE_ONFIREWORKLAUNCHED_OFFSET))(this, a1);
		}

		::System::Void add_OnFireworkExploded(::System::Action_1<::Struct_2_FD37BB0C9F20D20F_1>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::Struct_2_FD37BB0C9F20D20F_1>*))((::PBYTE)hIl2Cpp + ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSMONOPLUGIN_ADD_ONFIREWORKEXPLODED_OFFSET))(this, a1);
		}

		::System::Void remove_OnFireworkExploded(::System::Action_1<::Struct_2_FD37BB0C9F20D20F_1>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::Struct_2_FD37BB0C9F20D20F_1>*))((::PBYTE)hIl2Cpp + ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSMONOPLUGIN_REMOVE_ONFIREWORKEXPLODED_OFFSET))(this, a1);
		}

		::System::Void Launch(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Int32))((::PBYTE)hIl2Cpp + ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSMONOPLUGIN_LAUNCH_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Launch_1(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::String*))((::PBYTE)hIl2Cpp + ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSMONOPLUGIN_LAUNCH_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void LaunchAtWorldPosition(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Int32))((::PBYTE)hIl2Cpp + ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSMONOPLUGIN_LAUNCHATWORLDPOSITION_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_7_5D9CF83CFC617CF9(::Struct_2_FD37BB0C9F20D20F a1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_FD37BB0C9F20D20F))((::PBYTE)hIl2Cpp + ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSMONOPLUGIN_METHOD_7_5D9CF83CFC617CF9_OFFSET))(this, a1);
		}

		::System::Void Method_7_5D9CF83CFC617CF9_1(::Struct_2_FD37BB0C9F20D20F_1 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_FD37BB0C9F20D20F_1))((::PBYTE)hIl2Cpp + ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSMONOPLUGIN_METHOD_7_5D9CF83CFC617CF9_1_OFFSET))(this, a1);
		}

		::System::Void ResetSimulationState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSMONOPLUGIN_RESETSIMULATIONSTATE_OFFSET))(this);
		}

		::System::Void AfterCreateResources()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSMONOPLUGIN_AFTERCREATERESOURCES_OFFSET))(this);
		}

		::System::Void BeforeExecutePasses()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSMONOPLUGIN_BEFOREEXECUTEPASSES_OFFSET))(this);
		}

		::System::Void AfterExecutePasses()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSMONOPLUGIN_AFTEREXECUTEPASSES_OFFSET))(this);
		}
	};
}
