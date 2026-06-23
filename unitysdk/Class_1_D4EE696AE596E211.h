#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_77D255857CC40452_1;

#define CLASS_1_D4EE696AE596E211__CTOR_OFFSET UNITYSDK_OFFSET(0x123EE050)

inline static constexpr unsigned int Class_1_D4EE696AE596E211_TypeDefinitionIndex = 68177;

class Class_1_D4EE696AE596E211 : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_Field_1_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D4EE696AE596E211_TypeDefinitionIndex)->GetStaticField(0xE290);
	}
	::Class_1_77D255857CC40452_1* Field_1_2; // 0x10
	::System::Int32 Field_1_3; // 0x18
	::System::Single Field_1_5; // 0x1C
	::System::Single Field_1_1; // 0x20
	::System::Single Field_1_4; // 0x24

	::System::Void _ctor(::Class_1_77D255857CC40452_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_77D255857CC40452_1*))((::PBYTE)hIl2Cpp + CLASS_1_D4EE696AE596E211__CTOR_OFFSET))(this, a1);
	}
};
