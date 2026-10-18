#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_85C948A9FFE82053.h"
#include "unitysdk/System/Object.h"

namespace R3 { template <typename T> class Observable_1; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T1, typename T2> class Func_2; }

inline static constexpr unsigned int Class_1_1E13808CA7D551E3_TypeDefinitionIndex = 49997;

template <typename TViewModel, typename TBehaviour, typename TAsset>
class Class_1_1E13808CA7D551E3 : public ::System::Object
{
public:
	::System::Func_2<TViewModel, ::R3::Observable_1<::System::String*>*>* LMDHPABCOAB; // 0x0
	::System::Action_2<TBehaviour, TAsset>* NAJOPNMPHPF; // 0x0
};
