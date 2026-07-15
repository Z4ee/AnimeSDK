#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client::Challenge::Tierce { class ChallengeTierceNodeListControl_Class_3_6EEFE48F0F19B50B; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCENODELISTCONTROL_BINDVIEWMODEL_1_OFFSET UNITYSDK_OFFSET(0x1AC6CDC0)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCENODELISTCONTROL_BINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1AC6CCC0)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCENODELISTCONTROL_GET_BINDITEM_OFFSET UNITYSDK_OFFSET(0x1AC6CCA0)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCENODELISTCONTROL_GET_CREATEITEM_OFFSET UNITYSDK_OFFSET(0x1AC6CC80)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCENODELISTCONTROL_GET_ITEMS_OFFSET UNITYSDK_OFFSET(0x1AC6CA70)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCENODELISTCONTROL_METHOD_5_184A831148A944B5_OFFSET UNITYSDK_OFFSET(0x1AC6CAB0)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCENODELISTCONTROL_METHOD_5_36EB20BAEC6C0B33_OFFSET UNITYSDK_OFFSET(0x1AC6CEA0)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCENODELISTCONTROL_METHOD_5_AF8C0870C2DDC5FB_OFFSET UNITYSDK_OFFSET(0x1AC6D010)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCENODELISTCONTROL_METHOD_5_F37642F7827EADFF_OFFSET UNITYSDK_OFFSET(0x1AC6D470)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCENODELISTCONTROL_SET_BINDITEM_OFFSET UNITYSDK_OFFSET(0x1AC6CCB0)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCENODELISTCONTROL_SET_CREATEITEM_OFFSET UNITYSDK_OFFSET(0x1AC6CC90)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCENODELISTCONTROL_SET_ITEMS_OFFSET UNITYSDK_OFFSET(0x1AC60AE0)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCENODELISTCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC6D570)

namespace RPG::Client::Challenge::Tierce
{
	inline static constexpr unsigned int ChallengeTierceNodeListControl_TypeDefinitionIndex = 76562;

	class ChallengeTierceNodeListControl : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::IReadOnlyList_1<::System::Object*>* Field_5_0; // 0x18
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* Field_5_1; // 0x20
		::System::Collections::Generic::List_1<::System::Action*>* Field_5_2; // 0x28
		::System::Func_1<::UnityEngine::GameObject*>* _CreateItem_k__BackingField; // 0x30
		::RPG::Client::Challenge::Tierce::ChallengeTierceNodeListControl_Class_3_6EEFE48F0F19B50B* _BindItem_k__BackingField; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCENODELISTCONTROL__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::System::Object*>* get_Items()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCENODELISTCONTROL_GET_ITEMS_OFFSET))(this);
		}

		::System::Void set_Items(::System::Collections::Generic::IReadOnlyList_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCENODELISTCONTROL_SET_ITEMS_OFFSET))(this, a1);
		}

		::System::Func_1<::UnityEngine::GameObject*>* get_CreateItem()
		{
			return ((::System::Func_1<::UnityEngine::GameObject*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCENODELISTCONTROL_GET_CREATEITEM_OFFSET))(this);
		}

		::System::Void set_CreateItem(::System::Func_1<::UnityEngine::GameObject*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Func_1<::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCENODELISTCONTROL_SET_CREATEITEM_OFFSET))(this, a1);
		}

		::RPG::Client::Challenge::Tierce::ChallengeTierceNodeListControl_Class_3_6EEFE48F0F19B50B* get_BindItem()
		{
			return ((::RPG::Client::Challenge::Tierce::ChallengeTierceNodeListControl_Class_3_6EEFE48F0F19B50B*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCENODELISTCONTROL_GET_BINDITEM_OFFSET))(this);
		}

		::System::Void set_BindItem(::RPG::Client::Challenge::Tierce::ChallengeTierceNodeListControl_Class_3_6EEFE48F0F19B50B* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Challenge::Tierce::ChallengeTierceNodeListControl_Class_3_6EEFE48F0F19B50B*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCENODELISTCONTROL_SET_BINDITEM_OFFSET))(this, a1);
		}

		::System::Void BindViewModel(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCENODELISTCONTROL_BINDVIEWMODEL_OFFSET))(this, a1);
		}

		::System::Void BindViewModel_1(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCENODELISTCONTROL_BINDVIEWMODEL_1_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_184A831148A944B5(::System::Collections::Generic::IReadOnlyList_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCENODELISTCONTROL_METHOD_5_184A831148A944B5_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* Method_5_AF8C0870C2DDC5FB(::System::Int32 a1)
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCENODELISTCONTROL_METHOD_5_AF8C0870C2DDC5FB_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::System::Action*>* Method_5_F37642F7827EADFF(::System::Collections::Generic::IEnumerable_1<::UnityEngine::GameObject*>* a1, ::System::Collections::Generic::IReadOnlyList_1<::System::Object*>* a2)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Action*>*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::GameObject*>*, ::System::Collections::Generic::IReadOnlyList_1<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCENODELISTCONTROL_METHOD_5_F37642F7827EADFF_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_36EB20BAEC6C0B33(::System::Collections::Generic::List_1<::System::Action*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Action*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCENODELISTCONTROL_METHOD_5_36EB20BAEC6C0B33_OFFSET))(this, a1);
		}
	};
}
