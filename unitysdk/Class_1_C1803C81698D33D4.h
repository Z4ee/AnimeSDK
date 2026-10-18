#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C1803C81698D33D4_Struct_2_BB8BE31577062703_1.h"
#include "unitysdk/Struct_2_85C948A9FFE82053.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_400;
namespace R3 { template <typename T> class Observable_1; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T1, typename T2> class Func_2; }
template <typename T1, typename T2> class Class_0_16E4307DCC419505_422;
template <typename T1, typename T2> class Class_1_C1803C81698D33D4;

inline static constexpr unsigned int Class_1_C1803C81698D33D4_TypeDefinitionIndex = 50013;

template <typename TViewModel, typename TView>
class Class_1_C1803C81698D33D4 : public ::System::Object
{
public:
	static ::System::Action_2<::Struct_2_85C948A9FFE82053<TViewModel>, ::Class_1_C1803C81698D33D4_Struct_2_BB8BE31577062703_1<TViewModel, TView>>** StaticGet_CADAMKAADDK()
	{
		return (::System::Action_2<::Struct_2_85C948A9FFE82053<TViewModel>, ::Class_1_C1803C81698D33D4_Struct_2_BB8BE31577062703_1<TViewModel, TView>>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C1803C81698D33D4_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Action_2<::Struct_2_85C948A9FFE82053<TViewModel>, ::Class_1_C1803C81698D33D4<TViewModel, TView>*>** StaticGet_IPOCEHFFLME()
	{
		return (::System::Action_2<::Struct_2_85C948A9FFE82053<TViewModel>, ::Class_1_C1803C81698D33D4<TViewModel, TView>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C1803C81698D33D4_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	::Class_0_16E4307DCC419505_422<TViewModel, TView>* FPAHLFBBNMK; // 0x0
	TView FPIGADFENPB; // 0x0
	::Class_0_16E4307DCC419505_400* JKCNFDEAMDJ; // 0x0
	::System::Func_2<TViewModel, ::R3::Observable_1<::System::Boolean>*>* LIDLDCBLJLF; // 0x0
	::R3::Observable_1<::System::Boolean>* ACOIGHKEHCK; // 0x0
	::System::Boolean _OutputError_k__BackingField; // 0x0
};
