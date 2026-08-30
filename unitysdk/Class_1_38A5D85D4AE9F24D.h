#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_31530FC809C9EE2A;
class Class_1_8782291C3798D494;
class Class_1_9BBDDCB5359C308C;
namespace RPG::GameCore { class AnimGroupEventConfig; }
namespace RPG::GameCore { class SingleAnimBehaviourEvent; }
namespace RPG::GameCore { class SingleAnimEventConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_38A5D85D4AE9F24D_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB779070)
#define CLASS_1_38A5D85D4AE9F24D__CTOR_OFFSET UNITYSDK_OFFSET(0xB78CC40)

inline static constexpr unsigned int Class_1_38A5D85D4AE9F24D_TypeDefinitionIndex = 57332;

class Class_1_38A5D85D4AE9F24D : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_31530FC809C9EE2A*>* FGLGMGCMADC; // 0x10
	::RPG::GameCore::TaskContext* GPKCGOLOJKC; // 0x18
	::System::Collections::Generic::List_1<::Class_1_9BBDDCB5359C308C*>* PFBCACBINFA; // 0x20
	::Il2CppArray<::RPG::GameCore::SingleAnimEventConfig*>* PIELBNECIIN; // 0x28
	::Il2CppArray<::RPG::GameCore::SingleAnimBehaviourEvent*>* CIMOOIALONK; // 0x30
	::System::Collections::Generic::List_1<::Class_1_8782291C3798D494*>* DLABKLDONJE; // 0x38
	::Il2CppArray<::RPG::GameCore::AnimGroupEventConfig*>* JPCCFKMOIMA; // 0x40

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Il2CppArray<::RPG::GameCore::SingleAnimEventConfig*>* a2, ::Il2CppArray<::RPG::GameCore::SingleAnimBehaviourEvent*>* a3, ::Il2CppArray<::RPG::GameCore::AnimGroupEventConfig*>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Il2CppArray<::RPG::GameCore::SingleAnimEventConfig*>*, ::Il2CppArray<::RPG::GameCore::SingleAnimBehaviourEvent*>*, ::Il2CppArray<::RPG::GameCore::AnimGroupEventConfig*>*))((::PBYTE)hIl2Cpp + CLASS_1_38A5D85D4AE9F24D__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_38A5D85D4AE9F24D_DISPOSE_OFFSET))(this);
	}
};
