#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }

#define RPG_CLIENT_MONOPROPHIGHLIGHT_AWAKE_OFFSET UNITYSDK_OFFSET(0xD8586D0)
#define RPG_CLIENT_MONOPROPHIGHLIGHT_METHOD_5_5D3D37F2BAE9FB65_OFFSET UNITYSDK_OFFSET(0xD858B80)
#define RPG_CLIENT_MONOPROPHIGHLIGHT_METHOD_5_C495FC84AA2302E0_OFFSET UNITYSDK_OFFSET(0xD858930)
#define RPG_CLIENT_MONOPROPHIGHLIGHT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xD858B30)
#define RPG_CLIENT_MONOPROPHIGHLIGHT_ONENABLE_OFFSET UNITYSDK_OFFSET(0xD8588E0)
#define RPG_CLIENT_MONOPROPHIGHLIGHT_SETHIGHLIGHT_OFFSET UNITYSDK_OFFSET(0xD858D30)
#define RPG_CLIENT_MONOPROPHIGHLIGHT_UPDATE_OFFSET UNITYSDK_OFFSET(0xD858730)
#define RPG_CLIENT_MONOPROPHIGHLIGHT__CCTOR_OFFSET UNITYSDK_OFFSET(0xD858D90)
#define RPG_CLIENT_MONOPROPHIGHLIGHT__CTOR_OFFSET UNITYSDK_OFFSET(0xD858D80)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoPropHighLight_TypeDefinitionIndex = 68737;

	class MonoPropHighLight : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Int32* StaticGet_LKMJIANNDJF()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoPropHighLight_TypeDefinitionIndex)->GetStaticField(0x8800);
		}
		::System::Single Duration; // 0x18
		::Il2CppArray<::UnityEngine::Renderer*>* Renderers; // 0x20
		::UnityEngine::Material* HighLightMaterial; // 0x28
		::System::Single NDFEPODIHOH; // 0x30
		::System::Boolean MAOMNJFNJIK; // 0x34
		::Il2CppArray<::UnityEngine::Material*>* ABAJIOEFDFB; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPROPHIGHLIGHT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPROPHIGHLIGHT__CCTOR_OFFSET))();
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPROPHIGHLIGHT_AWAKE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPROPHIGHLIGHT_UPDATE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPROPHIGHLIGHT_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPROPHIGHLIGHT_ONDISABLE_OFFSET))(this);
		}

		::System::Void SetHighLight(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPROPHIGHLIGHT_SETHIGHLIGHT_OFFSET))(this, a1);
		}

		::System::Void Method_5_C495FC84AA2302E0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPROPHIGHLIGHT_METHOD_5_C495FC84AA2302E0_OFFSET))(this);
		}

		::System::Void Method_5_5D3D37F2BAE9FB65()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPROPHIGHLIGHT_METHOD_5_5D3D37F2BAE9FB65_OFFSET))(this);
		}
	};
}
