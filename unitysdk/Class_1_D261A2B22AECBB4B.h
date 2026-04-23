#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace SimpleJSON { class JSONArray; }
namespace SimpleJSON { class JSONClass; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_D261A2B22AECBB4B_METHOD_1_5B045923D72E8322_OFFSET UNITYSDK_OFFSET(0x8F9C180)
#define CLASS_1_D261A2B22AECBB4B_METHOD_1_6ACD0D44FE3233A4_OFFSET UNITYSDK_OFFSET(0x8F9C0D0)
#define CLASS_1_D261A2B22AECBB4B_METHOD_1_962794EBBB7FE9DA_OFFSET UNITYSDK_OFFSET(0x8F9CF70)
#define CLASS_1_D261A2B22AECBB4B_METHOD_1_BCC20F6116C68B6A_OFFSET UNITYSDK_OFFSET(0x8F9CB00)
#define CLASS_1_D261A2B22AECBB4B_METHOD_1_C8949CF0249ADF7E_OFFSET UNITYSDK_OFFSET(0x8F9D0B0)
#define CLASS_1_D261A2B22AECBB4B__CTOR_OFFSET UNITYSDK_OFFSET(0x8F9D250)

inline static constexpr unsigned int Class_1_D261A2B22AECBB4B_TypeDefinitionIndex = 48051;

class Class_1_D261A2B22AECBB4B : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D261A2B22AECBB4B__CTOR_OFFSET))(this);
	}

	static ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::String*, ::SimpleJSON::JSONNode*>>* Method_1_6ACD0D44FE3233A4(::SimpleJSON::JSONNode* a1, ::SimpleJSON::JSONNode* a2)
	{
		return ((::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::String*, ::SimpleJSON::JSONNode*>>*(*)(::SimpleJSON::JSONNode*, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_D261A2B22AECBB4B_METHOD_1_6ACD0D44FE3233A4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_5B045923D72E8322(::SimpleJSON::JSONNode* a1, ::SimpleJSON::JSONNode* a2, ::System::String* a3, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::String*, ::SimpleJSON::JSONNode*>>* a4)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::SimpleJSON::JSONNode*, ::System::String*, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::String*, ::SimpleJSON::JSONNode*>>*))((::PBYTE)hIl2Cpp + CLASS_1_D261A2B22AECBB4B_METHOD_1_5B045923D72E8322_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Boolean Method_1_BCC20F6116C68B6A(::SimpleJSON::JSONClass* a1, ::SimpleJSON::JSONClass* a2)
	{
		return ((::System::Boolean(*)(::SimpleJSON::JSONClass*, ::SimpleJSON::JSONClass*))((::PBYTE)hIl2Cpp + CLASS_1_D261A2B22AECBB4B_METHOD_1_BCC20F6116C68B6A_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_962794EBBB7FE9DA(::SimpleJSON::JSONArray* a1, ::SimpleJSON::JSONArray* a2)
	{
		return ((::System::Boolean(*)(::SimpleJSON::JSONArray*, ::SimpleJSON::JSONArray*))((::PBYTE)hIl2Cpp + CLASS_1_D261A2B22AECBB4B_METHOD_1_962794EBBB7FE9DA_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_C8949CF0249ADF7E(::SimpleJSON::JSONNode* a1, ::SimpleJSON::JSONNode* a2)
	{
		return ((::System::Boolean(*)(::SimpleJSON::JSONNode*, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_D261A2B22AECBB4B_METHOD_1_C8949CF0249ADF7E_OFFSET))(a1, a2);
	}
};
