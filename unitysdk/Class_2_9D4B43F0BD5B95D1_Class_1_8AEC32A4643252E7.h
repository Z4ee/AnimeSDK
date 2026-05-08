#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_11;
class Class_2_9D4B43F0BD5B95D1;
class Class_3_025FF4981524A424_140;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define CLASS_2_9D4B43F0BD5B95D1_CLASS_1_8AEC32A4643252E7_METHOD_1_04F02FC65FAA2E0C_OFFSET UNITYSDK_OFFSET(0xCE32F60)
#define CLASS_2_9D4B43F0BD5B95D1_CLASS_1_8AEC32A4643252E7_METHOD_1_76246C5338217F00_OFFSET UNITYSDK_OFFSET(0xCE32ED0)
#define CLASS_2_9D4B43F0BD5B95D1_CLASS_1_8AEC32A4643252E7__CTOR_OFFSET UNITYSDK_OFFSET(0xCE32EC0)

inline static constexpr unsigned int Class_2_9D4B43F0BD5B95D1_Class_1_8AEC32A4643252E7_TypeDefinitionIndex = 44622;

class Class_2_9D4B43F0BD5B95D1_Class_1_8AEC32A4643252E7 : public ::System::Object
{
public:
	::System::Action_1<::System::Action*>* Field_1_0; // 0x10
	::System::Action* Field_1_3; // 0x18
	::System::Action_1<::Class_0_16E4307DCC419505_11*>* Field_1_2; // 0x20
	::Class_2_9D4B43F0BD5B95D1* Field_1_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9D4B43F0BD5B95D1_CLASS_1_8AEC32A4643252E7__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_76246C5338217F00(::Class_3_025FF4981524A424_140* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_025FF4981524A424_140*))((::PBYTE)hIl2Cpp + CLASS_2_9D4B43F0BD5B95D1_CLASS_1_8AEC32A4643252E7_METHOD_1_76246C5338217F00_OFFSET))(this, a1);
	}

	::System::Void Method_1_04F02FC65FAA2E0C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9D4B43F0BD5B95D1_CLASS_1_8AEC32A4643252E7_METHOD_1_04F02FC65FAA2E0C_OFFSET))(this);
	}
};
