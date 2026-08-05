#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define CLASS_1_5BD0057F1C94E279___C_METHOD_1_5323F2DF46A044DA_1_OFFSET UNITYSDK_OFFSET(0x11B34B30)
#define CLASS_1_5BD0057F1C94E279___C_METHOD_1_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x11B34B20)
#define CLASS_1_5BD0057F1C94E279___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x11B34AD0)
#define CLASS_1_5BD0057F1C94E279___C__CTOR_OFFSET UNITYSDK_OFFSET(0x11B34B10)

inline static constexpr unsigned int Class_1_5BD0057F1C94E279___c_TypeDefinitionIndex = 40639;

class Class_1_5BD0057F1C94E279___c : public ::System::Object
{
public:
	static ::System::Func_1<::System::Single>** StaticGet___9__73_0()
	{
		return (::System::Func_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5BD0057F1C94E279___c_TypeDefinitionIndex)->GetStaticField(0x41380);
	}
	static ::System::Func_1<::System::Single>** StaticGet___9__72_0()
	{
		return (::System::Func_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5BD0057F1C94E279___c_TypeDefinitionIndex)->GetStaticField(0x41388);
	}
	static ::Class_1_5BD0057F1C94E279___c** StaticGet___9()
	{
		return (::Class_1_5BD0057F1C94E279___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5BD0057F1C94E279___c_TypeDefinitionIndex)->GetStaticField(0x41390);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5BD0057F1C94E279___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5BD0057F1C94E279___C__CTOR_OFFSET))(this);
	}

	::System::Single Method_1_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5BD0057F1C94E279___C_METHOD_1_5323F2DF46A044DA_OFFSET))(this);
	}

	::System::Single Method_1_5323F2DF46A044DA_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5BD0057F1C94E279___C_METHOD_1_5323F2DF46A044DA_1_OFFSET))(this);
	}
};
