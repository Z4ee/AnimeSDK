#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_5886D18280A690BD.h"
#include "unitysdk/Struct_2_E89D96144D6E93F8.h"
#include "unitysdk/System/Object.h"

class Class_1_7DB0AAEAFBAE8CC7;
class Class_1_CF009758DC576A56;
class Class_2_4BF2ECB2D94E7F27;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_5092FCA5A67513C7__CTOR_OFFSET UNITYSDK_OFFSET(0x14386710)

inline static constexpr unsigned int Class_1_5092FCA5A67513C7_TypeDefinitionIndex = 53699;

class Class_1_5092FCA5A67513C7 : public ::System::Object
{
public:
	::Class_1_7DB0AAEAFBAE8CC7* Field_1_3; // 0x10
	::System::String* Field_1_0; // 0x18
	::System::Collections::Generic::List_1<::Class_1_CF009758DC576A56*>* Field_1_5; // 0x20
	::Class_2_4BF2ECB2D94E7F27* Field_1_4; // 0x28
	::System::Collections::Generic::List_1<::Struct_2_E89D96144D6E93F8>* Field_1_2; // 0x30
	::Enum_3_5886D18280A690BD Field_1_1; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5092FCA5A67513C7__CTOR_OFFSET))(this);
	}
};
