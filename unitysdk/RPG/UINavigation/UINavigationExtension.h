#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_342392452B5681AE.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_1_27E062DB46F0D058;
namespace RPG::UINavigation { class UINavigation; }
namespace RPG::UINavigation { class UINavigationArea; }
namespace UnityEngine { class GameObject; }

#define RPG_UINAVIGATION_UINAVIGATIONEXTENSION_GETFIRSTSELECTABLE_OFFSET UNITYSDK_OFFSET(0xCFC5230)
#define RPG_UINAVIGATION_UINAVIGATIONEXTENSION_GET_NAVIGATIONAREA_OFFSET UNITYSDK_OFFSET(0xCFC3B90)
#define RPG_UINAVIGATION_UINAVIGATIONEXTENSION_METHOD_5_1554A5A4DE9C7FA9_OFFSET UNITYSDK_OFFSET(0xCFC53F0)
#define RPG_UINAVIGATION_UINAVIGATIONEXTENSION_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xCFC3A20)
#define RPG_UINAVIGATION_UINAVIGATIONEXTENSION_ONENABLE_OFFSET UNITYSDK_OFFSET(0xCFC38A0)
#define RPG_UINAVIGATION_UINAVIGATIONEXTENSION_POSTONCHILDDESELECTED_OFFSET UNITYSDK_OFFSET(0xCFC53A0)
#define RPG_UINAVIGATION_UINAVIGATIONEXTENSION_POSTONCHILDSELECTED_OFFSET UNITYSDK_OFFSET(0xCFC5300)
#define RPG_UINAVIGATION_UINAVIGATIONEXTENSION_POSTONNAVIGATION_OFFSET UNITYSDK_OFFSET(0xCFC5350)
#define RPG_UINAVIGATION_UINAVIGATIONEXTENSION__CTOR_OFFSET UNITYSDK_OFFSET(0xCFC5170)

namespace RPG::UINavigation
{
	inline static constexpr unsigned int UINavigationExtension_TypeDefinitionIndex = 48415;

	class UINavigationExtension : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::UINavigation::UINavigationArea* Field_5_0; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONEXTENSION__CTOR_OFFSET))(this);
		}

		::RPG::UINavigation::UINavigationArea* get_NavigationArea()
		{
			return ((::RPG::UINavigation::UINavigationArea*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONEXTENSION_GET_NAVIGATIONAREA_OFFSET))(this);
		}

		::System::Void PostOnNavigation(::Class_1_27E062DB46F0D058* a1, ::Struct_2_342392452B5681AE& a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_27E062DB46F0D058*, ::Struct_2_342392452B5681AE&))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONEXTENSION_POSTONNAVIGATION_OFFSET))(this, a1, a2);
		}

		::System::Void PostOnChildSelected(::RPG::UINavigation::UINavigation* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::UINavigation::UINavigation*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONEXTENSION_POSTONCHILDSELECTED_OFFSET))(this, a1);
		}

		::System::Void PostOnChildDeselected(::RPG::UINavigation::UINavigation* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::UINavigation::UINavigation*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONEXTENSION_POSTONCHILDDESELECTED_OFFSET))(this, a1);
		}

		::UnityEngine::GameObject* GetFirstSelectable(::Class_1_27E062DB46F0D058* a1)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::Class_1_27E062DB46F0D058*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONEXTENSION_GETFIRSTSELECTABLE_OFFSET))(this, a1);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONEXTENSION_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONEXTENSION_ONDISABLE_OFFSET))(this);
		}

		::System::Void Method_5_1554A5A4DE9C7FA9(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONEXTENSION_METHOD_5_1554A5A4DE9C7FA9_OFFSET))(this, a1);
		}
	};
}
