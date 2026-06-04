#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_8BDC5FAA8163256A___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18ABE950)
#define CLASS_1_8BDC5FAA8163256A___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18ABE990)
#define CLASS_1_8BDC5FAA8163256A___C__DOCOLORDICESKILLCONDITIONCHECK_B__8_0_OFFSET UNITYSDK_OFFSET(0x18ABE9A0)

inline static constexpr unsigned int Class_1_8BDC5FAA8163256A___c_TypeDefinitionIndex = 34491;

class Class_1_8BDC5FAA8163256A___c : public ::System::Object
{
public:
	static ::System::Func_2<::System::UInt32, ::RPG::GameCore::FixPoint>** StaticGet___9__8_0()
	{
		return (::System::Func_2<::System::UInt32, ::RPG::GameCore::FixPoint>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8BDC5FAA8163256A___c_TypeDefinitionIndex)->GetStaticField(0x58F90);
	}
	static ::Class_1_8BDC5FAA8163256A___c** StaticGet___9()
	{
		return (::Class_1_8BDC5FAA8163256A___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8BDC5FAA8163256A___c_TypeDefinitionIndex)->GetStaticField(0x58F98);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8BDC5FAA8163256A___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8BDC5FAA8163256A___C__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint _DoColorDiceSkillConditionCheck_b__8_0(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_8BDC5FAA8163256A___C__DOCOLORDICESKILLCONDITIONCHECK_B__8_0_OFFSET))(this, a1);
	}
};
