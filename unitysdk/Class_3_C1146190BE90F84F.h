#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
class Class_2_EC14A02625BF0181;
namespace RPG::GameCore { class DynamicFloat; }
namespace System { class String; }

#define CLASS_3_C1146190BE90F84F_METHOD_3_28DFC52A1206DD2C_OFFSET UNITYSDK_OFFSET(0x1CB3DA40)
#define CLASS_3_C1146190BE90F84F_METHOD_3_E024E0080A08A9C9_OFFSET UNITYSDK_OFFSET(0x1CB3DA90)
#define CLASS_3_C1146190BE90F84F__CTOR_OFFSET UNITYSDK_OFFSET(0x1CB3DA80)

inline static constexpr unsigned int Class_3_C1146190BE90F84F_TypeDefinitionIndex = 22610;

class Class_3_C1146190BE90F84F : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::DynamicFloat* DPOADEGJFJN; // 0x18
	::RPG::GameCore::DynamicFloat* PDELICMHBEG; // 0x20
	::System::String* EMHGEGEGJEI; // 0x28
	::RPG::GameCore::DynamicFloat* MKAIFLDPHGD; // 0x30
	::RPG::GameCore::DynamicFloat* MEMDDBLODBL; // 0x38
	::RPG::GameCore::DynamicFloat* NJKLFNLALJL; // 0x40
	::Class_2_EC14A02625BF0181* IDJADOBDIFG; // 0x48
	::RPG::GameCore::DynamicFloat* JPEIKNPHGBB; // 0x50
	::Class_2_EC14A02625BF0181* HJKLHEIOJBG; // 0x58
	::System::Boolean GKIOLMEAOJC; // 0x60
	::System::Boolean LPJDKNICJAM; // 0x61
	::System::Boolean IBDLGGNNJMP; // 0x62

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C1146190BE90F84F__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_28DFC52A1206DD2C(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_C1146190BE90F84F*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_C1146190BE90F84F*&))((::PBYTE)hIl2Cpp + CLASS_3_C1146190BE90F84F_METHOD_3_28DFC52A1206DD2C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_E024E0080A08A9C9(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_C1146190BE90F84F* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_C1146190BE90F84F*))((::PBYTE)hIl2Cpp + CLASS_3_C1146190BE90F84F_METHOD_3_E024E0080A08A9C9_OFFSET))(a1, a2);
	}
};
