#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_310D67B31C67B0C3;
class Class_1_C111985823ED1A98;
namespace RPG::GameCore { class DebateTestimonySetting; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_1_683BE54A4D4D4711_DISPOSE_OFFSET UNITYSDK_OFFSET(0xEA64FB0)
#define CLASS_1_683BE54A4D4D4711_GET_INDEX_OFFSET UNITYSDK_OFFSET(0xEA655C0)
#define CLASS_1_683BE54A4D4D4711_METHOD_1_09526F48C04056C9_OFFSET UNITYSDK_OFFSET(0xEA65480)
#define CLASS_1_683BE54A4D4D4711_METHOD_1_3B7145E79424FB75_OFFSET UNITYSDK_OFFSET(0xEA65520)
#define CLASS_1_683BE54A4D4D4711_METHOD_1_47FCE72550F759BF_OFFSET UNITYSDK_OFFSET(0xEA65380)
#define CLASS_1_683BE54A4D4D4711_METHOD_1_7646FFE662147970_OFFSET UNITYSDK_OFFSET(0xEA653E0)
#define CLASS_1_683BE54A4D4D4711_METHOD_1_AC50AFCF33BB0AFB_OFFSET UNITYSDK_OFFSET(0xEA652E0)
#define CLASS_1_683BE54A4D4D4711_METHOD_1_F74C54985EDEDC9A_OFFSET UNITYSDK_OFFSET(0xEA65030)
#define CLASS_1_683BE54A4D4D4711_SET_INDEX_OFFSET UNITYSDK_OFFSET(0xEA655D0)
#define CLASS_1_683BE54A4D4D4711__CTOR_OFFSET UNITYSDK_OFFSET(0xEA64FA0)

inline static constexpr unsigned int Class_1_683BE54A4D4D4711_TypeDefinitionIndex = 49172;

class Class_1_683BE54A4D4D4711 : public ::System::Object
{
public:
	::Class_1_C111985823ED1A98* Field_1_1; // 0x10
	::Class_1_C111985823ED1A98* Field_1_2; // 0x18
	::Class_1_310D67B31C67B0C3* Field_1_4; // 0x20
	::RPG::GameCore::TaskContext* Field_1_3; // 0x28
	::System::Int32 _Index_k__BackingField; // 0x30

	::System::Void _ctor(::System::Int32 a1, ::RPG::GameCore::TaskContext* a2, ::Class_1_310D67B31C67B0C3* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::GameCore::TaskContext*, ::Class_1_310D67B31C67B0C3*))((::PBYTE)hIl2Cpp + CLASS_1_683BE54A4D4D4711__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_683BE54A4D4D4711_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_F74C54985EDEDC9A(::RPG::GameCore::DebateTestimonySetting* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DebateTestimonySetting*))((::PBYTE)hIl2Cpp + CLASS_1_683BE54A4D4D4711_METHOD_1_F74C54985EDEDC9A_OFFSET))(this, a1);
	}

	::System::Void Method_1_AC50AFCF33BB0AFB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_683BE54A4D4D4711_METHOD_1_AC50AFCF33BB0AFB_OFFSET))(this);
	}

	::System::Void Method_1_7646FFE662147970()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_683BE54A4D4D4711_METHOD_1_7646FFE662147970_OFFSET))(this);
	}

	::System::Boolean Method_1_09526F48C04056C9()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_683BE54A4D4D4711_METHOD_1_09526F48C04056C9_OFFSET))(this);
	}

	::System::Void Method_1_3B7145E79424FB75()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_683BE54A4D4D4711_METHOD_1_3B7145E79424FB75_OFFSET))(this);
	}

	::Class_1_C111985823ED1A98* Method_1_47FCE72550F759BF()
	{
		return ((::Class_1_C111985823ED1A98*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_683BE54A4D4D4711_METHOD_1_47FCE72550F759BF_OFFSET))(this);
	}

	::System::Int32 get_Index()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_683BE54A4D4D4711_GET_INDEX_OFFSET))(this);
	}

	::System::Void set_Index(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_683BE54A4D4D4711_SET_INDEX_OFFSET))(this, value);
	}
};
