#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/FBehaviorInstanceCallback.h"
#include "unitysdk/Foundation/Variable_2.h"
#include "unitysdk/System/ValueType.h"

namespace Foundation { class ITimestamp; }
namespace Foundation { template <typename T> class BehaviorInstance_1; }
namespace System { template <typename T1, typename T2> class Func_2; }

namespace Foundation
{
	inline static constexpr unsigned int BehaviorManager_1_FSlot_TypeDefinitionIndex = 8826;

	template <typename TData>
	struct BehaviorManager_1_FSlot
	{
		::Foundation::BehaviorInstance_1<TData>* _instance; // 0x0
		::Foundation::FBehaviorInstanceCallback Callback; // 0x0
		::Foundation::ITimestamp* Timestamp; // 0x0
		::Foundation::Variable_2<::System::Single, ::System::Double> BlendIn; // 0x0
		::Foundation::Variable_2<::System::Single, ::System::Double> BlendOut; // 0x0
		::System::Func_2<::System::Double, ::Foundation::BehaviorInstance_1<TData>*>* _constructor; // 0x0
		::System::UInt64 Priority; // 0x0
		::System::Int16 NextFreeSlot; // 0x0
		::System::UInt16 Version; // 0x0
		static ::System::UInt32* StaticGet_Counter()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(BehaviorManager_1_FSlot_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
