#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }

#define CLASS_3_79C8B48AB14007D1_METHOD_3_03AAA6DBB5BE6FBE_OFFSET UNITYSDK_OFFSET(0x1837B630)
#define CLASS_3_79C8B48AB14007D1_METHOD_3_469ECD10EF199C13_OFFSET UNITYSDK_OFFSET(0x1837B700)
#define CLASS_3_79C8B48AB14007D1__CTOR_OFFSET UNITYSDK_OFFSET(0x1837B6B0)

inline static constexpr unsigned int Class_3_79C8B48AB14007D1_TypeDefinitionIndex = 23196;

class Class_3_79C8B48AB14007D1 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::TargetEvaluator* Field_3_0; // 0x18
	::RPG::GameCore::DynamicString* Field_3_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_79C8B48AB14007D1__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_03AAA6DBB5BE6FBE(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_79C8B48AB14007D1*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_79C8B48AB14007D1*&))((::PBYTE)hIl2Cpp + CLASS_3_79C8B48AB14007D1_METHOD_3_03AAA6DBB5BE6FBE_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_469ECD10EF199C13(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_79C8B48AB14007D1* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_79C8B48AB14007D1*))((::PBYTE)hIl2Cpp + CLASS_3_79C8B48AB14007D1_METHOD_3_469ECD10EF199C13_OFFSET))(a1, a2);
	}
};
