#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_85C948A9FFE82053.h"
#include "unitysdk/System/Object.h"

namespace R3 { template <typename T> class Observable_1; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine::UI { class Image; }

inline static constexpr unsigned int Class_1_E46D7F120BA0B3EB_Class_1_76020F976B99F544_TypeDefinitionIndex = 50257;

template <typename TViewModel, typename T>
class Class_1_E46D7F120BA0B3EB_Class_1_76020F976B99F544 : public ::System::Object
{
public:
	::System::Func_2<TViewModel, ::R3::Observable_1<::System::String*>*>* LMDHPABCOAB; // 0x0
	::System::Action_2<::UnityEngine::UI::Image*, T>* NAJOPNMPHPF; // 0x0
};
