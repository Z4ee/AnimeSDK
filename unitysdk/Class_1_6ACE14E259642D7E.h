#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChimeraDuelMasterRecommendationData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_6ACE14E259642D7E_METHOD_1_ADD5B0D73457FFB0_OFFSET UNITYSDK_OFFSET(0x123FD3B0)
#define CLASS_1_6ACE14E259642D7E_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x123FD2F0)
#define CLASS_1_6ACE14E259642D7E_METHOD_1_DD24CC0767F5726A_OFFSET UNITYSDK_OFFSET(0x123FD330)
#define CLASS_1_6ACE14E259642D7E__CTOR_OFFSET UNITYSDK_OFFSET(0x123FCE10)

inline static constexpr unsigned int Class_1_6ACE14E259642D7E_TypeDefinitionIndex = 58384;

class Class_1_6ACE14E259642D7E : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RPG::Client::ChimeraDuelMasterRecommendationData*>* Field_1_2; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ChimeraDuelMasterRecommendationData*>* Field_1_0; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::ChimeraDuelMasterRecommendationData*>*>* Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6ACE14E259642D7E__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6ACE14E259642D7E_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::ChimeraDuelMasterRecommendationData*>* Method_1_DD24CC0767F5726A(::System::UInt32 a1)
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::ChimeraDuelMasterRecommendationData*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_6ACE14E259642D7E_METHOD_1_DD24CC0767F5726A_OFFSET))(this, a1);
	}

	::RPG::Client::ChimeraDuelMasterRecommendationData* Method_1_ADD5B0D73457FFB0(::System::UInt32 a1)
	{
		return ((::RPG::Client::ChimeraDuelMasterRecommendationData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_6ACE14E259642D7E_METHOD_1_ADD5B0D73457FFB0_OFFSET))(this, a1);
	}
};
