#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SwitchCharacterAnchor; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class Coroutine; }

#define CLASS_1_983D987E7505927D_DISPOSE_OFFSET UNITYSDK_OFFSET(0x189770B0)
#define CLASS_1_983D987E7505927D_GET_ISINSWITCHANCHOR_OFFSET UNITYSDK_OFFSET(0x18977B30)
#define CLASS_1_983D987E7505927D_METHOD_1_1F20DDB3D9CE5BBE_OFFSET UNITYSDK_OFFSET(0x18977560)
#define CLASS_1_983D987E7505927D_METHOD_1_5AFFA079DA8B20AA_OFFSET UNITYSDK_OFFSET(0x18977420)
#define CLASS_1_983D987E7505927D_METHOD_1_80FAF9C957495D70_OFFSET UNITYSDK_OFFSET(0x18977830)
#define CLASS_1_983D987E7505927D_METHOD_1_9EED3F6546675AD5_OFFSET UNITYSDK_OFFSET(0x18977250)
#define CLASS_1_983D987E7505927D_METHOD_1_B36A641820C55AB6_OFFSET UNITYSDK_OFFSET(0x18977600)
#define CLASS_1_983D987E7505927D_METHOD_1_BCB087DFB7399B96_OFFSET UNITYSDK_OFFSET(0x18977490)
#define CLASS_1_983D987E7505927D_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x18977200)
#define CLASS_1_983D987E7505927D_METHOD_1_E11AC65AA0DC2249_OFFSET UNITYSDK_OFFSET(0x18977A10)
#define CLASS_1_983D987E7505927D_SET_ISINSWITCHANCHOR_OFFSET UNITYSDK_OFFSET(0x18977B40)
#define CLASS_1_983D987E7505927D__CTOR_OFFSET UNITYSDK_OFFSET(0x18977B50)

inline static constexpr unsigned int Class_1_983D987E7505927D_TypeDefinitionIndex = 60876;

class Class_1_983D987E7505927D : public ::System::Object
{
public:
	::RPG::GameCore::TaskContext* PFFBIFCGPKB; // 0x10
	::RPG::GameCore::SwitchCharacterAnchor* FCLJLKHPALO; // 0x18
	::UnityEngine::Coroutine* EEBPKMCFHEJ; // 0x20
	::System::Boolean _IsInSwitchAnchor_k__BackingField; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_983D987E7505927D__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_983D987E7505927D_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_9EED3F6546675AD5(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SwitchCharacterAnchor* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SwitchCharacterAnchor*))((::PBYTE)hIl2Cpp + CLASS_1_983D987E7505927D_METHOD_1_9EED3F6546675AD5_OFFSET))(this, a1, a2);
	}

	::System::Collections::IEnumerator* Method_1_5AFFA079DA8B20AA()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_983D987E7505927D_METHOD_1_5AFFA079DA8B20AA_OFFSET))(this);
	}

	::System::Void Method_1_BCB087DFB7399B96(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_983D987E7505927D_METHOD_1_BCB087DFB7399B96_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_983D987E7505927D_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_1F20DDB3D9CE5BBE(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_983D987E7505927D_METHOD_1_1F20DDB3D9CE5BBE_OFFSET))(this, a1);
	}

	::System::Void Method_1_B36A641820C55AB6(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_1_983D987E7505927D_METHOD_1_B36A641820C55AB6_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_80FAF9C957495D70(::RPG::GameCore::GameEntity* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_1_983D987E7505927D_METHOD_1_80FAF9C957495D70_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_E11AC65AA0DC2249()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_983D987E7505927D_METHOD_1_E11AC65AA0DC2249_OFFSET))(this);
	}

	::System::Boolean get_IsInSwitchAnchor()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_983D987E7505927D_GET_ISINSWITCHANCHOR_OFFSET))(this);
	}

	::System::Void set_IsInSwitchAnchor(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_983D987E7505927D_SET_ISINSWITCHANCHOR_OFFSET))(this, a1);
	}
};
