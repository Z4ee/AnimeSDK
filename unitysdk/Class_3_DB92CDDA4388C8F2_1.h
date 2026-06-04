#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define CLASS_3_DB92CDDA4388C8F2_1_METHOD_3_185002BAD0CDE98D_OFFSET UNITYSDK_OFFSET(0x19979950)
#define CLASS_3_DB92CDDA4388C8F2_1_METHOD_3_FF096862EF90B096_OFFSET UNITYSDK_OFFSET(0x19979870)
#define CLASS_3_DB92CDDA4388C8F2_1__CTOR_OFFSET UNITYSDK_OFFSET(0x199798F0)

inline static constexpr unsigned int Class_3_DB92CDDA4388C8F2_1_TypeDefinitionIndex = 22804;

class Class_3_DB92CDDA4388C8F2_1 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::TargetEvaluator* Field_3_0; // 0x18
	::System::String* Field_3_1; // 0x20
	::RPG::MVector3 Field_3_2; // 0x28
	::System::Single Field_3_3; // 0x34
	::System::Single Field_3_4; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DB92CDDA4388C8F2_1__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_FF096862EF90B096(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_DB92CDDA4388C8F2_1*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_DB92CDDA4388C8F2_1*&))((::PBYTE)hIl2Cpp + CLASS_3_DB92CDDA4388C8F2_1_METHOD_3_FF096862EF90B096_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_185002BAD0CDE98D(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_DB92CDDA4388C8F2_1* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_DB92CDDA4388C8F2_1*))((::PBYTE)hIl2Cpp + CLASS_3_DB92CDDA4388C8F2_1_METHOD_3_185002BAD0CDE98D_OFFSET))(a1, a2);
	}
};
