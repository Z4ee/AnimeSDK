#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0D6706375CDAAE8C;

#define CLASS_1_4F9417780723166C_METHOD_1_0581C760CB3540F9_OFFSET UNITYSDK_OFFSET(0x12560BB0)
#define CLASS_1_4F9417780723166C__CTOR_OFFSET UNITYSDK_OFFSET(0x12560BA0)

inline static constexpr unsigned int Class_1_4F9417780723166C_TypeDefinitionIndex = 55795;

class Class_1_4F9417780723166C : public ::System::Object
{
public:
	::Class_1_0D6706375CDAAE8C* Field_1_0; // 0x10
	::System::Boolean Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4F9417780723166C__CTOR_OFFSET))(this);
	}

	::Class_1_4F9417780723166C* Method_1_0581C760CB3540F9()
	{
		return ((::Class_1_4F9417780723166C*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4F9417780723166C_METHOD_1_0581C760CB3540F9_OFFSET))(this);
	}
};
