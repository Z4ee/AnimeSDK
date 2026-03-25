#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"

namespace RPG::Client::FullBody { class Grounding_Class_1_BF264403995EDA8F; }
namespace RPG::Client::FullBody { class IKSolver; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_FULLBODY_GROUNDERQUADRUPED_STRUCT_2_F13462FCC9C87AA9__CTOR_OFFSET UNITYSDK_OFFSET(0x7DE10)

namespace RPG::Client::FullBody
{
	inline static constexpr unsigned int GrounderQuadruped_Struct_2_F13462FCC9C87AA9_TypeDefinitionIndex = 60892;

	struct alignas(8) GrounderQuadruped_Struct_2_F13462FCC9C87AA9
	{
		::RPG::Client::FullBody::IKSolver* Field_2_0; // 0x10
		::UnityEngine::Transform* Field_2_1; // 0x18
		::UnityEngine::Quaternion Field_2_2; // 0x20
		::RPG::Client::FullBody::Grounding_Class_1_BF264403995EDA8F* Field_2_3; // 0x30

		::System::Void _ctor(::RPG::Client::FullBody::IKSolver* a1, ::UnityEngine::Transform* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FullBody::IKSolver*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDERQUADRUPED_STRUCT_2_F13462FCC9C87AA9__CTOR_OFFSET))(this, a1, a2);
		}
	};
}
