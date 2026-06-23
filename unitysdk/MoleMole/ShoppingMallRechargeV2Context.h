#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ShoppingMallBaseContextBase.h"

class Class_0_16E4307DCC419505_201;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class MonoGamepadRegion; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }

#define MOLEMOLE_SHOPPINGMALLRECHARGEV2CONTEXT_GET_CLOUDBTN_OFFSET UNITYSDK_OFFSET(0x12654E40)
#define MOLEMOLE_SHOPPINGMALLRECHARGEV2CONTEXT_GET_CLOUDRECT_OFFSET UNITYSDK_OFFSET(0x12654E80)
#define MOLEMOLE_SHOPPINGMALLRECHARGEV2CONTEXT_GET_CLOUDTIMER_OFFSET UNITYSDK_OFFSET(0x12654E60)
#define MOLEMOLE_SHOPPINGMALLRECHARGEV2CONTEXT_GET_CUSTOMERBTN_OFFSET UNITYSDK_OFFSET(0x12654E20)
#define MOLEMOLE_SHOPPINGMALLRECHARGEV2CONTEXT_SET_CLOUDBTN_OFFSET UNITYSDK_OFFSET(0x12654E50)
#define MOLEMOLE_SHOPPINGMALLRECHARGEV2CONTEXT_SET_CLOUDRECT_OFFSET UNITYSDK_OFFSET(0x12654E90)
#define MOLEMOLE_SHOPPINGMALLRECHARGEV2CONTEXT_SET_CLOUDTIMER_OFFSET UNITYSDK_OFFSET(0x12654E70)
#define MOLEMOLE_SHOPPINGMALLRECHARGEV2CONTEXT_SET_CUSTOMERBTN_OFFSET UNITYSDK_OFFSET(0x12654E30)
#define MOLEMOLE_SHOPPINGMALLRECHARGEV2CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x12654EA0)

namespace MoleMole
{
	inline static constexpr unsigned int ShoppingMallRechargeV2Context_TypeDefinitionIndex = 62326;

	class ShoppingMallRechargeV2Context : public ::MoleMole::ShoppingMallBaseContextBase
	{
	public:
		::Class_2_B4378B46E0020E85* _CustomerBtn_k__BackingField; // 0x58
		::UnityEngine::UI::Extension::UITimeWidget* _CloudTimer_k__BackingField; // 0x60
		::UnityEngine::RectTransform* _CloudRect_k__BackingField; // 0x68
		::Class_2_B4378B46E0020E85* _CloudBtn_k__BackingField; // 0x70

		::System::Void _ctor(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_201*>* goods, ::MoleMole::MonoGamepadRegion* region, ::System::Action_1<::System::Int32>* onClick, ::Class_2_B4378B46E0020E85* customerBtn, ::UnityEngine::UI::Extension::UITimeWidget* cloudTimer, ::Class_2_B4378B46E0020E85* cloudBtn, ::UnityEngine::RectTransform* cloudRect)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_201*>*, ::MoleMole::MonoGamepadRegion*, ::System::Action_1<::System::Int32>*, ::Class_2_B4378B46E0020E85*, ::UnityEngine::UI::Extension::UITimeWidget*, ::Class_2_B4378B46E0020E85*, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOPPINGMALLRECHARGEV2CONTEXT__CTOR_OFFSET))(this, goods, region, onClick, customerBtn, cloudTimer, cloudBtn, cloudRect);
		}

		::Class_2_B4378B46E0020E85* get_CustomerBtn()
		{
			return ((::Class_2_B4378B46E0020E85*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOPPINGMALLRECHARGEV2CONTEXT_GET_CUSTOMERBTN_OFFSET))(this);
		}

		::System::Void set_CustomerBtn(::Class_2_B4378B46E0020E85* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_B4378B46E0020E85*))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOPPINGMALLRECHARGEV2CONTEXT_SET_CUSTOMERBTN_OFFSET))(this, value);
		}

		::Class_2_B4378B46E0020E85* get_CloudBtn()
		{
			return ((::Class_2_B4378B46E0020E85*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOPPINGMALLRECHARGEV2CONTEXT_GET_CLOUDBTN_OFFSET))(this);
		}

		::System::Void set_CloudBtn(::Class_2_B4378B46E0020E85* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_B4378B46E0020E85*))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOPPINGMALLRECHARGEV2CONTEXT_SET_CLOUDBTN_OFFSET))(this, value);
		}

		::UnityEngine::UI::Extension::UITimeWidget* get_CloudTimer()
		{
			return ((::UnityEngine::UI::Extension::UITimeWidget*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOPPINGMALLRECHARGEV2CONTEXT_GET_CLOUDTIMER_OFFSET))(this);
		}

		::System::Void set_CloudTimer(::UnityEngine::UI::Extension::UITimeWidget* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UITimeWidget*))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOPPINGMALLRECHARGEV2CONTEXT_SET_CLOUDTIMER_OFFSET))(this, value);
		}

		::UnityEngine::RectTransform* get_CloudRect()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOPPINGMALLRECHARGEV2CONTEXT_GET_CLOUDRECT_OFFSET))(this);
		}

		::System::Void set_CloudRect(::UnityEngine::RectTransform* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOPPINGMALLRECHARGEV2CONTEXT_SET_CLOUDRECT_OFFSET))(this, value);
		}
	};
}
