#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define CLASS_3_53CCBE8B27FCD60C_METHOD_3_0F51127D996814D2_OFFSET UNITYSDK_OFFSET(0x1C764830)
#define CLASS_3_53CCBE8B27FCD60C_METHOD_3_1F96CACAEB5EDB64_OFFSET UNITYSDK_OFFSET(0x1C764660)
#define CLASS_3_53CCBE8B27FCD60C__CTOR_OFFSET UNITYSDK_OFFSET(0x1C764760)

inline static constexpr unsigned int Class_3_53CCBE8B27FCD60C_TypeDefinitionIndex = 23809;

class Class_3_53CCBE8B27FCD60C : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x18
	::System::String* FKODHMAJOAB; // 0x20
	::System::String* PODFJDMHFMK; // 0x28
	::RPG::GameCore::DynamicFloat* JLDBMPIOAED; // 0x30
	::RPG::GameCore::DynamicFloat* CCAOGMEFNLB; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_53CCBE8B27FCD60C__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_1F96CACAEB5EDB64(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_53CCBE8B27FCD60C*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_53CCBE8B27FCD60C*&))((::PBYTE)hIl2Cpp + CLASS_3_53CCBE8B27FCD60C_METHOD_3_1F96CACAEB5EDB64_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_0F51127D996814D2(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_53CCBE8B27FCD60C* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_53CCBE8B27FCD60C*))((::PBYTE)hIl2Cpp + CLASS_3_53CCBE8B27FCD60C_METHOD_3_0F51127D996814D2_OFFSET))(a1, a2);
	}
};
