#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/RPG/GameCore/SwitchCharacterAnchorFindTargetPosResult.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class SwitchCharacterAnchor; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_4050AAA9560AD7EF_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB940CA0)
#define CLASS_2_4050AAA9560AD7EF_METHOD_2_5B9761C1A72C4D1A_OFFSET UNITYSDK_OFFSET(0xB9412A0)
#define CLASS_2_4050AAA9560AD7EF_METHOD_2_92FA3247236CD875_OFFSET UNITYSDK_OFFSET(0xB9413D0)
#define CLASS_2_4050AAA9560AD7EF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB940CE0)
#define CLASS_2_4050AAA9560AD7EF_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB941320)
#define CLASS_2_4050AAA9560AD7EF_TICK_OFFSET UNITYSDK_OFFSET(0xB941370)
#define CLASS_2_4050AAA9560AD7EF__CTOR_OFFSET UNITYSDK_OFFSET(0xB940C90)

inline static constexpr unsigned int Class_2_4050AAA9560AD7EF_TypeDefinitionIndex = 58892;

class Class_2_4050AAA9560AD7EF : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::SwitchCharacterAnchor* OFKGLJOAMLD; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SwitchCharacterAnchor* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SwitchCharacterAnchor*))((::PBYTE)hIl2Cpp + CLASS_2_4050AAA9560AD7EF__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4050AAA9560AD7EF_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4050AAA9560AD7EF_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4050AAA9560AD7EF_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_4050AAA9560AD7EF_TICK_OFFSET))(this, a1);
	}

	static ::RPG::GameCore::SwitchCharacterAnchorFindTargetPosResult Method_2_92FA3247236CD875(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SwitchCharacterAnchor* a2, ::UnityEngine::Vector3& a3, ::UnityEngine::Quaternion& a4)
	{
		return ((::RPG::GameCore::SwitchCharacterAnchorFindTargetPosResult(*)(::RPG::GameCore::TaskContext*, ::RPG::GameCore::SwitchCharacterAnchor*, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + CLASS_2_4050AAA9560AD7EF_METHOD_2_92FA3247236CD875_OFFSET))(a1, a2, a3, a4);
	}

	::System::Boolean Method_2_5B9761C1A72C4D1A(::UnityEngine::Vector3& a1, ::UnityEngine::Quaternion& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + CLASS_2_4050AAA9560AD7EF_METHOD_2_5B9761C1A72C4D1A_OFFSET))(this, a1, a2);
	}
};
