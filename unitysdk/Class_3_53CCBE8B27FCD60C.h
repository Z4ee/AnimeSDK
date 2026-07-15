#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define CLASS_3_53CCBE8B27FCD60C_METHOD_3_0F51127D996814D2_OFFSET UNITYSDK_OFFSET(0x1BD484A0)
#define CLASS_3_53CCBE8B27FCD60C_METHOD_3_1F96CACAEB5EDB64_OFFSET UNITYSDK_OFFSET(0x1BD482D0)
#define CLASS_3_53CCBE8B27FCD60C__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD483D0)

inline static constexpr unsigned int Class_3_53CCBE8B27FCD60C_TypeDefinitionIndex = 23229;

class Class_3_53CCBE8B27FCD60C : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::TargetEvaluator* Field_3_0; // 0x18
	::RPG::GameCore::DynamicFloat* Field_3_1; // 0x20
	::System::String* Field_3_2; // 0x28
	::RPG::GameCore::DynamicFloat* Field_3_3; // 0x30
	::System::String* Field_3_4; // 0x38

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
