#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

namespace RPG::GameCore { class SetDynamicValueByStatusResistance; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_61F7204F8BFB3F09_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17286FA0)
#define CLASS_3_61F7204F8BFB3F09__CTOR_OFFSET UNITYSDK_OFFSET(0x17286EC0)

inline static constexpr unsigned int Class_3_61F7204F8BFB3F09_TypeDefinitionIndex = 55663;

class Class_3_61F7204F8BFB3F09 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetDynamicValueByStatusResistance*>
{
public:
	::RPG::GameCore::StringHash DIJHOMCLPEG; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDynamicValueByStatusResistance* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDynamicValueByStatusResistance*))((::PBYTE)hIl2Cpp + CLASS_3_61F7204F8BFB3F09__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_61F7204F8BFB3F09_ONTASKBEGIN_OFFSET))(this);
	}
};
