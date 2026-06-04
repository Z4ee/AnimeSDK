#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_B8E38BF47138A2E5;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_D2FFFE31BCBDFD37__CTOR_OFFSET UNITYSDK_OFFSET(0x18D31950)

inline static constexpr unsigned int Class_1_D2FFFE31BCBDFD37_TypeDefinitionIndex = 39824;

class Class_1_D2FFFE31BCBDFD37 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::System::Action_1<::Class_2_B8E38BF47138A2E5*>* Field_1_1; // 0x18
	::System::Action_1<::Class_2_B8E38BF47138A2E5*>* Field_1_2; // 0x20
	::System::Action_1<::Class_2_B8E38BF47138A2E5*>* Field_1_3; // 0x28
	::System::Action_1<::Class_2_B8E38BF47138A2E5*>* Field_1_4; // 0x30
	::System::Boolean Field_1_5; // 0x38
	::System::Boolean Field_1_6; // 0x39
	::System::Boolean Field_1_7; // 0x3A

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D2FFFE31BCBDFD37__CTOR_OFFSET))(this);
	}
};
