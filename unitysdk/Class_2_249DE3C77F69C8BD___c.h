#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_249DE3C77F69C8BD_Class_1_9A93F927319E5AA2;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_2_249DE3C77F69C8BD___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1756AA90)
#define CLASS_2_249DE3C77F69C8BD___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1756AAC0)
#define CLASS_2_249DE3C77F69C8BD___C__HASCUSTOMTOPPANEL_B__1_0_OFFSET UNITYSDK_OFFSET(0x1756AAD0)

inline static constexpr unsigned int Class_2_249DE3C77F69C8BD___c_TypeDefinitionIndex = 68792;

class Class_2_249DE3C77F69C8BD___c : public ::System::Object
{
public:
	static ::Class_2_249DE3C77F69C8BD___c** StaticGet___9()
	{
		return (::Class_2_249DE3C77F69C8BD___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_249DE3C77F69C8BD___c_TypeDefinitionIndex)->GetStaticField(0x5E0C0);
	}
	static ::System::Func_2<::Class_2_249DE3C77F69C8BD_Class_1_9A93F927319E5AA2*, ::System::Boolean>** StaticGet___9__1_0()
	{
		return (::System::Func_2<::Class_2_249DE3C77F69C8BD_Class_1_9A93F927319E5AA2*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_249DE3C77F69C8BD___c_TypeDefinitionIndex)->GetStaticField(0x5E0C8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_249DE3C77F69C8BD___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_249DE3C77F69C8BD___C__CTOR_OFFSET))(this);
	}

	::System::Boolean _HasCustomTopPanel_b__1_0(::Class_2_249DE3C77F69C8BD_Class_1_9A93F927319E5AA2* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_249DE3C77F69C8BD_Class_1_9A93F927319E5AA2*))((::PBYTE)hIl2Cpp + CLASS_2_249DE3C77F69C8BD___C__HASCUSTOMTOPPANEL_B__1_0_OFFSET))(this, a1);
	}
};
