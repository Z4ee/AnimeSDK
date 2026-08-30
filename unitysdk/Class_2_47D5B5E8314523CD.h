#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_37D832480CB327E1;
class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PropMoveToV2; }
namespace RPG::GameCore { class PropMoveToV2TargetAnchor; }
namespace RPG::GameCore { class PropMoveToV2TargetBase; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_47D5B5E8314523CD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17A270A0)
#define CLASS_2_47D5B5E8314523CD_METHOD_2_558A1EDC41C376D9_OFFSET UNITYSDK_OFFSET(0x17A27DB0)
#define CLASS_2_47D5B5E8314523CD_METHOD_2_588664A74454FDDD_OFFSET UNITYSDK_OFFSET(0x17A27910)
#define CLASS_2_47D5B5E8314523CD_METHOD_2_C706B1EC6D2E1C64_OFFSET UNITYSDK_OFFSET(0x17A27A70)
#define CLASS_2_47D5B5E8314523CD_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x17A279E0)
#define CLASS_2_47D5B5E8314523CD_METHOD_2_F69068FADEFBD596_OFFSET UNITYSDK_OFFSET(0x17A27C50)
#define CLASS_2_47D5B5E8314523CD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17A27350)
#define CLASS_2_47D5B5E8314523CD_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x17A271D0)
#define CLASS_2_47D5B5E8314523CD_TICK_OFFSET UNITYSDK_OFFSET(0x17A272F0)
#define CLASS_2_47D5B5E8314523CD__CTOR_OFFSET UNITYSDK_OFFSET(0x17A27090)

inline static constexpr unsigned int Class_2_47D5B5E8314523CD_TypeDefinitionIndex = 53433;

class Class_2_47D5B5E8314523CD : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::GameEntity* KCKEHDGBGGG; // 0x18
	::Class_2_37D832480CB327E1* HDIOLMOJFDN; // 0x20
	::Class_3_07C3C4D2990C49EE* KANMJJLKMMI; // 0x28
	::RPG::GameCore::PropMoveToV2* IGHAHBNLIJA; // 0x30
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x38
	::System::Single HBDJCFFDGDD; // 0x40
	::System::Boolean LFJHKGPGMKN; // 0x44

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

	::System::Void Method_2_F69068FADEFBD596(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_47D5B5E8314523CD_METHOD_2_F69068FADEFBD596_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_588664A74454FDDD(::RPG::GameCore::PropMoveToV2TargetBase* a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Quaternion& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::PropMoveToV2TargetBase*, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + CLASS_2_47D5B5E8314523CD_METHOD_2_588664A74454FDDD_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_558A1EDC41C376D9(::RPG::GameCore::PropMoveToV2TargetAnchor* a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Quaternion& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::PropMoveToV2TargetAnchor*, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + CLASS_2_47D5B5E8314523CD_METHOD_2_558A1EDC41C376D9_OFFSET))(this, a1, a2, a3);
	}
};
