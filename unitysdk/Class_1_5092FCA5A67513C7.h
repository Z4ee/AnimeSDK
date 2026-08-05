#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_5886D18280A690BD.h"
#include "unitysdk/Struct_2_94A0E3A9A04C3F23.h"
#include "unitysdk/System/Object.h"

class Class_1_3716C67E0D738B84;
class Class_1_7DB0AAEAFBAE8CC7;
class Class_2_4BF2ECB2D94E7F27;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_5092FCA5A67513C7__CTOR_OFFSET UNITYSDK_OFFSET(0x133F5FA0)

inline static constexpr unsigned int Class_1_5092FCA5A67513C7_TypeDefinitionIndex = 76814;

class Class_1_5092FCA5A67513C7 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::Class_1_3716C67E0D738B84*>* Field_1_11; // 0x18
	::System::Collections::Generic::List_1<::Struct_2_94A0E3A9A04C3F23>* Field_1_6; // 0x20
	::Class_2_4BF2ECB2D94E7F27* Field_1_4; // 0x28
	::Class_1_7DB0AAEAFBAE8CC7* Field_1_5; // 0x30
	::Enum_3_5886D18280A690BD Field_1_7; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5092FCA5A67513C7__CTOR_OFFSET))(this);
	}
};
