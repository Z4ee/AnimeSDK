#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_190E3717882702BE_4.h"
#include "unitysdk/Enum_3_9BD6D4E5A68CB9EF.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define CLASS_1_90858D70BEDD91CA__CTOR_OFFSET UNITYSDK_OFFSET(0x16C4C2D0)

inline static constexpr unsigned int Class_1_90858D70BEDD91CA_TypeDefinitionIndex = 78962;

class Class_1_90858D70BEDD91CA : public ::System::Object
{
public:
	::System::Collections::Generic::IList_1<::UnityEngine::Color>* Field_1_2; // 0x10
	::System::Collections::Generic::IList_1<::System::String*>* Field_1_1; // 0x18
	::System::Action* Field_1_11; // 0x20
	::System::Collections::Generic::IList_1<::System::String*>* Field_1_3; // 0x28
	::System::String* Field_1_0; // 0x30
	::System::Boolean Field_1_4; // 0x38
	::System::Boolean Field_1_5; // 0x39
	::System::Boolean Field_1_7; // 0x3A
	::System::Boolean Field_1_6; // 0x3B
	::Enum_3_9BD6D4E5A68CB9EF Field_1_8; // 0x3C
	::Enum_3_190E3717882702BE_4 Field_1_10; // 0x40
	::System::Int32 Field_1_9; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_90858D70BEDD91CA__CTOR_OFFSET))(this);
	}
};
