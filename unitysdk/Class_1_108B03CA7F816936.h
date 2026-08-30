#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_108B03CA7F816936_Struct_2_BB8BE31577062703.h"
#include "unitysdk/Struct_2_85C948A9FFE82053.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_321;
class Class_0_16E4307DCC419505_333;
class Class_0_16E4307DCC419505_406;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }
template <typename T1, typename T2> class Class_0_16E4307DCC419505_335;
template <typename T1, typename T2> class Class_1_C1803C81698D33D4;
template <typename T> class Class_0_16E4307DCC419505_332;
template <typename T> class Class_0_16E4307DCC41950C;
template <typename T> class Class_0_16E4307DCC41950C_1;

inline static constexpr unsigned int Class_1_108B03CA7F816936_TypeDefinitionIndex = 50330;

template <typename TViewModel, typename TView>
class Class_1_108B03CA7F816936 : public ::System::Object
{
public:
	static ::System::Action_2<::Struct_2_85C948A9FFE82053<TViewModel>, ::Class_1_108B03CA7F816936_Struct_2_BB8BE31577062703<TViewModel, TView>>** StaticGet_JMDLEFLNCGJ()
	{
		return (::System::Action_2<::Struct_2_85C948A9FFE82053<TViewModel>, ::Class_1_108B03CA7F816936_Struct_2_BB8BE31577062703<TViewModel, TView>>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_108B03CA7F816936_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	::Class_0_16E4307DCC419505_332<TView>* JNFJJMAJKOJ; // 0x0
	::UnityEngine::Transform* KJMDDAHEODL; // 0x0
	::Class_0_16E4307DCC419505_321* JKCNFDEAMDJ; // 0x0
	::Class_0_16E4307DCC41950C<TView>* MPDOMBFJKOH; // 0x0
	::System::Collections::Generic::List_1<::Class_1_C1803C81698D33D4<TViewModel, TView>*>* GFFAGJOELCH; // 0x0
};
