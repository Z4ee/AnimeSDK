#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Battle { class Entity; }
namespace NPCCrowd::Animation { class NPCUnionAnimator_NpcTransformCache; }

#define CLASS_3_099113BEAFEE7B9D_CLASS_1_2FBFEE178BBE4259_METHOD_1_125DA4808B3FCCB9_OFFSET UNITYSDK_OFFSET(0x152009D0)
#define CLASS_3_099113BEAFEE7B9D_CLASS_1_2FBFEE178BBE4259__CTOR_OFFSET UNITYSDK_OFFSET(0x152009C0)

inline static constexpr unsigned int Class_3_099113BEAFEE7B9D_Class_1_2FBFEE178BBE4259_TypeDefinitionIndex = 66389;

class Class_3_099113BEAFEE7B9D_Class_1_2FBFEE178BBE4259 : public ::System::Object
{
public:
	::NPCCrowd::Animation::NPCUnionAnimator_NpcTransformCache* Field_1_1; // 0x10
	::NPCCrowd::Animation::NPCUnionAnimator_NpcTransformCache* Field_1_2; // 0x18
	::MoleMole::Battle::Entity* Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_099113BEAFEE7B9D_CLASS_1_2FBFEE178BBE4259__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_125DA4808B3FCCB9(::UnityEngine::Vector3& a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Vector3& a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_3_099113BEAFEE7B9D_CLASS_1_2FBFEE178BBE4259_METHOD_1_125DA4808B3FCCB9_OFFSET))(this, a1, a2, a3);
	}
};
