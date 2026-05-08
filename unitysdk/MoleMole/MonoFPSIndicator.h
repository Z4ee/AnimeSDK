#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }
namespace UnityEngine::UI { class Text; }

#define MOLEMOLE_MONOFPSINDICATOR_METHOD_5_2B152328DABB4A03_OFFSET UNITYSDK_OFFSET(0x10E2F640)
#define MOLEMOLE_MONOFPSINDICATOR_METHOD_5_F7663B0135EC316E_OFFSET UNITYSDK_OFFSET(0x10E2F5C0)
#define MOLEMOLE_MONOFPSINDICATOR_START_OFFSET UNITYSDK_OFFSET(0x10E2D670)
#define MOLEMOLE_MONOFPSINDICATOR_UPDATE_OFFSET UNITYSDK_OFFSET(0x10E2E5E0)
#define MOLEMOLE_MONOFPSINDICATOR__CCTOR_OFFSET UNITYSDK_OFFSET(0x10E2F5B0)
#define MOLEMOLE_MONOFPSINDICATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x10E2F520)

namespace MoleMole
{
	inline static constexpr unsigned int MonoFPSIndicator_TypeDefinitionIndex = 73206;

	class MonoFPSIndicator : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Boolean* StaticGet_dumpAssetMemory()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MonoFPSIndicator_TypeDefinitionIndex)->GetStaticField(0xDE00);
		}
		static ::System::Boolean* StaticGet_CollectAndroidPssMemory()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MonoFPSIndicator_TypeDefinitionIndex)->GetStaticField(0xDE01);
		}
		::System::Single updateInterval; // 0x18
		::System::Single fps; // 0x1C
		::System::Single Field_5_3; // 0x20
		::System::Int32 Field_5_4; // 0x24
		::System::Single Field_5_5; // 0x28
		::System::Int32 Field_5_6; // 0x2C
		::UnityEngine::UI::Text* Field_5_8; // 0x30
		::UnityEngine::UI::Text* Field_5_9; // 0x38
		::UnityEngine::UI::Text* Field_5_10; // 0x40
		::UnityEngine::UI::Text* Field_5_11; // 0x48
		::UnityEngine::UI::Text* Field_5_12; // 0x50
		::UnityEngine::UI::Text* Field_5_13; // 0x58
		::UnityEngine::UI::Text* Field_5_14; // 0x60
		::UnityEngine::UI::Text* Field_5_15; // 0x68
		::UnityEngine::UI::Text* Field_5_16; // 0x70
		::UnityEngine::UI::Text* Field_5_17; // 0x78
		::UnityEngine::UI::Text* Field_5_18; // 0x80
		::UnityEngine::UI::Text* Field_5_19; // 0x88
		::UnityEngine::UI::Text* Field_5_20; // 0x90
		::Il2CppArray<::System::UInt64>* Field_5_21; // 0x98

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOFPSINDICATOR__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MONOFPSINDICATOR__CCTOR_OFFSET))();
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOFPSINDICATOR_START_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOFPSINDICATOR_UPDATE_OFFSET))(this);
		}

		static ::System::String* Method_5_F7663B0135EC316E(::System::UInt64 a1)
		{
			return ((::System::String*(*)(::System::UInt64))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOFPSINDICATOR_METHOD_5_F7663B0135EC316E_OFFSET))(a1);
		}

		static ::System::String* Method_5_2B152328DABB4A03(::System::Int64 a1)
		{
			return ((::System::String*(*)(::System::Int64))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOFPSINDICATOR_METHOD_5_2B152328DABB4A03_OFFSET))(a1);
		}
	};
}
