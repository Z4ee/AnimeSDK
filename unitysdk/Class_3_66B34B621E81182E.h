#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class PropComponent; }
namespace RPG::GameCore { class PropDestructImmediately; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_66B34B621E81182E_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18F8BE90)
#define CLASS_3_66B34B621E81182E_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18F8BEE0)
#define CLASS_3_66B34B621E81182E__CTOR_OFFSET UNITYSDK_OFFSET(0x18F8BE60)

inline static constexpr unsigned int Class_3_66B34B621E81182E_TypeDefinitionIndex = 53429;

class Class_3_66B34B621E81182E : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::PropDestructImmediately*>
{
public:
	::RPG::GameCore::PropComponent* NKILIBDMOMC; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PropDestructImmediately* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropDestructImmediately*))((::PBYTE)hIl2Cpp + CLASS_3_66B34B621E81182E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_66B34B621E81182E_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_66B34B621E81182E_ONTASKBEGIN_OFFSET))(this);
	}
};
