#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CC5A418407C40F98.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

inline static constexpr unsigned int Class_2_82EA1B7D41B65D84_TypeDefinitionIndex = 67088;

template <typename T, typename TFilter, typename TGetFilterParam>
class Class_2_82EA1B7D41B65D84 : public ::Class_1_CC5A418407C40F98<T, TFilter>
{
public:
	::System::Func_2<TGetFilterParam, ::System::Collections::Generic::IList_1<TFilter>*>* Field_2_0; // 0x0
};
