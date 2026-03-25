#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByInAttackRange; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace UnityEngine { class Transform; }

#define CLASS_3_25D9D5A243DE74B0_EVALUATE_OFFSET UNITYSDK_OFFSET(0x113D9CF0)
#define CLASS_3_25D9D5A243DE74B0_METHOD_3_53B4F437767D44BA_OFFSET UNITYSDK_OFFSET(0x113D9530)
#define CLASS_3_25D9D5A243DE74B0_METHOD_3_879AF000287247BB_OFFSET UNITYSDK_OFFSET(0x113D9920)
#define CLASS_3_25D9D5A243DE74B0_METHOD_3_CB6D06BB96F12901_OFFSET UNITYSDK_OFFSET(0x113D9780)
#define CLASS_3_25D9D5A243DE74B0_METHOD_3_D64FD9A228A1C4E0_1_OFFSET UNITYSDK_OFFSET(0x113D9350)
#define CLASS_3_25D9D5A243DE74B0_METHOD_3_D64FD9A228A1C4E0_OFFSET UNITYSDK_OFFSET(0x113D9290)
#define CLASS_3_25D9D5A243DE74B0_METHOD_3_DA011872FE83C10B_OFFSET UNITYSDK_OFFSET(0x113D9410)
#define CLASS_3_25D9D5A243DE74B0__CCTOR_OFFSET UNITYSDK_OFFSET(0x113D9E50)
#define CLASS_3_25D9D5A243DE74B0__CTOR_OFFSET UNITYSDK_OFFSET(0x113D9260)

inline static constexpr unsigned int Class_3_25D9D5A243DE74B0_TypeDefinitionIndex = 43706;

class Class_3_25D9D5A243DE74B0 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByInAttackRange*>
{
public:
	static ::System::Int32* StaticGet_Field_3_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_25D9D5A243DE74B0_TypeDefinitionIndex)->GetStaticField(0xFAF0);
	}

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByInAttackRange* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByInAttackRange*))((::PBYTE)hIl2Cpp + CLASS_3_25D9D5A243DE74B0__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_25D9D5A243DE74B0__CCTOR_OFFSET))();
	}

	::System::Single Method_3_D64FD9A228A1C4E0()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_25D9D5A243DE74B0_METHOD_3_D64FD9A228A1C4E0_OFFSET))(this);
	}

	::System::Single Method_3_D64FD9A228A1C4E0_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_25D9D5A243DE74B0_METHOD_3_D64FD9A228A1C4E0_1_OFFSET))(this);
	}

	::System::Boolean Method_3_DA011872FE83C10B(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_25D9D5A243DE74B0_METHOD_3_DA011872FE83C10B_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_53B4F437767D44BA(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_25D9D5A243DE74B0_METHOD_3_53B4F437767D44BA_OFFSET))(this, a1);
	}

	::UnityEngine::Transform* Method_3_CB6D06BB96F12901(::RPG::GameCore::GameEntity* a1)
	{
		return ((::UnityEngine::Transform*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_25D9D5A243DE74B0_METHOD_3_CB6D06BB96F12901_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_879AF000287247BB(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_25D9D5A243DE74B0_METHOD_3_879AF000287247BB_OFFSET))(this, a1);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_25D9D5A243DE74B0_EVALUATE_OFFSET))(this);
	}
};
