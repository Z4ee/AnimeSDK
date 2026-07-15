#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define CLASS_3_8E674185A55892B4_METHOD_3_292B86D9FDC9A4F5_OFFSET UNITYSDK_OFFSET(0x1B5981C0)
#define CLASS_3_8E674185A55892B4_METHOD_3_9B7C85FBDDFDAE6D_OFFSET UNITYSDK_OFFSET(0x1B598200)
#define CLASS_3_8E674185A55892B4__CTOR_OFFSET UNITYSDK_OFFSET(0x1B5981F0)

inline static constexpr unsigned int Class_3_8E674185A55892B4_TypeDefinitionIndex = 22870;

class Class_3_8E674185A55892B4 : public ::RPG::GameCore::TaskConfig
{
public:
	::System::String* Field_3_0; // 0x18
	::System::String* Field_3_1; // 0x20
	::System::String* Field_3_2; // 0x28
	::System::String* Field_3_3; // 0x30
	::RPG::GameCore::TargetEvaluator* Field_3_4; // 0x38
	::RPG::GameCore::DynamicValueContextScope Field_3_5; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8E674185A55892B4__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_292B86D9FDC9A4F5(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_8E674185A55892B4*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_8E674185A55892B4*&))((::PBYTE)hIl2Cpp + CLASS_3_8E674185A55892B4_METHOD_3_292B86D9FDC9A4F5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_9B7C85FBDDFDAE6D(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_8E674185A55892B4* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_8E674185A55892B4*))((::PBYTE)hIl2Cpp + CLASS_3_8E674185A55892B4_METHOD_3_9B7C85FBDDFDAE6D_OFFSET))(a1, a2);
	}
};
