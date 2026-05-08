#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_5_A6F8D19602712D95;
namespace MoleMole { class UIHollowChessPieceParticle; }
namespace MoleMole::Config { class ConfigHollowChessboard_ChessPieceEffect; }
namespace System { class Action; }

#define CLASS_5_A6F8D19602712D95_CLASS_1_4A160D160B484D1B_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x140C1190)
#define CLASS_5_A6F8D19602712D95_CLASS_1_4A160D160B484D1B_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x140C14E0)
#define CLASS_5_A6F8D19602712D95_CLASS_1_4A160D160B484D1B_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x140C1540)
#define CLASS_5_A6F8D19602712D95_CLASS_1_4A160D160B484D1B_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x140C14F0)
#define CLASS_5_A6F8D19602712D95_CLASS_1_4A160D160B484D1B_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x140C1180)
#define CLASS_5_A6F8D19602712D95_CLASS_1_4A160D160B484D1B__CTOR_OFFSET UNITYSDK_OFFSET(0x140C1170)

inline static constexpr unsigned int Class_5_A6F8D19602712D95_Class_1_4A160D160B484D1B_TypeDefinitionIndex = 52600;

class Class_5_A6F8D19602712D95_Class_1_4A160D160B484D1B : public ::System::Object
{
public:
	::Class_5_A6F8D19602712D95* Field_1_4; // 0x10
	::MoleMole::Config::ConfigHollowChessboard_ChessPieceEffect* Field_1_2; // 0x18
	::System::Object* Field_1_1; // 0x20
	::MoleMole::UIHollowChessPieceParticle* Field_1_6; // 0x28
	::System::Action* Field_1_5; // 0x30
	::System::Int32 Field_1_0; // 0x38
	::System::Single Field_1_3; // 0x3C
	::System::Single Field_1_7; // 0x40

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95_CLASS_1_4A160D160B484D1B__CTOR_OFFSET))(this, a1);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95_CLASS_1_4A160D160B484D1B_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95_CLASS_1_4A160D160B484D1B_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95_CLASS_1_4A160D160B484D1B_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95_CLASS_1_4A160D160B484D1B_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95_CLASS_1_4A160D160B484D1B_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
