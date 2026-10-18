#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_B105BEE67D1C2502_Struct_2_C98CB9F275AE157F.h"
#include "unitysdk/RPG/Client/MapRotation/EffectType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace RPG::Client { class MapNpcDef; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_B105BEE67D1C2502_CLASS_1_A655B5C044F1FE7C_CLEAR_OFFSET UNITYSDK_OFFSET(0xC032420)
#define CLASS_2_B105BEE67D1C2502_CLASS_1_A655B5C044F1FE7C_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xC030CE0)
#define CLASS_2_B105BEE67D1C2502_CLASS_1_A655B5C044F1FE7C_METHOD_1_62A1DA6B642935A4_OFFSET UNITYSDK_OFFSET(0xC0313D0)
#define CLASS_2_B105BEE67D1C2502_CLASS_1_A655B5C044F1FE7C__CTOR_OFFSET UNITYSDK_OFFSET(0xC031370)

inline static constexpr unsigned int Class_2_B105BEE67D1C2502_Class_1_A655B5C044F1FE7C_TypeDefinitionIndex = 60605;

class Class_2_B105BEE67D1C2502_Class_1_A655B5C044F1FE7C : public ::System::Object
{
public:
	::RPG::Client::MapNpcDef* ODOBMHNHNEB; // 0x10
	::System::Collections::Generic::List_1<::Class_2_B105BEE67D1C2502_Struct_2_C98CB9F275AE157F>* KBKIKFGJBII; // 0x18
	::RPG::Client::MapRotation::EffectType DLMINHHKKMK; // 0x20
	::System::UInt32 GJPPHJMHBPF; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B105BEE67D1C2502_CLASS_1_A655B5C044F1FE7C__CTOR_OFFSET))(this);
	}

	::System::ValueTuple_2<::System::UInt32, ::System::UInt32> Method_1_62A1DA6B642935A4()
	{
		return ((::System::ValueTuple_2<::System::UInt32, ::System::UInt32>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B105BEE67D1C2502_CLASS_1_A655B5C044F1FE7C_METHOD_1_62A1DA6B642935A4_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B105BEE67D1C2502_CLASS_1_A655B5C044F1FE7C_CLEAR_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B105BEE67D1C2502_CLASS_1_A655B5C044F1FE7C_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}
};
