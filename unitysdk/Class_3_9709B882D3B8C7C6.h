#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

namespace RPG::GameCore { class SetDynamicValueByRandom; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_9709B882D3B8C7C6_METHOD_3_67858DD264EE9FD0_OFFSET UNITYSDK_OFFSET(0x118CE910)
#define CLASS_3_9709B882D3B8C7C6_METHOD_3_C1768AE4DD140EB6_OFFSET UNITYSDK_OFFSET(0x118CEEE0)
#define CLASS_3_9709B882D3B8C7C6_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x118CE800)
#define CLASS_3_9709B882D3B8C7C6__CTOR_OFFSET UNITYSDK_OFFSET(0x118CE720)

inline static constexpr unsigned int Class_3_9709B882D3B8C7C6_TypeDefinitionIndex = 51132;

class Class_3_9709B882D3B8C7C6 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetDynamicValueByRandom*>
{
public:
	::RPG::GameCore::StringHash Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDynamicValueByRandom* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDynamicValueByRandom*))((::PBYTE)hIl2Cpp + CLASS_3_9709B882D3B8C7C6__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9709B882D3B8C7C6_ONTASKBEGIN_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_3_C1768AE4DD140EB6()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9709B882D3B8C7C6_METHOD_3_C1768AE4DD140EB6_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_3_67858DD264EE9FD0()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9709B882D3B8C7C6_METHOD_3_67858DD264EE9FD0_OFFSET))(this);
	}
};
