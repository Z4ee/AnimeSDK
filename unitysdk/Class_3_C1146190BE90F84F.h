#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
class Class_2_EC14A02625BF0181;
namespace RPG::GameCore { class DynamicFloat; }
namespace System { class String; }

#define CLASS_3_C1146190BE90F84F_METHOD_3_28DFC52A1206DD2C_OFFSET UNITYSDK_OFFSET(0x1B339720)
#define CLASS_3_C1146190BE90F84F_METHOD_3_E024E0080A08A9C9_OFFSET UNITYSDK_OFFSET(0x1B339770)
#define CLASS_3_C1146190BE90F84F__CTOR_OFFSET UNITYSDK_OFFSET(0x1B339760)

inline static constexpr unsigned int Class_3_C1146190BE90F84F_TypeDefinitionIndex = 22043;

class Class_3_C1146190BE90F84F : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::DynamicFloat* Field_3_0; // 0x18
	::RPG::GameCore::DynamicFloat* Field_3_1; // 0x20
	::Class_2_EC14A02625BF0181* Field_3_2; // 0x28
	::System::String* Field_3_3; // 0x30
	::RPG::GameCore::DynamicFloat* Field_3_4; // 0x38
	::RPG::GameCore::DynamicFloat* Field_3_5; // 0x40
	::RPG::GameCore::DynamicFloat* Field_3_6; // 0x48
	::RPG::GameCore::DynamicFloat* Field_3_7; // 0x50
	::Class_2_EC14A02625BF0181* Field_3_8; // 0x58
	::System::Boolean Field_3_9; // 0x60
	::System::Boolean Field_3_10; // 0x61
	::System::Boolean Field_3_11; // 0x62

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
