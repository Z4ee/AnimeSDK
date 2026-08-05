#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_5_A6F8D19602712D95;
class Class_5_A6F8D19602712D95_Class_1_6272531A5EDC3DA8_35;
namespace MoleMole::Config { class ConfigHollowChessboard_PieceChangeStructConfig; }
namespace MoleMole::Config { class ConfigHollowChessboard_RiseOrSink; }
namespace System { class Action; }

#define CLASS_5_A6F8D19602712D95_CLASS_1_E8B238D4E8038115_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x14DC89D0)
#define CLASS_5_A6F8D19602712D95_CLASS_1_E8B238D4E8038115_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x14DC8B00)
#define CLASS_5_A6F8D19602712D95_CLASS_1_E8B238D4E8038115_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x14DC8B60)
#define CLASS_5_A6F8D19602712D95_CLASS_1_E8B238D4E8038115_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x14DC8B10)
#define CLASS_5_A6F8D19602712D95_CLASS_1_E8B238D4E8038115_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x14DC89C0)
#define CLASS_5_A6F8D19602712D95_CLASS_1_E8B238D4E8038115__CTOR_OFFSET UNITYSDK_OFFSET(0x14DC1750)

inline static constexpr unsigned int Class_5_A6F8D19602712D95_Class_1_E8B238D4E8038115_TypeDefinitionIndex = 63085;

class Class_5_A6F8D19602712D95_Class_1_E8B238D4E8038115 : public ::System::Object
{
public:
	::System::Action* Field_1_7; // 0x10
	::Class_5_A6F8D19602712D95_Class_1_6272531A5EDC3DA8_35* Field_1_4; // 0x18
	::Class_5_A6F8D19602712D95* Field_1_10; // 0x20
	::MoleMole::Config::ConfigHollowChessboard_PieceChangeStructConfig* Field_1_11; // 0x28
	::System::Object* Field_1_0; // 0x30
	::MoleMole::Config::ConfigHollowChessboard_RiseOrSink* Field_1_6; // 0x38
	::System::Single Field_1_5; // 0x40
	::System::Int32 Field_1_1; // 0x44

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95_CLASS_1_E8B238D4E8038115__CTOR_OFFSET))(this, a1);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95_CLASS_1_E8B238D4E8038115_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95_CLASS_1_E8B238D4E8038115_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95_CLASS_1_E8B238D4E8038115_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95_CLASS_1_E8B238D4E8038115_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95_CLASS_1_E8B238D4E8038115_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
