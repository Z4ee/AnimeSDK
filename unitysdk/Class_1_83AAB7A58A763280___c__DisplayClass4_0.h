#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_376;
class Class_0_16E4307DCC419505_377;
class Class_0_16E4307DCC419505_378;
namespace System { class String; }
namespace System::Reflection { class PropertyInfo; }

#define CLASS_1_83AAB7A58A763280___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC62250)
#define CLASS_1_83AAB7A58A763280___C__DISPLAYCLASS4_0___BUILDPROPERTYMAPPER_B__0_OFFSET UNITYSDK_OFFSET(0x1CC639C0)

inline static constexpr unsigned int Class_1_83AAB7A58A763280___c__DisplayClass4_0_TypeDefinitionIndex = 43886;

class Class_1_83AAB7A58A763280___c__DisplayClass4_0 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_378* converter; // 0x10
	::System::Reflection::PropertyInfo* property; // 0x18
	::Class_0_16E4307DCC419505_377* query; // 0x20
	::System::String* fullKey; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_83AAB7A58A763280___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
	}

	::System::Void __BuildPropertyMapper_b__0(::System::Object* a1, ::Class_0_16E4307DCC419505_376* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::Class_0_16E4307DCC419505_376*))((::PBYTE)hIl2Cpp + CLASS_1_83AAB7A58A763280___C__DISPLAYCLASS4_0___BUILDPROPERTYMAPPER_B__0_OFFSET))(this, a1, a2);
	}
};
