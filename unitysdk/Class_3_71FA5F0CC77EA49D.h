#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
class Class_2_E5D38AB31F1F266B;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define CLASS_3_71FA5F0CC77EA49D_METHOD_3_E024E0080A08A9C9_OFFSET UNITYSDK_OFFSET(0x16BB5600)
#define CLASS_3_71FA5F0CC77EA49D_METHOD_3_FF096862EF90B096_OFFSET UNITYSDK_OFFSET(0x16BB54E0)
#define CLASS_3_71FA5F0CC77EA49D__CTOR_OFFSET UNITYSDK_OFFSET(0x16BB5580)

inline static constexpr unsigned int Class_3_71FA5F0CC77EA49D_TypeDefinitionIndex = 21063;

class Class_3_71FA5F0CC77EA49D : public ::RPG::GameCore::TaskConfig
{
public:
	::System::String* Field_3_5; // 0x18
	::Class_2_E5D38AB31F1F266B* Field_3_4; // 0x20
	::System::String* Field_3_7; // 0x28
	::RPG::GameCore::TargetEvaluator* Field_3_3; // 0x30
	::RPG::GameCore::DynamicFloat* Field_3_6; // 0x38
	::System::String* Field_3_2; // 0x40
	::RPG::GameCore::TargetEvaluator* Field_3_1; // 0x48
	::RPG::GameCore::StringHash Field_3_8; // 0x50
	::System::Boolean Field_3_0; // 0x54

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_71FA5F0CC77EA49D__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_FF096862EF90B096(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_71FA5F0CC77EA49D*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_71FA5F0CC77EA49D*&))((::PBYTE)hIl2Cpp + CLASS_3_71FA5F0CC77EA49D_METHOD_3_FF096862EF90B096_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_E024E0080A08A9C9(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_71FA5F0CC77EA49D* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_71FA5F0CC77EA49D*))((::PBYTE)hIl2Cpp + CLASS_3_71FA5F0CC77EA49D_METHOD_3_E024E0080A08A9C9_OFFSET))(a1, a2);
	}
};
