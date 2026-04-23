#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FloatMessageType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_945;
class Class_1_95EEF67A826E14FF;

#define CLASS_2_22E6B1381F78CFFA___C__DISPLAYCLASS1_0__CLEARALLTOAST_B__0_OFFSET UNITYSDK_OFFSET(0x11791220)
#define CLASS_2_22E6B1381F78CFFA___C__DISPLAYCLASS1_0__CLEARALLTOAST_B__1_OFFSET UNITYSDK_OFFSET(0x117912D0)
#define CLASS_2_22E6B1381F78CFFA___C__DISPLAYCLASS1_0__CLEARALLTOAST_B__2_OFFSET UNITYSDK_OFFSET(0x117912F0)
#define CLASS_2_22E6B1381F78CFFA___C__DISPLAYCLASS1_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1178FFC0)

inline static constexpr unsigned int Class_2_22E6B1381F78CFFA___c__DisplayClass1_0_TypeDefinitionIndex = 65948;

class Class_2_22E6B1381F78CFFA___c__DisplayClass1_0 : public ::System::Object
{
public:
	::RPG::GameCore::FloatMessageType messageType; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_22E6B1381F78CFFA___C__DISPLAYCLASS1_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _ClearAllToast_b__0(::Class_0_16E4307DCC419505_945* item)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_945*))((::PBYTE)hIl2Cpp + CLASS_2_22E6B1381F78CFFA___C__DISPLAYCLASS1_0__CLEARALLTOAST_B__0_OFFSET))(this, item);
	}

	::System::Boolean _ClearAllToast_b__1(::Class_1_95EEF67A826E14FF* entry)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_95EEF67A826E14FF*))((::PBYTE)hIl2Cpp + CLASS_2_22E6B1381F78CFFA___C__DISPLAYCLASS1_0__CLEARALLTOAST_B__1_OFFSET))(this, entry);
	}

	::System::Boolean _ClearAllToast_b__2(::Class_1_95EEF67A826E14FF* entry)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_95EEF67A826E14FF*))((::PBYTE)hIl2Cpp + CLASS_2_22E6B1381F78CFFA___C__DISPLAYCLASS1_0__CLEARALLTOAST_B__2_OFFSET))(this, entry);
	}
};
