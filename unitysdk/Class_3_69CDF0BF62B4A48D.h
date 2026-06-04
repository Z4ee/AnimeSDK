#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

namespace RPG::GameCore { class SetSignedAngleByTarget; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_69CDF0BF62B4A48D_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1391BC80)
#define CLASS_3_69CDF0BF62B4A48D__CTOR_OFFSET UNITYSDK_OFFSET(0x1391BBA0)

inline static constexpr unsigned int Class_3_69CDF0BF62B4A48D_TypeDefinitionIndex = 51893;

class Class_3_69CDF0BF62B4A48D : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetSignedAngleByTarget*>
{
public:
	::RPG::GameCore::StringHash Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetSignedAngleByTarget* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetSignedAngleByTarget*))((::PBYTE)hIl2Cpp + CLASS_3_69CDF0BF62B4A48D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_69CDF0BF62B4A48D_ONTASKBEGIN_OFFSET))(this);
	}
};
