#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/UINavigation/UINavigation_Rule.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class GameObject; }

#define STRUCT_2_342392452B5681AE_METHOD_2_3E6015EAA62FE038_OFFSET UNITYSDK_OFFSET(0x134F7D10)
#define STRUCT_2_342392452B5681AE_METHOD_2_71E25A039EF7FB83_1_OFFSET UNITYSDK_OFFSET(0x134F7DC0)
#define STRUCT_2_342392452B5681AE_METHOD_2_71E25A039EF7FB83_OFFSET UNITYSDK_OFFSET(0x134F7D70)

inline static constexpr unsigned int Struct_2_342392452B5681AE_TypeDefinitionIndex = 48422;

struct alignas(8) Struct_2_342392452B5681AE
{
	::UnityEngine::GameObject* Field_2_0; // 0x10
	::RPG::UINavigation::UINavigation_Rule Field_2_1; // 0x18

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
