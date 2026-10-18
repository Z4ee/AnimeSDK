#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_F138DBFC3396EA15;

#define CLASS_1_F138DBFC3396EA15___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6EEAC0)
#define CLASS_1_F138DBFC3396EA15___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1E6EEB00)
#define CLASS_1_F138DBFC3396EA15___C___CCTOR_B__48_0_OFFSET UNITYSDK_OFFSET(0x1E6EEB10)

inline static constexpr unsigned int Class_1_F138DBFC3396EA15___c_TypeDefinitionIndex = 25111;

class Class_1_F138DBFC3396EA15___c : public ::System::Object
{
public:
	static ::Class_1_F138DBFC3396EA15___c** StaticGet___9()
	{
		return (::Class_1_F138DBFC3396EA15___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F138DBFC3396EA15___c_TypeDefinitionIndex)->GetStaticField(0x5C680);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F138DBFC3396EA15___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F138DBFC3396EA15___C__CTOR_OFFSET))(this);
	}

	::Class_1_F138DBFC3396EA15* __cctor_b__48_0()
	{
		return ((::Class_1_F138DBFC3396EA15*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F138DBFC3396EA15___C___CCTOR_B__48_0_OFFSET))(this);
	}
};
