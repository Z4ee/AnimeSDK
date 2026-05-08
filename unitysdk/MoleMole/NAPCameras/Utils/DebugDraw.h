#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace MoleMole::NAPCameras::Utils { class DebugDraw_Class_1_F271B7271E55C989; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_NAPCAMERAS_UTILS_DEBUGDRAW_AWAKE_OFFSET UNITYSDK_OFFSET(0x15853380)
#define MOLEMOLE_NAPCAMERAS_UTILS_DEBUGDRAW_UPDATE_OFFSET UNITYSDK_OFFSET(0x15853520)
#define MOLEMOLE_NAPCAMERAS_UTILS_DEBUGDRAW__CCTOR_OFFSET UNITYSDK_OFFSET(0x158537A0)
#define MOLEMOLE_NAPCAMERAS_UTILS_DEBUGDRAW__CTOR_OFFSET UNITYSDK_OFFSET(0x15853750)

namespace MoleMole::NAPCameras::Utils
{
	inline static constexpr unsigned int DebugDraw_TypeDefinitionIndex = 69872;

	class DebugDraw : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::MoleMole::NAPCameras::Utils::DebugDraw** StaticGet_Field_5_1()
		{
			return (::MoleMole::NAPCameras::Utils::DebugDraw**)Il2CppClass::FromTypeDefinitionIndex(DebugDraw_TypeDefinitionIndex)->GetStaticField(0x495D0);
		}
		static ::System::Boolean* StaticGet_Enabled()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(DebugDraw_TypeDefinitionIndex)->GetStaticField(0x11B80);
		}
		::UnityEngine::GameObject* Field_5_2; // 0x18
		::Il2CppArray<::MoleMole::NAPCameras::Utils::DebugDraw_Class_1_F271B7271E55C989*>* Field_5_3; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPCAMERAS_UTILS_DEBUGDRAW__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_NAPCAMERAS_UTILS_DEBUGDRAW__CCTOR_OFFSET))();
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPCAMERAS_UTILS_DEBUGDRAW_AWAKE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPCAMERAS_UTILS_DEBUGDRAW_UPDATE_OFFSET))(this);
		}
	};
}
