#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define CLASS_2_37265D92D233BE3F___C_METHOD_1_4AADAF19CDCB660E_OFFSET UNITYSDK_OFFSET(0x100E51B0)
#define CLASS_2_37265D92D233BE3F___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x100E5160)
#define CLASS_2_37265D92D233BE3F___C__CTOR_OFFSET UNITYSDK_OFFSET(0x100E51A0)

inline static constexpr unsigned int Class_2_37265D92D233BE3F___c_TypeDefinitionIndex = 49947;

class Class_2_37265D92D233BE3F___c : public ::System::Object
{
public:
	static ::Class_2_37265D92D233BE3F___c** StaticGet___9()
	{
		return (::Class_2_37265D92D233BE3F___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_37265D92D233BE3F___c_TypeDefinitionIndex)->GetStaticField(0x396B0);
	}
	static ::System::Func_1<::System::Boolean>** StaticGet___9__7_2()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_37265D92D233BE3F___c_TypeDefinitionIndex)->GetStaticField(0x396B8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_37265D92D233BE3F___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_37265D92D233BE3F___C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_4AADAF19CDCB660E()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_37265D92D233BE3F___C_METHOD_1_4AADAF19CDCB660E_OFFSET))(this);
	}
};
