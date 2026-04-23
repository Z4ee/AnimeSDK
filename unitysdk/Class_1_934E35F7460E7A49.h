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

#define CLASS_1_934E35F7460E7A49_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11866C70)
#define CLASS_1_934E35F7460E7A49_METHOD_1_31248F5074DEC200_OFFSET UNITYSDK_OFFSET(0x11867110)
#define CLASS_1_934E35F7460E7A49_METHOD_1_752B31644633934B_OFFSET UNITYSDK_OFFSET(0x11866240)
#define CLASS_1_934E35F7460E7A49_METHOD_1_76CD9B9D1269FA90_OFFSET UNITYSDK_OFFSET(0x11866DD0)
#define CLASS_1_934E35F7460E7A49_METHOD_1_897011AD911292CC_OFFSET UNITYSDK_OFFSET(0x11867050)
#define CLASS_1_934E35F7460E7A49_METHOD_1_AFD3DA8AE7322BDF_OFFSET UNITYSDK_OFFSET(0x11866EA0)
#define CLASS_1_934E35F7460E7A49__CTOR_OFFSET UNITYSDK_OFFSET(0x11866100)

inline static constexpr unsigned int Class_1_934E35F7460E7A49_TypeDefinitionIndex = 68301;

class Class_1_934E35F7460E7A49 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_401FD2135D0092DD*>* Field_1_1; // 0x10
	::Class_1_C47576BEFCFAD595* Field_1_0; // 0x18

	::System::Void _ctor(::Class_1_C47576BEFCFAD595* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C47576BEFCFAD595*))((::PBYTE)hIl2Cpp + CLASS_1_934E35F7460E7A49__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_934E35F7460E7A49_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_76CD9B9D1269FA90(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_934E35F7460E7A49_METHOD_1_76CD9B9D1269FA90_OFFSET))(this, a1);
	}

	::System::Void Method_1_AFD3DA8AE7322BDF(::System::UInt32 a1, ::Class_2_F3F43255EC92B83B* a2, ::Class_2_F3F43255EC92B83B* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_2_F3F43255EC92B83B*, ::Class_2_F3F43255EC92B83B*))((::PBYTE)hIl2Cpp + CLASS_1_934E35F7460E7A49_METHOD_1_AFD3DA8AE7322BDF_OFFSET))(this, a1, a2, a3);
	}

	::System::Collections::Generic::IEnumerable_1<::Class_2_F3F43255EC92B83B*>* Method_1_897011AD911292CC(::RPG::GameCore::EParkourEventEntityType a1, ::System::UInt32 a2)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Class_2_F3F43255EC92B83B*>*(*)(::PVOID, ::RPG::GameCore::EParkourEventEntityType, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_934E35F7460E7A49_METHOD_1_897011AD911292CC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_752B31644633934B(::RPG::GameCore::ParkourTriggerEventRow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ParkourTriggerEventRow*))((::PBYTE)hIl2Cpp + CLASS_1_934E35F7460E7A49_METHOD_1_752B31644633934B_OFFSET))(this, a1);
	}

	static ::Class_1_401FD2135D0092DD* Method_1_31248F5074DEC200(::RPG::GameCore::ParkourTriggerEventRow* a1, ::Class_2_F3F43255EC92B83B* a2, ::Class_2_F3F43255EC92B83B* a3)
	{
		return ((::Class_1_401FD2135D0092DD*(*)(::RPG::GameCore::ParkourTriggerEventRow*, ::Class_2_F3F43255EC92B83B*, ::Class_2_F3F43255EC92B83B*))((::PBYTE)hIl2Cpp + CLASS_1_934E35F7460E7A49_METHOD_1_31248F5074DEC200_OFFSET))(a1, a2, a3);
	}
};
