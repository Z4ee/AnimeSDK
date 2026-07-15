#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define CLASS_3_3625EE6F11ED115C_METHOD_3_292B86D9FDC9A4F5_OFFSET UNITYSDK_OFFSET(0x1AFA44D0)
#define CLASS_3_3625EE6F11ED115C_METHOD_3_99AC8556B83941E4_OFFSET UNITYSDK_OFFSET(0x1AFA4510)
#define CLASS_3_3625EE6F11ED115C__CTOR_OFFSET UNITYSDK_OFFSET(0x1AFA4500)

inline static constexpr unsigned int Class_3_3625EE6F11ED115C_TypeDefinitionIndex = 22869;

class Class_3_3625EE6F11ED115C : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::TargetEvaluator* Field_3_0; // 0x18
	::RPG::GameCore::DynamicFloat* Field_3_1; // 0x20
	::RPG::GameCore::DynamicFloat* Field_3_2; // 0x28
	::RPG::GameCore::DynamicFloat* Field_3_3; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3625EE6F11ED115C__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_292B86D9FDC9A4F5(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_3625EE6F11ED115C*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_3625EE6F11ED115C*&))((::PBYTE)hIl2Cpp + CLASS_3_3625EE6F11ED115C_METHOD_3_292B86D9FDC9A4F5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_99AC8556B83941E4(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_3625EE6F11ED115C* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_3625EE6F11ED115C*))((::PBYTE)hIl2Cpp + CLASS_3_3625EE6F11ED115C_METHOD_3_99AC8556B83941E4_OFFSET))(a1, a2);
	}
};
