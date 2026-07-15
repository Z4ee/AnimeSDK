#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_B26E06FC40F846CD;

#define CLASS_1_5986F534F0638CE0_METHOD_1_4629F8F9176640A6_OFFSET UNITYSDK_OFFSET(0x17540F30)
#define CLASS_1_5986F534F0638CE0_METHOD_1_D2809205008ACF99_OFFSET UNITYSDK_OFFSET(0x17540F90)
#define CLASS_1_5986F534F0638CE0__CTOR_OFFSET UNITYSDK_OFFSET(0x17540EC0)

inline static constexpr unsigned int Class_1_5986F534F0638CE0_TypeDefinitionIndex = 75869;

class Class_1_5986F534F0638CE0 : public ::System::Object
{
public:
	::Class_1_B26E06FC40F846CD* Field_1_0; // 0x10

	::System::Void _ctor(::Class_1_B26E06FC40F846CD* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B26E06FC40F846CD*))((::PBYTE)hIl2Cpp + CLASS_1_5986F534F0638CE0__CTOR_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_4629F8F9176640A6()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5986F534F0638CE0_METHOD_1_4629F8F9176640A6_OFFSET))(this);
	}

	::System::Boolean Method_1_D2809205008ACF99()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5986F534F0638CE0_METHOD_1_D2809205008ACF99_OFFSET))(this);
	}
};
