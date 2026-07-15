#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define CLASS_3_DB92CDDA4388C8F2_1_METHOD_3_185002BAD0CDE98D_OFFSET UNITYSDK_OFFSET(0x1B5ACE20)
#define CLASS_3_DB92CDDA4388C8F2_1_METHOD_3_FCE92D332F1E367F_OFFSET UNITYSDK_OFFSET(0x1B5ACD60)
#define CLASS_3_DB92CDDA4388C8F2_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1B5ACDD0)

inline static constexpr unsigned int Class_3_DB92CDDA4388C8F2_1_TypeDefinitionIndex = 23271;

class Class_3_DB92CDDA4388C8F2_1 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::TargetEvaluator* Field_3_0; // 0x18
	::System::String* Field_3_1; // 0x20
	::System::Single Field_3_2; // 0x28
	::System::Single Field_3_3; // 0x2C
	::RPG::MVector3 Field_3_4; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DB92CDDA4388C8F2_1__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_FCE92D332F1E367F(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_DB92CDDA4388C8F2_1*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_DB92CDDA4388C8F2_1*&))((::PBYTE)hIl2Cpp + CLASS_3_DB92CDDA4388C8F2_1_METHOD_3_FCE92D332F1E367F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_185002BAD0CDE98D(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_DB92CDDA4388C8F2_1* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_DB92CDDA4388C8F2_1*))((::PBYTE)hIl2Cpp + CLASS_3_DB92CDDA4388C8F2_1_METHOD_3_185002BAD0CDE98D_OFFSET))(a1, a2);
	}
};
