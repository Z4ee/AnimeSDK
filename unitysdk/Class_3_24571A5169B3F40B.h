#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define CLASS_3_24571A5169B3F40B_METHOD_3_9EA7A67A8BC52A5F_OFFSET UNITYSDK_OFFSET(0x18DBEB80)
#define CLASS_3_24571A5169B3F40B_METHOD_3_F2F19A0D61B85A09_OFFSET UNITYSDK_OFFSET(0x18DBEA30)
#define CLASS_3_24571A5169B3F40B__CTOR_OFFSET UNITYSDK_OFFSET(0x18DBEAF0)

inline static constexpr unsigned int Class_3_24571A5169B3F40B_TypeDefinitionIndex = 20915;

class Class_3_24571A5169B3F40B : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::TargetEvaluator* Field_3_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_24571A5169B3F40B__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_F2F19A0D61B85A09(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_24571A5169B3F40B*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_24571A5169B3F40B*&))((::PBYTE)hIl2Cpp + CLASS_3_24571A5169B3F40B_METHOD_3_F2F19A0D61B85A09_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_9EA7A67A8BC52A5F(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_24571A5169B3F40B* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_24571A5169B3F40B*))((::PBYTE)hIl2Cpp + CLASS_3_24571A5169B3F40B_METHOD_3_9EA7A67A8BC52A5F_OFFSET))(a1, a2);
	}
};
