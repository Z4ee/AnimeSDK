#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::Client { class MockAnimator; }
namespace RPG::GameCore { class ClearTrigger; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_3_1FD008D04904ED06_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x19A97C80)
#define CLASS_3_1FD008D04904ED06__CTOR_OFFSET UNITYSDK_OFFSET(0x19A97A10)

inline static constexpr unsigned int Class_3_1FD008D04904ED06_TypeDefinitionIndex = 56061;

class Class_3_1FD008D04904ED06 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ClearTrigger*>
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* OLFGIJKJJFB; // 0x28
	::RPG::Client::MockAnimator* JDFCDMAPBFJ; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ClearTrigger* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ClearTrigger*))((::PBYTE)hIl2Cpp + CLASS_3_1FD008D04904ED06__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1FD008D04904ED06_ONTASKBEGIN_OFFSET))(this);
	}
};
