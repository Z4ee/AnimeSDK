#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_190E3717882702BE.h"
#include "unitysdk/Enum_3_9BD6D4E5A68CB9EF.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define CLASS_1_90858D70BEDD91CA__CTOR_OFFSET UNITYSDK_OFFSET(0x100E2510)

inline static constexpr unsigned int Class_1_90858D70BEDD91CA_TypeDefinitionIndex = 39431;

class Class_1_90858D70BEDD91CA : public ::System::Object
{
public:
	::System::Action* Field_1_11; // 0x10
	::System::String* Field_1_0; // 0x18
	::System::Collections::Generic::IList_1<::System::String*>* Field_1_3; // 0x20
	::System::Collections::Generic::IList_1<::System::String*>* Field_1_1; // 0x28
	::System::Collections::Generic::IList_1<::UnityEngine::Color>* Field_1_2; // 0x30
	::Enum_3_190E3717882702BE Field_1_10; // 0x38
	::System::Int32 Field_1_9; // 0x3C
	::Enum_3_9BD6D4E5A68CB9EF Field_1_8; // 0x40
	::System::Boolean Field_1_6; // 0x44
	::System::Boolean Field_1_5; // 0x45
	::System::Boolean Field_1_4; // 0x46
	::System::Boolean Field_1_7; // 0x47

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_90858D70BEDD91CA__CTOR_OFFSET))(this);
	}
};
