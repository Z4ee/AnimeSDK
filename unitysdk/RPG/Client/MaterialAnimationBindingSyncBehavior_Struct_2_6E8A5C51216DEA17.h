#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialAnimationBinding; }

namespace RPG::Client
{
	inline static constexpr unsigned int MaterialAnimationBindingSyncBehavior_Struct_2_6E8A5C51216DEA17_TypeDefinitionIndex = 70257;

	struct alignas(8) MaterialAnimationBindingSyncBehavior_Struct_2_6E8A5C51216DEA17
	{
		::UnityEngine::MaterialAnimationBinding* OFBKLIODDCP; // 0x10
		::System::Int32 MAMALDCMJDH; // 0x18
		::UnityEngine::Material* JFNEBEJFLAG; // 0x20
		::UnityEngine::Material* EJGNBFKFHGG; // 0x28
	};
}
