#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }
namespace UnityEngine::UI { class Slider; }
namespace UnityEngine::UI { class Text; }

#define MOLEMOLE_MONOFPSCONTROLLER_AWAKE_OFFSET UNITYSDK_OFFSET(0x15830A70)
#define MOLEMOLE_MONOFPSCONTROLLER_METHOD_5_627594C270CB38B4_OFFSET UNITYSDK_OFFSET(0x15831070)
#define MOLEMOLE_MONOFPSCONTROLLER_START_OFFSET UNITYSDK_OFFSET(0x15830D00)
#define MOLEMOLE_MONOFPSCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x15831020)
#define MOLEMOLE_MONOFPSCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15830FC0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoFPSController_TypeDefinitionIndex = 80786;

	class MonoFPSController : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::String** StaticGet_Field_5_4()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(MonoFPSController_TypeDefinitionIndex)->GetStaticField(0x3C4C0);
		}
		static ::System::Int32* StaticGet_Field_5_2()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoFPSController_TypeDefinitionIndex)->GetStaticField(0xECC0);
		}
		static ::System::Int32* StaticGet_Field_5_3()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoFPSController_TypeDefinitionIndex)->GetStaticField(0xECC4);
		}
		::UnityEngine::UI::Text* Field_5_0; // 0x18
		::UnityEngine::UI::Slider* Field_5_1; // 0x20
		::System::Int32 Field_5_5; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOFPSCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MONOFPSCONTROLLER__CCTOR_OFFSET))();
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOFPSCONTROLLER_AWAKE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOFPSCONTROLLER_START_OFFSET))(this);
		}

		::System::Void Method_5_627594C270CB38B4(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOFPSCONTROLLER_METHOD_5_627594C270CB38B4_OFFSET))(this, a1);
		}
	};
}
