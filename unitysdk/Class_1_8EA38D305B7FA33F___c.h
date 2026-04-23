#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_8EA38D305B7FA33F___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x181F57A0)
#define CLASS_1_8EA38D305B7FA33F___C__CTOR_OFFSET UNITYSDK_OFFSET(0x181F57E0)
#define CLASS_1_8EA38D305B7FA33F___C__ISLISTTYPE_B__19_0_OFFSET UNITYSDK_OFFSET(0x181F57F0)

inline static constexpr unsigned int Class_1_8EA38D305B7FA33F___c_TypeDefinitionIndex = 23489;

class Class_1_8EA38D305B7FA33F___c : public ::System::Object
{
public:
	static ::Class_1_8EA38D305B7FA33F___c** StaticGet___9()
	{
		return (::Class_1_8EA38D305B7FA33F___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8EA38D305B7FA33F___c_TypeDefinitionIndex)->GetStaticField(0x1E060);
	}
	static ::System::Func_2<::System::Type*, ::System::Boolean>** StaticGet___9__19_0()
	{
		return (::System::Func_2<::System::Type*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8EA38D305B7FA33F___c_TypeDefinitionIndex)->GetStaticField(0x1E068);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8EA38D305B7FA33F___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8EA38D305B7FA33F___C__CTOR_OFFSET))(this);
	}

	::System::Boolean _IsListType_b__19_0(::System::Type* i)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + CLASS_1_8EA38D305B7FA33F___C__ISLISTTYPE_B__19_0_OFFSET))(this, i);
	}
};
