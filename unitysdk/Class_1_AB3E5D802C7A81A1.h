#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3A280D225275881D.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_179;
class Class_0_16E4307DCC419505_591;
class Class_1_7A0999DD62F5BF03;
class Class_1_F57D00757009D1EB;
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
template <typename T1, typename T2> class Class_1_CE2608BEB8D2E23D;
template <typename T> class Class_0_16E4307DCC41950C_17;

#define CLASS_1_AB3E5D802C7A81A1__CTOR_OFFSET UNITYSDK_OFFSET(0x181F4E10)

inline static constexpr unsigned int Class_1_AB3E5D802C7A81A1_TypeDefinitionIndex = 76539;

class Class_1_AB3E5D802C7A81A1 : public ::System::Object
{
public:
	::System::Func_3<::System::Collections::Generic::List_1<::Class_1_7A0999DD62F5BF03*>*, ::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*>* Field_1_6; // 0x10
	::Il2CppArray<::Enum_3_3A280D225275881D>* Field_1_14; // 0x18
	::System::String* Field_1_8; // 0x20
	::System::Action_2<::UnityEngine::GameObject*, ::Class_0_16E4307DCC419505_179*>* Field_1_0; // 0x28
	::Class_0_16E4307DCC419505_591* Field_1_7; // 0x30
	::System::Comparison_1<::Class_1_F57D00757009D1EB*>* Field_1_5; // 0x38
	::System::Func_2<::Class_1_7A0999DD62F5BF03*, ::System::String*>* Field_1_4; // 0x40
	::Il2CppArray<::Class_0_16E4307DCC41950C_17<::Class_1_F57D00757009D1EB*>*>* Field_1_13; // 0x48
	::System::Action* Field_1_10; // 0x50
	::Class_1_CE2608BEB8D2E23D<::Class_1_F57D00757009D1EB*, ::Class_1_F57D00757009D1EB*>* Field_1_15; // 0x58
	::System::Boolean Field_1_9; // 0x60
	::System::UInt32 Field_1_1; // 0x64
	::System::Int32 Field_1_11; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB3E5D802C7A81A1__CTOR_OFFSET))(this);
	}
};
