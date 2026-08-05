#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class MonoStageAreaBVSManager_Class_1_4263C06BC7ECF6EB; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_MONOSTAGEAREABVSMANAGER_AWAKE_OFFSET UNITYSDK_OFFSET(0x18090750)
#define MOLEMOLE_MONOSTAGEAREABVSMANAGER_CURRENTBOUNDVALID_OFFSET UNITYSDK_OFFSET(0x18090D10)
#define MOLEMOLE_MONOSTAGEAREABVSMANAGER_ISINCURRENTBOUND_OFFSET UNITYSDK_OFFSET(0x18090D50)
#define MOLEMOLE_MONOSTAGEAREABVSMANAGER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x18090DD0)
#define MOLEMOLE_MONOSTAGEAREABVSMANAGER_START_OFFSET UNITYSDK_OFFSET(0x180907A0)
#define MOLEMOLE_MONOSTAGEAREABVSMANAGER_UPDATECURRENTBOUND_OFFSET UNITYSDK_OFFSET(0x18090B30)
#define MOLEMOLE_MONOSTAGEAREABVSMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x18090E20)

namespace MoleMole
{
	inline static constexpr unsigned int MonoStageAreaBVSManager_TypeDefinitionIndex = 47559;

	class MonoStageAreaBVSManager : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::MoleMole::MonoStageAreaBVSManager** StaticGet_Current()
		{
			return (::MoleMole::MonoStageAreaBVSManager**)Il2CppClass::FromTypeDefinitionIndex(MonoStageAreaBVSManager_TypeDefinitionIndex)->GetStaticField(0x4A190);
		}
		::System::Int32 CulledCount; // 0x18
		::System::Int32 VisibleCount; // 0x1C
		::System::Boolean Field_5_5; // 0x20
		::MoleMole::MonoStageAreaBVSManager_Class_1_4263C06BC7ECF6EB* Field_5_4; // 0x28
		::System::String* Field_5_11; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::MonoStageAreaBVSManager_Class_1_4263C06BC7ECF6EB*>* Field_5_10; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGEAREABVSMANAGER__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGEAREABVSMANAGER_AWAKE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGEAREABVSMANAGER_START_OFFSET))(this);
		}

		::System::Void UpdateCurrentBound(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGEAREABVSMANAGER_UPDATECURRENTBOUND_OFFSET))(this, a1);
		}

		::System::Boolean CurrentBoundValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGEAREABVSMANAGER_CURRENTBOUNDVALID_OFFSET))(this);
		}

		::System::Boolean IsInCurrentBound(::UnityEngine::Vector3 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGEAREABVSMANAGER_ISINCURRENTBOUND_OFFSET))(this, a1);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGEAREABVSMANAGER_ONDESTROY_OFFSET))(this);
		}
	};
}
