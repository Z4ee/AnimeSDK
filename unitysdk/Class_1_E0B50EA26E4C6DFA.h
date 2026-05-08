#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_E0B50EA26E4C6DFA__CTOR_OFFSET UNITYSDK_OFFSET(0x14A92CA0)

inline static constexpr unsigned int Class_1_E0B50EA26E4C6DFA_TypeDefinitionIndex = 61592;

class Class_1_E0B50EA26E4C6DFA : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>* Field_1_1; // 0x18
	::System::Boolean Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E0B50EA26E4C6DFA__CTOR_OFFSET))(this);
	}
};
