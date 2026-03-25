#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ArrayPoolWrapper_1.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_0_16E4307DCC419505_336;
namespace RPG::GameCore { class SetModifierValue; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_6A6FD2C00902A9EE_METHOD_3_101CE0221D5E094C_OFFSET UNITYSDK_OFFSET(0x9C43B60)
#define CLASS_3_6A6FD2C00902A9EE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x9C43860)
#define CLASS_3_6A6FD2C00902A9EE__CTOR_OFFSET UNITYSDK_OFFSET(0x9C43830)

inline static constexpr unsigned int Class_3_6A6FD2C00902A9EE_TypeDefinitionIndex = 44479;

class Class_3_6A6FD2C00902A9EE : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetModifierValue*>
{
public:
	::RPG::GameCore::ArrayPoolWrapper_1<::Class_0_16E4307DCC419505_336*> Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetModifierValue* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetModifierValue*))((::PBYTE)hIl2Cpp + CLASS_3_6A6FD2C00902A9EE__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6A6FD2C00902A9EE_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_101CE0221D5E094C(::Il2CppArray<::Class_0_16E4307DCC419505_336*>* a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Class_0_16E4307DCC419505_336*>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_6A6FD2C00902A9EE_METHOD_3_101CE0221D5E094C_OFFSET))(this, a1, a2, a3);
	}
};
