#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9166BD0F741825C9_Enum_3_9E1A6BADD767C70B.h"
#include "unitysdk/System/Object.h"

class Class_1_9166BD0F741825C9_Class_1_060344A07EDA293D;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_9166BD0F741825C9_CLASS_1_ED9989545D894FAC_METHOD_1_0EAE014B01761E44_OFFSET UNITYSDK_OFFSET(0x128F3FC0)
#define CLASS_1_9166BD0F741825C9_CLASS_1_ED9989545D894FAC_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x128F40B0)
#define CLASS_1_9166BD0F741825C9_CLASS_1_ED9989545D894FAC__CTOR_OFFSET UNITYSDK_OFFSET(0x128F3FB0)

inline static constexpr unsigned int Class_1_9166BD0F741825C9_Class_1_ED9989545D894FAC_TypeDefinitionIndex = 66012;

class Class_1_9166BD0F741825C9_Class_1_ED9989545D894FAC : public ::System::Object
{
public:
	::UnityEngine::GameObject* Field_1_7; // 0x10
	::System::String* Field_1_1; // 0x18
	::System::Collections::Generic::Dictionary_2<::Class_1_9166BD0F741825C9_Enum_3_9E1A6BADD767C70B, ::Class_1_9166BD0F741825C9_Class_1_060344A07EDA293D*>* Field_1_6; // 0x20
	::System::Int32 Field_1_2; // 0x28
	::Class_1_9166BD0F741825C9_Enum_3_9E1A6BADD767C70B Field_1_0; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9166BD0F741825C9_CLASS_1_ED9989545D894FAC__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_0EAE014B01761E44(::UnityEngine::GameObject* a1, ::System::Collections::Generic::Dictionary_2<::Class_1_9166BD0F741825C9_Enum_3_9E1A6BADD767C70B, ::Class_1_9166BD0F741825C9_Class_1_060344A07EDA293D*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Collections::Generic::Dictionary_2<::Class_1_9166BD0F741825C9_Enum_3_9E1A6BADD767C70B, ::Class_1_9166BD0F741825C9_Class_1_060344A07EDA293D*>*))((::PBYTE)hIl2Cpp + CLASS_1_9166BD0F741825C9_CLASS_1_ED9989545D894FAC_METHOD_1_0EAE014B01761E44_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9166BD0F741825C9_CLASS_1_ED9989545D894FAC_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}
};
