#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client::Challenge::Tierce { class ChallengeTierceNodeVariantListControl_Class_0_16E7307DCC43CB2C_27; }
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceNodeVariantListControl_Class_1_3934BCE11C8FDFC0; }
namespace System { class Action; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCENODEVARIANTLISTCONTROL_BINDVIEWMODEL_1_OFFSET UNITYSDK_OFFSET(0xB4CCFF0)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCENODEVARIANTLISTCONTROL_BINDVIEWMODEL_2_OFFSET UNITYSDK_OFFSET(0xB4CD0D0)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCENODEVARIANTLISTCONTROL_BINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xB4CCEF0)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCENODEVARIANTLISTCONTROL_GETBOUNDOBJECT_OFFSET UNITYSDK_OFFSET(0xB4CD2D0)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCENODEVARIANTLISTCONTROL_GET_ITEMS_OFFSET UNITYSDK_OFFSET(0xB4CCD90)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCENODEVARIANTLISTCONTROL_GET_VARIANTPROVIDER_OFFSET UNITYSDK_OFFSET(0xB4CCED0)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCENODEVARIANTLISTCONTROL_METHOD_5_1E0D2B2DFBFCBDCA_OFFSET UNITYSDK_OFFSET(0xB4CD230)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCENODEVARIANTLISTCONTROL_METHOD_5_2D1DCF232FAAED40_OFFSET UNITYSDK_OFFSET(0xB4CCE00)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCENODEVARIANTLISTCONTROL_METHOD_5_2E9D21518474DA09_OFFSET UNITYSDK_OFFSET(0xB4CE3E0)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCENODEVARIANTLISTCONTROL_METHOD_5_36EB20BAEC6C0B33_OFFSET UNITYSDK_OFFSET(0xB4CD350)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCENODEVARIANTLISTCONTROL_METHOD_5_DD3E15D4A7F8D51F_OFFSET UNITYSDK_OFFSET(0xB4CD4C0)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCENODEVARIANTLISTCONTROL_METHOD_5_E3D42085A946E917_OFFSET UNITYSDK_OFFSET(0xB4CE310)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCENODEVARIANTLISTCONTROL_SET_ITEMS_OFFSET UNITYSDK_OFFSET(0xB4CCDA0)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCENODEVARIANTLISTCONTROL_SET_VARIANTPROVIDER_OFFSET UNITYSDK_OFFSET(0xB4CCEE0)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCENODEVARIANTLISTCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xB4CE500)

namespace RPG::Client::Challenge::Tierce
{
	inline static constexpr unsigned int ChallengeTierceNodeVariantListControl_TypeDefinitionIndex = 74181;

