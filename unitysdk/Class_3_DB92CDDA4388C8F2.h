#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define CLASS_3_DB92CDDA4388C8F2_METHOD_3_185002BAD0CDE98D_OFFSET UNITYSDK_OFFSET(0x1832A8E0)
#define CLASS_3_DB92CDDA4388C8F2_METHOD_3_FF096862EF90B096_OFFSET UNITYSDK_OFFSET(0x1832A800)
#define CLASS_3_DB92CDDA4388C8F2__CTOR_OFFSET UNITYSDK_OFFSET(0x1832A880)

inline static constexpr unsigned int Class_3_DB92CDDA4388C8F2_TypeDefinitionIndex = 23123;

class Class_3_DB92CDDA4388C8F2 : public ::RPG::GameCore::TaskConfig
{
public:
	::System::String* Field_3_3; // 0x18
	::RPG::GameCore::TargetEvaluator* Field_3_0; // 0x20
	::System::Single Field_3_1; // 0x28
	::System::Single Field_3_2; // 0x2C
	::RPG::MVector3 Field_3_4; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DB92CDDA4388C8F2__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_FF096862EF90B096(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_DB92CDDA4388C8F2*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_DB92CDDA4388C8F2*&))((::PBYTE)hIl2Cpp + CLASS_3_DB92CDDA4388C8F2_METHOD_3_FF096862EF90B096_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_185002BAD0CDE98D(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_DB92CDDA4388C8F2* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_DB92CDDA4388C8F2*))((::PBYTE)hIl2Cpp + CLASS_3_DB92CDDA4388C8F2_METHOD_3_185002BAD0CDE98D_OFFSET))(a1, a2);
	}
};
