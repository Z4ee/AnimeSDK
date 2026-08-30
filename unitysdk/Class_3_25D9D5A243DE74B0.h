#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByInAttackRange; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace UnityEngine { class Transform; }

#define CLASS_3_25D9D5A243DE74B0_EVALUATE_OFFSET UNITYSDK_OFFSET(0x152785F0)
#define CLASS_3_25D9D5A243DE74B0_METHOD_3_072E6DDD300E1587_OFFSET UNITYSDK_OFFSET(0x15277D00)
#define CLASS_3_25D9D5A243DE74B0_METHOD_3_705AF43C01ED360A_1_OFFSET UNITYSDK_OFFSET(0x15277A50)
#define CLASS_3_25D9D5A243DE74B0_METHOD_3_705AF43C01ED360A_OFFSET UNITYSDK_OFFSET(0x15277930)
#define CLASS_3_25D9D5A243DE74B0_METHOD_3_8AAC3B9B67A92785_OFFSET UNITYSDK_OFFSET(0x15277B70)
#define CLASS_3_25D9D5A243DE74B0_METHOD_3_AC314B9467822562_OFFSET UNITYSDK_OFFSET(0x152781B0)
#define CLASS_3_25D9D5A243DE74B0_METHOD_3_CB6D06BB96F12901_OFFSET UNITYSDK_OFFSET(0x15278020)
#define CLASS_3_25D9D5A243DE74B0__CCTOR_OFFSET UNITYSDK_OFFSET(0x152787E0)
#define CLASS_3_25D9D5A243DE74B0__CTOR_OFFSET UNITYSDK_OFFSET(0x15277900)

inline static constexpr unsigned int Class_3_25D9D5A243DE74B0_TypeDefinitionIndex = 54842;

class Class_3_25D9D5A243DE74B0 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByInAttackRange*>
{
public:
	static ::System::Int32* StaticGet_GBFKGJFHEDM()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_25D9D5A243DE74B0_TypeDefinitionIndex)->GetStaticField(0x14280);
	}

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByInAttackRange* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByInAttackRange*))((::PBYTE)hIl2Cpp + CLASS_3_25D9D5A243DE74B0__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_25D9D5A243DE74B0__CCTOR_OFFSET))();
	}

	::System::Single Method_3_705AF43C01ED360A()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_25D9D5A243DE74B0_METHOD_3_705AF43C01ED360A_OFFSET))(this);
	}

	::System::Single Method_3_705AF43C01ED360A_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_25D9D5A243DE74B0_METHOD_3_705AF43C01ED360A_1_OFFSET))(this);
	}

	::System::Boolean Method_3_8AAC3B9B67A92785(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_25D9D5A243DE74B0_METHOD_3_8AAC3B9B67A92785_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_072E6DDD300E1587(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_25D9D5A243DE74B0_METHOD_3_072E6DDD300E1587_OFFSET))(this, a1);
	}

	::UnityEngine::Transform* Method_3_CB6D06BB96F12901(::RPG::GameCore::GameEntity* a1)
	{
		return ((::UnityEngine::Transform*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_25D9D5A243DE74B0_METHOD_3_CB6D06BB96F12901_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_AC314B9467822562(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_25D9D5A243DE74B0_METHOD_3_AC314B9467822562_OFFSET))(this, a1);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_25D9D5A243DE74B0_EVALUATE_OFFSET))(this);
	}
};
