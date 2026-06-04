#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_470;
class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class SequenceConfig; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_C75DDA89CCB3A76B_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA5187E0)
#define CLASS_1_C75DDA89CCB3A76B_GET_NEXT_OFFSET UNITYSDK_OFFSET(0xA518930)
#define CLASS_1_C75DDA89CCB3A76B_GET_PREV_OFFSET UNITYSDK_OFFSET(0xA518910)
#define CLASS_1_C75DDA89CCB3A76B_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0xA518960)
#define CLASS_1_C75DDA89CCB3A76B_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0xA518950)
#define CLASS_1_C75DDA89CCB3A76B_METHOD_1_C8D6B29192F288ED_OFFSET UNITYSDK_OFFSET(0xA518970)
#define CLASS_1_C75DDA89CCB3A76B_SET_NEXT_OFFSET UNITYSDK_OFFSET(0xA518940)
#define CLASS_1_C75DDA89CCB3A76B_SET_PREV_OFFSET UNITYSDK_OFFSET(0xA518920)
#define CLASS_1_C75DDA89CCB3A76B__CTOR_1_OFFSET UNITYSDK_OFFSET(0xA5187C0)
#define CLASS_1_C75DDA89CCB3A76B__CTOR_OFFSET UNITYSDK_OFFSET(0xA518790)

inline static constexpr unsigned int Class_1_C75DDA89CCB3A76B_TypeDefinitionIndex = 50552;

class Class_1_C75DDA89CCB3A76B : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_470* _Prev_k__BackingField; // 0x10
	::RPG::GameCore::TaskContext* Field_1_1; // 0x18
	::System::Collections::Generic::List_1<::Class_3_07C3C4D2990C49EE*>* Field_1_2; // 0x20
	::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::TaskConfig*>* Field_1_3; // 0x28
	::Class_0_16E4307DCC419505_470* _Next_k__BackingField; // 0x30
	::System::Int32 Field_1_5; // 0x38
	::System::Int32 Field_1_6; // 0x3C
	::System::Int32 Field_1_7; // 0x40

	::System::Void _ctor(::System::Int32 a1, ::RPG::GameCore::TaskContext* a2, ::RPG::GameCore::SequenceConfig* a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SequenceConfig*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C75DDA89CCB3A76B__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void _ctor_1(::System::Int32 a1, ::RPG::GameCore::TaskContext* a2, ::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::TaskConfig*>* a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::TaskConfig*>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C75DDA89CCB3A76B__CTOR_1_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C75DDA89CCB3A76B_DISPOSE_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_470* get_Prev()
	{
		return ((::Class_0_16E4307DCC419505_470*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C75DDA89CCB3A76B_GET_PREV_OFFSET))(this);
	}

	::System::Void set_Prev(::Class_0_16E4307DCC419505_470* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_470*))((::PBYTE)hIl2Cpp + CLASS_1_C75DDA89CCB3A76B_SET_PREV_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_470* get_Next()
	{
		return ((::Class_0_16E4307DCC419505_470*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C75DDA89CCB3A76B_GET_NEXT_OFFSET))(this);
	}

	::System::Void set_Next(::Class_0_16E4307DCC419505_470* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_470*))((::PBYTE)hIl2Cpp + CLASS_1_C75DDA89CCB3A76B_SET_NEXT_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C75DDA89CCB3A76B_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Int32 get_Priority()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C75DDA89CCB3A76B_GET_PRIORITY_OFFSET))(this);
	}

	::System::Void Method_1_C8D6B29192F288ED()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C75DDA89CCB3A76B_METHOD_1_C8D6B29192F288ED_OFFSET))(this);
	}
};
