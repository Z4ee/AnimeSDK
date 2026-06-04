#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_43.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_E7C8F58FA8663AD5;
class Class_1_FFE4D00B495B8020;
namespace Proto { class ItemList; }

#define CLASS_1_E7C8F58FA8663AD5___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0x13529260)
#define CLASS_1_E7C8F58FA8663AD5___C__DISPLAYCLASS5_0__STARTINTERACTION_B__0_OFFSET UNITYSDK_OFFSET(0x13529560)
#define CLASS_1_E7C8F58FA8663AD5___C__DISPLAYCLASS5_0__STARTINTERACTION_B__1_OFFSET UNITYSDK_OFFSET(0x13529580)

inline static constexpr unsigned int Class_1_E7C8F58FA8663AD5___c__DisplayClass5_0_TypeDefinitionIndex = 70211;

class Class_1_E7C8F58FA8663AD5___c__DisplayClass5_0 : public ::System::Object
{
public:
	::Class_1_FFE4D00B495B8020* service; // 0x10
	::Class_1_E7C8F58FA8663AD5* __4__this; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7C8F58FA8663AD5___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
	}

	::System::Void _StartInteraction_b__0(::System::ValueTuple_2<::Proto::ItemList*, ::Enum_3_0A3761FE34514D6C_43> a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::ValueTuple_2<::Proto::ItemList*, ::Enum_3_0A3761FE34514D6C_43>))((::PBYTE)hIl2Cpp + CLASS_1_E7C8F58FA8663AD5___C__DISPLAYCLASS5_0__STARTINTERACTION_B__0_OFFSET))(this, a1);
	}

	::System::Void _StartInteraction_b__1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7C8F58FA8663AD5___C__DISPLAYCLASS5_0__STARTINTERACTION_B__1_OFFSET))(this);
	}
};
