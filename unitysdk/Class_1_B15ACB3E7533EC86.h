#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_85C948A9FFE82053.h"
#include "unitysdk/System/Object.h"

namespace R3 { template <typename T> class Observable_1; }
namespace RPG::Client { class UIDragGhost; }
namespace System { template <typename T1, typename T2> class Func_2; }

inline static constexpr unsigned int Class_1_B15ACB3E7533EC86_TypeDefinitionIndex = 49840;

template <typename TViewModel, typename TDragged>
class Class_1_B15ACB3E7533EC86 : public ::System::Object
{
public:
	::System::Func_2<TViewModel, ::R3::Observable_1<TDragged>*>* LMDHPABCOAB; // 0x0
};
