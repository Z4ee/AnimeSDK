#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_36;
class Class_3_025FF4981524A424_401;
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_2_06412F5C067EBE07_CLASS_1_30981193469FC26C_METHOD_1_BA03FB322C6038D0_OFFSET UNITYSDK_OFFSET(0x1826C910)
#define CLASS_2_06412F5C067EBE07_CLASS_1_30981193469FC26C__CTOR_OFFSET UNITYSDK_OFFSET(0x1826C900)

inline static constexpr unsigned int Class_2_06412F5C067EBE07_Class_1_30981193469FC26C_TypeDefinitionIndex = 80010;

class Class_2_06412F5C067EBE07_Class_1_30981193469FC26C : public ::System::Object
{
public:
	::System::Collections::Generic::IEnumerable_1<::System::Int32>* Field_1_1; // 0x10
	::System::Action_1<::Class_3_025FF4981524A424_401*>* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_06412F5C067EBE07_CLASS_1_30981193469FC26C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_BA03FB322C6038D0(::Class_0_16E4307DCC419505_36* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_36*))((::PBYTE)hIl2Cpp + CLASS_2_06412F5C067EBE07_CLASS_1_30981193469FC26C_METHOD_1_BA03FB322C6038D0_OFFSET))(this, a1);
	}
};
