#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_EA9E20FC4353C624.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_A40A691919A69159___C_METHOD_1_080B73AB8A70560B_OFFSET UNITYSDK_OFFSET(0x1CF862C0)
#define CLASS_1_A40A691919A69159___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CF86270)
#define CLASS_1_A40A691919A69159___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF862B0)

inline static constexpr unsigned int Class_1_A40A691919A69159___c_TypeDefinitionIndex = 33890;

class Class_1_A40A691919A69159___c : public ::System::Object
{
public:
	static ::Class_1_A40A691919A69159___c** StaticGet___9()
	{
		return (::Class_1_A40A691919A69159___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A40A691919A69159___c_TypeDefinitionIndex)->GetStaticField(0x276B0);
	}
	static ::System::Func_2<::System::Int64, ::System::Collections::Generic::List_1<::System::Action_2<::Enum_3_EA9E20FC4353C624, ::System::Object*>*>*>** StaticGet___9__1_0()
	{
		return (::System::Func_2<::System::Int64, ::System::Collections::Generic::List_1<::System::Action_2<::Enum_3_EA9E20FC4353C624, ::System::Object*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A40A691919A69159___c_TypeDefinitionIndex)->GetStaticField(0x276B8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A40A691919A69159___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A40A691919A69159___C__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Action_2<::Enum_3_EA9E20FC4353C624, ::System::Object*>*>* Method_1_080B73AB8A70560B(::System::Int64 a1)
	{
		return ((::System::Collections::Generic::List_1<::System::Action_2<::Enum_3_EA9E20FC4353C624, ::System::Object*>*>*(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_A40A691919A69159___C_METHOD_1_080B73AB8A70560B_OFFSET))(this, a1);
	}
};
