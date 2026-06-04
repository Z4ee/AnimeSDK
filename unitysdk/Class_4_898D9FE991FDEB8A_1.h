#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace SimpleJSON { class JSONNode; }

#define CLASS_4_898D9FE991FDEB8A_1_METHOD_4_9968A253B5B328D1_OFFSET UNITYSDK_OFFSET(0x197A35A0)
#define CLASS_4_898D9FE991FDEB8A_1_METHOD_4_BEF80FB83E1A1534_OFFSET UNITYSDK_OFFSET(0x197A37D0)
#define CLASS_4_898D9FE991FDEB8A_1_METHOD_4_D6AE6B4E69E812BA_OFFSET UNITYSDK_OFFSET(0x197A3850)
#define CLASS_4_898D9FE991FDEB8A_1_METHOD_4_F1593D4CC137136F_OFFSET UNITYSDK_OFFSET(0x197A3670)
#define CLASS_4_898D9FE991FDEB8A_1__CTOR_OFFSET UNITYSDK_OFFSET(0x197A3620)

inline static constexpr unsigned int Class_4_898D9FE991FDEB8A_1_TypeDefinitionIndex = 22846;

class Class_4_898D9FE991FDEB8A_1 : public ::RPG::GameCore::PredicateConfig
{
public:
	::RPG::GameCore::DynamicString* Field_4_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_898D9FE991FDEB8A_1__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_4_9968A253B5B328D1(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_898D9FE991FDEB8A_1*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_898D9FE991FDEB8A_1*&))((::PBYTE)hIl2Cpp + CLASS_4_898D9FE991FDEB8A_1_METHOD_4_9968A253B5B328D1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_F1593D4CC137136F(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_898D9FE991FDEB8A_1* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_898D9FE991FDEB8A_1*))((::PBYTE)hIl2Cpp + CLASS_4_898D9FE991FDEB8A_1_METHOD_4_F1593D4CC137136F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_BEF80FB83E1A1534(::SimpleJSON::JSONNode* a1, ::Class_4_898D9FE991FDEB8A_1*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_898D9FE991FDEB8A_1*&))((::PBYTE)hIl2Cpp + CLASS_4_898D9FE991FDEB8A_1_METHOD_4_BEF80FB83E1A1534_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_D6AE6B4E69E812BA(::SimpleJSON::JSONNode* a1, ::Class_4_898D9FE991FDEB8A_1* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_898D9FE991FDEB8A_1*))((::PBYTE)hIl2Cpp + CLASS_4_898D9FE991FDEB8A_1_METHOD_4_D6AE6B4E69E812BA_OFFSET))(a1, a2);
	}
};
