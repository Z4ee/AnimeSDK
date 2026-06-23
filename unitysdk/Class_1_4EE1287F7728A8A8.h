#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_4C8453486C91E3A1_11.h"
#include "unitysdk/Struct_2_8288F5C27D74AFA9.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_405;
class Class_1_4C71EF04B2D31519;
class Class_1_A3AC0B6B344CF5CC;
namespace Code::Logic::Data::ScriptObject::Level { class Member; }

#define CLASS_1_4EE1287F7728A8A8_METHOD_1_7CBC6699BC67CE6E_OFFSET UNITYSDK_OFFSET(0x126D5BE0)
#define CLASS_1_4EE1287F7728A8A8_METHOD_1_A069059A8452516D_OFFSET UNITYSDK_OFFSET(0x126D5640)
#define CLASS_1_4EE1287F7728A8A8_METHOD_1_A134E903C4692403_OFFSET UNITYSDK_OFFSET(0x126D5B40)
#define CLASS_1_4EE1287F7728A8A8_METHOD_1_AE3AA6B80AC62CC4_OFFSET UNITYSDK_OFFSET(0x126D5820)
#define CLASS_1_4EE1287F7728A8A8_METHOD_1_CD96C1430E68086B_OFFSET UNITYSDK_OFFSET(0x126D57B0)
#define CLASS_1_4EE1287F7728A8A8__CTOR_OFFSET UNITYSDK_OFFSET(0x126D5600)

inline static constexpr unsigned int Class_1_4EE1287F7728A8A8_TypeDefinitionIndex = 47725;

class Class_1_4EE1287F7728A8A8 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_405* Field_1_3; // 0x10
	::System::Int32 Field_1_0; // 0x18
	::System::UInt32 Field_1_4; // 0x1C
	::System::Single Field_1_1; // 0x20
	::System::Int32 Field_1_2; // 0x24

	::System::Void _ctor(::Code::Logic::Data::ScriptObject::Level::Member* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Code::Logic::Data::ScriptObject::Level::Member*))((::PBYTE)hIl2Cpp + CLASS_1_4EE1287F7728A8A8__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_A069059A8452516D(::Class_1_4C71EF04B2D31519* a1, ::Class_1_A3AC0B6B344CF5CC* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4C71EF04B2D31519*, ::Class_1_A3AC0B6B344CF5CC*))((::PBYTE)hIl2Cpp + CLASS_1_4EE1287F7728A8A8_METHOD_1_A069059A8452516D_OFFSET))(this, a1, a2);
	}

	::Struct_2_4C8453486C91E3A1_11 Method_1_CD96C1430E68086B(::System::Int32 a1)
	{
		return ((::Struct_2_4C8453486C91E3A1_11(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_4EE1287F7728A8A8_METHOD_1_CD96C1430E68086B_OFFSET))(this, a1);
	}

	::System::Void Method_1_AE3AA6B80AC62CC4(::Struct_2_8288F5C27D74AFA9& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_8288F5C27D74AFA9&))((::PBYTE)hIl2Cpp + CLASS_1_4EE1287F7728A8A8_METHOD_1_AE3AA6B80AC62CC4_OFFSET))(this, a1);
	}

	::System::Void Method_1_A134E903C4692403(::Class_1_4C71EF04B2D31519* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4C71EF04B2D31519*))((::PBYTE)hIl2Cpp + CLASS_1_4EE1287F7728A8A8_METHOD_1_A134E903C4692403_OFFSET))(this, a1);
	}

	::System::Void Method_1_7CBC6699BC67CE6E(::Class_1_4C71EF04B2D31519* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4C71EF04B2D31519*))((::PBYTE)hIl2Cpp + CLASS_1_4EE1287F7728A8A8_METHOD_1_7CBC6699BC67CE6E_OFFSET))(this, a1);
	}
};
