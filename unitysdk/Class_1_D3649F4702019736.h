#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateRinDeckRecommendTiming.h"
#include "unitysdk/RPG/GameCore/FateRinHouguOwnerType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CLASS_1_D3649F4702019736_METHOD_1_317D3FE869F1A700_OFFSET UNITYSDK_OFFSET(0x15E43650)
#define CLASS_1_D3649F4702019736__CTOR_OFFSET UNITYSDK_OFFSET(0x15E432F0)

inline static constexpr unsigned int Class_1_D3649F4702019736_TypeDefinitionIndex = 76153;

class Class_1_D3649F4702019736 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::RPG::GameCore::FateRinHouguOwnerType, ::RPG::GameCore::FateRinDeckRecommendTiming>, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*>* Field_1_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::RPG::GameCore::FateRinHouguOwnerType, ::RPG::GameCore::FateRinDeckRecommendTiming>, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*>* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D3649F4702019736__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_317D3FE869F1A700(::RPG::GameCore::FateRinHouguOwnerType a1, ::RPG::GameCore::FateRinDeckRecommendTiming a2, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*& a3, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*& a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FateRinHouguOwnerType, ::RPG::GameCore::FateRinDeckRecommendTiming, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*&, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*&))((::PBYTE)hIl2Cpp + CLASS_1_D3649F4702019736_METHOD_1_317D3FE869F1A700_OFFSET))(this, a1, a2, a3, a4);
	}
};
