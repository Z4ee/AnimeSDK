#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }

#define CLASS_3_9241DAB08E007B55_METHOD_3_400CD15A8456AED9_OFFSET UNITYSDK_OFFSET(0x1AF7AA50)
#define CLASS_3_9241DAB08E007B55_METHOD_3_7F22A781A9156478_OFFSET UNITYSDK_OFFSET(0x1AF7AA90)
#define CLASS_3_9241DAB08E007B55__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF7AA80)

inline static constexpr unsigned int Class_3_9241DAB08E007B55_TypeDefinitionIndex = 23334;

class Class_3_9241DAB08E007B55 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::DynamicString* Field_3_0; // 0x18
	::RPG::GameCore::TargetEvaluator* Field_3_1; // 0x20
	::System::Boolean Field_3_2; // 0x28
	::System::Boolean Field_3_3; // 0x29

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9241DAB08E007B55__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_400CD15A8456AED9(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_9241DAB08E007B55*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_9241DAB08E007B55*&))((::PBYTE)hIl2Cpp + CLASS_3_9241DAB08E007B55_METHOD_3_400CD15A8456AED9_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_7F22A781A9156478(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_9241DAB08E007B55* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_9241DAB08E007B55*))((::PBYTE)hIl2Cpp + CLASS_3_9241DAB08E007B55_METHOD_3_7F22A781A9156478_OFFSET))(a1, a2);
	}
};
