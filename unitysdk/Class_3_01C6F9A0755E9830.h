#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByHaveObstacle; }
namespace RPG::GameCore { class TaskContext; }
namespace UnityEngine { class Transform; }

#define CLASS_3_01C6F9A0755E9830_EVALUATE_OFFSET UNITYSDK_OFFSET(0x9A4FBF0)
#define CLASS_3_01C6F9A0755E9830__CCTOR_OFFSET UNITYSDK_OFFSET(0x9A50210)
#define CLASS_3_01C6F9A0755E9830__CTOR_OFFSET UNITYSDK_OFFSET(0x9A4FA60)

inline static constexpr unsigned int Class_3_01C6F9A0755E9830_TypeDefinitionIndex = 50403;

class Class_3_01C6F9A0755E9830 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByHaveObstacle*>
{
public:
	static ::System::Int32* StaticGet_Field_3_4()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_01C6F9A0755E9830_TypeDefinitionIndex)->GetStaticField(0x71D0);
	}
	::UnityEngine::Transform* Field_3_0; // 0x28
	::UnityEngine::Transform* Field_3_2; // 0x30
	::UnityEngine::Transform* Field_3_1; // 0x38
	::UnityEngine::Transform* Field_3_3; // 0x40

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByHaveObstacle* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByHaveObstacle*))((::PBYTE)hIl2Cpp + CLASS_3_01C6F9A0755E9830__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_01C6F9A0755E9830__CCTOR_OFFSET))();
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_01C6F9A0755E9830_EVALUATE_OFFSET))(this);
	}
};
