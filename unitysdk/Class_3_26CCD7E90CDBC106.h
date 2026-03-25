#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

namespace RPG::GameCore { class SetDynamicValueByWeaknessCount; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_26CCD7E90CDBC106_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x8C341E0)
#define CLASS_3_26CCD7E90CDBC106__CTOR_OFFSET UNITYSDK_OFFSET(0x8C34100)

inline static constexpr unsigned int Class_3_26CCD7E90CDBC106_TypeDefinitionIndex = 44431;

class Class_3_26CCD7E90CDBC106 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetDynamicValueByWeaknessCount*>
{
public:
	::RPG::GameCore::StringHash Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDynamicValueByWeaknessCount* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDynamicValueByWeaknessCount*))((::PBYTE)hIl2Cpp + CLASS_3_26CCD7E90CDBC106__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_26CCD7E90CDBC106_ONTASKBEGIN_OFFSET))(this);
	}
};
