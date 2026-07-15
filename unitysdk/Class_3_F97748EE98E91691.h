#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/Struct_2_7A3F2FEE63423E6C.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class StopSound; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_3_F97748EE98E91691_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18ADDEA0)
#define CLASS_3_F97748EE98E91691_METHOD_3_1C8674352D1ECE80_OFFSET UNITYSDK_OFFSET(0x18ADE0C0)
#define CLASS_3_F97748EE98E91691_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18ADDEE0)
#define CLASS_3_F97748EE98E91691__CTOR_OFFSET UNITYSDK_OFFSET(0x18ADDE70)

inline static constexpr unsigned int Class_3_F97748EE98E91691_TypeDefinitionIndex = 53940;

class Class_3_F97748EE98E91691 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::StopSound*>
{
public:
	::RPG::GameCore::GameEntity* Field_3_0; // 0x28
	::System::String* Field_3_1; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::StopSound* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::StopSound*))((::PBYTE)hIl2Cpp + CLASS_3_F97748EE98E91691__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F97748EE98E91691_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F97748EE98E91691_ONTASKBEGIN_OFFSET))(this);
	}

	::Struct_2_7A3F2FEE63423E6C Method_3_1C8674352D1ECE80(::RPG::GameCore::StopSound* a1)
	{
		return ((::Struct_2_7A3F2FEE63423E6C(*)(::PVOID, ::RPG::GameCore::StopSound*))((::PBYTE)hIl2Cpp + CLASS_3_F97748EE98E91691_METHOD_3_1C8674352D1ECE80_OFFSET))(this, a1);
	}
};
