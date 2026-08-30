#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define CLASS_3_D9AF28D967D62092_METHOD_3_1F96CACAEB5EDB64_OFFSET UNITYSDK_OFFSET(0x1CAA2A20)
#define CLASS_3_D9AF28D967D62092_METHOD_3_7F22A781A9156478_OFFSET UNITYSDK_OFFSET(0x1CAA2B60)
#define CLASS_3_D9AF28D967D62092__CTOR_OFFSET UNITYSDK_OFFSET(0x1CAA2AD0)

inline static constexpr unsigned int Class_3_D9AF28D967D62092_TypeDefinitionIndex = 23812;

class Class_3_D9AF28D967D62092 : public ::RPG::GameCore::TaskConfig
{
public:
	::System::String* PODFJDMHFMK; // 0x18
	::RPG::GameCore::DynamicFloat* FMHMAHCNDGB; // 0x20
	::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x28

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
