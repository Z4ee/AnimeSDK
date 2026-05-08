#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_601FA52CA5E757A0;
template <typename T> class Class_1_DD0DD411D84DAED3;

#define CLASS_1_A52448A5FC9E30AD__CTOR_OFFSET UNITYSDK_OFFSET(0xFF34580)

inline static constexpr unsigned int Class_1_A52448A5FC9E30AD_TypeDefinitionIndex = 59809;

class Class_1_A52448A5FC9E30AD : public ::System::Object
{
public:
	::Class_1_DD0DD411D84DAED3<::Class_3_601FA52CA5E757A0*>* Field_1_0; // 0x10
	::System::Int32 Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A52448A5FC9E30AD__CTOR_OFFSET))(this);
	}
};
