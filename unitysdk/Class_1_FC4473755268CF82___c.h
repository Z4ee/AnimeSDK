#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_FC4473755268CF82;

#define CLASS_1_FC4473755268CF82___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA11600)
#define CLASS_1_FC4473755268CF82___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1EA11640)
#define CLASS_1_FC4473755268CF82___C___CCTOR_B__32_0_OFFSET UNITYSDK_OFFSET(0x1EA11650)

inline static constexpr unsigned int Class_1_FC4473755268CF82___c_TypeDefinitionIndex = 25018;

class Class_1_FC4473755268CF82___c : public ::System::Object
{
public:
	static ::Class_1_FC4473755268CF82___c** StaticGet___9()
	{
		return (::Class_1_FC4473755268CF82___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FC4473755268CF82___c_TypeDefinitionIndex)->GetStaticField(0x357C0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_FC4473755268CF82___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FC4473755268CF82___C__CTOR_OFFSET))(this);
	}

	::Class_1_FC4473755268CF82* __cctor_b__32_0()
	{
		return ((::Class_1_FC4473755268CF82*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FC4473755268CF82___C___CCTOR_B__32_0_OFFSET))(this);
	}
};
