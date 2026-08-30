#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_D640AF70A652FF6A;
namespace RPG::Client { class MonoEffect; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerWalkingEffect; }

#define CLASS_2_5B52AEB9BD9AEA55_DISPOSE_OFFSET UNITYSDK_OFFSET(0x163F30E0)
#define CLASS_2_5B52AEB9BD9AEA55_METHOD_2_2340068C22DFE332_OFFSET UNITYSDK_OFFSET(0x163F3DC0)
#define CLASS_2_5B52AEB9BD9AEA55_METHOD_2_3E90A56C35C519D8_OFFSET UNITYSDK_OFFSET(0x163F4590)
#define CLASS_2_5B52AEB9BD9AEA55_METHOD_2_626C719A884DEF9A_OFFSET UNITYSDK_OFFSET(0x163F3CF0)
#define CLASS_2_5B52AEB9BD9AEA55_METHOD_2_960032BA2E22793D_OFFSET UNITYSDK_OFFSET(0x163F3210)
#define CLASS_2_5B52AEB9BD9AEA55_METHOD_2_9F59C088ACADFAC2_OFFSET UNITYSDK_OFFSET(0x163F3130)
#define CLASS_2_5B52AEB9BD9AEA55_METHOD_2_B628A4F93A5E879C_OFFSET UNITYSDK_OFFSET(0x163F3F40)
#define CLASS_2_5B52AEB9BD9AEA55_METHOD_2_B7CCB99AAB7A4C8B_OFFSET UNITYSDK_OFFSET(0x163F3CA0)
#define CLASS_2_5B52AEB9BD9AEA55_METHOD_2_F4ADC37B63F4E9EF_OFFSET UNITYSDK_OFFSET(0x163F3D70)
#define CLASS_2_5B52AEB9BD9AEA55_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x163F2F80)
#define CLASS_2_5B52AEB9BD9AEA55_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x163F3030)
#define CLASS_2_5B52AEB9BD9AEA55_TICK_OFFSET UNITYSDK_OFFSET(0x163F3080)
#define CLASS_2_5B52AEB9BD9AEA55__CTOR_OFFSET UNITYSDK_OFFSET(0x163F2F70)

inline static constexpr unsigned int Class_2_5B52AEB9BD9AEA55_TypeDefinitionIndex = 56665;

class Class_2_5B52AEB9BD9AEA55 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::RPG::GameCore::TriggerWalkingEffect* OFKGLJOAMLD; // 0x20
	::Class_2_D640AF70A652FF6A* NNOOKIIAOHO; // 0x28
	::UnityEngine::Quaternion NMHAGNIJHFE; // 0x30
	::UnityEngine::Vector3 MPGKDFOPGKP; // 0x40

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerWalkingEffect* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerWalkingEffect*))((::PBYTE)hIl2Cpp + CLASS_2_5B52AEB9BD9AEA55__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5B52AEB9BD9AEA55_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5B52AEB9BD9AEA55_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_5B52AEB9BD9AEA55_TICK_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5B52AEB9BD9AEA55_DISPOSE_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_9F59C088ACADFAC2()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5B52AEB9BD9AEA55_METHOD_2_9F59C088ACADFAC2_OFFSET))(this);
	}

	::System::Void Method_2_960032BA2E22793D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5B52AEB9BD9AEA55_METHOD_2_960032BA2E22793D_OFFSET))(this);
	}

	::System::Void Method_2_626C719A884DEF9A(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_5B52AEB9BD9AEA55_METHOD_2_626C719A884DEF9A_OFFSET))(this, a1);
	}

	::System::Void Method_2_F4ADC37B63F4E9EF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5B52AEB9BD9AEA55_METHOD_2_F4ADC37B63F4E9EF_OFFSET))(this);
	}

	::System::Void Method_2_2340068C22DFE332()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5B52AEB9BD9AEA55_METHOD_2_2340068C22DFE332_OFFSET))(this);
	}

	::System::Void Method_2_B7CCB99AAB7A4C8B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5B52AEB9BD9AEA55_METHOD_2_B7CCB99AAB7A4C8B_OFFSET))(this);
	}

	::System::Void Method_2_B628A4F93A5E879C(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_5B52AEB9BD9AEA55_METHOD_2_B628A4F93A5E879C_OFFSET))(this, a1);
	}

	::System::Void Method_2_3E90A56C35C519D8(::RPG::Client::MonoEffect* a1, ::RPG::Client::TriggerEffectCallbackParams a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + CLASS_2_5B52AEB9BD9AEA55_METHOD_2_3E90A56C35C519D8_OFFSET))(this, a1, a2);
	}
};
