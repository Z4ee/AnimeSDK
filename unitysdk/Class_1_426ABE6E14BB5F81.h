#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_B685AD075EE2DFE3.h"
#include "unitysdk/System/Object.h"

namespace SimpleJSON { class JSONNode; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_426ABE6E14BB5F81_METHOD_1_2A45D4FFA82CE3F2_OFFSET UNITYSDK_OFFSET(0x15774730)
#define CLASS_1_426ABE6E14BB5F81_METHOD_1_4CCB11848FC09151_OFFSET UNITYSDK_OFFSET(0x15775F00)
#define CLASS_1_426ABE6E14BB5F81_METHOD_1_A12F5FBC26D4F36B_OFFSET UNITYSDK_OFFSET(0x15775580)
#define CLASS_1_426ABE6E14BB5F81__CTOR_OFFSET UNITYSDK_OFFSET(0x157746E0)

inline static constexpr unsigned int Class_1_426ABE6E14BB5F81_TypeDefinitionIndex = 48711;

class Class_1_426ABE6E14BB5F81 : public ::System::Object
{
public:
	::System::String* Field_1_5; // 0x10
	::System::String* Field_1_11; // 0x18
	::System::String* Field_1_9; // 0x20
	::System::Collections::Generic::List_1<::System::String*>* Field_1_13; // 0x28
	::System::String* Field_1_10; // 0x30
	::System::String* Field_1_7; // 0x38
	::System::String* Field_1_0; // 0x40
	::Struct_2_B685AD075EE2DFE3 Field_1_12; // 0x48
	::System::String* Field_1_14; // 0x80
	::System::String* Field_1_6; // 0x88
	::System::Boolean Field_1_15; // 0x90
	::System::Boolean Field_1_8; // 0x91
	::System::Boolean Field_1_4; // 0x92

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_426ABE6E14BB5F81__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_2A45D4FFA82CE3F2(::SimpleJSON::JSONNode* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_426ABE6E14BB5F81_METHOD_1_2A45D4FFA82CE3F2_OFFSET))(this, a1);
	}

	::System::Void Method_1_A12F5FBC26D4F36B(::SimpleJSON::JSONNode* a1)
	{
		return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_426ABE6E14BB5F81_METHOD_1_A12F5FBC26D4F36B_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_4CCB11848FC09151()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_426ABE6E14BB5F81_METHOD_1_4CCB11848FC09151_OFFSET))(this);
	}
};
