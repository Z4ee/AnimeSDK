#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EnumStatusType.h"
#include "unitysdk/RPG/GameCore/RtBehaviorFlag.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define CLASS_3_1BE1C9B95DC77FA5_METHOD_3_797574F762C9D389_OFFSET UNITYSDK_OFFSET(0x1CF48740)
#define CLASS_3_1BE1C9B95DC77FA5_METHOD_3_FCE92D332F1E367F_OFFSET UNITYSDK_OFFSET(0x1CF486F0)
#define CLASS_3_1BE1C9B95DC77FA5__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF48730)

inline static constexpr unsigned int Class_3_1BE1C9B95DC77FA5_TypeDefinitionIndex = 23336;

class Class_3_1BE1C9B95DC77FA5 : public ::RPG::GameCore::TaskConfig
{
public:
	::Il2CppArray<::RPG::GameCore::RtBehaviorFlag>* Field_3_0; // 0x18
	::RPG::GameCore::DynamicFloat* Field_3_1; // 0x20
	::RPG::GameCore::TargetEvaluator* Field_3_2; // 0x28
	::RPG::GameCore::EnumStatusType Field_3_3; // 0x30
	::System::Boolean Field_3_4; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1BE1C9B95DC77FA5__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_FCE92D332F1E367F(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_1BE1C9B95DC77FA5*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_1BE1C9B95DC77FA5*&))((::PBYTE)hIl2Cpp + CLASS_3_1BE1C9B95DC77FA5_METHOD_3_FCE92D332F1E367F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_797574F762C9D389(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_1BE1C9B95DC77FA5* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_1BE1C9B95DC77FA5*))((::PBYTE)hIl2Cpp + CLASS_3_1BE1C9B95DC77FA5_METHOD_3_797574F762C9D389_OFFSET))(a1, a2);
	}
};
