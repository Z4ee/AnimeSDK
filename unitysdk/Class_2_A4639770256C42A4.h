#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class MuseumItemRow; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitGetMuseumExhibit; }
namespace System { class Object; }

#define CLASS_2_A4639770256C42A4_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC4669F0)
#define CLASS_2_A4639770256C42A4_METHOD_2_3BEE013982122797_OFFSET UNITYSDK_OFFSET(0xC466800)
#define CLASS_2_A4639770256C42A4_METHOD_2_77D630694D127945_OFFSET UNITYSDK_OFFSET(0xC466C50)
#define CLASS_2_A4639770256C42A4_METHOD_2_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0xC466680)
#define CLASS_2_A4639770256C42A4_METHOD_2_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0xC466B50)
#define CLASS_2_A4639770256C42A4_METHOD_2_ECD499F16F5FBB90_OFFSET UNITYSDK_OFFSET(0xC466E70)
#define CLASS_2_A4639770256C42A4_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0xC466E10)
#define CLASS_2_A4639770256C42A4_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC466790)
#define CLASS_2_A4639770256C42A4_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC466A90)
#define CLASS_2_A4639770256C42A4_TICK_OFFSET UNITYSDK_OFFSET(0xC466AF0)
#define CLASS_2_A4639770256C42A4__CTOR_OFFSET UNITYSDK_OFFSET(0xC466660)

inline static constexpr unsigned int Class_2_A4639770256C42A4_TypeDefinitionIndex = 49967;

class Class_2_A4639770256C42A4 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::WaitGetMuseumExhibit* Field_2_0; // 0x18
	::RPG::GameCore::MuseumItemRow* Field_2_1; // 0x20
	::RPG::GameCore::TaskContext* Field_2_2; // 0x28
	::System::Boolean Field_2_3; // 0x30
	::System::Boolean Field_2_4; // 0x31

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitGetMuseumExhibit* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitGetMuseumExhibit*))((::PBYTE)hIl2Cpp + CLASS_2_A4639770256C42A4__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A4639770256C42A4_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A4639770256C42A4_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_A4639770256C42A4_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A4639770256C42A4_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_2_77D630694D127945(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_A4639770256C42A4_METHOD_2_77D630694D127945_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_A4639770256C42A4_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void Method_2_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A4639770256C42A4_METHOD_2_89D1F247B9D324EE_OFFSET))(this);
	}

	::System::Void Method_2_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A4639770256C42A4_METHOD_2_A239DF324AF4215D_OFFSET))(this);
	}

	::System::Boolean Method_2_3BEE013982122797()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A4639770256C42A4_METHOD_2_3BEE013982122797_OFFSET))(this);
	}

	::RPG::GameCore::MuseumItemRow* Method_2_ECD499F16F5FBB90(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::RPG::GameCore::MuseumItemRow*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_A4639770256C42A4_METHOD_2_ECD499F16F5FBB90_OFFSET))(this, a1, a2);
	}
};
