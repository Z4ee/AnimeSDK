#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

namespace RPG::GameCore { class SetDynamicValueByAdsorption; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_7F9FA7BB23EF50D2_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xEDA86F0)
#define CLASS_3_7F9FA7BB23EF50D2__CTOR_OFFSET UNITYSDK_OFFSET(0xEDA8610)

inline static constexpr unsigned int Class_3_7F9FA7BB23EF50D2_TypeDefinitionIndex = 55598;

class Class_3_7F9FA7BB23EF50D2 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetDynamicValueByAdsorption*>
{
public:
	::RPG::GameCore::StringHash DIJHOMCLPEG; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDynamicValueByAdsorption* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDynamicValueByAdsorption*))((::PBYTE)hIl2Cpp + CLASS_3_7F9FA7BB23EF50D2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7F9FA7BB23EF50D2_ONTASKBEGIN_OFFSET))(this);
	}
};
