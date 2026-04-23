#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_43.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_6CAA6AFF62775741;
class Class_1_6EFE96DC901ADA7E;
namespace Proto { class ItemList; }

#define CLASS_1_6CAA6AFF62775741___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0x969D300)
#define CLASS_1_6CAA6AFF62775741___C__DISPLAYCLASS5_0__STARTINTERACTION_B__0_OFFSET UNITYSDK_OFFSET(0x969D5E0)
#define CLASS_1_6CAA6AFF62775741___C__DISPLAYCLASS5_0__STARTINTERACTION_B__1_OFFSET UNITYSDK_OFFSET(0x969D600)

inline static constexpr unsigned int Class_1_6CAA6AFF62775741___c__DisplayClass5_0_TypeDefinitionIndex = 69399;

class Class_1_6CAA6AFF62775741___c__DisplayClass5_0 : public ::System::Object
{
public:
	::Class_1_6CAA6AFF62775741* __4__this; // 0x10
	::Class_1_6EFE96DC901ADA7E* service; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6CAA6AFF62775741___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
	}

	::System::Void _StartInteraction_b__0(::System::ValueTuple_2<::Proto::ItemList*, ::Enum_3_0A3761FE34514D6C_43> tuple)
	{
		return ((::System::Void(*)(::PVOID, ::System::ValueTuple_2<::Proto::ItemList*, ::Enum_3_0A3761FE34514D6C_43>))((::PBYTE)hIl2Cpp + CLASS_1_6CAA6AFF62775741___C__DISPLAYCLASS5_0__STARTINTERACTION_B__0_OFFSET))(this, tuple);
	}

	::System::Void _StartInteraction_b__1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6CAA6AFF62775741___C__DISPLAYCLASS5_0__STARTINTERACTION_B__1_OFFSET))(this);
	}
};
