#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_E0B50EA26E4C6DFA__CTOR_OFFSET UNITYSDK_OFFSET(0x11C43EA0)

inline static constexpr unsigned int Class_1_E0B50EA26E4C6DFA_TypeDefinitionIndex = 68281;

class Class_1_E0B50EA26E4C6DFA : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>* Field_1_1; // 0x10
	::System::String* Field_1_2; // 0x18
	::System::Boolean Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E0B50EA26E4C6DFA__CTOR_OFFSET))(this);
	}
};
