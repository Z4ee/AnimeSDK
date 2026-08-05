#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }
namespace UnityEngine::UI { class Slider; }
namespace UnityEngine::UI { class Text; }

#define MOLEMOLE_MONOFPSCONTROLLER_AWAKE_OFFSET UNITYSDK_OFFSET(0x129B34D0)
#define MOLEMOLE_MONOFPSCONTROLLER_METHOD_5_627594C270CB38B4_OFFSET UNITYSDK_OFFSET(0x129B3AD0)
#define MOLEMOLE_MONOFPSCONTROLLER_START_OFFSET UNITYSDK_OFFSET(0x129B3760)
#define MOLEMOLE_MONOFPSCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x129B3A80)
#define MOLEMOLE_MONOFPSCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x129B3A20)

namespace MoleMole
{
	inline static constexpr unsigned int MonoFPSController_TypeDefinitionIndex = 69485;

	class MonoFPSController : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::String** StaticGet_Field_5_4()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(MonoFPSController_TypeDefinitionIndex)->GetStaticField(0x50F40);
		}
		static ::System::Int32* StaticGet_Field_5_5()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoFPSController_TypeDefinitionIndex)->GetStaticField(0x12860);
		}
		static ::System::Int32* StaticGet_Field_5_6()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoFPSController_TypeDefinitionIndex)->GetStaticField(0x12864);
		}
		::UnityEngine::UI::Text* Field_5_0; // 0x18
		::UnityEngine::UI::Slider* Field_5_7; // 0x20
		::System::Int32 Field_5_11; // 0x28

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
