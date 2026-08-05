#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_CEC585D0736F3660;
namespace System { template <typename T> class Action_1; }

#define CLASS_1_D6A378FF4AC4FA02__CTOR_OFFSET UNITYSDK_OFFSET(0x168204E0)

inline static constexpr unsigned int Class_1_D6A378FF4AC4FA02_TypeDefinitionIndex = 66502;

class Class_1_D6A378FF4AC4FA02 : public ::System::Object
{
public:
	::System::Action_1<::Class_2_CEC585D0736F3660*>* Field_1_7; // 0x10
	::System::Action_1<::Class_2_CEC585D0736F3660*>* Field_1_6; // 0x18
	::System::Int32 Field_1_5; // 0x20
	::System::Int32 Field_1_4; // 0x24
	::System::Int32 Field_1_1; // 0x28
	::System::Int32 Field_1_0; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D6A378FF4AC4FA02__CTOR_OFFSET))(this);
	}
};
