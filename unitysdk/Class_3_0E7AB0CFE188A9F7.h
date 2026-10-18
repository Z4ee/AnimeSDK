#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::Client { class MockAnimator; }
namespace RPG::GameCore { class ClearTrigger; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_3_0E7AB0CFE188A9F7_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB94E3F0)
#define CLASS_3_0E7AB0CFE188A9F7__CTOR_OFFSET UNITYSDK_OFFSET(0xB94E160)

inline static constexpr unsigned int Class_3_0E7AB0CFE188A9F7_TypeDefinitionIndex = 55873;

class Class_3_0E7AB0CFE188A9F7 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ClearTrigger*>
{
public:
	::RPG::Client::MockAnimator* JDFCDMAPBFJ; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* OLFGIJKJJFB; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ClearTrigger* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ClearTrigger*))((::PBYTE)hIl2Cpp + CLASS_3_0E7AB0CFE188A9F7__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0E7AB0CFE188A9F7_ONTASKBEGIN_OFFSET))(this);
	}
};
