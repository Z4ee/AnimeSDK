#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_424581DF7DB1F4F0_Struct_2_74774458D8863C06.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_424581DF7DB1F4F0_METHOD_1_F0321716B632E617_OFFSET UNITYSDK_OFFSET(0xBEAD2D0)

inline static constexpr unsigned int Class_1_424581DF7DB1F4F0_TypeDefinitionIndex = 55197;

class Class_1_424581DF7DB1F4F0 : public ::System::Object
{
public:
	static ::System::String* Method_1_F0321716B632E617(::System::Collections::Generic::List_1<::Class_1_424581DF7DB1F4F0_Struct_2_74774458D8863C06>*& a1, ::RPG::GameCore::TaskContext* a2)
	{
		return ((::System::String*(*)(::System::Collections::Generic::List_1<::Class_1_424581DF7DB1F4F0_Struct_2_74774458D8863C06>*&, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_424581DF7DB1F4F0_METHOD_1_F0321716B632E617_OFFSET))(a1, a2);
	}
};
