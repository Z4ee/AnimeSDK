#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class Class_1_0486E82E26AF727D_Class_1_353E09EF44780E99_1;
class Class_1_FA69783D87A8B3FF;

#define CLASS_1_0486E82E26AF727D_CLASS_1_F31BD254FBA8AA38_METHOD_1_CFC95121222309BD_OFFSET UNITYSDK_OFFSET(0x16F56030)
#define CLASS_1_0486E82E26AF727D_CLASS_1_F31BD254FBA8AA38__CTOR_OFFSET UNITYSDK_OFFSET(0x16F56020)

inline static constexpr unsigned int Class_1_0486E82E26AF727D_Class_1_F31BD254FBA8AA38_TypeDefinitionIndex = 82638;

class Class_1_0486E82E26AF727D_Class_1_F31BD254FBA8AA38 : public ::System::Object
{
public:
	::Foundation::AssetPath Field_1_1; // 0x10
	::Class_1_0486E82E26AF727D_Class_1_353E09EF44780E99_1* Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0486E82E26AF727D_CLASS_1_F31BD254FBA8AA38__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CFC95121222309BD(::Class_1_FA69783D87A8B3FF* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FA69783D87A8B3FF*))((::PBYTE)hIl2Cpp + CLASS_1_0486E82E26AF727D_CLASS_1_F31BD254FBA8AA38_METHOD_1_CFC95121222309BD_OFFSET))(this, a1);
	}
};
