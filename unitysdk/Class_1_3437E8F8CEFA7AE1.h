#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_3437E8F8CEFA7AE1_Enum_3_19858567C44E2AEF.h"
#include "unitysdk/Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_3437E8F8CEFA7AE1__CTOR_OFFSET UNITYSDK_OFFSET(0x165EF5D0)

inline static constexpr unsigned int Class_1_3437E8F8CEFA7AE1_TypeDefinitionIndex = 51239;

class Class_1_3437E8F8CEFA7AE1 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::System::String* Field_1_4; // 0x18
	::System::Action_1<::System::Int32>* Field_1_11; // 0x20
	::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>* Field_1_6; // 0x28
	::System::String* Field_1_7; // 0x30
	::System::Int32 Field_1_5; // 0x38
	::Class_1_3437E8F8CEFA7AE1_Enum_3_19858567C44E2AEF Field_1_1; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3437E8F8CEFA7AE1__CTOR_OFFSET))(this);
	}
};
