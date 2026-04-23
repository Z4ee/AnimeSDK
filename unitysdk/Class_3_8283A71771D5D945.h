#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define CLASS_3_8283A71771D5D945_METHOD_3_1F96CACAEB5EDB64_OFFSET UNITYSDK_OFFSET(0x19145320)
#define CLASS_3_8283A71771D5D945_METHOD_3_7F22A781A9156478_OFFSET UNITYSDK_OFFSET(0x191453F0)
#define CLASS_3_8283A71771D5D945__CTOR_OFFSET UNITYSDK_OFFSET(0x191453A0)

inline static constexpr unsigned int Class_3_8283A71771D5D945_TypeDefinitionIndex = 21428;

class Class_3_8283A71771D5D945 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::TargetEvaluator* Field_3_1; // 0x18
	::RPG::GameCore::TargetEvaluator* Field_3_0; // 0x20
	::RPG::GameCore::DynamicFloat* Field_3_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8283A71771D5D945__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_1F96CACAEB5EDB64(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_8283A71771D5D945*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_8283A71771D5D945*&))((::PBYTE)hIl2Cpp + CLASS_3_8283A71771D5D945_METHOD_3_1F96CACAEB5EDB64_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_7F22A781A9156478(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_8283A71771D5D945* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_8283A71771D5D945*))((::PBYTE)hIl2Cpp + CLASS_3_8283A71771D5D945_METHOD_3_7F22A781A9156478_OFFSET))(a1, a2);
	}
};
