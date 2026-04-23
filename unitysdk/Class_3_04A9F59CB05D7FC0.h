#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define CLASS_3_04A9F59CB05D7FC0_METHOD_3_185002BAD0CDE98D_OFFSET UNITYSDK_OFFSET(0x18391940)
#define CLASS_3_04A9F59CB05D7FC0_METHOD_3_FF096862EF90B096_OFFSET UNITYSDK_OFFSET(0x18391860)
#define CLASS_3_04A9F59CB05D7FC0__CTOR_OFFSET UNITYSDK_OFFSET(0x183918E0)

inline static constexpr unsigned int Class_3_04A9F59CB05D7FC0_TypeDefinitionIndex = 20054;

class Class_3_04A9F59CB05D7FC0 : public ::RPG::GameCore::TaskConfig
{
public:
	::Il2CppArray<::System::UInt32>* Field_3_2; // 0x18
	::System::String* Field_3_3; // 0x20
	::RPG::GameCore::TargetEvaluator* Field_3_0; // 0x28
	::System::String* Field_3_1; // 0x30
	::System::Single Field_3_4; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_04A9F59CB05D7FC0__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_FF096862EF90B096(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_04A9F59CB05D7FC0*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_04A9F59CB05D7FC0*&))((::PBYTE)hIl2Cpp + CLASS_3_04A9F59CB05D7FC0_METHOD_3_FF096862EF90B096_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_185002BAD0CDE98D(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_04A9F59CB05D7FC0* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_04A9F59CB05D7FC0*))((::PBYTE)hIl2Cpp + CLASS_3_04A9F59CB05D7FC0_METHOD_3_185002BAD0CDE98D_OFFSET))(a1, a2);
	}
};
