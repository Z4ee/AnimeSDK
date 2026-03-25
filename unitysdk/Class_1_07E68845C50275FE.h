#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_07E68845C50275FE_METHOD_1_B23459D252D332CB_OFFSET UNITYSDK_OFFSET(0x10970140)
#define CLASS_1_07E68845C50275FE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x10970120)
#define CLASS_1_07E68845C50275FE__CTOR_OFFSET UNITYSDK_OFFSET(0x10970100)

inline static constexpr unsigned int Class_1_07E68845C50275FE_TypeDefinitionIndex = 56722;

class Class_1_07E68845C50275FE : public ::System::Object
{
public:
	::System::Single Field_1_1; // 0x10
	::System::UInt16 Field_1_0; // 0x14
	::System::Single Field_1_2; // 0x18
	::System::Single Field_1_3; // 0x1C

	::System::Void _ctor(::System::UInt16 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + CLASS_1_07E68845C50275FE__CTOR_OFFSET))(this, a1);
	}

	::System::Void _ctor_1(::System::UInt16 a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_07E68845C50275FE__CTOR_1_OFFSET))(this, a1, a2, a3, a4);
	}

	static ::Class_1_07E68845C50275FE* Method_1_B23459D252D332CB(::System::UInt16 a1)
	{
		return ((::Class_1_07E68845C50275FE*(*)(::System::UInt16))((::PBYTE)hIl2Cpp + CLASS_1_07E68845C50275FE_METHOD_1_B23459D252D332CB_OFFSET))(a1);
	}
};
