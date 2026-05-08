#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_531A8EFBE7D517AA.h"
#include "unitysdk/Enum_3_684640426A327E4E.h"
#include "unitysdk/Struct_2_229502A94E9EB7E7.h"
#include "unitysdk/Struct_2_51A0658002A5A70C.h"
#include "unitysdk/Struct_2_6D21F49E205965F8.h"
#include "unitysdk/Struct_2_9505641EB996F055_1.h"
#include "unitysdk/Struct_2_B04487F8B1A141C9.h"
#include "unitysdk/System/ValueType.h"

namespace SimpleJSON { class JSONArray; }
namespace SimpleJSON { class JSONClass; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define STRUCT_2_CC86B677214AB654_METHOD_2_8E7614EC44A72E47_OFFSET UNITYSDK_OFFSET(0x79F780)
#define STRUCT_2_CC86B677214AB654_METHOD_2_95E5A686613A75F1_1_OFFSET UNITYSDK_OFFSET(0x79F770)
#define STRUCT_2_CC86B677214AB654_METHOD_2_95E5A686613A75F1_OFFSET UNITYSDK_OFFSET(0x79F760)
#define STRUCT_2_CC86B677214AB654_METHOD_2_C86F227E56219096_OFFSET UNITYSDK_OFFSET(0x79F790)
#define STRUCT_2_CC86B677214AB654_METHOD_2_DB9EBAF18E80D51D_OFFSET UNITYSDK_OFFSET(0x79F750)
#define STRUCT_2_CC86B677214AB654_METHOD_2_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x75A520)
#define STRUCT_2_CC86B677214AB654__CCTOR_OFFSET UNITYSDK_OFFSET(0x156D5DF0)

inline static constexpr unsigned int Struct_2_CC86B677214AB654_TypeDefinitionIndex = 69887;

struct alignas(8) Struct_2_CC86B677214AB654
{
	static ::System::Type** StaticGet_Field_2_8()
	{
		return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(Struct_2_CC86B677214AB654_TypeDefinitionIndex)->GetStaticField(0x42D40);
	}
	static ::System::Type** StaticGet_Field_2_9()
	{
		return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(Struct_2_CC86B677214AB654_TypeDefinitionIndex)->GetStaticField(0x42D48);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Type*>** StaticGet_Field_2_10()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(Struct_2_CC86B677214AB654_TypeDefinitionIndex)->GetStaticField(0x42D50);
	}
	::System::String* Field_2_0; // 0x10
	::Enum_3_684640426A327E4E Field_2_1; // 0x18
	::Struct_2_9505641EB996F055_1 Field_2_2; // 0x1C
	::Enum_3_531A8EFBE7D517AA Field_2_3; // 0x20
	::System::Collections::Generic::List_1<::Struct_2_B04487F8B1A141C9>* Field_2_4; // 0x28
	::System::Collections::Generic::List_1<::Struct_2_51A0658002A5A70C>* Field_2_5; // 0x30
	::System::Collections::Generic::List_1<::Struct_2_6D21F49E205965F8>* Field_2_6; // 0x38
	::System::Collections::Generic::List_1<::Struct_2_229502A94E9EB7E7>* Field_2_7; // 0x40

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_CC86B677214AB654__CCTOR_OFFSET))();
	}

	::System::Boolean Method_2_DB9EBAF18E80D51D(::SimpleJSON::JSONNode* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::SimpleJSON::JSONNode*, ::System::Boolean))((::PBYTE)hIl2Cpp + STRUCT_2_CC86B677214AB654_METHOD_2_DB9EBAF18E80D51D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_95E5A686613A75F1(::SimpleJSON::JSONNode* a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + STRUCT_2_CC86B677214AB654_METHOD_2_95E5A686613A75F1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_95E5A686613A75F1_1(::SimpleJSON::JSONNode* a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + STRUCT_2_CC86B677214AB654_METHOD_2_95E5A686613A75F1_1_OFFSET))(this, a1, a2, a3);
	}

	::SimpleJSON::JSONNode* Method_2_8E7614EC44A72E47()
	{
		return ((::SimpleJSON::JSONNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_CC86B677214AB654_METHOD_2_8E7614EC44A72E47_OFFSET))(this);
	}

	::System::Boolean Method_2_F0E307B84478A272()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_CC86B677214AB654_METHOD_2_F0E307B84478A272_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::String*>* Method_2_C86F227E56219096(::SimpleJSON::JSONNode* a1)
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + STRUCT_2_CC86B677214AB654_METHOD_2_C86F227E56219096_OFFSET))(this, a1);
	}
};
