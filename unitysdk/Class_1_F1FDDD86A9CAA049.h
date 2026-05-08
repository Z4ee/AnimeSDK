#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_9E7B88C501101AD5.h"
#include "unitysdk/System/Object.h"

namespace SimpleJSON { class JSONNode; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_F1FDDD86A9CAA049_METHOD_1_3E4019E45D8A66ED_OFFSET UNITYSDK_OFFSET(0xF9DD3D0)
#define CLASS_1_F1FDDD86A9CAA049_METHOD_1_4CCB11848FC09151_OFFSET UNITYSDK_OFFSET(0xF9DC960)
#define CLASS_1_F1FDDD86A9CAA049_METHOD_1_A12F5FBC26D4F36B_OFFSET UNITYSDK_OFFSET(0xF9DCA50)
#define CLASS_1_F1FDDD86A9CAA049__CTOR_OFFSET UNITYSDK_OFFSET(0xF9DC910)

inline static constexpr unsigned int Class_1_F1FDDD86A9CAA049_TypeDefinitionIndex = 71401;

class Class_1_F1FDDD86A9CAA049 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::Struct_2_9E7B88C501101AD5 Field_1_12; // 0x18
	::System::Collections::Generic::List_1<::System::String*>* Field_1_11; // 0x50
	::System::String* Field_1_7; // 0x58
	::System::String* Field_1_3; // 0x60
	::System::String* Field_1_10; // 0x68
	::System::String* Field_1_2; // 0x70
	::System::String* Field_1_1; // 0x78
	::System::String* Field_1_6; // 0x80
	::System::String* Field_1_5; // 0x88
	::System::Boolean Field_1_8; // 0x90
	::System::Boolean Field_1_9; // 0x91
	::System::Boolean Field_1_4; // 0x92

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F1FDDD86A9CAA049__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_4CCB11848FC09151()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F1FDDD86A9CAA049_METHOD_1_4CCB11848FC09151_OFFSET))(this);
	}

	::System::Void Method_1_A12F5FBC26D4F36B(::SimpleJSON::JSONNode* a1)
	{
		return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_F1FDDD86A9CAA049_METHOD_1_A12F5FBC26D4F36B_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_3E4019E45D8A66ED(::SimpleJSON::JSONNode* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_F1FDDD86A9CAA049_METHOD_1_3E4019E45D8A66ED_OFFSET))(this, a1);
	}
};
