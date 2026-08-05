#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class RectTransform; }

#define CLASS_1_43BD383C98B4C0C5_56__CTOR_OFFSET UNITYSDK_OFFSET(0x18DAD010)

inline static constexpr unsigned int Class_1_43BD383C98B4C0C5_56_TypeDefinitionIndex = 60861;

class Class_1_43BD383C98B4C0C5_56 : public ::System::Object
{
public:
	::System::String* Field_1_11; // 0x10
	::UnityEngine::RectTransform* Field_1_9; // 0x18
	::UnityEngine::RectTransform* Field_1_13; // 0x20
	::System::Action_1<::System::Int32>* Field_1_14; // 0x28
	::System::Action_1<::System::Int32>* Field_1_8; // 0x30
	::System::Action_1<::System::Int32>* Field_1_12; // 0x38
	::System::String* Field_1_0; // 0x40
	::System::String* Field_1_7; // 0x48
	::System::Action* Field_1_15; // 0x50
	::System::Int32 Field_1_10; // 0x58
	::System::Int32 Field_1_6; // 0x5C
	::System::Int32 Field_1_5; // 0x60
	::System::Int32 Field_1_4; // 0x64
	::System::Int32 Field_1_1; // 0x68
	::System::Int32 Field_1_2; // 0x6C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_56__CTOR_OFFSET))(this);
	}
};
