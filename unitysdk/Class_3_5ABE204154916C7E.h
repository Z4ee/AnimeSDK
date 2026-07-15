#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
class Class_2_DC5AFEB4384BEEDA;
class Class_2_E5D38AB31F1F266B;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define CLASS_3_5ABE204154916C7E_METHOD_3_28DFC52A1206DD2C_OFFSET UNITYSDK_OFFSET(0x1B5917C0)
#define CLASS_3_5ABE204154916C7E_METHOD_3_E024E0080A08A9C9_OFFSET UNITYSDK_OFFSET(0x1B591800)
#define CLASS_3_5ABE204154916C7E__CTOR_OFFSET UNITYSDK_OFFSET(0x1B5917F0)

inline static constexpr unsigned int Class_3_5ABE204154916C7E_TypeDefinitionIndex = 22040;

class Class_3_5ABE204154916C7E : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::TargetEvaluator* Field_3_0; // 0x18
	::System::String* Field_3_1; // 0x20
	::Class_2_E5D38AB31F1F266B* Field_3_2; // 0x28
	::System::String* Field_3_3; // 0x30
	::RPG::GameCore::DynamicFloat* Field_3_4; // 0x38
	::Class_2_DC5AFEB4384BEEDA* Field_3_5; // 0x40
	::System::Boolean Field_3_6; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5ABE204154916C7E__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_28DFC52A1206DD2C(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_5ABE204154916C7E*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_5ABE204154916C7E*&))((::PBYTE)hIl2Cpp + CLASS_3_5ABE204154916C7E_METHOD_3_28DFC52A1206DD2C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_E024E0080A08A9C9(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_5ABE204154916C7E* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_5ABE204154916C7E*))((::PBYTE)hIl2Cpp + CLASS_3_5ABE204154916C7E_METHOD_3_E024E0080A08A9C9_OFFSET))(a1, a2);
	}
};
