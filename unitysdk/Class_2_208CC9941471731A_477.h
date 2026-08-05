#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5DA2E7556103D5A3_437.h"
#include "unitysdk/Share/EItemType.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_639.h"

class Class_0_16E4307DCC419505_7;
namespace System { class String; }

#define CLASS_2_208CC9941471731A_477_METHOD_2_45D9055A79A021B9_OFFSET UNITYSDK_OFFSET(0x16F8FBF0)
#define CLASS_2_208CC9941471731A_477_METHOD_2_F37D4EBDF7067F90_OFFSET UNITYSDK_OFFSET(0x16F8FB50)
#define CLASS_2_208CC9941471731A_477__CTOR_OFFSET UNITYSDK_OFFSET(0x16F8FB40)

inline static constexpr unsigned int Class_2_208CC9941471731A_477_TypeDefinitionIndex = 17504;

class Class_2_208CC9941471731A_477 : public ::Class_1_5DA2E7556103D5A3_437
{
public:
	::System::Void _ctor(::Struct_2_3E75877A2888D88A_639 a1, ::Class_0_16E4307DCC419505_7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_639, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + CLASS_2_208CC9941471731A_477__CTOR_OFFSET))(this, a1, a2);
	}

	::System::String* Method_2_F37D4EBDF7067F90()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_208CC9941471731A_477_METHOD_2_F37D4EBDF7067F90_OFFSET))(this);
	}

	::Share::EItemType Method_2_45D9055A79A021B9()
	{
		return ((::Share::EItemType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_208CC9941471731A_477_METHOD_2_45D9055A79A021B9_OFFSET))(this);
	}
};
