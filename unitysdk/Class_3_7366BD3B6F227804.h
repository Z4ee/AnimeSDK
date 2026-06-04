#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class EnterMarblePVEMatch; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_7366BD3B6F227804_METHOD_3_C796A0B42720FBD3_OFFSET UNITYSDK_OFFSET(0xA549170)
#define CLASS_3_7366BD3B6F227804_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA548F30)
#define CLASS_3_7366BD3B6F227804__CTOR_OFFSET UNITYSDK_OFFSET(0xA548F00)
#define CLASS_3_7366BD3B6F227804__ONTASKBEGIN_B__1_0_OFFSET UNITYSDK_OFFSET(0xA5498C0)

inline static constexpr unsigned int Class_3_7366BD3B6F227804_TypeDefinitionIndex = 48909;

class Class_3_7366BD3B6F227804 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::EnterMarblePVEMatch*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::EnterMarblePVEMatch* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::EnterMarblePVEMatch*))((::PBYTE)hIl2Cpp + CLASS_3_7366BD3B6F227804__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7366BD3B6F227804_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_C796A0B42720FBD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7366BD3B6F227804_METHOD_3_C796A0B42720FBD3_OFFSET))(this);
	}

	::System::Void _OnTaskBegin_b__1_0(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_7366BD3B6F227804__ONTASKBEGIN_B__1_0_OFFSET))(this, a1);
	}
};
