#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }

#define CLASS_4_898D9FE991FDEB8A_METHOD_4_9968A253B5B328D1_OFFSET UNITYSDK_OFFSET(0x170D16E0)
#define CLASS_4_898D9FE991FDEB8A_METHOD_4_F1593D4CC137136F_OFFSET UNITYSDK_OFFSET(0x170D17B0)
#define CLASS_4_898D9FE991FDEB8A__CTOR_OFFSET UNITYSDK_OFFSET(0x170D1760)

inline static constexpr unsigned int Class_4_898D9FE991FDEB8A_TypeDefinitionIndex = 19592;

class Class_4_898D9FE991FDEB8A : public ::RPG::GameCore::PredicateConfig
{
public:
	::RPG::GameCore::DynamicString* Field_4_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_898D9FE991FDEB8A__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_4_9968A253B5B328D1(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_898D9FE991FDEB8A*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_898D9FE991FDEB8A*&))((::PBYTE)hIl2Cpp + CLASS_4_898D9FE991FDEB8A_METHOD_4_9968A253B5B328D1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_F1593D4CC137136F(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_898D9FE991FDEB8A* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_898D9FE991FDEB8A*))((::PBYTE)hIl2Cpp + CLASS_4_898D9FE991FDEB8A_METHOD_4_F1593D4CC137136F_OFFSET))(a1, a2);
	}
};
