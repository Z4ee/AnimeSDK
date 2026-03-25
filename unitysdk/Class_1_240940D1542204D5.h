#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_240940D1542204D5_Struct_2_74774458D8863C06.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_240940D1542204D5_METHOD_1_AB241FEFC4DC7E28_OFFSET UNITYSDK_OFFSET(0x10BEB590)

inline static constexpr unsigned int Class_1_240940D1542204D5_TypeDefinitionIndex = 44020;

class Class_1_240940D1542204D5 : public ::System::Object
{
public:
	static ::System::String* Method_1_AB241FEFC4DC7E28(::System::Collections::Generic::List_1<::Class_1_240940D1542204D5_Struct_2_74774458D8863C06>*& a1, ::RPG::GameCore::TaskContext* a2)
	{
		return ((::System::String*(*)(::System::Collections::Generic::List_1<::Class_1_240940D1542204D5_Struct_2_74774458D8863C06>*&, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_240940D1542204D5_METHOD_1_AB241FEFC4DC7E28_OFFSET))(a1, a2);
	}
};
