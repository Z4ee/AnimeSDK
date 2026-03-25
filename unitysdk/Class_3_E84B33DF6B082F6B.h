#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_72FF3C03F0F06A80;
class Class_3_5775A4FEC79026BC;
namespace RPG::GameCore { class CreateSummonUnit; }
namespace RPG::GameCore { class EntityPosAdaptionConfig; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_E84B33DF6B082F6B_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10A01E60)
#define CLASS_3_E84B33DF6B082F6B_METHOD_3_25971FCF36C209CF_OFFSET UNITYSDK_OFFSET(0x10A01ED0)
#define CLASS_3_E84B33DF6B082F6B_METHOD_3_5E62F6780446C42F_OFFSET UNITYSDK_OFFSET(0x10A03060)
#define CLASS_3_E84B33DF6B082F6B_METHOD_3_E0F3A7E0D78CF15F_OFFSET UNITYSDK_OFFSET(0x10A02770)
#define CLASS_3_E84B33DF6B082F6B_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x10A02050)
#define CLASS_3_E84B33DF6B082F6B__CTOR_OFFSET UNITYSDK_OFFSET(0x10A01DC0)
#define CLASS_3_E84B33DF6B082F6B___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10A03710)

inline static constexpr unsigned int Class_3_E84B33DF6B082F6B_TypeDefinitionIndex = 46835;

class Class_3_E84B33DF6B082F6B : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::CreateSummonUnit*>
{
public:
	::Class_3_5775A4FEC79026BC* Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CreateSummonUnit* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CreateSummonUnit*))((::PBYTE)hIl2Cpp + CLASS_3_E84B33DF6B082F6B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E84B33DF6B082F6B_DISPOSE_OFFSET))(this);
	}

	::System::UInt32 Method_3_25971FCF36C209CF()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E84B33DF6B082F6B_METHOD_3_25971FCF36C209CF_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E84B33DF6B082F6B_ONTASKBEGIN_OFFSET))(this);
	}

	::RPG::GameCore::GameEntity* Method_3_5E62F6780446C42F(::Class_1_72FF3C03F0F06A80* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::GameEntity* a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Quaternion a5, ::System::Boolean a6)
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::Class_1_72FF3C03F0F06A80*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_E84B33DF6B082F6B_METHOD_3_5E62F6780446C42F_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_3_E0F3A7E0D78CF15F(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::GameEntity* a3, ::RPG::GameCore::EntityPosAdaptionConfig* a4, ::UnityEngine::Quaternion& a5, ::UnityEngine::Vector3& a6)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::EntityPosAdaptionConfig*, ::UnityEngine::Quaternion&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_3_E84B33DF6B082F6B_METHOD_3_E0F3A7E0D78CF15F_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E84B33DF6B082F6B___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
