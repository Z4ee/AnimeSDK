#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }
namespace UnityEngine::UI { class Text; }

#define MOLEMOLE_MONOPHYSFPSINDICATOR_METHOD_5_2B152328DABB4A03_OFFSET UNITYSDK_OFFSET(0x13863810)
#define MOLEMOLE_MONOPHYSFPSINDICATOR_METHOD_5_91E51879C0028BD4_OFFSET UNITYSDK_OFFSET(0x138638D0)
#define MOLEMOLE_MONOPHYSFPSINDICATOR_START_OFFSET UNITYSDK_OFFSET(0x13863190)
#define MOLEMOLE_MONOPHYSFPSINDICATOR_UPDATE_OFFSET UNITYSDK_OFFSET(0x13863390)
#define MOLEMOLE_MONOPHYSFPSINDICATOR__CCTOR_OFFSET UNITYSDK_OFFSET(0x13863800)
#define MOLEMOLE_MONOPHYSFPSINDICATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x13863770)

namespace MoleMole
{
	inline static constexpr unsigned int MonoPhysFPSIndicator_TypeDefinitionIndex = 65270;

	class MonoPhysFPSIndicator : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Boolean* StaticGet_CollectAndroidPssMemory()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MonoPhysFPSIndicator_TypeDefinitionIndex)->GetStaticField(0x12270);
		}
		::System::Single updateInterval; // 0x18
		::System::Single fps; // 0x1C
		::System::Single Field_5_3; // 0x20
		::System::Int32 Field_5_4; // 0x24
		::System::Single Field_5_5; // 0x28
		::System::Int32 Field_5_6; // 0x2C
		::UnityEngine::UI::Text* Field_5_7; // 0x30
		::Il2CppArray<::System::UInt64>* Field_5_8; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOPHYSFPSINDICATOR__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MONOPHYSFPSINDICATOR__CCTOR_OFFSET))();
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOPHYSFPSINDICATOR_START_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOPHYSFPSINDICATOR_UPDATE_OFFSET))(this);
		}

		static ::System::String* Method_5_2B152328DABB4A03(::System::Int64 a1)
		{
			return ((::System::String*(*)(::System::Int64))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOPHYSFPSINDICATOR_METHOD_5_2B152328DABB4A03_OFFSET))(a1);
		}

		static ::System::String* Method_5_91E51879C0028BD4(::System::UInt64 a1)
		{
			return ((::System::String*(*)(::System::UInt64))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOPHYSFPSINDICATOR_METHOD_5_91E51879C0028BD4_OFFSET))(a1);
		}
	};
}
