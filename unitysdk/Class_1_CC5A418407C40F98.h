#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System { template <typename T1, typename T2> class Func_2; }

inline static constexpr unsigned int Class_1_CC5A418407C40F98_TypeDefinitionIndex = 79029;

template <typename T, typename TFilter>
class Class_1_CC5A418407C40F98 : public ::System::Object
{
public:
	::System::String* Field_1_2; // 0x0
	::System::String* Field_1_1; // 0x0
	::System::Func_2<T, TFilter>* Field_1_0; // 0x0
	::System::Func_3<T, TFilter, ::System::Boolean>* Field_1_7; // 0x0
	::System::Func_2<::System::Int32, ::System::String*>* Field_1_6; // 0x0
	::System::Func_2<TFilter, ::System::String*>* Field_1_5; // 0x0
	::System::Func_2<TFilter, ::UnityEngine::Color>* Field_1_4; // 0x0
	::System::Func_2<TFilter, ::System::String*>* Field_1_11; // 0x0
	::System::Func_2<::System::Int32, ::System::Boolean>* Field_1_10; // 0x0
	::System::Boolean Field_1_9; // 0x0
};
