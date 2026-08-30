#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class ResetHeadLookAt; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_0728AEAA16F1EBDD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB447070)
#define CLASS_3_0728AEAA16F1EBDD__CTOR_OFFSET UNITYSDK_OFFSET(0xB447040)

inline static constexpr unsigned int Class_3_0728AEAA16F1EBDD_TypeDefinitionIndex = 56072;

class Class_3_0728AEAA16F1EBDD : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ResetHeadLookAt*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ResetHeadLookAt* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ResetHeadLookAt*))((::PBYTE)hIl2Cpp + CLASS_3_0728AEAA16F1EBDD__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0728AEAA16F1EBDD_ONTASKBEGIN_OFFSET))(this);
	}
};
