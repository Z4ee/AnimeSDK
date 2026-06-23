#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_40CD888D5D4FCB5B.h"

#define CLASS_3_CF5A99356700F826_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x12E91E00)
#define CLASS_3_CF5A99356700F826_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x12E91E90)
#define CLASS_3_CF5A99356700F826__CTOR_OFFSET UNITYSDK_OFFSET(0x12E91E40)

inline static constexpr unsigned int Class_3_CF5A99356700F826_TypeDefinitionIndex = 85605;

class Class_3_CF5A99356700F826 : public ::Class_2_40CD888D5D4FCB5B
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CF5A99356700F826__CTOR_OFFSET))(this);
	}

	::System::Void FixedUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CF5A99356700F826_FIXEDUPDATE_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CF5A99356700F826_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
