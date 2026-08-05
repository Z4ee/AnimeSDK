#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_4C8453486C91E3A1_12.h"
#include "unitysdk/Struct_2_8288F5C27D74AFA9.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_390;
class Class_1_6F28ACCECAB7E5E9;
class Class_1_D1CAFFBA0949BB65;
namespace Code::Logic::Data::ScriptObject::Level { class Member; }

#define CLASS_1_4EE1287F7728A8A8_METHOD_1_A069059A8452516D_OFFSET UNITYSDK_OFFSET(0x17A34DD0)
#define CLASS_1_4EE1287F7728A8A8_METHOD_1_A134E903C4692403_OFFSET UNITYSDK_OFFSET(0x17A34D30)
#define CLASS_1_4EE1287F7728A8A8_METHOD_1_AE3AA6B80AC62CC4_OFFSET UNITYSDK_OFFSET(0x17A34FB0)
#define CLASS_1_4EE1287F7728A8A8_METHOD_1_CD96C1430E68086B_OFFSET UNITYSDK_OFFSET(0x17A34F40)
#define CLASS_1_4EE1287F7728A8A8_METHOD_1_CF831039763E7231_OFFSET UNITYSDK_OFFSET(0x17A352D0)
#define CLASS_1_4EE1287F7728A8A8__CTOR_OFFSET UNITYSDK_OFFSET(0x17A34CF0)

inline static constexpr unsigned int Class_1_4EE1287F7728A8A8_TypeDefinitionIndex = 90534;

class Class_1_4EE1287F7728A8A8 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_390* Field_1_7; // 0x10
	::System::Int32 Field_1_0; // 0x18
	::System::Int32 Field_1_2; // 0x1C
	::System::Single Field_1_1; // 0x20
	::System::UInt32 Field_1_6; // 0x24

	::System::Void _ctor(::Code::Logic::Data::ScriptObject::Level::Member* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Code::Logic::Data::ScriptObject::Level::Member*))((::PBYTE)hIl2Cpp + CLASS_1_4EE1287F7728A8A8__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_A134E903C4692403(::Class_1_D1CAFFBA0949BB65* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D1CAFFBA0949BB65*))((::PBYTE)hIl2Cpp + CLASS_1_4EE1287F7728A8A8_METHOD_1_A134E903C4692403_OFFSET))(this, a1);
	}

	::System::Void Method_1_A069059A8452516D(::Class_1_D1CAFFBA0949BB65* a1, ::Class_1_6F28ACCECAB7E5E9* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D1CAFFBA0949BB65*, ::Class_1_6F28ACCECAB7E5E9*))((::PBYTE)hIl2Cpp + CLASS_1_4EE1287F7728A8A8_METHOD_1_A069059A8452516D_OFFSET))(this, a1, a2);
	}

	::Struct_2_4C8453486C91E3A1_12 Method_1_CD96C1430E68086B(::System::Int32 a1)
	{
		return ((::Struct_2_4C8453486C91E3A1_12(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_4EE1287F7728A8A8_METHOD_1_CD96C1430E68086B_OFFSET))(this, a1);
	}

	::System::Void Method_1_AE3AA6B80AC62CC4(::Struct_2_8288F5C27D74AFA9& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_8288F5C27D74AFA9&))((::PBYTE)hIl2Cpp + CLASS_1_4EE1287F7728A8A8_METHOD_1_AE3AA6B80AC62CC4_OFFSET))(this, a1);
	}

	::System::Void Method_1_CF831039763E7231(::Class_1_D1CAFFBA0949BB65* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D1CAFFBA0949BB65*))((::PBYTE)hIl2Cpp + CLASS_1_4EE1287F7728A8A8_METHOD_1_CF831039763E7231_OFFSET))(this, a1);
	}
};
