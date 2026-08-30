#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }

#define CLASS_3_9241DAB08E007B55_METHOD_3_400CD15A8456AED9_OFFSET UNITYSDK_OFFSET(0x1CF4DCA0)
#define CLASS_3_9241DAB08E007B55_METHOD_3_7F22A781A9156478_OFFSET UNITYSDK_OFFSET(0x1CF4DCE0)
#define CLASS_3_9241DAB08E007B55__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF4DCD0)

inline static constexpr unsigned int Class_3_9241DAB08E007B55_TypeDefinitionIndex = 23914;

class Class_3_9241DAB08E007B55 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::DynamicString* IFNAGLOMHBK; // 0x18
	::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x20
	::System::Boolean CIHJDEJJNOA; // 0x28
	::System::Boolean JEJPBIGFOOB; // 0x29

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
