#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityIdleLive/IdleLiveDecimal.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define STRUCT_2_FF0A5E57FED058F6_METHOD_2_22947323BA9392D0_OFFSET UNITYSDK_OFFSET(0x10041280)
#define STRUCT_2_FF0A5E57FED058F6__CCTOR_OFFSET UNITYSDK_OFFSET(0x10041650)

inline static constexpr unsigned int Struct_2_FF0A5E57FED058F6_TypeDefinitionIndex = 69390;

struct alignas(8) Struct_2_FF0A5E57FED058F6
{
	static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Struct_2_FF0A5E57FED058F6>** StaticGet_Field_2_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Struct_2_FF0A5E57FED058F6>**)Il2CppClass::FromTypeDefinitionIndex(Struct_2_FF0A5E57FED058F6_TypeDefinitionIndex)->GetStaticField(0x11850);
	}
	::System::UInt32 Field_2_1; // 0x10
	::System::String* Field_2_2; // 0x18
	::System::String* Field_2_3; // 0x20
	::System::String* Field_2_4; // 0x28
	::System::String* Field_2_5; // 0x30
	::RPG::GameCore::FixPoint Field_2_6; // 0x38
	::RPG::Client::ActivityIdleLive::IdleLiveDecimal Field_2_7; // 0x40
	::RPG::Client::ActivityIdleLive::IdleLiveDecimal Field_2_8; // 0x58

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_FF0A5E57FED058F6__CCTOR_OFFSET))();
	}

	static ::Struct_2_FF0A5E57FED058F6 Method_2_22947323BA9392D0(::System::UInt32 a1)
	{
		return ((::Struct_2_FF0A5E57FED058F6(*)(::System::UInt32))((::PBYTE)hIl2Cpp + STRUCT_2_FF0A5E57FED058F6_METHOD_2_22947323BA9392D0_OFFSET))(a1);
	}
};
