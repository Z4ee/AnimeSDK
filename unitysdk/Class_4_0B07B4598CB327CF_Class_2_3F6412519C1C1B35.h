#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_B60F0A00B4DBE12A_Class_1_618A19C96A416850.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_4_0B07B4598CB327CF_CLASS_2_3F6412519C1C1B35__CTOR_OFFSET UNITYSDK_OFFSET(0x13E3E0F0)

inline static constexpr unsigned int Class_4_0B07B4598CB327CF_Class_2_3F6412519C1C1B35_TypeDefinitionIndex = 59032;

class Class_4_0B07B4598CB327CF_Class_2_3F6412519C1C1B35 : public ::Class_3_B60F0A00B4DBE12A_Class_1_618A19C96A416850
{
public:
	::System::Collections::Generic::List_1<::System::String*>* Field_2_0; // 0x58
	::Foundation::ViewObject::ViewObjectHandle Field_2_1; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_0B07B4598CB327CF_CLASS_2_3F6412519C1C1B35__CTOR_OFFSET))(this);
	}
};
