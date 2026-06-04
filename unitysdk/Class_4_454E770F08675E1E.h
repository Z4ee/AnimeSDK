#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_3100354E684764E9_2.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class OptionTriggerInfo; }
namespace System { class Action; }
namespace System { template <typename T> class Func_1; }

#define CLASS_4_454E770F08675E1E_METHOD_4_B135E486730FDDA8_OFFSET UNITYSDK_OFFSET(0xBA0D070)
#define CLASS_4_454E770F08675E1E__CTOR_OFFSET UNITYSDK_OFFSET(0xBA0CFE0)

inline static constexpr unsigned int Class_4_454E770F08675E1E_TypeDefinitionIndex = 73392;

class Class_4_454E770F08675E1E : public ::Class_3_3100354E684764E9_2
{
public:
	::System::Int32 Field_4_0; // 0xD0

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::System::Int32 a2, ::Il2CppArray<::RPG::GameCore::OptionTriggerInfo*>* a3, ::Il2CppArray<::System::Action*>* a4, ::System::Func_1<::System::Boolean>* a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Int32, ::Il2CppArray<::RPG::GameCore::OptionTriggerInfo*>*, ::Il2CppArray<::System::Action*>*, ::System::Func_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_4_454E770F08675E1E__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_4_B135E486730FDDA8(::Il2CppArray<::RPG::GameCore::OptionTriggerInfo*>* a1, ::Il2CppArray<::System::Action*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::OptionTriggerInfo*>*, ::Il2CppArray<::System::Action*>*))((::PBYTE)hIl2Cpp + CLASS_4_454E770F08675E1E_METHOD_4_B135E486730FDDA8_OFFSET))(this, a1, a2);
	}
};
