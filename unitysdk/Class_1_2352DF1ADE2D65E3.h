#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Share/EItemType.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_2352DF1ADE2D65E3__CTOR_1_OFFSET UNITYSDK_OFFSET(0x149329B0)
#define CLASS_1_2352DF1ADE2D65E3__CTOR_OFFSET UNITYSDK_OFFSET(0x149329A0)

inline static constexpr unsigned int Class_1_2352DF1ADE2D65E3_TypeDefinitionIndex = 52453;

class Class_1_2352DF1ADE2D65E3 : public ::System::Object
{
public:
	::Share::EItemType Field_1_0; // 0x10
	::System::UInt32 Field_1_7; // 0x14
	::System::Int64 Field_1_6; // 0x18

	::System::Void _ctor(::Share::EItemType a1, ::System::UInt32 a2, ::System::Int64 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Share::EItemType, ::System::UInt32, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_2352DF1ADE2D65E3__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void _ctor_1(::Class_1_2352DF1ADE2D65E3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2352DF1ADE2D65E3*))((::PBYTE)hIl2Cpp + CLASS_1_2352DF1ADE2D65E3__CTOR_1_OFFSET))(this, a1);
	}
};
