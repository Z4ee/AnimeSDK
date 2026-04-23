#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine::UI { class Image; }

#define RPG_CLIENT_MONOMATERIALSWITCH_ONENABLE_OFFSET UNITYSDK_OFFSET(0xA9E13C0)
#define RPG_CLIENT_MONOMATERIALSWITCH_RECOVERMATERIAL_OFFSET UNITYSDK_OFFSET(0xA9E14F0)
#define RPG_CLIENT_MONOMATERIALSWITCH_START_OFFSET UNITYSDK_OFFSET(0xA9E1280)
#define RPG_CLIENT_MONOMATERIALSWITCH_SWITCHMATERIAL_OFFSET UNITYSDK_OFFSET(0xA9E1410)
#define RPG_CLIENT_MONOMATERIALSWITCH__CTOR_OFFSET UNITYSDK_OFFSET(0xA9E1660)
#define RPG_CLIENT_MONOMATERIALSWITCH__SETMATERIAL_OFFSET UNITYSDK_OFFSET(0xA9E1490)
#define RPG_CLIENT_MONOMATERIALSWITCH__TRYCACHEUI_OFFSET UNITYSDK_OFFSET(0xA9E1580)
#define RPG_CLIENT_MONOMATERIALSWITCH__UPDATEMATERIAL_OFFSET UNITYSDK_OFFSET(0xA9E12D0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoMaterialSwitch_TypeDefinitionIndex = 66883;

	class MonoMaterialSwitch : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::UI::Image* _Image; // 0x18
		::UnityEngine::Material* _OriginMaterial; // 0x20
		::System::Int32 _CurrentMaterialIndex; // 0x28
		::System::Boolean _IsDirty; // 0x2C
		::System::Collections::Generic::List_1<::UnityEngine::Material*>* _Materials; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMATERIALSWITCH__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMATERIALSWITCH_START_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMATERIALSWITCH_ONENABLE_OFFSET))(this);
		}

		::System::Void SwitchMaterial(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMATERIALSWITCH_SWITCHMATERIAL_OFFSET))(this, index);
		}

		::System::Void RecoverMaterial()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMATERIALSWITCH_RECOVERMATERIAL_OFFSET))(this);
		}

		::System::Void _SetMaterial(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMATERIALSWITCH__SETMATERIAL_OFFSET))(this, index);
		}

		::System::Void _UpdateMaterial()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMATERIALSWITCH__UPDATEMATERIAL_OFFSET))(this);
		}

		::System::Void _TryCacheUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMATERIALSWITCH__TRYCACHEUI_OFFSET))(this);
		}
	};
}
