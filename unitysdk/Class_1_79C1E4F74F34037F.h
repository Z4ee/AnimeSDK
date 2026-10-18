#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_85C948A9FFE82053.h"
#include "unitysdk/System/Object.h"

namespace R3 { template <typename T> class ReactiveProperty_1; }
namespace RPG::Client { class UIDragSource; }
namespace System { template <typename T1, typename T2> class Func_2; }

inline static constexpr unsigned int Class_1_79C1E4F74F34037F_TypeDefinitionIndex = 49852;

template <typename TViewModel, typename TDragged>
class Class_1_79C1E4F74F34037F : public ::System::Object
{
public:
	::System::Func_2<TViewModel, ::R3::ReactiveProperty_1<TDragged>*>* HMPPAHHMPKL; // 0x0
	::System::Func_2<TViewModel, TDragged>* LOLNOIKONKJ; // 0x0
};
