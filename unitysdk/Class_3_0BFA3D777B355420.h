#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class FeverTimeInfoChangeParam; }
namespace RPG::GameCore { class NotifyFeverTimeInfoChange; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_0BFA3D777B355420_METHOD_3_AE78DFA9FDF19592_OFFSET UNITYSDK_OFFSET(0x13BCA560)
#define CLASS_3_0BFA3D777B355420_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x13BCA300)
#define CLASS_3_0BFA3D777B355420__CTOR_OFFSET UNITYSDK_OFFSET(0x13BCA2D0)

inline static constexpr unsigned int Class_3_0BFA3D777B355420_TypeDefinitionIndex = 51594;

class Class_3_0BFA3D777B355420 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::NotifyFeverTimeInfoChange*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::NotifyFeverTimeInfoChange* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::NotifyFeverTimeInfoChange*))((::PBYTE)hIl2Cpp + CLASS_3_0BFA3D777B355420__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0BFA3D777B355420_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_AE78DFA9FDF19592(::RPG::GameCore::FeverTimeInfoChangeParam*& a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FeverTimeInfoChangeParam*&))((::PBYTE)hIl2Cpp + CLASS_3_0BFA3D777B355420_METHOD_3_AE78DFA9FDF19592_OFFSET))(this, a1);
	}
};
