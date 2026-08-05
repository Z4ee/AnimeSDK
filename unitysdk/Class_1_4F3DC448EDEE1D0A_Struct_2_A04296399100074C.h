#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

inline static constexpr unsigned int Class_1_4F3DC448EDEE1D0A_Struct_2_A04296399100074C_TypeDefinitionIndex = 40797;

struct alignas(8) Class_1_4F3DC448EDEE1D0A_Struct_2_A04296399100074C
{
	::System::Int32 Field_2_2; // 0x10
	::System::String* Field_2_1; // 0x18
	::System::Func_2<::System::Threading::CancellationToken, ::Cysharp::Threading::Tasks::UniTask>* Field_2_0; // 0x20
};
