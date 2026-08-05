#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/InputLogicEventType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace MoleMole { class UIGeneralKeyPanelWidgetController; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_MONOGENERALKEYPANELSORT_METHOD_5_3E8B8757B7A354CC_OFFSET UNITYSDK_OFFSET(0x1384F800)
#define MOLEMOLE_MONOGENERALKEYPANELSORT_METHOD_5_B877181B6123B7F6_OFFSET UNITYSDK_OFFSET(0x1384F1D0)
#define MOLEMOLE_MONOGENERALKEYPANELSORT_METHOD_5_D3700E59FA9F1C7C_OFFSET UNITYSDK_OFFSET(0x1384FF50)
#define MOLEMOLE_MONOGENERALKEYPANELSORT_SETCHANGEDIRTY_OFFSET UNITYSDK_OFFSET(0x1384F5D0)
#define MOLEMOLE_MONOGENERALKEYPANELSORT_START_OFFSET UNITYSDK_OFFSET(0x1384F180)
#define MOLEMOLE_MONOGENERALKEYPANELSORT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1384F770)
#define MOLEMOLE_MONOGENERALKEYPANELSORT__CTOR_OFFSET UNITYSDK_OFFSET(0x1384F620)

namespace MoleMole
{
	inline static constexpr unsigned int MonoGeneralKeyPanelSort_TypeDefinitionIndex = 90242;

	class MonoGeneralKeyPanelSort : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Collections::Generic::List_1<::MoleMole::InputLogicEventType>** StaticGet_Field_5_2()
		{
			return (::System::Collections::Generic::List_1<::MoleMole::InputLogicEventType>**)Il2CppClass::FromTypeDefinitionIndex(MonoGeneralKeyPanelSort_TypeDefinitionIndex)->GetStaticField(0x3FA30);
		}
		::System::Collections::Generic::List_1<::MoleMole::UIGeneralKeyPanelWidgetController*>* Field_5_1; // 0x18
		::System::Collections::Generic::Dictionary_2<::MoleMole::UIGeneralKeyPanelWidgetController*, ::UnityEngine::Transform*>* Field_5_0; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGENERALKEYPANELSORT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGENERALKEYPANELSORT__CCTOR_OFFSET))();
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGENERALKEYPANELSORT_START_OFFSET))(this);
		}

		::System::Void SetChangeDirty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGENERALKEYPANELSORT_SETCHANGEDIRTY_OFFSET))(this);
		}

		::System::Void Method_5_B877181B6123B7F6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGENERALKEYPANELSORT_METHOD_5_B877181B6123B7F6_OFFSET))(this);
		}

		static ::System::Int32 Method_5_3E8B8757B7A354CC(::MoleMole::InputLogicEventType a1)
		{
			return ((::System::Int32(*)(::MoleMole::InputLogicEventType))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGENERALKEYPANELSORT_METHOD_5_3E8B8757B7A354CC_OFFSET))(a1);
		}

		::System::Int32 Method_5_D3700E59FA9F1C7C(::MoleMole::UIGeneralKeyPanelWidgetController* a1, ::MoleMole::UIGeneralKeyPanelWidgetController* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::UIGeneralKeyPanelWidgetController*, ::MoleMole::UIGeneralKeyPanelWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGENERALKEYPANELSORT_METHOD_5_D3700E59FA9F1C7C_OFFSET))(this, a1, a2);
		}
	};
}
