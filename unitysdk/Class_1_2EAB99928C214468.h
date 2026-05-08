#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3A250D2252735266.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_196;
class Class_0_16E4307DCC419505_544;
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
template <typename T1, typename T2> class Class_1_45A377D6F53CACF6;
template <typename T> class Class_0_16E4307DCC419505_138;

#define CLASS_1_2EAB99928C214468__CTOR_OFFSET UNITYSDK_OFFSET(0xF28B620)

inline static constexpr unsigned int Class_1_2EAB99928C214468_TypeDefinitionIndex = 60553;

class Class_1_2EAB99928C214468 : public ::System::Object
{
public:
	::System::Action* Field_1_7; // 0x10
	::System::String* Field_1_9; // 0x18
	::Class_0_16E4307DCC419505_544* Field_1_2; // 0x20
	::Il2CppArray<::Enum_3_3A250D2252735266>* Field_1_11; // 0x28
	::System::Func_3<::System::Collections::Generic::List_1<::Class_1_7A0999DD62F5BF03*>*, ::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*>* Field_1_3; // 0x30
	::System::Action_2<::UnityEngine::GameObject*, ::Class_0_16E4307DCC419505_196*>* Field_1_1; // 0x38
	::System::Comparison_1<::Class_1_F57D00757009D1EB*>* Field_1_4; // 0x40
	::Il2CppArray<::Class_0_16E4307DCC419505_138<::Class_1_F57D00757009D1EB*>*>* Field_1_12; // 0x48
	::Class_1_45A377D6F53CACF6<::Class_1_F57D00757009D1EB*, ::Class_1_F57D00757009D1EB*>* Field_1_10; // 0x50
	::System::Func_2<::Class_1_7A0999DD62F5BF03*, ::System::String*>* Field_1_5; // 0x58
	::System::UInt32 Field_1_0; // 0x60
	::System::Int32 Field_1_6; // 0x64
	::System::Boolean Field_1_8; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2EAB99928C214468__CTOR_OFFSET))(this);
	}
};
