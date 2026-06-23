#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_601FA52CA5E757A0_1;
template <typename T> class Class_1_8CC15846339E7FB0;

#define CLASS_1_A52448A5FC9E30AD__CTOR_OFFSET UNITYSDK_OFFSET(0x17745A40)

inline static constexpr unsigned int Class_1_A52448A5FC9E30AD_TypeDefinitionIndex = 86160;

class Class_1_A52448A5FC9E30AD : public ::System::Object
{
public:
	::Class_1_8CC15846339E7FB0<::Class_3_601FA52CA5E757A0_1*>* Field_1_0; // 0x10
	::System::Int32 Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A52448A5FC9E30AD__CTOR_OFFSET))(this);
	}
};
