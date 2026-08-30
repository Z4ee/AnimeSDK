#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/UINavigation/UINavigation_Rule.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class GameObject; }

#define STRUCT_2_342392452B5681AE_METHOD_2_3E6015EAA62FE038_OFFSET UNITYSDK_OFFSET(0x17937BF0)
#define STRUCT_2_342392452B5681AE_METHOD_2_71E25A039EF7FB83_1_OFFSET UNITYSDK_OFFSET(0x17937CA0)
#define STRUCT_2_342392452B5681AE_METHOD_2_71E25A039EF7FB83_OFFSET UNITYSDK_OFFSET(0x17937C50)

inline static constexpr unsigned int Struct_2_342392452B5681AE_TypeDefinitionIndex = 52039;

struct alignas(8) Struct_2_342392452B5681AE
{
	::UnityEngine::GameObject* EAPFJHJHIFK; // 0x10
	::RPG::UINavigation::UINavigation_Rule ALFNCEIODOE; // 0x18

	static ::Struct_2_342392452B5681AE Method_2_3E6015EAA62FE038(::UnityEngine::GameObject* a1)
	{
		return ((::Struct_2_342392452B5681AE(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + STRUCT_2_342392452B5681AE_METHOD_2_3E6015EAA62FE038_OFFSET))(a1);
	}

	static ::Struct_2_342392452B5681AE Method_2_71E25A039EF7FB83()
	{
		return ((::Struct_2_342392452B5681AE(*)())((::PBYTE)hIl2Cpp + STRUCT_2_342392452B5681AE_METHOD_2_71E25A039EF7FB83_OFFSET))();
	}

	static ::Struct_2_342392452B5681AE Method_2_71E25A039EF7FB83_1()
	{
		return ((::Struct_2_342392452B5681AE(*)())((::PBYTE)hIl2Cpp + STRUCT_2_342392452B5681AE_METHOD_2_71E25A039EF7FB83_1_OFFSET))();
	}
};
