#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChimeraDuelMasterRecommendationData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_C9C9D9AECB74EF63_METHOD_1_5072DA1A8A5B638A_OFFSET UNITYSDK_OFFSET(0x17054EA0)
#define CLASS_1_C9C9D9AECB74EF63_METHOD_1_85343C7B63B78DC4_OFFSET UNITYSDK_OFFSET(0x17054F70)
#define CLASS_1_C9C9D9AECB74EF63_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x17054E60)
#define CLASS_1_C9C9D9AECB74EF63__CTOR_OFFSET UNITYSDK_OFFSET(0x170548C0)

inline static constexpr unsigned int Class_1_C9C9D9AECB74EF63_TypeDefinitionIndex = 63438;

class Class_1_C9C9D9AECB74EF63 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ChimeraDuelMasterRecommendationData*>* GPNJONIFBNH; // 0x10
	::System::Collections::Generic::List_1<::RPG::Client::ChimeraDuelMasterRecommendationData*>* ANEGPMAIBPF; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::ChimeraDuelMasterRecommendationData*>*>* MGCGMKBDPLL; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9C9D9AECB74EF63__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9C9D9AECB74EF63_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::ChimeraDuelMasterRecommendationData*>* Method_1_5072DA1A8A5B638A(::System::UInt32 a1)
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::ChimeraDuelMasterRecommendationData*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C9C9D9AECB74EF63_METHOD_1_5072DA1A8A5B638A_OFFSET))(this, a1);
	}

	::RPG::Client::ChimeraDuelMasterRecommendationData* Method_1_85343C7B63B78DC4(::System::UInt32 a1)
	{
		return ((::RPG::Client::ChimeraDuelMasterRecommendationData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C9C9D9AECB74EF63_METHOD_1_85343C7B63B78DC4_OFFSET))(this, a1);
	}
};
