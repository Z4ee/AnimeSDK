#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityIdleLive/IdleLiveDecimal.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define STRUCT_2_96EEB24CE61ED01A_METHOD_2_D93F33A33D7755ED_OFFSET UNITYSDK_OFFSET(0xBE57290)
#define STRUCT_2_96EEB24CE61ED01A__CCTOR_OFFSET UNITYSDK_OFFSET(0xBE576F0)

inline static constexpr unsigned int Struct_2_96EEB24CE61ED01A_TypeDefinitionIndex = 75331;

struct alignas(8) Struct_2_96EEB24CE61ED01A
{
	static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Struct_2_96EEB24CE61ED01A>** StaticGet_HGOEHHJCCIC()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Struct_2_96EEB24CE61ED01A>**)Il2CppClass::FromTypeDefinitionIndex(Struct_2_96EEB24CE61ED01A_TypeDefinitionIndex)->GetStaticField(0x63730);
	}
	::System::UInt32 PMIEAEGJNMJ; // 0x10
	::System::String* KOIJMPDBMJF; // 0x18
	::System::String* MJPKBIGCFOM; // 0x20
	::System::String* GLPGLPCOLKO; // 0x28
	::System::String* NNKLLHMDNCA; // 0x30
	::RPG::GameCore::FixPoint MNOLGKGHHEC; // 0x38
	::RPG::Client::ActivityIdleLive::IdleLiveDecimal MCJEIGHLLFD; // 0x40
	::RPG::Client::ActivityIdleLive::IdleLiveDecimal PKFJKABCKFB; // 0x58

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_96EEB24CE61ED01A__CCTOR_OFFSET))();
	}

	static ::Struct_2_96EEB24CE61ED01A Method_2_D93F33A33D7755ED(::System::UInt32 a1)
	{
		return ((::Struct_2_96EEB24CE61ED01A(*)(::System::UInt32))((::PBYTE)hIl2Cpp + STRUCT_2_96EEB24CE61ED01A_METHOD_2_D93F33A33D7755ED_OFFSET))(a1);
	}
};
