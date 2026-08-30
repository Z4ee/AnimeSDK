#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_62DA72730C4B8385.h"
#include "unitysdk/System/ValueType.h"

namespace R3 { template <typename T> class ReactiveProperty_1; }
namespace RPG::Client { class ListView; }
namespace System { template <typename T1, typename T2> class Func_2; }

inline static constexpr unsigned int Struct_2_596398C4E81D250B_TypeDefinitionIndex = 50167;

template <typename TViewModel, typename TItem>
struct Struct_2_596398C4E81D250B
{
	::Struct_2_62DA72730C4B8385<TViewModel, ::RPG::Client::ListView*> JGAGHCKHGFK; // 0x0
	::System::Func_2<TViewModel, ::R3::ReactiveProperty_1<TItem>*>* AAPCFGAFMLJ; // 0x0
};
