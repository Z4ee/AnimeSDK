#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_0_16E4307DCC419505_260;
namespace Entitas { class IEntity; }
namespace RPG::Client { class MonoEffect; }
namespace RPG::GameCore { class LittleGameAbilityTaskFireMonoEffectConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_3_7313989836F385C8_METHOD_3_1EA97511ABF2B3A7_OFFSET UNITYSDK_OFFSET(0x136F2B10)
#define CLASS_3_7313989836F385C8_METHOD_3_2A8239C3A4D4CE85_OFFSET UNITYSDK_OFFSET(0x136F23B0)
#define CLASS_3_7313989836F385C8_METHOD_3_323F19DBD35716A9_OFFSET UNITYSDK_OFFSET(0x136F20D0)
#define CLASS_3_7313989836F385C8_METHOD_3_36173D16FE0F2056_OFFSET UNITYSDK_OFFSET(0x136F2F90)
#define CLASS_3_7313989836F385C8_METHOD_3_51BBA01F511E6107_OFFSET UNITYSDK_OFFSET(0x136F1E40)
#define CLASS_3_7313989836F385C8_METHOD_3_B9D83A163D6522C8_OFFSET UNITYSDK_OFFSET(0x136F3020)
#define CLASS_3_7313989836F385C8_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x136F1DF0)
#define CLASS_3_7313989836F385C8__CTOR_OFFSET UNITYSDK_OFFSET(0x136F1DC0)

inline static constexpr unsigned int Class_3_7313989836F385C8_TypeDefinitionIndex = 54394;

class Class_3_7313989836F385C8 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::LittleGameAbilityTaskFireMonoEffectConfig*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::LittleGameAbilityTaskFireMonoEffectConfig* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::LittleGameAbilityTaskFireMonoEffectConfig*))((::PBYTE)hIl2Cpp + CLASS_3_7313989836F385C8__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7313989836F385C8_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_51BBA01F511E6107()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7313989836F385C8_METHOD_3_51BBA01F511E6107_OFFSET))(this);
	}

	::System::Boolean Method_3_2A8239C3A4D4CE85(::Entitas::IEntity* a1, ::System::String* a2, ::UnityEngine::Transform*& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Entitas::IEntity*, ::System::String*, ::UnityEngine::Transform*&))((::PBYTE)hIl2Cpp + CLASS_3_7313989836F385C8_METHOD_3_2A8239C3A4D4CE85_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_1EA97511ABF2B3A7(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_3_7313989836F385C8_METHOD_3_1EA97511ABF2B3A7_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_36173D16FE0F2056(::RPG::Client::MonoEffect* a1)
	{
		return ((::System::Void(*)(::RPG::Client::MonoEffect*))((::PBYTE)hIl2Cpp + CLASS_3_7313989836F385C8_METHOD_3_36173D16FE0F2056_OFFSET))(a1);
	}

	static ::System::Void Method_3_B9D83A163D6522C8(::UnityEngine::GameObject* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_7313989836F385C8_METHOD_3_B9D83A163D6522C8_OFFSET))(a1, a2);
	}

	::System::Collections::Generic::HashSet_1<::System::Int32>* Method_3_323F19DBD35716A9(::Class_0_16E4307DCC419505_260* a1)
	{
		return ((::System::Collections::Generic::HashSet_1<::System::Int32>*(*)(::PVOID, ::Class_0_16E4307DCC419505_260*))((::PBYTE)hIl2Cpp + CLASS_3_7313989836F385C8_METHOD_3_323F19DBD35716A9_OFFSET))(this, a1);
	}
};
