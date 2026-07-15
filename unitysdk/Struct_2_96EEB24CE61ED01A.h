#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityIdleLive/IdleLiveDecimal.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define STRUCT_2_96EEB24CE61ED01A_METHOD_2_D93F33A33D7755ED_OFFSET UNITYSDK_OFFSET(0x16417E80)
#define STRUCT_2_96EEB24CE61ED01A__CCTOR_OFFSET UNITYSDK_OFFSET(0x164182E0)

inline static constexpr unsigned int Struct_2_96EEB24CE61ED01A_TypeDefinitionIndex = 71725;

struct alignas(8) Struct_2_96EEB24CE61ED01A
{
	static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Struct_2_96EEB24CE61ED01A>** StaticGet_Field_2_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Struct_2_96EEB24CE61ED01A>**)Il2CppClass::FromTypeDefinitionIndex(Struct_2_96EEB24CE61ED01A_TypeDefinitionIndex)->GetStaticField(0x6B5D0);
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
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_96EEB24CE61ED01A__CCTOR_OFFSET))();
	}

	static ::Struct_2_96EEB24CE61ED01A Method_2_D93F33A33D7755ED(::System::UInt32 a1)
	{
		return ((::Struct_2_96EEB24CE61ED01A(*)(::System::UInt32))((::PBYTE)hIl2Cpp + STRUCT_2_96EEB24CE61ED01A_METHOD_2_D93F33A33D7755ED_OFFSET))(a1);
	}
};
