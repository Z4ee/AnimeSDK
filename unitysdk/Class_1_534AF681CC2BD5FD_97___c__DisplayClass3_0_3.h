#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_62DA72730C4B8385.h"
#include "unitysdk/Struct_2_85C948A9FFE82053.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace UnityEngine { class Transform; }

inline static constexpr unsigned int Class_1_534AF681CC2BD5FD_97___c__DisplayClass3_0_3_TypeDefinitionIndex = 50266;

template <typename TViewModel, typename TChildViewModel, typename TView>
class Class_1_534AF681CC2BD5FD_97___c__DisplayClass3_0_3 : public ::System::Object
{
public:
	::System::Collections::Generic::IReadOnlyList_1<TChildViewModel>* childViewModels; // 0x0
	::Struct_2_62DA72730C4B8385<TViewModel, ::UnityEngine::Transform*> chain; // 0x0
};
