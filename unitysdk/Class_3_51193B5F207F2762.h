#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FormatString.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define CLASS_3_51193B5F207F2762_METHOD_3_B291FB5C41D58000_OFFSET UNITYSDK_OFFSET(0x19198550)
#define CLASS_3_51193B5F207F2762_METHOD_3_FF096862EF90B096_OFFSET UNITYSDK_OFFSET(0x191984C0)
#define CLASS_3_51193B5F207F2762__CTOR_OFFSET UNITYSDK_OFFSET(0x19198520)

inline static constexpr unsigned int Class_3_51193B5F207F2762_TypeDefinitionIndex = 22055;

class Class_3_51193B5F207F2762 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::FormatString Field_3_0; // 0x18
	::RPG::GameCore::TargetEvaluator* Field_3_1; // 0x20
	::System::String* Field_3_2; // 0x28
	::RPG::GameCore::TargetEvaluator* Field_3_3; // 0x30
	::RPG::MVector3 Field_3_4; // 0x38
	::System::Boolean Field_3_5; // 0x44
	::System::Single Field_3_6; // 0x48
	::RPG::MVector3 Field_3_7; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_51193B5F207F2762__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_FF096862EF90B096(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_51193B5F207F2762*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_51193B5F207F2762*&))((::PBYTE)hIl2Cpp + CLASS_3_51193B5F207F2762_METHOD_3_FF096862EF90B096_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_B291FB5C41D58000(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_51193B5F207F2762* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_51193B5F207F2762*))((::PBYTE)hIl2Cpp + CLASS_3_51193B5F207F2762_METHOD_3_B291FB5C41D58000_OFFSET))(a1, a2);
	}
};
