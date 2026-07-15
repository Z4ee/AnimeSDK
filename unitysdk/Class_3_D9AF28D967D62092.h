#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define CLASS_3_D9AF28D967D62092_METHOD_3_1F96CACAEB5EDB64_OFFSET UNITYSDK_OFFSET(0x1B626920)
#define CLASS_3_D9AF28D967D62092_METHOD_3_7F22A781A9156478_OFFSET UNITYSDK_OFFSET(0x1B626A60)
#define CLASS_3_D9AF28D967D62092__CTOR_OFFSET UNITYSDK_OFFSET(0x1B6269D0)

inline static constexpr unsigned int Class_3_D9AF28D967D62092_TypeDefinitionIndex = 23232;

class Class_3_D9AF28D967D62092 : public ::RPG::GameCore::TaskConfig
{
public:
	::System::String* Field_3_0; // 0x18
	::RPG::GameCore::DynamicFloat* Field_3_1; // 0x20
	::RPG::GameCore::TargetEvaluator* Field_3_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D9AF28D967D62092__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_1F96CACAEB5EDB64(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_D9AF28D967D62092*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_D9AF28D967D62092*&))((::PBYTE)hIl2Cpp + CLASS_3_D9AF28D967D62092_METHOD_3_1F96CACAEB5EDB64_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_7F22A781A9156478(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_D9AF28D967D62092* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_D9AF28D967D62092*))((::PBYTE)hIl2Cpp + CLASS_3_D9AF28D967D62092_METHOD_3_7F22A781A9156478_OFFSET))(a1, a2);
	}
};
