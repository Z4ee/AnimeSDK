#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_E70C193A39BC645E.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_400;
class Class_0_16E4307DCC419505_409;
class Class_0_16E4307DCC419505_410;
class Class_0_16E4307DCC419505_411;
class Class_0_16E4307DCC419505_412;
class Class_1_17B92CF4857957F9;
class Class_1_F41BA62BC88DE172;
namespace System { class IDisposable; }
namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8> class Func_8; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Reflection { class MethodInfo; }
template <typename T> class Class_0_16E4307DCC41950C_1;
template <typename T> class Class_1_850BA6CC99450B87_Class_0_16E7307DCC43CB25;
template <typename T> class Class_1_F9A52EAB94D4ABE9;

inline static constexpr unsigned int Class_1_850BA6CC99450B87_TypeDefinitionIndex = 44179;

template <typename TViewModel>
class Class_1_850BA6CC99450B87 : public ::System::Object
{
public:
	static ::System::Reflection::MethodInfo** StaticGet_HENAFPGDEKM()
	{
		return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(Class_1_850BA6CC99450B87_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	::System::Collections::Generic::List_1<::Class_1_850BA6CC99450B87_Class_0_16E7307DCC43CB25<TViewModel>*>* LFJEHMPDOKG; // 0x0
	::System::Boolean GFAMGLFOMGI; // 0x0
	::System::Int32 MLFOJFCILOB; // 0x0
	::Class_0_16E4307DCC419505_400* _Logger_k__BackingField; // 0x0
	::Class_1_F41BA62BC88DE172* _Environment_k__BackingField; // 0x0
	::Struct_2_E70C193A39BC645E _BindingEnvironment_k__BackingField; // 0x0
};
