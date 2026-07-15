#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_059915F1CFEF189E;
class Class_1_C111985823ED1A98;
namespace RPG::GameCore { class DebateTestimonySetting; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_1_683BE54A4D4D4711_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16460A90)
#define CLASS_1_683BE54A4D4D4711_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x164610A0)
#define CLASS_1_683BE54A4D4D4711_METHOD_1_09526F48C04056C9_OFFSET UNITYSDK_OFFSET(0x16460F60)
#define CLASS_1_683BE54A4D4D4711_METHOD_1_43A478BA01FE29B7_OFFSET UNITYSDK_OFFSET(0x16460EC0)
#define CLASS_1_683BE54A4D4D4711_METHOD_1_47FCE72550F759BF_OFFSET UNITYSDK_OFFSET(0x16460E60)
#define CLASS_1_683BE54A4D4D4711_METHOD_1_ACC57A349C853736_OFFSET UNITYSDK_OFFSET(0x16460DC0)
#define CLASS_1_683BE54A4D4D4711_METHOD_1_E727F9956B5BD78B_OFFSET UNITYSDK_OFFSET(0x16461000)
#define CLASS_1_683BE54A4D4D4711_METHOD_1_F74C54985EDEDC9A_OFFSET UNITYSDK_OFFSET(0x16460B00)
#define CLASS_1_683BE54A4D4D4711_SET_INDEX_OFFSET UNITYSDK_OFFSET(0x164610B0)
#define CLASS_1_683BE54A4D4D4711__CTOR_OFFSET UNITYSDK_OFFSET(0x16460A80)

inline static constexpr unsigned int Class_1_683BE54A4D4D4711_TypeDefinitionIndex = 57971;

class Class_1_683BE54A4D4D4711 : public ::System::Object
{
public:
	::RPG::GameCore::TaskContext* Field_1_0; // 0x10
	::Class_1_C111985823ED1A98* Field_1_1; // 0x18
	::Class_1_C111985823ED1A98* Field_1_2; // 0x20
	::Class_1_059915F1CFEF189E* Field_1_3; // 0x28
	::System::Int32 _Index_k__BackingField; // 0x30

	::System::Void _ctor(::System::Int32 a1, ::RPG::GameCore::TaskContext* a2, ::Class_1_059915F1CFEF189E* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::GameCore::TaskContext*, ::Class_1_059915F1CFEF189E*))((::PBYTE)hIl2Cpp + CLASS_1_683BE54A4D4D4711__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_683BE54A4D4D4711_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_F74C54985EDEDC9A(::RPG::GameCore::DebateTestimonySetting* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DebateTestimonySetting*))((::PBYTE)hIl2Cpp + CLASS_1_683BE54A4D4D4711_METHOD_1_F74C54985EDEDC9A_OFFSET))(this, a1);
	}

	::System::Void Method_1_ACC57A349C853736()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_683BE54A4D4D4711_METHOD_1_ACC57A349C853736_OFFSET))(this);
	}

	::System::Void Method_1_43A478BA01FE29B7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_683BE54A4D4D4711_METHOD_1_43A478BA01FE29B7_OFFSET))(this);
	}

	::System::Boolean Method_1_09526F48C04056C9()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_683BE54A4D4D4711_METHOD_1_09526F48C04056C9_OFFSET))(this);
	}

	::System::Void Method_1_E727F9956B5BD78B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_683BE54A4D4D4711_METHOD_1_E727F9956B5BD78B_OFFSET))(this);
	}

	::Class_1_C111985823ED1A98* Method_1_47FCE72550F759BF()
	{
		return ((::Class_1_C111985823ED1A98*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_683BE54A4D4D4711_METHOD_1_47FCE72550F759BF_OFFSET))(this);
	}

	::System::Int32 get_Index()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_683BE54A4D4D4711_GET_INDEX_OFFSET))(this);
	}

	::System::Void set_Index(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_683BE54A4D4D4711_SET_INDEX_OFFSET))(this, a1);
	}
};
