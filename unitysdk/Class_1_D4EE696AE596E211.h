#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_77D255857CC40452;

#define CLASS_1_D4EE696AE596E211__CTOR_OFFSET UNITYSDK_OFFSET(0x18CD0050)

inline static constexpr unsigned int Class_1_D4EE696AE596E211_TypeDefinitionIndex = 55494;

class Class_1_D4EE696AE596E211 : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_Field_1_3()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D4EE696AE596E211_TypeDefinitionIndex)->GetStaticField(0xC580);
	}
	::Class_1_77D255857CC40452* Field_1_1; // 0x10
	::System::Single Field_1_7; // 0x18
	::System::Single Field_1_2; // 0x1C
	::System::Single Field_1_6; // 0x20
	::System::Int32 Field_1_0; // 0x24

	::System::Void _ctor(::Class_1_77D255857CC40452* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_77D255857CC40452*))((::PBYTE)hIl2Cpp + CLASS_1_D4EE696AE596E211__CTOR_OFFSET))(this, a1);
	}
};
