#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_2DDAC2F6C97EB8AD;
class Class_1_D32D456F32705B6F;

#define CLASS_1_8709217D255ACE0E_METHOD_1_6173AF17811AED4B_OFFSET UNITYSDK_OFFSET(0x12B5A620)
#define CLASS_1_8709217D255ACE0E__CTOR_1_OFFSET UNITYSDK_OFFSET(0x12B5A590)
#define CLASS_1_8709217D255ACE0E__CTOR_OFFSET UNITYSDK_OFFSET(0x12B5A510)

inline static constexpr unsigned int Class_1_8709217D255ACE0E_TypeDefinitionIndex = 52391;

class Class_1_8709217D255ACE0E : public ::System::Object
{
public:
	::Class_1_2DDAC2F6C97EB8AD* Field_1_1; // 0x10
	::Class_1_D32D456F32705B6F* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8709217D255ACE0E__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_2DDAC2F6C97EB8AD* a1, ::Class_1_D32D456F32705B6F* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2DDAC2F6C97EB8AD*, ::Class_1_D32D456F32705B6F*))((::PBYTE)hIl2Cpp + CLASS_1_8709217D255ACE0E__CTOR_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_6173AF17811AED4B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8709217D255ACE0E_METHOD_1_6173AF17811AED4B_OFFSET))(this);
	}
};
