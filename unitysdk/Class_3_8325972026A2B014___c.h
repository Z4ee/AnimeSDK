#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_4_C3281F1010689A02;
class Class_4_D02C44FA813EDE0B;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_3_8325972026A2B014___C_METHOD_1_8855F74CDB687B04_OFFSET UNITYSDK_OFFSET(0x1C4EC710)
#define CLASS_3_8325972026A2B014___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C4EC6C0)
#define CLASS_3_8325972026A2B014___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4EC700)

inline static constexpr unsigned int Class_3_8325972026A2B014___c_TypeDefinitionIndex = 83937;

class Class_3_8325972026A2B014___c : public ::System::Object
{
public:
	static ::Class_3_8325972026A2B014___c** StaticGet___9()
	{
		return (::Class_3_8325972026A2B014___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_8325972026A2B014___c_TypeDefinitionIndex)->GetStaticField(0x49940);
	}
	static ::System::Func_2<::System::ValueTuple_2<::System::Single, ::System::ValueTuple_2<::Class_4_C3281F1010689A02*, ::Class_4_D02C44FA813EDE0B*>>, ::System::Single>** StaticGet___9__21_0()
	{
		return (::System::Func_2<::System::ValueTuple_2<::System::Single, ::System::ValueTuple_2<::Class_4_C3281F1010689A02*, ::Class_4_D02C44FA813EDE0B*>>, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_8325972026A2B014___c_TypeDefinitionIndex)->GetStaticField(0x49948);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_8325972026A2B014___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8325972026A2B014___C__CTOR_OFFSET))(this);
	}

	::System::Single Method_1_8855F74CDB687B04(::System::ValueTuple_2<::System::Single, ::System::ValueTuple_2<::Class_4_C3281F1010689A02*, ::Class_4_D02C44FA813EDE0B*>> a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::ValueTuple_2<::System::Single, ::System::ValueTuple_2<::Class_4_C3281F1010689A02*, ::Class_4_D02C44FA813EDE0B*>>))((::PBYTE)hIl2Cpp + CLASS_3_8325972026A2B014___C_METHOD_1_8855F74CDB687B04_OFFSET))(this, a1);
	}
};
