#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }

#define RPG_CLIENT_MONOPROPHIGHLIGHT_AWAKE_OFFSET UNITYSDK_OFFSET(0x1A340D00)
#define RPG_CLIENT_MONOPROPHIGHLIGHT_METHOD_5_5D3D37F2BAE9FB65_OFFSET UNITYSDK_OFFSET(0x1A3411B0)
#define RPG_CLIENT_MONOPROPHIGHLIGHT_METHOD_5_C495FC84AA2302E0_OFFSET UNITYSDK_OFFSET(0x1A340F60)
#define RPG_CLIENT_MONOPROPHIGHLIGHT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1A341160)
#define RPG_CLIENT_MONOPROPHIGHLIGHT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1A340F10)
#define RPG_CLIENT_MONOPROPHIGHLIGHT_SETHIGHLIGHT_OFFSET UNITYSDK_OFFSET(0x1A341360)
#define RPG_CLIENT_MONOPROPHIGHLIGHT_UPDATE_OFFSET UNITYSDK_OFFSET(0x1A340D60)
#define RPG_CLIENT_MONOPROPHIGHLIGHT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A3413C0)
#define RPG_CLIENT_MONOPROPHIGHLIGHT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3413B0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoPropHighLight_TypeDefinitionIndex = 65700;

	class MonoPropHighLight : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Int32* StaticGet_Field_5_0()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoPropHighLight_TypeDefinitionIndex)->GetStaticField(0xF110);
		}
		::System::Single Duration; // 0x18
		::Il2CppArray<::UnityEngine::Renderer*>* Renderers; // 0x20
		::UnityEngine::Material* HighLightMaterial; // 0x28
		::System::Single Field_5_4; // 0x30
		::System::Boolean Field_5_5; // 0x34
		::Il2CppArray<::UnityEngine::Material*>* Field_5_6; // 0x38

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
