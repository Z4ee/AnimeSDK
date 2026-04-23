#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_37D832480CB327E1;
class Class_3_E21F6DE9B7FA4D05;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PropMoveToV2; }
namespace RPG::GameCore { class PropMoveToV2TargetAnchor; }
namespace RPG::GameCore { class PropMoveToV2TargetBase; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_47D5B5E8314523CD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1185F610)
#define CLASS_2_47D5B5E8314523CD_METHOD_2_558A1EDC41C376D9_OFFSET UNITYSDK_OFFSET(0x11860130)
#define CLASS_2_47D5B5E8314523CD_METHOD_2_73C23613314BF1A1_OFFSET UNITYSDK_OFFSET(0x11860000)
#define CLASS_2_47D5B5E8314523CD_METHOD_2_BA1032CD417C9DC6_OFFSET UNITYSDK_OFFSET(0x1185FD40)
#define CLASS_2_47D5B5E8314523CD_METHOD_2_C706B1EC6D2E1C64_OFFSET UNITYSDK_OFFSET(0x1185FE90)
#define CLASS_2_47D5B5E8314523CD_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1185FE10)
#define CLASS_2_47D5B5E8314523CD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1185F810)
#define CLASS_2_47D5B5E8314523CD_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1185F6D0)
#define CLASS_2_47D5B5E8314523CD_TICK_OFFSET UNITYSDK_OFFSET(0x1185F7B0)
#define CLASS_2_47D5B5E8314523CD__CTOR_OFFSET UNITYSDK_OFFSET(0x1185F600)

inline static constexpr unsigned int Class_2_47D5B5E8314523CD_TypeDefinitionIndex = 49031;

class Class_2_47D5B5E8314523CD : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::GameEntity* Field_2_4; // 0x18
	::Class_2_37D832480CB327E1* Field_2_5; // 0x20
	::RPG::GameCore::PropMoveToV2* Field_2_1; // 0x28
	::RPG::GameCore::TaskContext* Field_2_0; // 0x30
	::Class_3_E21F6DE9B7FA4D05* Field_2_6; // 0x38
	::System::Boolean Field_2_2; // 0x40
	::System::Single Field_2_3; // 0x44

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PropMoveToV2* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropMoveToV2*))((::PBYTE)hIl2Cpp + CLASS_2_47D5B5E8314523CD__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_47D5B5E8314523CD_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_47D5B5E8314523CD_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_47D5B5E8314523CD_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_47D5B5E8314523CD_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_47D5B5E8314523CD_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_C706B1EC6D2E1C64()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_47D5B5E8314523CD_METHOD_2_C706B1EC6D2E1C64_OFFSET))(this);
	}

	::System::Void Method_2_73C23613314BF1A1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_47D5B5E8314523CD_METHOD_2_73C23613314BF1A1_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_BA1032CD417C9DC6(::RPG::GameCore::PropMoveToV2TargetBase* a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Quaternion& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::PropMoveToV2TargetBase*, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + CLASS_2_47D5B5E8314523CD_METHOD_2_BA1032CD417C9DC6_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_558A1EDC41C376D9(::RPG::GameCore::PropMoveToV2TargetAnchor* a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Quaternion& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::PropMoveToV2TargetAnchor*, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + CLASS_2_47D5B5E8314523CD_METHOD_2_558A1EDC41C376D9_OFFSET))(this, a1, a2, a3);
	}
};
