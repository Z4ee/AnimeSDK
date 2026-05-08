#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F4299CC27263318B.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_0_16E4307DCC419505_103;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_0_16E4307DCC419505_97;
template <typename T> class Class_0_16E4307DCC41950C_13;

#define MOLEMOLE_UISUIBIANTEMPLENEWPRODUCTPOPWINDOWCONTROLLER_VIEWMODEL_GETREACTIONS_OFFSET UNITYSDK_OFFSET(0x11B79C10)
#define MOLEMOLE_UISUIBIANTEMPLENEWPRODUCTPOPWINDOWCONTROLLER_VIEWMODEL_GETREPUTATIONS_OFFSET UNITYSDK_OFFSET(0x11B7A0E0)
#define MOLEMOLE_UISUIBIANTEMPLENEWPRODUCTPOPWINDOWCONTROLLER_VIEWMODEL_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x11B79670)
#define MOLEMOLE_UISUIBIANTEMPLENEWPRODUCTPOPWINDOWCONTROLLER_VIEWMODEL_SETPRODUCTID_OFFSET UNITYSDK_OFFSET(0x11B7A220)
#define MOLEMOLE_UISUIBIANTEMPLENEWPRODUCTPOPWINDOWCONTROLLER_VIEWMODEL_SETREACTIONCOUNT_OFFSET UNITYSDK_OFFSET(0x11B7A340)
#define MOLEMOLE_UISUIBIANTEMPLENEWPRODUCTPOPWINDOWCONTROLLER_VIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x11B79660)
#define MOLEMOLE_UISUIBIANTEMPLENEWPRODUCTPOPWINDOWCONTROLLER_VIEWMODEL__ONCREATEPROPERTY_B__8_0_OFFSET UNITYSDK_OFFSET(0x11B7A460)
#define MOLEMOLE_UISUIBIANTEMPLENEWPRODUCTPOPWINDOWCONTROLLER_VIEWMODEL__ONCREATEPROPERTY_B__8_1_OFFSET UNITYSDK_OFFSET(0x11B7A540)
#define MOLEMOLE_UISUIBIANTEMPLENEWPRODUCTPOPWINDOWCONTROLLER_VIEWMODEL__ONCREATEPROPERTY_B__8_2_OFFSET UNITYSDK_OFFSET(0x11B7A620)
#define MOLEMOLE_UISUIBIANTEMPLENEWPRODUCTPOPWINDOWCONTROLLER_VIEWMODEL__ONCREATEPROPERTY_B__8_3_OFFSET UNITYSDK_OFFSET(0x11B7A700)

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianTempleNewProductPopWindowController_ViewModel_TypeDefinitionIndex = 47884;

	class UISuibianTempleNewProductPopWindowController_ViewModel : public ::Class_1_F4299CC27263318B
	{
	public:
		::Class_0_16E4307DCC419505_97<::System::String*>* name; // 0x70
		::Class_0_16E4307DCC41950C_13<::System::Int32>* productID; // 0x78
		::Class_0_16E4307DCC419505_97<::System::Int32>* reputation; // 0x80
		::Class_0_16E4307DCC419505_97<::Foundation::AssetPath>* icon; // 0x88
		::Class_0_16E4307DCC41950C_13<::System::Int32>* reactionCount; // 0x90
		::Class_0_16E4307DCC419505_97<::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>*>* reactions; // 0x98
		::Class_0_16E4307DCC419505_97<::System::Int32>* price; // 0xA0

		::System::Void _ctor(::Class_0_16E4307DCC419505_103* autoDisposePool)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_103*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLENEWPRODUCTPOPWINDOWCONTROLLER_VIEWMODEL__CTOR_OFFSET))(this, autoDisposePool);
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
