#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_4666E61F66433B1E;
namespace System { class String; }

#define CLASS_1_B0BA31736A3CCA24_METHOD_1_1D4018D4200358D0_1_OFFSET UNITYSDK_OFFSET(0x133A03D0)
#define CLASS_1_B0BA31736A3CCA24_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x133A0340)
#define CLASS_1_B0BA31736A3CCA24_METHOD_1_35EA095E1AFDD9C8_OFFSET UNITYSDK_OFFSET(0x133A02E0)
#define CLASS_1_B0BA31736A3CCA24__CTOR_OFFSET UNITYSDK_OFFSET(0x133A02D0)

inline static constexpr unsigned int Class_1_B0BA31736A3CCA24_TypeDefinitionIndex = 65686;

class Class_1_B0BA31736A3CCA24 : public ::System::Object
{
public:
	::Class_3_4666E61F66433B1E* Field_1_0; // 0x10
	::System::Boolean Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B0BA31736A3CCA24__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_35EA095E1AFDD9C8()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B0BA31736A3CCA24_METHOD_1_35EA095E1AFDD9C8_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B0BA31736A3CCA24_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B0BA31736A3CCA24_METHOD_1_1D4018D4200358D0_1_OFFSET))(this);
	}
};
