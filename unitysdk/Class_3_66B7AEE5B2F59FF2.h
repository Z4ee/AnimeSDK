#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_1_3E7CB4EB71D78E39;
class Class_2_B97395A7A10E835D;
namespace RPG::GameCore { class AdvNpcMonsterSetupTrigger; }
namespace RPG::GameCore { class ColliderTriggerComponent; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PropButtonConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_66B7AEE5B2F59FF2_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18AEFAF0)
#define CLASS_3_66B7AEE5B2F59FF2_METHOD_3_35F1558C0CF0108B_OFFSET UNITYSDK_OFFSET(0x18AEF9F0)
#define CLASS_3_66B7AEE5B2F59FF2_METHOD_3_A4869E754AD7F239_OFFSET UNITYSDK_OFFSET(0x18AEF310)
#define CLASS_3_66B7AEE5B2F59FF2_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18AEF0F0)
#define CLASS_3_66B7AEE5B2F59FF2__CTOR_OFFSET UNITYSDK_OFFSET(0x18AEF0C0)

inline static constexpr unsigned int Class_3_66B7AEE5B2F59FF2_TypeDefinitionIndex = 50066;

class Class_3_66B7AEE5B2F59FF2 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AdvNpcMonsterSetupTrigger*>
{
public:
	::RPG::GameCore::GameEntity* Field_3_0; // 0x28
	::Class_2_B97395A7A10E835D* Field_3_1; // 0x30
	::RPG::GameCore::ColliderTriggerComponent* Field_3_2; // 0x38

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvNpcMonsterSetupTrigger* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvNpcMonsterSetupTrigger*))((::PBYTE)hIl2Cpp + CLASS_3_66B7AEE5B2F59FF2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_66B7AEE5B2F59FF2_ONTASKBEGIN_OFFSET))(this);
	}

	::RPG::GameCore::PropButtonConfig* Method_3_35F1558C0CF0108B(::System::String* a1, ::Il2CppArray<::RPG::GameCore::PropButtonConfig*>* a2)
	{
		return ((::RPG::GameCore::PropButtonConfig*(*)(::PVOID, ::System::String*, ::Il2CppArray<::RPG::GameCore::PropButtonConfig*>*))((::PBYTE)hIl2Cpp + CLASS_3_66B7AEE5B2F59FF2_METHOD_3_35F1558C0CF0108B_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_1_3E7CB4EB71D78E39*>* Method_3_A4869E754AD7F239(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_3E7CB4EB71D78E39*>*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_66B7AEE5B2F59FF2_METHOD_3_A4869E754AD7F239_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_66B7AEE5B2F59FF2_DISPOSE_OFFSET))(this);
	}
};
