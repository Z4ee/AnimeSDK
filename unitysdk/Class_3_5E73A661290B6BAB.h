#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FormatString.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define CLASS_3_5E73A661290B6BAB_METHOD_3_2630ACAA1C726FBD_OFFSET UNITYSDK_OFFSET(0x18964AC0)
#define CLASS_3_5E73A661290B6BAB_METHOD_3_70D89F22B6EB766C_OFFSET UNITYSDK_OFFSET(0x18964B40)
#define CLASS_3_5E73A661290B6BAB__CTOR_OFFSET UNITYSDK_OFFSET(0x18964B10)

inline static constexpr unsigned int Class_3_5E73A661290B6BAB_TypeDefinitionIndex = 22738;

class Class_3_5E73A661290B6BAB : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::TargetEvaluator* Field_3_1; // 0x18
	::RPG::GameCore::FormatString Field_3_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5E73A661290B6BAB__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_2630ACAA1C726FBD(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_5E73A661290B6BAB*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_5E73A661290B6BAB*&))((::PBYTE)hIl2Cpp + CLASS_3_5E73A661290B6BAB_METHOD_3_2630ACAA1C726FBD_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_70D89F22B6EB766C(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_5E73A661290B6BAB* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_5E73A661290B6BAB*))((::PBYTE)hIl2Cpp + CLASS_3_5E73A661290B6BAB_METHOD_3_70D89F22B6EB766C_OFFSET))(a1, a2);
	}
};
