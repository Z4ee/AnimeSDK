#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class SwitchClientRaidMap; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_0CCCE164410D7AD7_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE66CE70)
#define CLASS_2_0CCCE164410D7AD7_METHOD_2_21AFFD96111DC5FA_OFFSET UNITYSDK_OFFSET(0xE66D050)
#define CLASS_2_0CCCE164410D7AD7_METHOD_2_326667BB73F9EA49_OFFSET UNITYSDK_OFFSET(0xE66D120)
#define CLASS_2_0CCCE164410D7AD7_METHOD_2_87E0654B98D0D63C_OFFSET UNITYSDK_OFFSET(0xE66D380)
#define CLASS_2_0CCCE164410D7AD7_METHOD_2_89EF21CA0414B145_OFFSET UNITYSDK_OFFSET(0xE66D1F0)
#define CLASS_2_0CCCE164410D7AD7_METHOD_2_96BDC4B57CCFE000_OFFSET UNITYSDK_OFFSET(0xE66D450)
#define CLASS_2_0CCCE164410D7AD7_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xE66CEB0)
#define CLASS_2_0CCCE164410D7AD7_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xE66CF30)
#define CLASS_2_0CCCE164410D7AD7_TICK_OFFSET UNITYSDK_OFFSET(0xE66CF80)
#define CLASS_2_0CCCE164410D7AD7__CTOR_OFFSET UNITYSDK_OFFSET(0xE66CE50)

inline static constexpr unsigned int Class_2_0CCCE164410D7AD7_TypeDefinitionIndex = 49156;

class Class_2_0CCCE164410D7AD7 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_1; // 0x18
	::RPG::GameCore::SwitchClientRaidMap* Field_2_0; // 0x20
	::System::UInt32 Field_2_2; // 0x28
	::System::Single Field_2_3; // 0x2C
	::System::Single Field_2_4; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SwitchClientRaidMap* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SwitchClientRaidMap*))((::PBYTE)hIl2Cpp + CLASS_2_0CCCE164410D7AD7__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0CCCE164410D7AD7_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0CCCE164410D7AD7_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0CCCE164410D7AD7_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_0CCCE164410D7AD7_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_21AFFD96111DC5FA(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_0CCCE164410D7AD7_METHOD_2_21AFFD96111DC5FA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_87E0654B98D0D63C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0CCCE164410D7AD7_METHOD_2_87E0654B98D0D63C_OFFSET))(this);
	}

	::System::Void Method_2_326667BB73F9EA49()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0CCCE164410D7AD7_METHOD_2_326667BB73F9EA49_OFFSET))(this);
	}

	::System::Void Method_2_89EF21CA0414B145()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0CCCE164410D7AD7_METHOD_2_89EF21CA0414B145_OFFSET))(this);
	}

	::System::Void Method_2_96BDC4B57CCFE000(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_0CCCE164410D7AD7_METHOD_2_96BDC4B57CCFE000_OFFSET))(this, a1);
	}
};
