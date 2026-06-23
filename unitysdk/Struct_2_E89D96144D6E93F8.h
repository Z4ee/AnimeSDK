#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_568BBAF07CE1AAF7.h"
#include "unitysdk/Struct_2_BF5180DEC115E66B.h"
#include "unitysdk/Struct_2_D19F1A95B589BD6B.h"
#include "unitysdk/System/ValueType.h"

namespace SimpleJSON { class JSONNode; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define STRUCT_2_E89D96144D6E93F8_METHOD_2_6C459AB30B0D8E02_OFFSET UNITYSDK_OFFSET(0x7FF0D0)
#define STRUCT_2_E89D96144D6E93F8_METHOD_2_9C12A00315CAECCE_OFFSET UNITYSDK_OFFSET(0x7FF020)
#define STRUCT_2_E89D96144D6E93F8_METHOD_2_C689073D8DEB3649_OFFSET UNITYSDK_OFFSET(0x7FF0C0)
#define STRUCT_2_E89D96144D6E93F8_METHOD_2_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x67AA30)
#define STRUCT_2_E89D96144D6E93F8__CCTOR_OFFSET UNITYSDK_OFFSET(0x15565A20)

inline static constexpr unsigned int Struct_2_E89D96144D6E93F8_TypeDefinitionIndex = 83862;

struct alignas(8) Struct_2_E89D96144D6E93F8
{
	static ::Struct_2_E89D96144D6E93F8* StaticGet_Field_2_0()
	{
		return (::Struct_2_E89D96144D6E93F8*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_E89D96144D6E93F8_TypeDefinitionIndex)->GetStaticField(0x4F4C0);
	}
	::System::String* Field_2_1; // 0x10
	::System::Int32 Field_2_2; // 0x18
	::System::Collections::Generic::List_1<::Struct_2_BF5180DEC115E66B>* Field_2_3; // 0x20
	::System::Collections::Generic::List_1<::Struct_2_568BBAF07CE1AAF7>* Field_2_4; // 0x28
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_5; // 0x30
	::System::Collections::Generic::List_1<::Struct_2_D19F1A95B589BD6B>* Field_2_6; // 0x38

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_E89D96144D6E93F8__CCTOR_OFFSET))();
	}

	::System::Boolean Method_2_9C12A00315CAECCE(::SimpleJSON::JSONNode* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + STRUCT_2_E89D96144D6E93F8_METHOD_2_9C12A00315CAECCE_OFFSET))(this, a1);
	}

	::SimpleJSON::JSONNode* Method_2_C689073D8DEB3649()
	{
		return ((::SimpleJSON::JSONNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_E89D96144D6E93F8_METHOD_2_C689073D8DEB3649_OFFSET))(this);
	}

	::System::Boolean Method_2_F0E307B84478A272()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_E89D96144D6E93F8_METHOD_2_F0E307B84478A272_OFFSET))(this);
	}

	::System::Boolean Method_2_6C459AB30B0D8E02(::SimpleJSON::JSONNode* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + STRUCT_2_E89D96144D6E93F8_METHOD_2_6C459AB30B0D8E02_OFFSET))(this, a1);
	}
};
