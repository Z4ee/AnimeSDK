#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class JsonEnum; }
namespace RPG::GameCore { class TargetEvaluator; }

#define CLASS_3_1F2DB301ED9D3F9B_METHOD_3_1F96CACAEB5EDB64_OFFSET UNITYSDK_OFFSET(0x18F6EE50)
#define CLASS_3_1F2DB301ED9D3F9B_METHOD_3_FAE3758F0912001F_OFFSET UNITYSDK_OFFSET(0x18F6EED0)
#define CLASS_3_1F2DB301ED9D3F9B__CTOR_OFFSET UNITYSDK_OFFSET(0x18F6EEA0)

inline static constexpr unsigned int Class_3_1F2DB301ED9D3F9B_TypeDefinitionIndex = 22873;

class Class_3_1F2DB301ED9D3F9B : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::TargetEvaluator* Field_3_0; // 0x18
	::RPG::GameCore::TargetEvaluator* Field_3_1; // 0x20
	::RPG::GameCore::TargetEvaluator* Field_3_2; // 0x28
	::RPG::GameCore::JsonEnum* Field_3_3; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1F2DB301ED9D3F9B__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_1F96CACAEB5EDB64(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_1F2DB301ED9D3F9B*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_1F2DB301ED9D3F9B*&))((::PBYTE)hIl2Cpp + CLASS_3_1F2DB301ED9D3F9B_METHOD_3_1F96CACAEB5EDB64_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_FAE3758F0912001F(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_1F2DB301ED9D3F9B* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_1F2DB301ED9D3F9B*))((::PBYTE)hIl2Cpp + CLASS_3_1F2DB301ED9D3F9B_METHOD_3_FAE3758F0912001F_OFFSET))(a1, a2);
	}
};
