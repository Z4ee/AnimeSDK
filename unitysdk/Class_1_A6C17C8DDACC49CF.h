#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DF38AA4A3E338023.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_A6C17C8DDACC49CF_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0xFC29680)
#define CLASS_1_A6C17C8DDACC49CF__CTOR_OFFSET UNITYSDK_OFFSET(0xFC29670)

inline static constexpr unsigned int Class_1_A6C17C8DDACC49CF_TypeDefinitionIndex = 55728;

class Class_1_A6C17C8DDACC49CF : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_1; // 0x10
	::System::String* Field_1_2; // 0x18
	::System::Action_1<::System::UInt32>* Field_1_5; // 0x20
	::Enum_3_DF38AA4A3E338023 Field_1_0; // 0x28
	::System::Boolean Field_1_7; // 0x2C
	::System::Boolean Field_1_3; // 0x2D
	::System::UInt32 Field_1_6; // 0x30
	::System::Nullable_1<::System::UInt32> Field_1_4; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A6C17C8DDACC49CF__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A6C17C8DDACC49CF_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}
};
