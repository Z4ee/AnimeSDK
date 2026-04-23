#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
class Class_2_049053A9DCD26B56;
class Class_2_06FF6460B8BB44DE;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define CLASS_3_38E157EDA2B4AD08_METHOD_3_185002BAD0CDE98D_OFFSET UNITYSDK_OFFSET(0x187A86C0)
#define CLASS_3_38E157EDA2B4AD08_METHOD_3_FF096862EF90B096_OFFSET UNITYSDK_OFFSET(0x187A85F0)
#define CLASS_3_38E157EDA2B4AD08__CTOR_OFFSET UNITYSDK_OFFSET(0x187A8670)

inline static constexpr unsigned int Class_3_38E157EDA2B4AD08_TypeDefinitionIndex = 20052;

class Class_3_38E157EDA2B4AD08 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::TargetEvaluator* Field_3_0; // 0x18
	::System::String* Field_3_1; // 0x20
	::Il2CppArray<::Class_2_049053A9DCD26B56*>* Field_3_3; // 0x28
	::Class_2_06FF6460B8BB44DE* Field_3_2; // 0x30
	::System::Single Field_3_4; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_38E157EDA2B4AD08__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_FF096862EF90B096(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_38E157EDA2B4AD08*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_38E157EDA2B4AD08*&))((::PBYTE)hIl2Cpp + CLASS_3_38E157EDA2B4AD08_METHOD_3_FF096862EF90B096_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_185002BAD0CDE98D(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_38E157EDA2B4AD08* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_38E157EDA2B4AD08*))((::PBYTE)hIl2Cpp + CLASS_3_38E157EDA2B4AD08_METHOD_3_185002BAD0CDE98D_OFFSET))(a1, a2);
	}
};
