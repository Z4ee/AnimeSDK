#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/RPG/GameCore/EHitDirectionType.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class UpdateMonsterFootIKMode; }

#define CLASS_2_0BBF70F823B9A54E_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8D387E0)
#define CLASS_2_0BBF70F823B9A54E_METHOD_2_E088C14C065FBD97_OFFSET UNITYSDK_OFFSET(0x8D38E90)
#define CLASS_2_0BBF70F823B9A54E_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x8D38820)
#define CLASS_2_0BBF70F823B9A54E_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x8D38F20)
#define CLASS_2_0BBF70F823B9A54E_TICK_OFFSET UNITYSDK_OFFSET(0x8D38F70)
#define CLASS_2_0BBF70F823B9A54E__CTOR_OFFSET UNITYSDK_OFFSET(0x8D387D0)

inline static constexpr unsigned int Class_2_0BBF70F823B9A54E_TypeDefinitionIndex = 44699;

class Class_2_0BBF70F823B9A54E : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_1; // 0x18
	::RPG::GameCore::UpdateMonsterFootIKMode* Field_2_0; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::UpdateMonsterFootIKMode* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::UpdateMonsterFootIKMode*))((::PBYTE)hIl2Cpp + CLASS_2_0BBF70F823B9A54E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0BBF70F823B9A54E_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0BBF70F823B9A54E_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0BBF70F823B9A54E_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_0BBF70F823B9A54E_TICK_OFFSET))(this, a1);
	}

	::RPG::GameCore::EHitDirectionType Method_2_E088C14C065FBD97(::System::Single a1)
	{
		return ((::RPG::GameCore::EHitDirectionType(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_0BBF70F823B9A54E_METHOD_2_E088C14C065FBD97_OFFSET))(this, a1);
	}
};
