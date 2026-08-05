#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_151B8F817F53A5A5.h"
#include "unitysdk/Struct_2_7F39F8692AFCECD1.h"
#include "unitysdk/Struct_2_D19F1A95B589BD6B.h"
#include "unitysdk/System/ValueType.h"

namespace SimpleJSON { class JSONNode; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define STRUCT_2_94A0E3A9A04C3F23_METHOD_2_95675E121E738E35_OFFSET UNITYSDK_OFFSET(0x7CECC0)
#define STRUCT_2_94A0E3A9A04C3F23_METHOD_2_9C12A00315CAECCE_OFFSET UNITYSDK_OFFSET(0x7CEC10)
#define STRUCT_2_94A0E3A9A04C3F23_METHOD_2_C689073D8DEB3649_OFFSET UNITYSDK_OFFSET(0x7CECB0)
#define STRUCT_2_94A0E3A9A04C3F23_METHOD_2_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x7AF2D0)
#define STRUCT_2_94A0E3A9A04C3F23__CCTOR_OFFSET UNITYSDK_OFFSET(0x134C3970)

inline static constexpr unsigned int Struct_2_94A0E3A9A04C3F23_TypeDefinitionIndex = 74359;

struct alignas(8) Struct_2_94A0E3A9A04C3F23
{
	static ::Struct_2_94A0E3A9A04C3F23* StaticGet_Field_2_3()
	{
		return (::Struct_2_94A0E3A9A04C3F23*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_94A0E3A9A04C3F23_TypeDefinitionIndex)->GetStaticField(0x53650);
	}
	::System::String* Field_2_2; // 0x10
	::System::Int32 Field_2_1; // 0x18
	::System::Collections::Generic::List_1<::Struct_2_151B8F817F53A5A5>* Field_2_0; // 0x20
	::System::Collections::Generic::List_1<::Struct_2_7F39F8692AFCECD1>* Field_2_7; // 0x28
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_6; // 0x30
	::System::Collections::Generic::List_1<::Struct_2_D19F1A95B589BD6B>* Field_2_5; // 0x38

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_94A0E3A9A04C3F23__CCTOR_OFFSET))();
	}

	::System::Boolean Method_2_9C12A00315CAECCE(::SimpleJSON::JSONNode* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + STRUCT_2_94A0E3A9A04C3F23_METHOD_2_9C12A00315CAECCE_OFFSET))(this, a1);
	}

	::SimpleJSON::JSONNode* Method_2_C689073D8DEB3649()
	{
		return ((::SimpleJSON::JSONNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_94A0E3A9A04C3F23_METHOD_2_C689073D8DEB3649_OFFSET))(this);
	}

	::System::Boolean Method_2_F0E307B84478A272()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_94A0E3A9A04C3F23_METHOD_2_F0E307B84478A272_OFFSET))(this);
	}

	::System::Boolean Method_2_95675E121E738E35(::SimpleJSON::JSONNode* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + STRUCT_2_94A0E3A9A04C3F23_METHOD_2_95675E121E738E35_OFFSET))(this, a1);
	}
};
