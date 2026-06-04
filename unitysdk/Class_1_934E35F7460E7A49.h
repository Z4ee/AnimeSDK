#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EParkourEventEntityType.h"
#include "unitysdk/System/Object.h"

class Class_1_401FD2135D0092DD;
class Class_1_C47576BEFCFAD595;
class Class_2_F3F43255EC92B83B;
namespace RPG::GameCore { class ParkourTriggerEventRow; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_934E35F7460E7A49_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13FF2330)
#define CLASS_1_934E35F7460E7A49_METHOD_1_31248F5074DEC200_OFFSET UNITYSDK_OFFSET(0x13FF27B0)
#define CLASS_1_934E35F7460E7A49_METHOD_1_897011AD911292CC_OFFSET UNITYSDK_OFFSET(0x13FF26F0)
#define CLASS_1_934E35F7460E7A49_METHOD_1_C4C6BF007267521E_OFFSET UNITYSDK_OFFSET(0x13FF2550)
#define CLASS_1_934E35F7460E7A49_METHOD_1_E9B4BB3A69E157F8_OFFSET UNITYSDK_OFFSET(0x13FF19F0)
#define CLASS_1_934E35F7460E7A49_METHOD_1_FD7514C64FB1B043_OFFSET UNITYSDK_OFFSET(0x13FF2480)
#define CLASS_1_934E35F7460E7A49__CTOR_OFFSET UNITYSDK_OFFSET(0x13FF1870)

inline static constexpr unsigned int Class_1_934E35F7460E7A49_TypeDefinitionIndex = 69275;

class Class_1_934E35F7460E7A49 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_401FD2135D0092DD*>* Field_1_0; // 0x10
	::Class_1_C47576BEFCFAD595* Field_1_1; // 0x18

	::System::Void _ctor(::Class_1_C47576BEFCFAD595* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C47576BEFCFAD595*))((::PBYTE)hIl2Cpp + CLASS_1_934E35F7460E7A49__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_934E35F7460E7A49_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_FD7514C64FB1B043(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_934E35F7460E7A49_METHOD_1_FD7514C64FB1B043_OFFSET))(this, a1);
	}

	::System::Void Method_1_C4C6BF007267521E(::System::UInt32 a1, ::Class_2_F3F43255EC92B83B* a2, ::Class_2_F3F43255EC92B83B* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_2_F3F43255EC92B83B*, ::Class_2_F3F43255EC92B83B*))((::PBYTE)hIl2Cpp + CLASS_1_934E35F7460E7A49_METHOD_1_C4C6BF007267521E_OFFSET))(this, a1, a2, a3);
	}

	::System::Collections::Generic::IEnumerable_1<::Class_2_F3F43255EC92B83B*>* Method_1_897011AD911292CC(::RPG::GameCore::EParkourEventEntityType a1, ::System::UInt32 a2)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Class_2_F3F43255EC92B83B*>*(*)(::PVOID, ::RPG::GameCore::EParkourEventEntityType, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_934E35F7460E7A49_METHOD_1_897011AD911292CC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_E9B4BB3A69E157F8(::RPG::GameCore::ParkourTriggerEventRow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ParkourTriggerEventRow*))((::PBYTE)hIl2Cpp + CLASS_1_934E35F7460E7A49_METHOD_1_E9B4BB3A69E157F8_OFFSET))(this, a1);
	}

	static ::Class_1_401FD2135D0092DD* Method_1_31248F5074DEC200(::RPG::GameCore::ParkourTriggerEventRow* a1, ::Class_2_F3F43255EC92B83B* a2, ::Class_2_F3F43255EC92B83B* a3)
	{
		return ((::Class_1_401FD2135D0092DD*(*)(::RPG::GameCore::ParkourTriggerEventRow*, ::Class_2_F3F43255EC92B83B*, ::Class_2_F3F43255EC92B83B*))((::PBYTE)hIl2Cpp + CLASS_1_934E35F7460E7A49_METHOD_1_31248F5074DEC200_OFFSET))(a1, a2, a3);
	}
};
