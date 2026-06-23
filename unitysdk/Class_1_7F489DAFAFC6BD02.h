#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_7F489DAFAFC6BD02_Enum_3_19858567C44E2AEF.h"
#include "unitysdk/Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_7F489DAFAFC6BD02__CTOR_OFFSET UNITYSDK_OFFSET(0x15C88790)

inline static constexpr unsigned int Class_1_7F489DAFAFC6BD02_TypeDefinitionIndex = 51634;

class Class_1_7F489DAFAFC6BD02 : public ::System::Object
{
public:
	::System::String* Field_1_1; // 0x10
	::System::String* Field_1_5; // 0x18
	::System::String* Field_1_2; // 0x20
	::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>* Field_1_3; // 0x28
	::System::Int32 Field_1_4; // 0x30
	::Class_1_7F489DAFAFC6BD02_Enum_3_19858567C44E2AEF Field_1_0; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7F489DAFAFC6BD02__CTOR_OFFSET))(this);
	}
};
