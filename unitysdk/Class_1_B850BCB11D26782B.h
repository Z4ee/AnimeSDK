#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_85C948A9FFE82053.h"
#include "unitysdk/System/Object.h"

class Class_1_688A9F7861507F30;
namespace R3 { template <typename T> class Observable_1; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T1, typename T2> class Func_2; }
template <typename T1, typename T2> class Class_1_B850BCB11D26782B;

inline static constexpr unsigned int Class_1_B850BCB11D26782B_TypeDefinitionIndex = 50159;

template <typename TViewModel, typename TValue>
class Class_1_B850BCB11D26782B : public ::System::Object
{
public:
	static ::System::Action_2<::Struct_2_85C948A9FFE82053<TViewModel>, ::Class_1_B850BCB11D26782B<TViewModel, TValue>*>** StaticGet_LBDONKLPKGH()
	{
		return (::System::Action_2<::Struct_2_85C948A9FFE82053<TViewModel>, ::Class_1_B850BCB11D26782B<TViewModel, TValue>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B850BCB11D26782B_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	::Class_1_688A9F7861507F30* BPGGHPLEOEO; // 0x0
	::System::Func_2<TViewModel, ::R3::Observable_1<TValue>*>* LMDHPABCOAB; // 0x0
	::System::Action_2<::Class_1_688A9F7861507F30*, TValue>* AHCKJJLJPMM; // 0x0
	::System::Func_2<TViewModel, ::R3::Observable_1<::System::Boolean>*>* GDOKCKMCLKM; // 0x0
	::R3::Observable_1<::System::Boolean>* HMFPJGCHHPF; // 0x0
};
