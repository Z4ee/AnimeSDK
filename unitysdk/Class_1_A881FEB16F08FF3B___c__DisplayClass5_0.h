#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_45.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_A881FEB16F08FF3B;
class Class_1_FFE4D00B495B8020;
namespace Proto { class ItemList; }

#define CLASS_1_A881FEB16F08FF3B___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17E201C0)
#define CLASS_1_A881FEB16F08FF3B___C__DISPLAYCLASS5_0__STARTINTERACTION_B__0_OFFSET UNITYSDK_OFFSET(0x17E20510)
#define CLASS_1_A881FEB16F08FF3B___C__DISPLAYCLASS5_0__STARTINTERACTION_B__1_OFFSET UNITYSDK_OFFSET(0x17E20530)

inline static constexpr unsigned int Class_1_A881FEB16F08FF3B___c__DisplayClass5_0_TypeDefinitionIndex = 75040;

class Class_1_A881FEB16F08FF3B___c__DisplayClass5_0 : public ::System::Object
{
public:
	::Class_1_FFE4D00B495B8020* service; // 0x10
	::Class_1_A881FEB16F08FF3B* __4__this; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A881FEB16F08FF3B___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
	}

	::System::Void _StartInteraction_b__0(::System::ValueTuple_2<::Proto::ItemList*, ::Enum_3_0A3761FE34514D6C_45> a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::ValueTuple_2<::Proto::ItemList*, ::Enum_3_0A3761FE34514D6C_45>))((::PBYTE)hIl2Cpp + CLASS_1_A881FEB16F08FF3B___C__DISPLAYCLASS5_0__STARTINTERACTION_B__0_OFFSET))(this, a1);
	}

	::System::Void _StartInteraction_b__1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A881FEB16F08FF3B___C__DISPLAYCLASS5_0__STARTINTERACTION_B__1_OFFSET))(this);
	}
};
