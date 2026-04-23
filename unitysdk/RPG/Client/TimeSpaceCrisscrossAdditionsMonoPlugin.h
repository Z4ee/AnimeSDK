#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"
#include "unitysdk/RPG/Client/TimeSpaceCrisscrossGroupMonoPlugin_TimeSpaceCrisscrossState.h"

namespace RPG::Client { class TSCMaterialReferenceCache; }
namespace RPG::Client { class TimeSpaceCrisscrossAdditionsBehavior; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }

#define RPG_CLIENT_TIMESPACECRISSCROSSADDITIONSMONOPLUGIN_DESPAWNED_OFFSET UNITYSDK_OFFSET(0xB2FE360)
#define RPG_CLIENT_TIMESPACECRISSCROSSADDITIONSMONOPLUGIN_HIGHLIGHTALL_OFFSET UNITYSDK_OFFSET(0xB2FE3B0)
#define RPG_CLIENT_TIMESPACECRISSCROSSADDITIONSMONOPLUGIN_SPAWNED_OFFSET UNITYSDK_OFFSET(0xB2FE310)
#define RPG_CLIENT_TIMESPACECRISSCROSSADDITIONSMONOPLUGIN__CCTOR_OFFSET UNITYSDK_OFFSET(0xB2FE420)
#define RPG_CLIENT_TIMESPACECRISSCROSSADDITIONSMONOPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0xB2FE400)

namespace RPG::Client
{
	inline static constexpr unsigned int TimeSpaceCrisscrossAdditionsMonoPlugin_TypeDefinitionIndex = 64717;

	class TimeSpaceCrisscrossAdditionsMonoPlugin : public ::RPG::Client::TAMonoPlugin_1<::RPG::Client::TimeSpaceCrisscrossAdditionsBehavior*>
	{
	public:
		static ::System::Int32* StaticGet_Field_7_12()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TimeSpaceCrisscrossAdditionsMonoPlugin_TypeDefinitionIndex)->GetStaticField(0xD670);
		}
		static ::System::Int32* StaticGet_Field_7_13()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TimeSpaceCrisscrossAdditionsMonoPlugin_TypeDefinitionIndex)->GetStaticField(0xD674);
		}
		::UnityEngine::Material* HighLightMat; // 0x30
		::System::Single HighLightDuaringTime; // 0x38
		::UnityEngine::AnimationCurve* Curve; // 0x40
		::System::Boolean EnableTSCWater; // 0x48
		::System::Single TSCWaterHeight; // 0x4C
		::System::Single TSCWaterFillerEdgeWidthScale; // 0x50
		::UnityEngine::Material* TSCWaterFillMat; // 0x58
		::System::Boolean UseCustomConeMesh; // 0x60
		::UnityEngine::Mesh* CustomConeMesh; // 0x68
		::UnityEngine::Material* Field_7_9; // 0x70
		::UnityEngine::Material* Field_7_10; // 0x78
		::RPG::Client::TSCMaterialReferenceCache* TSCMatRefCache; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSADDITIONSMONOPLUGIN__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSADDITIONSMONOPLUGIN__CCTOR_OFFSET))();
		}

		::System::Void Spawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSADDITIONSMONOPLUGIN_SPAWNED_OFFSET))(this);
		}

		::System::Void Despawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSADDITIONSMONOPLUGIN_DESPAWNED_OFFSET))(this);
		}

		::System::Void HighLightAll(::RPG::Client::TimeSpaceCrisscrossGroupMonoPlugin_TimeSpaceCrisscrossState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TimeSpaceCrisscrossGroupMonoPlugin_TimeSpaceCrisscrossState))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSADDITIONSMONOPLUGIN_HIGHLIGHTALL_OFFSET))(this, a1);
		}
	};
}
