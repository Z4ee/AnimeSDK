#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace SimpleJSON { class JSONArray; }
namespace SimpleJSON { class JSONClass; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_7D1D038C12CCB996_METHOD_1_0FEFB9B692B01C73_OFFSET UNITYSDK_OFFSET(0xBFE64B0)
#define CLASS_1_7D1D038C12CCB996_METHOD_1_1E2EE7072F864BB5_OFFSET UNITYSDK_OFFSET(0xBFE6AB0)
#define CLASS_1_7D1D038C12CCB996_METHOD_1_3267D7B163015EF6_OFFSET UNITYSDK_OFFSET(0xBFE54A0)
#define CLASS_1_7D1D038C12CCB996_METHOD_1_3E60926CB438BBB1_OFFSET UNITYSDK_OFFSET(0xBFE6C20)
#define CLASS_1_7D1D038C12CCB996_METHOD_1_6ACD0D44FE3233A4_OFFSET UNITYSDK_OFFSET(0xBFE53F0)
#define CLASS_1_7D1D038C12CCB996__CTOR_OFFSET UNITYSDK_OFFSET(0xBFE6EF0)

inline static constexpr unsigned int Class_1_7D1D038C12CCB996_TypeDefinitionIndex = 52340;

class Class_1_7D1D038C12CCB996 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7D1D038C12CCB996__CTOR_OFFSET))(this);
	}

	static ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::String*, ::SimpleJSON::JSONNode*>>* Method_1_6ACD0D44FE3233A4(::SimpleJSON::JSONNode* a1, ::SimpleJSON::JSONNode* a2)
	{
		return ((::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::String*, ::SimpleJSON::JSONNode*>>*(*)(::SimpleJSON::JSONNode*, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_7D1D038C12CCB996_METHOD_1_6ACD0D44FE3233A4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_3267D7B163015EF6(::SimpleJSON::JSONNode* a1, ::SimpleJSON::JSONNode* a2, ::System::String* a3, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::String*, ::SimpleJSON::JSONNode*>>* a4)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::SimpleJSON::JSONNode*, ::System::String*, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::String*, ::SimpleJSON::JSONNode*>>*))((::PBYTE)hIl2Cpp + CLASS_1_7D1D038C12CCB996_METHOD_1_3267D7B163015EF6_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Boolean Method_1_0FEFB9B692B01C73(::SimpleJSON::JSONClass* a1, ::SimpleJSON::JSONClass* a2)
	{
		return ((::System::Boolean(*)(::SimpleJSON::JSONClass*, ::SimpleJSON::JSONClass*))((::PBYTE)hIl2Cpp + CLASS_1_7D1D038C12CCB996_METHOD_1_0FEFB9B692B01C73_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_1E2EE7072F864BB5(::SimpleJSON::JSONArray* a1, ::SimpleJSON::JSONArray* a2)
	{
		return ((::System::Boolean(*)(::SimpleJSON::JSONArray*, ::SimpleJSON::JSONArray*))((::PBYTE)hIl2Cpp + CLASS_1_7D1D038C12CCB996_METHOD_1_1E2EE7072F864BB5_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_3E60926CB438BBB1(::SimpleJSON::JSONNode* a1, ::SimpleJSON::JSONNode* a2)
	{
		return ((::System::Boolean(*)(::SimpleJSON::JSONNode*, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_7D1D038C12CCB996_METHOD_1_3E60926CB438BBB1_OFFSET))(a1, a2);
	}
};
