#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_531A8EFBE7D517AA.h"
#include "unitysdk/Enum_3_684640426A327E4E.h"
#include "unitysdk/Struct_2_33C4301C87739F2C.h"
#include "unitysdk/Struct_2_5D2BAC4205773FE1.h"
#include "unitysdk/Struct_2_9505641EB996F055.h"
#include "unitysdk/Struct_2_B04487F8B1A141C9.h"
#include "unitysdk/Struct_2_DD19C571EC5F66F2.h"
#include "unitysdk/System/ValueType.h"

namespace SimpleJSON { class JSONArray; }
namespace SimpleJSON { class JSONClass; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define STRUCT_2_ADAAACC33621CB14_METHOD_2_6963B58B2B0372F9_OFFSET UNITYSDK_OFFSET(0x8D50D0)
#define STRUCT_2_ADAAACC33621CB14_METHOD_2_8E7614EC44A72E47_OFFSET UNITYSDK_OFFSET(0x8D50E0)
#define STRUCT_2_ADAAACC33621CB14_METHOD_2_A07DAE4BEA5E272A_OFFSET UNITYSDK_OFFSET(0x8D50C0)
#define STRUCT_2_ADAAACC33621CB14_METHOD_2_D978188210CC1E6C_1_OFFSET UNITYSDK_OFFSET(0x8D50F0)
#define STRUCT_2_ADAAACC33621CB14_METHOD_2_D978188210CC1E6C_OFFSET UNITYSDK_OFFSET(0x8D50B0)
#define STRUCT_2_ADAAACC33621CB14_METHOD_2_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x7AF2D0)
#define STRUCT_2_ADAAACC33621CB14__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BB61150)

inline static constexpr unsigned int Struct_2_ADAAACC33621CB14_TypeDefinitionIndex = 72103;

struct alignas(8) Struct_2_ADAAACC33621CB14
{
	static ::System::Type** StaticGet_Field_2_15()
	{
		return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(Struct_2_ADAAACC33621CB14_TypeDefinitionIndex)->GetStaticField(0x2D5A0);
	}
	static ::System::Type** StaticGet_Field_2_8()
	{
		return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(Struct_2_ADAAACC33621CB14_TypeDefinitionIndex)->GetStaticField(0x2D5A8);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Type*>** StaticGet_Field_2_14()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(Struct_2_ADAAACC33621CB14_TypeDefinitionIndex)->GetStaticField(0x2D5B0);
	}
	::System::String* Field_2_0; // 0x10
	::Enum_3_684640426A327E4E Field_2_7; // 0x18
	::Struct_2_9505641EB996F055 Field_2_6; // 0x1C
	::Enum_3_531A8EFBE7D517AA Field_2_5; // 0x20
	::System::Collections::Generic::List_1<::Struct_2_B04487F8B1A141C9>* Field_2_4; // 0x28
	::System::Collections::Generic::List_1<::Struct_2_DD19C571EC5F66F2>* Field_2_11; // 0x30
	::System::Collections::Generic::List_1<::Struct_2_33C4301C87739F2C>* Field_2_10; // 0x38
	::System::Collections::Generic::List_1<::Struct_2_5D2BAC4205773FE1>* Field_2_9; // 0x40

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_ADAAACC33621CB14__CCTOR_OFFSET))();
	}

	::System::Void Method_2_D978188210CC1E6C(::SimpleJSON::JSONNode* a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + STRUCT_2_ADAAACC33621CB14_METHOD_2_D978188210CC1E6C_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_A07DAE4BEA5E272A(::SimpleJSON::JSONNode* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::SimpleJSON::JSONNode*, ::System::Boolean))((::PBYTE)hIl2Cpp + STRUCT_2_ADAAACC33621CB14_METHOD_2_A07DAE4BEA5E272A_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::System::String*>* Method_2_6963B58B2B0372F9(::SimpleJSON::JSONNode* a1)
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + STRUCT_2_ADAAACC33621CB14_METHOD_2_6963B58B2B0372F9_OFFSET))(this, a1);
	}

	::SimpleJSON::JSONNode* Method_2_8E7614EC44A72E47()
	{
		return ((::SimpleJSON::JSONNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_ADAAACC33621CB14_METHOD_2_8E7614EC44A72E47_OFFSET))(this);
	}

	::System::Void Method_2_D978188210CC1E6C_1(::SimpleJSON::JSONNode* a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + STRUCT_2_ADAAACC33621CB14_METHOD_2_D978188210CC1E6C_1_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_F0E307B84478A272()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_ADAAACC33621CB14_METHOD_2_F0E307B84478A272_OFFSET))(this);
	}
};
