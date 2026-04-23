#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_F5B29424F69AFD27_Class_1_9A93F927319E5AA2;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_2_F5B29424F69AFD27___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x11824ED0)
#define CLASS_2_F5B29424F69AFD27___C__CTOR_OFFSET UNITYSDK_OFFSET(0x11824F00)
#define CLASS_2_F5B29424F69AFD27___C__HASCUSTOMTOPPANEL_B__0_0_OFFSET UNITYSDK_OFFSET(0x11824F10)

inline static constexpr unsigned int Class_2_F5B29424F69AFD27___c_TypeDefinitionIndex = 66386;

class Class_2_F5B29424F69AFD27___c : public ::System::Object
{
public:
	static ::Class_2_F5B29424F69AFD27___c** StaticGet___9()
	{
		return (::Class_2_F5B29424F69AFD27___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_F5B29424F69AFD27___c_TypeDefinitionIndex)->GetStaticField(0x149B0);
	}
	static ::System::Func_2<::Class_2_F5B29424F69AFD27_Class_1_9A93F927319E5AA2*, ::System::Boolean>** StaticGet___9__0_0()
	{
		return (::System::Func_2<::Class_2_F5B29424F69AFD27_Class_1_9A93F927319E5AA2*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_F5B29424F69AFD27___c_TypeDefinitionIndex)->GetStaticField(0x149B8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_F5B29424F69AFD27___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F5B29424F69AFD27___C__CTOR_OFFSET))(this);
	}

	::System::Boolean _HasCustomTopPanel_b__0_0(::Class_2_F5B29424F69AFD27_Class_1_9A93F927319E5AA2* config)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_F5B29424F69AFD27_Class_1_9A93F927319E5AA2*))((::PBYTE)hIl2Cpp + CLASS_2_F5B29424F69AFD27___C__HASCUSTOMTOPPANEL_B__0_0_OFFSET))(this, config);
	}
};
