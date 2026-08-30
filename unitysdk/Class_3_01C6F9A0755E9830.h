#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByHaveObstacle; }
namespace RPG::GameCore { class TaskContext; }
namespace UnityEngine { class Transform; }

#define CLASS_3_01C6F9A0755E9830_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15A80910)
#define CLASS_3_01C6F9A0755E9830__CCTOR_OFFSET UNITYSDK_OFFSET(0x15A80F00)
#define CLASS_3_01C6F9A0755E9830__CTOR_OFFSET UNITYSDK_OFFSET(0x15A80790)

inline static constexpr unsigned int Class_3_01C6F9A0755E9830_TypeDefinitionIndex = 54840;

class Class_3_01C6F9A0755E9830 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByHaveObstacle*>
{
public:
	static ::System::Int32* StaticGet_GBFKGJFHEDM()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_01C6F9A0755E9830_TypeDefinitionIndex)->GetStaticField(0x13410);
	}
	::UnityEngine::Transform* PBAHKJBADEO; // 0x28
	::UnityEngine::Transform* HKJLKMCDMGB; // 0x30
	::UnityEngine::Transform* LPAHJLLOJJP; // 0x38
	::UnityEngine::Transform* IBLBKLNHKLL; // 0x40

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
