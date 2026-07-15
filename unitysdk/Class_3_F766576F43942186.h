#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SetClockBoyEmotion; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_F766576F43942186_METHOD_3_33B23A505F8C30B9_OFFSET UNITYSDK_OFFSET(0x17AB0980)
#define CLASS_3_F766576F43942186_METHOD_3_D9120CDF6DC9905D_OFFSET UNITYSDK_OFFSET(0x17AB07E0)
#define CLASS_3_F766576F43942186_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17AB0660)
#define CLASS_3_F766576F43942186__CTOR_OFFSET UNITYSDK_OFFSET(0x17AB0630)

inline static constexpr unsigned int Class_3_F766576F43942186_TypeDefinitionIndex = 53866;

class Class_3_F766576F43942186 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetClockBoyEmotion*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetClockBoyEmotion* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetClockBoyEmotion*))((::PBYTE)hIl2Cpp + CLASS_3_F766576F43942186__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F766576F43942186_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_D9120CDF6DC9905D(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_F766576F43942186_METHOD_3_D9120CDF6DC9905D_OFFSET))(this, a1);
	}

	::System::Void Method_3_33B23A505F8C30B9(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_F766576F43942186_METHOD_3_33B23A505F8C30B9_OFFSET))(this, a1);
	}
};
