#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define CLASS_3_3AD4EA164A2F9230_METHOD_3_28DFC52A1206DD2C_OFFSET UNITYSDK_OFFSET(0x1B139860)
#define CLASS_3_3AD4EA164A2F9230_METHOD_3_B291FB5C41D58000_OFFSET UNITYSDK_OFFSET(0x1B1398A0)
#define CLASS_3_3AD4EA164A2F9230__CTOR_OFFSET UNITYSDK_OFFSET(0x1B139890)

inline static constexpr unsigned int Class_3_3AD4EA164A2F9230_TypeDefinitionIndex = 22297;

class Class_3_3AD4EA164A2F9230 : public ::RPG::GameCore::TaskConfig
{
public:
	::System::String* Field_3_0; // 0x18
	::RPG::GameCore::TargetEvaluator* Field_3_1; // 0x20
	::RPG::GameCore::DynamicFloat* Field_3_2; // 0x28
	::RPG::GameCore::DynamicFloat* Field_3_3; // 0x30
	::RPG::GameCore::DynamicFloat* Field_3_4; // 0x38
	::RPG::GameCore::DynamicFloat* Field_3_5; // 0x40
	::RPG::GameCore::DynamicFloat* Field_3_6; // 0x48
	::RPG::MVector3 Field_3_7; // 0x50
	::System::Boolean Field_3_8; // 0x5C
	::System::Boolean Field_3_9; // 0x5D
	::System::Boolean Field_3_10; // 0x5E

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3AD4EA164A2F9230__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_28DFC52A1206DD2C(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_3AD4EA164A2F9230*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_3AD4EA164A2F9230*&))((::PBYTE)hIl2Cpp + CLASS_3_3AD4EA164A2F9230_METHOD_3_28DFC52A1206DD2C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_B291FB5C41D58000(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_3AD4EA164A2F9230* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_3AD4EA164A2F9230*))((::PBYTE)hIl2Cpp + CLASS_3_3AD4EA164A2F9230_METHOD_3_B291FB5C41D58000_OFFSET))(a1, a2);
	}
};
