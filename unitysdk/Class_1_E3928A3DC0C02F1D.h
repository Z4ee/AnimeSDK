#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_85C948A9FFE82053.h"
#include "unitysdk/System/Object.h"

namespace R3 { template <typename T> class Observable_1; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T1, typename T2> class Func_2; }

inline static constexpr unsigned int Class_1_E3928A3DC0C02F1D_TypeDefinitionIndex = 50334;

template <typename TViewModel, typename TView, typename TValue>
class Class_1_E3928A3DC0C02F1D : public ::System::Object
{
public:
	::System::Func_2<TViewModel, ::R3::Observable_1<TValue>*>* LMDHPABCOAB; // 0x0
	::System::Action_2<TView, TValue>* AHCKJJLJPMM; // 0x0
};
