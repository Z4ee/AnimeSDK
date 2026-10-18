#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_1_3E7CB4EB71D78E39;
namespace RPG::GameCore { class AdvSetupButtonListTrigger; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PropButtonConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_4EB7065BFFCF025F_METHOD_3_35F1558C0CF0108B_OFFSET UNITYSDK_OFFSET(0x155CBCE0)
#define CLASS_3_4EB7065BFFCF025F_METHOD_3_7EC3BE727B5E1F7E_OFFSET UNITYSDK_OFFSET(0x155CBDE0)
#define CLASS_3_4EB7065BFFCF025F_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x155CC550)
#define CLASS_3_4EB7065BFFCF025F__CTOR_OFFSET UNITYSDK_OFFSET(0x155CBCB0)

inline static constexpr unsigned int Class_3_4EB7065BFFCF025F_TypeDefinitionIndex = 52506;

class Class_3_4EB7065BFFCF025F : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AdvSetupButtonListTrigger*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvSetupButtonListTrigger* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvSetupButtonListTrigger*))((::PBYTE)hIl2Cpp + CLASS_3_4EB7065BFFCF025F__CTOR_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::PropButtonConfig* Method_3_35F1558C0CF0108B(::System::String* a1, ::Il2CppArray<::RPG::GameCore::PropButtonConfig*>* a2)
	{
		return ((::RPG::GameCore::PropButtonConfig*(*)(::PVOID, ::System::String*, ::Il2CppArray<::RPG::GameCore::PropButtonConfig*>*))((::PBYTE)hIl2Cpp + CLASS_3_4EB7065BFFCF025F_METHOD_3_35F1558C0CF0108B_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_1_3E7CB4EB71D78E39*>* Method_3_7EC3BE727B5E1F7E(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_3E7CB4EB71D78E39*>*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_4EB7065BFFCF025F_METHOD_3_7EC3BE727B5E1F7E_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4EB7065BFFCF025F_ONTASKBEGIN_OFFSET))(this);
	}
};
