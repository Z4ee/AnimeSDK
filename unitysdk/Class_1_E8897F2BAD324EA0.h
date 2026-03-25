#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_0C58AD91B0F4D809;
namespace System { template <typename T> class Action_1; }

#define CLASS_1_E8897F2BAD324EA0__CTOR_OFFSET UNITYSDK_OFFSET(0x169DECE0)

inline static constexpr unsigned int Class_1_E8897F2BAD324EA0_TypeDefinitionIndex = 33269;

class Class_1_E8897F2BAD324EA0 : public ::System::Object
{
public:
	::System::Action_1<::Class_2_0C58AD91B0F4D809*>* Field_1_4; // 0x10
	::System::Action_1<::Class_2_0C58AD91B0F4D809*>* Field_1_5; // 0x18
	::System::Action_1<::Class_2_0C58AD91B0F4D809*>* Field_1_1; // 0x20
	::System::Action_1<::Class_2_0C58AD91B0F4D809*>* Field_1_2; // 0x28
	::System::Boolean Field_1_3; // 0x30
	::System::Boolean Field_1_6; // 0x31
	::System::Boolean Field_1_0; // 0x32

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E8897F2BAD324EA0__CTOR_OFFSET))(this);
	}
};
