#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/RPG/GameCore/SwitchCharacterAnchorFindTargetPosResult.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class SwitchCharacterAnchor; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_A4A5B30665796854_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11DE7D90)
#define CLASS_2_A4A5B30665796854_METHOD_2_5362A3A054DBA0D2_OFFSET UNITYSDK_OFFSET(0x11DE8470)
#define CLASS_2_A4A5B30665796854_METHOD_2_5B9761C1A72C4D1A_OFFSET UNITYSDK_OFFSET(0x11DE8340)
#define CLASS_2_A4A5B30665796854_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11DE7DD0)
#define CLASS_2_A4A5B30665796854_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x11DE83C0)
#define CLASS_2_A4A5B30665796854_TICK_OFFSET UNITYSDK_OFFSET(0x11DE8410)
#define CLASS_2_A4A5B30665796854__CTOR_OFFSET UNITYSDK_OFFSET(0x11DE7D80)

inline static constexpr unsigned int Class_2_A4A5B30665796854_TypeDefinitionIndex = 54158;

class Class_2_A4A5B30665796854 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::SwitchCharacterAnchor* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SwitchCharacterAnchor* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SwitchCharacterAnchor*))((::PBYTE)hIl2Cpp + CLASS_2_A4A5B30665796854__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A4A5B30665796854_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A4A5B30665796854_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A4A5B30665796854_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_A4A5B30665796854_TICK_OFFSET))(this, a1);
	}

	static ::RPG::GameCore::SwitchCharacterAnchorFindTargetPosResult Method_2_5362A3A054DBA0D2(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SwitchCharacterAnchor* a2, ::UnityEngine::Vector3& a3, ::UnityEngine::Quaternion& a4)
	{
		return ((::RPG::GameCore::SwitchCharacterAnchorFindTargetPosResult(*)(::RPG::GameCore::TaskContext*, ::RPG::GameCore::SwitchCharacterAnchor*, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + CLASS_2_A4A5B30665796854_METHOD_2_5362A3A054DBA0D2_OFFSET))(a1, a2, a3, a4);
	}

	::System::Boolean Method_2_5B9761C1A72C4D1A(::UnityEngine::Vector3& a1, ::UnityEngine::Quaternion& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + CLASS_2_A4A5B30665796854_METHOD_2_5B9761C1A72C4D1A_OFFSET))(this, a1, a2);
	}
};
