#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_74CAB4AF4BD87DD8_CLASS_1_E1BABBB1B00D62E2_METHOD_1_6FAF476D3D8CF135_OFFSET UNITYSDK_OFFSET(0x1DFC6EB0)
#define CLASS_1_74CAB4AF4BD87DD8_CLASS_1_E1BABBB1B00D62E2__CTOR_OFFSET UNITYSDK_OFFSET(0x1DFC6EA0)

inline static constexpr unsigned int Class_1_74CAB4AF4BD87DD8_Class_1_E1BABBB1B00D62E2_TypeDefinitionIndex = 30335;

class Class_1_74CAB4AF4BD87DD8_Class_1_E1BABBB1B00D62E2 : public ::System::Object
{
public:
	::System::Func_2<::System::Type*, ::System::Boolean>* Field_1_0; // 0x10
	::System::Boolean Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_74CAB4AF4BD87DD8_CLASS_1_E1BABBB1B00D62E2__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_6FAF476D3D8CF135(::System::Type* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + CLASS_1_74CAB4AF4BD87DD8_CLASS_1_E1BABBB1B00D62E2_METHOD_1_6FAF476D3D8CF135_OFFSET))(this, a1);
	}
};
