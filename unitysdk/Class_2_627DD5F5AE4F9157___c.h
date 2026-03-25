#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_627DD5F5AE4F9157_Class_1_81099EFECC2F2A3F;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_2_627DD5F5AE4F9157___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA9D5150)
#define CLASS_2_627DD5F5AE4F9157___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA9D5180)
#define CLASS_2_627DD5F5AE4F9157___C__HASCUSTOMTOPPANEL_B__0_0_OFFSET UNITYSDK_OFFSET(0xA9D5190)

inline static constexpr unsigned int Class_2_627DD5F5AE4F9157___c_TypeDefinitionIndex = 59005;

class Class_2_627DD5F5AE4F9157___c : public ::System::Object
{
public:
	static ::Class_2_627DD5F5AE4F9157___c** StaticGet___9()
	{
		return (::Class_2_627DD5F5AE4F9157___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_627DD5F5AE4F9157___c_TypeDefinitionIndex)->GetStaticField(0x48D50);
	}
	static ::System::Func_2<::Class_2_627DD5F5AE4F9157_Class_1_81099EFECC2F2A3F*, ::System::Boolean>** StaticGet___9__0_0()
	{
		return (::System::Func_2<::Class_2_627DD5F5AE4F9157_Class_1_81099EFECC2F2A3F*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_627DD5F5AE4F9157___c_TypeDefinitionIndex)->GetStaticField(0x48D58);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_627DD5F5AE4F9157___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_627DD5F5AE4F9157___C__CTOR_OFFSET))(this);
	}

	::System::Boolean _HasCustomTopPanel_b__0_0(::Class_2_627DD5F5AE4F9157_Class_1_81099EFECC2F2A3F* config)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_627DD5F5AE4F9157_Class_1_81099EFECC2F2A3F*))((::PBYTE)hIl2Cpp + CLASS_2_627DD5F5AE4F9157___C__HASCUSTOMTOPPANEL_B__0_0_OFFSET))(this, config);
	}
};
