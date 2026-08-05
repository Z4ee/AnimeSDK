#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F5ACAAB9AA1EB49.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_0_16E4307DCC419505_135;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_0_16E4307DCC419505_159;
template <typename T> class Class_0_16E4307DCC419505_163;

#define MOLEMOLE_UISUIBIANTEMPLENEWPRODUCTPOPWINDOWCONTROLLER_VIEWMODEL_GETREACTIONS_OFFSET UNITYSDK_OFFSET(0x11E0FEE0)
#define MOLEMOLE_UISUIBIANTEMPLENEWPRODUCTPOPWINDOWCONTROLLER_VIEWMODEL_GETREPUTATIONS_OFFSET UNITYSDK_OFFSET(0x11E103B0)
#define MOLEMOLE_UISUIBIANTEMPLENEWPRODUCTPOPWINDOWCONTROLLER_VIEWMODEL_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x11E0F930)
#define MOLEMOLE_UISUIBIANTEMPLENEWPRODUCTPOPWINDOWCONTROLLER_VIEWMODEL_SETPRODUCTID_OFFSET UNITYSDK_OFFSET(0x11E104E0)
#define MOLEMOLE_UISUIBIANTEMPLENEWPRODUCTPOPWINDOWCONTROLLER_VIEWMODEL_SETREACTIONCOUNT_OFFSET UNITYSDK_OFFSET(0x11E10600)
#define MOLEMOLE_UISUIBIANTEMPLENEWPRODUCTPOPWINDOWCONTROLLER_VIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x11E0F920)
#define MOLEMOLE_UISUIBIANTEMPLENEWPRODUCTPOPWINDOWCONTROLLER_VIEWMODEL__ONCREATEPROPERTY_B__8_0_OFFSET UNITYSDK_OFFSET(0x11E10720)
#define MOLEMOLE_UISUIBIANTEMPLENEWPRODUCTPOPWINDOWCONTROLLER_VIEWMODEL__ONCREATEPROPERTY_B__8_1_OFFSET UNITYSDK_OFFSET(0x11E10810)
#define MOLEMOLE_UISUIBIANTEMPLENEWPRODUCTPOPWINDOWCONTROLLER_VIEWMODEL__ONCREATEPROPERTY_B__8_2_OFFSET UNITYSDK_OFFSET(0x11E108F0)
#define MOLEMOLE_UISUIBIANTEMPLENEWPRODUCTPOPWINDOWCONTROLLER_VIEWMODEL__ONCREATEPROPERTY_B__8_3_OFFSET UNITYSDK_OFFSET(0x11E109D0)

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianTempleNewProductPopWindowController_ViewModel_TypeDefinitionIndex = 85708;

	class UISuibianTempleNewProductPopWindowController_ViewModel : public ::Class_1_5F5ACAAB9AA1EB49
	{
	public:
		::Class_0_16E4307DCC419505_163<::System::Int32>* price; // 0x80
		::Class_0_16E4307DCC419505_163<::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>*>* reactions; // 0x88
		::Class_0_16E4307DCC419505_163<::System::Int32>* reputation; // 0x90
		::Class_0_16E4307DCC419505_163<::System::String*>* name; // 0x98
		::Class_0_16E4307DCC419505_159<::System::Int32>* reactionCount; // 0xA0
		::Class_0_16E4307DCC419505_159<::System::Int32>* productID; // 0xA8
		::Class_0_16E4307DCC419505_163<::Foundation::AssetPath>* icon; // 0xB0

		::System::Void _ctor(::Class_0_16E4307DCC419505_135* autoDisposePool)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_135*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLENEWPRODUCTPOPWINDOWCONTROLLER_VIEWMODEL__CTOR_OFFSET))(this, autoDisposePool);
		}

		::System::Void OnCreateProperty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLENEWPRODUCTPOPWINDOWCONTROLLER_VIEWMODEL_ONCREATEPROPERTY_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* GetReactions()
		{
			return ((::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLENEWPRODUCTPOPWINDOWCONTROLLER_VIEWMODEL_GETREACTIONS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Int32>* GetReputations(::System::Int32 totalReputation, ::System::Collections::Generic::List_1<::System::Int32>* weights)
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLENEWPRODUCTPOPWINDOWCONTROLLER_VIEWMODEL_GETREPUTATIONS_OFFSET))(this, totalReputation, weights);
		}

		::System::Void SetProductID(::System::Int32 productID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLENEWPRODUCTPOPWINDOWCONTROLLER_VIEWMODEL_SETPRODUCTID_OFFSET))(this, productID);
		}

		::System::Void SetReactionCount(::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLENEWPRODUCTPOPWINDOWCONTROLLER_VIEWMODEL_SETREACTIONCOUNT_OFFSET))(this, count);
		}

		::System::String* _OnCreateProperty_b__8_0()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLENEWPRODUCTPOPWINDOWCONTROLLER_VIEWMODEL__ONCREATEPROPERTY_B__8_0_OFFSET))(this);
		}

		::System::Int32 _OnCreateProperty_b__8_1()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLENEWPRODUCTPOPWINDOWCONTROLLER_VIEWMODEL__ONCREATEPROPERTY_B__8_1_OFFSET))(this);
		}

		::System::Int32 _OnCreateProperty_b__8_2()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLENEWPRODUCTPOPWINDOWCONTROLLER_VIEWMODEL__ONCREATEPROPERTY_B__8_2_OFFSET))(this);
		}

		::Foundation::AssetPath _OnCreateProperty_b__8_3()
		{
			return ((::Foundation::AssetPath(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLENEWPRODUCTPOPWINDOWCONTROLLER_VIEWMODEL__ONCREATEPROPERTY_B__8_3_OFFSET))(this);
		}
	};
}
