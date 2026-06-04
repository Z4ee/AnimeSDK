#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LimaoNewsOfficeSurveyType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_1_3BBF16BB1262DAB1_METHOD_1_1F29F81CADD13A09_OFFSET UNITYSDK_OFFSET(0x1919D9D0)
#define CLASS_1_3BBF16BB1262DAB1__CTOR_OFFSET UNITYSDK_OFFSET(0x1919DF30)

inline static constexpr unsigned int Class_1_3BBF16BB1262DAB1_TypeDefinitionIndex = 13282;

class Class_1_3BBF16BB1262DAB1 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::Il2CppArray<::System::UInt32>* Field_1_1; // 0x18
	::Il2CppArray<::System::UInt32>* Field_1_2; // 0x20
	::Il2CppArray<::System::UInt32>* Field_1_3; // 0x28
	::System::String* Field_1_4; // 0x30
	::Il2CppArray<::System::UInt32>* Field_1_5; // 0x38
	::Il2CppArray<::System::UInt32>* Field_1_6; // 0x40
	::Il2CppArray<::System::UInt32>* Field_1_7; // 0x48
	::Il2CppArray<::System::UInt32>* Field_1_8; // 0x50
	::Il2CppArray<::System::UInt32>* Field_1_9; // 0x58
	::System::UInt32 Field_1_10; // 0x60
	::System::UInt32 Field_1_11; // 0x64
	::System::Boolean Field_1_12; // 0x68
	::System::UInt32 Field_1_13; // 0x6C
	::System::UInt32 Field_1_14; // 0x70
	::RPG::GameCore::LimaoNewsOfficeSurveyType Field_1_15; // 0x74

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3BBF16BB1262DAB1__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_1F29F81CADD13A09(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_3BBF16BB1262DAB1*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_3BBF16BB1262DAB1*&))((::PBYTE)hIl2Cpp + CLASS_1_3BBF16BB1262DAB1_METHOD_1_1F29F81CADD13A09_OFFSET))(a1, a2);
	}
};