	class ChallengeTierceNodeVariantListControl : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::Challenge::Tierce::ChallengeTierceNodeVariantListControl_Class_1_3934BCE11C8FDFC0*>* Field_5_0; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*>* Field_5_1; // 0x20
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* Field_5_2; // 0x28
		::System::Collections::Generic::List_1<::System::Action*>* Field_5_3; // 0x30
		::RPG::Client::Challenge::Tierce::ChallengeTierceNodeVariantListControl_Class_0_16E7307DCC43CB2C_27* _VariantProvider_k__BackingField; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCENODEVARIANTLISTCONTROL__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::Challenge::Tierce::ChallengeTierceNodeVariantListControl_Class_1_3934BCE11C8FDFC0*>* get_Items()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::Challenge::Tierce::ChallengeTierceNodeVariantListControl_Class_1_3934BCE11C8FDFC0*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCENODEVARIANTLISTCONTROL_GET_ITEMS_OFFSET))(this);
		}

		::System::Void set_Items(::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::Challenge::Tierce::ChallengeTierceNodeVariantListControl_Class_1_3934BCE11C8FDFC0*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::Challenge::Tierce::ChallengeTierceNodeVariantListControl_Class_1_3934BCE11C8FDFC0*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCENODEVARIANTLISTCONTROL_SET_ITEMS_OFFSET))(this, a1);
		}

		::RPG::Client::Challenge::Tierce::ChallengeTierceNodeVariantListControl_Class_0_16E7307DCC43CB2C_27* get_VariantProvider()
		{
			return ((::RPG::Client::Challenge::Tierce::ChallengeTierceNodeVariantListControl_Class_0_16E7307DCC43CB2C_27*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCENODEVARIANTLISTCONTROL_GET_VARIANTPROVIDER_OFFSET))(this);
		}

		::System::Void set_VariantProvider(::RPG::Client::Challenge::Tierce::ChallengeTierceNodeVariantListControl_Class_0_16E7307DCC43CB2C_27* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Challenge::Tierce::ChallengeTierceNodeVariantListControl_Class_0_16E7307DCC43CB2C_27*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCENODEVARIANTLISTCONTROL_SET_VARIANTPROVIDER_OFFSET))(this, a1);
		}

		::System::Void BindViewModel(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCENODEVARIANTLISTCONTROL_BINDVIEWMODEL_OFFSET))(this, a1);
		}

		::System::Void BindViewModel_1(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCENODEVARIANTLISTCONTROL_BINDVIEWMODEL_1_OFFSET))(this, a1, a2);
		}

		::System::Void BindViewModel_2(::System::Collections::Generic::IReadOnlyList_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCENODEVARIANTLISTCONTROL_BINDVIEWMODEL_2_OFFSET))(this, a1);
		}

		::UnityEngine::GameObject* GetBoundObject(::System::Int32 a1)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCENODEVARIANTLISTCONTROL_GETBOUNDOBJECT_OFFSET))(this, a1);
		}

		::System::Void Method_5_2D1DCF232FAAED40(::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::Challenge::Tierce::ChallengeTierceNodeVariantListControl_Class_1_3934BCE11C8FDFC0*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::Challenge::Tierce::ChallengeTierceNodeVariantListControl_Class_1_3934BCE11C8FDFC0*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCENODEVARIANTLISTCONTROL_METHOD_5_2D1DCF232FAAED40_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::Challenge::Tierce::ChallengeTierceNodeVariantListControl_Class_1_3934BCE11C8FDFC0*>* Method_5_1E0D2B2DFBFCBDCA(::System::Collections::Generic::IReadOnlyList_1<::System::Object*>* a1, ::RPG::Client::Challenge::Tierce::ChallengeTierceNodeVariantListControl_Class_0_16E7307DCC43CB2C_27* a2)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::Challenge::Tierce::ChallengeTierceNodeVariantListControl_Class_1_3934BCE11C8FDFC0*>*(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::System::Object*>*, ::RPG::Client::Challenge::Tierce::ChallengeTierceNodeVariantListControl_Class_0_16E7307DCC43CB2C_27*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCENODEVARIANTLISTCONTROL_METHOD_5_1E0D2B2DFBFCBDCA_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* Method_5_DD3E15D4A7F8D51F(::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::Challenge::Tierce::ChallengeTierceNodeVariantListControl_Class_1_3934BCE11C8FDFC0*>* a1)
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::Challenge::Tierce::ChallengeTierceNodeVariantListControl_Class_1_3934BCE11C8FDFC0*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCENODEVARIANTLISTCONTROL_METHOD_5_DD3E15D4A7F8D51F_OFFSET))(this, a1);
		}

		::System::Void Method_5_E3D42085A946E917(::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCENODEVARIANTLISTCONTROL_METHOD_5_E3D42085A946E917_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::System::Action*>* Method_5_2E9D21518474DA09(::System::Collections::Generic::IEnumerable_1<::UnityEngine::GameObject*>* a1, ::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::Challenge::Tierce::ChallengeTierceNodeVariantListControl_Class_1_3934BCE11C8FDFC0*>* a2)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Action*>*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::GameObject*>*, ::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::Challenge::Tierce::ChallengeTierceNodeVariantListControl_Class_1_3934BCE11C8FDFC0*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCENODEVARIANTLISTCONTROL_METHOD_5_2E9D21518474DA09_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_36EB20BAEC6C0B33(::System::Collections::Generic::List_1<::System::Action*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Action*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCENODEVARIANTLISTCONTROL_METHOD_5_36EB20BAEC6C0B33_OFFSET))(this, a1);
		}
	};
}
