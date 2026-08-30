#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_4FC28BCB338E38DA_Struct_2_F4C21DD96A931F6F.h"
#include "unitysdk/Struct_2_85C948A9FFE82053.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_333;
class Class_0_16E4307DCC419505_406;
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine { class Transform; }
template <typename T1, typename T2> class Class_1_4FC28BCB338E38DA_Class_1_FA9E1B54AF691B22;
template <typename T> class Class_0_16E4307DCC419505_332;
template <typename T> class Class_0_16E4307DCC41950C;

inline static constexpr unsigned int Class_1_4FC28BCB338E38DA_TypeDefinitionIndex = 50323;

template <typename TViewModel, typename TView>
class Class_1_4FC28BCB338E38DA : public ::System::Object
{
public:
	static ::System::Action_2<::Struct_2_85C948A9FFE82053<TViewModel>, ::Class_1_4FC28BCB338E38DA_Struct_2_F4C21DD96A931F6F<TViewModel, TView>>** StaticGet_ONFGGEHMACL()
	{
		return (::System::Action_2<::Struct_2_85C948A9FFE82053<TViewModel>, ::Class_1_4FC28BCB338E38DA_Struct_2_F4C21DD96A931F6F<TViewModel, TView>>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4FC28BCB338E38DA_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	::Class_0_16E4307DCC419505_332<TView>* JNFJJMAJKOJ; // 0x0
	::UnityEngine::Transform* KJMDDAHEODL; // 0x0
	::System::Int32 COEMCOBPMKD; // 0x0
	::System::Action_3<::Struct_2_85C948A9FFE82053<TViewModel>, ::System::Int32, TView>* JEBAIOBMCIC; // 0x0
	::System::Boolean GAOGJLDPBBP; // 0x0
	::Il2CppArray<::Class_0_16E4307DCC41950C<TView>*>* HNIPMEBKEOG; // 0x0
	::Class_1_4FC28BCB338E38DA_Class_1_FA9E1B54AF691B22<TViewModel, TView>* FMJEKAABDPC; // 0x0
};
